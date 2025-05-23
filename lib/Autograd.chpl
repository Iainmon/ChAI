use NDArray;
use Remote;

use Env;

import IO;

import Utilities as util;

import Math;

use OrderedDict;


inline proc checkRank(te: shared TensorEssence(?eltType), param rank: int): bool {
    if var x = te : shared BaseTensorResource(eltType,rank)? then
        return true;
    else 
        return false;
}

proc getRank(te: shared TensorEssence(?eltType)): int {
    for param i in 1..6 do
        if checkRank(te,i) then return i;
    // Who would need an 11 tensor?
    halt("Unable to find rank for this staticTensor. Rank may be too high.");
}

proc forceRank(te: shared TensorEssence(?eltType),param rank: int): shared BaseTensorResource(eltType,rank) {
    return te: shared BaseTensorResource(eltType,rank);
    // if var ? then
    //     return tr!;
    // else
    //     halt("Unable to force this TensorEssence to rank " + rank : string + " .");
}

type GradOpSpec = dict(string,string);

class TensorEssence : serializable {
    type eltType = defaultEltType;
    proc runtimeRank: int {
        halt("Not implemented.");
        return -1;
    }

    iter children(): borrowed TensorEssence(eltType) {
        // halt("Not implemented.");
    }

    proc treeHeight(): int {
        import Math.max;
        // const childs = children();
        // if childs.domain.size == 0 then
        //     return 1;
        var mx = 0;
        for c in children() do
            mx = max(mx,c.treeHeight());
        return mx + 1;
    }

    proc eraseChildHistory() do halt("Not implemented.");

    proc opSpec() : GradOpSpec {
        halt("Not implemented.");
    }

    proc showGraph(indent: bool = false): string do halt("Not implemented.");
}


class BaseTensorResource : TensorEssence, serializable{
    param rank: int;
    var dataResource: shared Remote(ndarray(rank,eltType));
    var gradResource: shared Remote(ndarray(rank,eltType))?;
    // forwarding resource only to, access, device;

    proc init(type eltType, param rank: int) {
        super.init(eltType);
        this.rank = rank;
        this.dataResource = new shared Remote(ndarray(rank,eltType));
    }

    proc init(in dataResource: shared Remote(ndarray(?rank,?eltType)), in gradResource: shared Remote(ndarray(rank,eltType))? = nil) {
        super.init(eltType);
        this.rank = rank;
        this.dataResource = dataResource;
        this.gradResource = gradResource;
    }

    proc init(data: ndarray(?rank,?eltType), device: locale = Remote.defaultDevice) {
        on device var dataResource: shared Remote(ndarray(rank,eltType)) = data;
        this.init(dataResource,nil);
    }


    proc to(dest: locale) {
        dataResource.to(dest);
        if gradResource then gradResource!.to(dest);
    }

    proc device : locale do
        return dataResource.device;

    proc array ref : ndarray(rank,eltType) do
        return dataResource.ptr;
    
    proc grad ref : ndarray(rank,eltType) do
        return gradResource!.ptr;

    // Tensor resource interface
    proc forward() do halt("Forward function not defined for BaseTensorResource.");
    proc backward(grad: remote(ndarray(rank,eltType)), param alreadyPopulated = false) do halt("Backward function not defined for BaseTensorResource.");
    proc backward() where rank == 1 do halt("Backward function not defined for BaseTensorResource.");

    proc detach(copy: bool = true, keepGrad: bool = false): owned TensorResource(eltType,rank,baseValue) do
        halt("Not implemented.");

    override proc runtimeRank: int do
        return rank;

    proc eraseHistory(): owned BaseTensorResource(eltType,rank) {
        eraseChildHistory();
        return new TensorResource(dataResource,nil,new baseValue());
    }
}


class TensorResource : BaseTensorResource(?), serializable {
    type operationType;
    var operationCtx: operationType;

    proc init(type eltType, param rank: int, operationCtx: ?operationType) {
        super.init(eltType,rank);
        this.operationType = operationType;
        this.operationCtx = operationCtx;
    }

    proc init(in dataResource: shared Remote(ndarray(?rank,?eltType)),in gradResource: shared Remote(ndarray(rank,eltType))? =nil, operationCtx: ?operationType) {
        super.init(dataResource,gradResource);
        this.operationType = operationType;
        this.operationCtx = operationCtx;
    }

    proc init(in dataResource: shared Remote(ndarray(?rank,?eltType))) do
        this.init(dataResource,nil,new baseValue());

    // Overwriting history initializer
    proc init(bt: borrowed BaseTensorResource(?eltType,?rank), operationCtx: ?operationType) do
        this.init(shared.adopt(bt.dataResource.copy()),shared.adopt(bt.gradResource!.copy()),new baseValue());


    override proc detach(copy: bool = true, keepGrad: bool = false): owned TensorResource(eltType,rank,baseValue) {
        var dr: shared Remote(ndarray(rank,eltType))  = dataResource;
        var gr: shared Remote(ndarray(rank,eltType))? = if keepGrad then gradResource else nil;
        if copy {
            dr = shared.adopt(dr.copy());
            if gr != nil then 
                gr = shared.adopt(gr!.copy());
        }
        return new TensorResource(dr,gr,new baseValue());
    }

    override proc forward() {
        if operationType == baseValue then return;
        on device {
            const ctx = operationCtx;
            ref arrayAddr = array;
            arrayAddr = ctx.forward();
        }
    }

    // override proc backward(grad: Remote(ndarray(rank,eltType)), param alreadyPopulated: bool = false) {
    //     if operationData.type == baseValue then return;

    //     var childrenRefs = operationData.children;

    //     grad.to(device);
    //     on device {
    //         ref myGradData = gradResource.access().data;
    //         ref gArrRef = grad.localAccess();
    //         // const gArrRef = g;
    //         if !alreadyPopulated {
    //             ref gData = gArrRef.data;
    //             myGradData += gData; // This is likely to fail if there is a shape mismatch.
    //         }
    //         ref gArr = gradResource.localAccess();
    //         const childGrads = operationData.backward(gArr);
    //         for param i in 0..<childrenRefs.size do
    //             childrenRefs(i).grad = childGrads(i);
    //     }

    //     for param i in 0..<childrenRefs.size do
    //         childrenRefs(i).backward(childrenRefs(i).gradResource,alreadyPopulated = true);
    // }

    // override proc backward() where rank == 1 {
    //     if array.shape.size == 1 {
    //         on gradResource.device {
    //             gradResource.access().data = 1.0;
    //         }
    //         // var res = gradResource.copy();
    //         // on res.device {
    //         //     res.access() = new ndarray([1.0]);
    //         // }
    //         backward(gradResource,alreadyPopulated = true);
    //     } else {
    //         halt("Trying to default backpropagate tensor of higher shape than 1.");
    //     }
    // }

    override iter children(): borrowed TensorEssence(eltType) {
        // import Types;

        const childs = operationCtx.children;
        for param i in 0..<childs.size {
            if isSubtype(childs(i).type,shared TensorEssence(eltType)) then
                yield childs(i).borrow();
        }
    }

    override proc eraseChildHistory() {
        var childs = operationCtx.children;
        for param i in 0..<childs.size {
            if isSubtype(childs(i).type,shared TensorEssence(eltType)) {
                ref c = operationCtx.children(i);
                c = shared.adopt(childs(i).eraseHistory());
            }
        }
    }

    override proc opSpec() : GradOpSpec do
        return operationCtx.spec;

    override proc showGraph(indent: bool = false): string {
        var s: string;

        const os = opSpec();
        const opName = os["operation"];
        const opOptions = os.createWithout("operation");

        const sep = ", ";

        s += opName + "(";

        const options = for v in opOptions do " = ".join(v);
        s += sep.join(options);

        const childSpecs = for c in children() do c.showGraph();
        if childSpecs.size > 0 then s += sep.join(childSpecs);

        s += ")";
        return s;
    }
}


// Operations



record baseValue : serializable {
    proc forward() do halt("Unimplemented baseValue forward.");
    proc children do return (false,);
    proc spec : GradOpSpec do return new dict(("operation","Const"));
}


record reluOp : serializable {
    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward() do
        return input.array.relu();
}

record siluOp : serializable {
    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward() do
        return input.array.silu();
}

record mishOp : serializable {
    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward() do
        return input.array.mish();
}

record sigmoidOp : serializable {
    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward() do
        return input.array.sigmoid();
}

record tanhOp : serializable {
    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward() do
        return input.array.tanh();
}

record relu6Op : serializable {
    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward() do
        return input.array.relu6();
}

record seluOp : serializable {
    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward() do
        return input.array.selu();
}

record logsigmoidOp : serializable {
    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward() do
        return input.array.logsigmoid();
}

record tanhshrinkOp : serializable {
    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward() do
        return input.array.tanhshrink();
}

record softsignOp : serializable {
    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward() do
        return input.array.softsign();
}

record rreluOp : serializable {
    var input: shared BaseTensorResource(?);
    var lower: input.eltType;
    var upper: input.eltType;
    var training: bool;

    proc children do return (input,);

    proc forward() do
        return input.array.rrelu(lower, upper, training);
}

record hardswishOp : serializable {
    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward() do
        return input.array.hardswish();
}

record hardsigmoidOp : serializable {
    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward() do
        return input.array.hardsigmoid();
}

record hardShrinkOp : serializable {
    var input: shared BaseTensorResource(?);
    var alpha: input.eltType;

    proc children do return (input,);

    proc forward() do
        return input.array.hardShrink(alpha);
}

record thresholdOp : serializable {
    var input: shared BaseTensorResource(?);
    var threshold: input.eltType;
    var value: input.eltType;

    proc children do return (input,);

    proc forward() do
        return input.array.threshold(threshold, value);
}

record hardTanhOp : serializable {
    var input: shared BaseTensorResource(?);
    var minVal: input.eltType;
    var maxVal: input.eltType;

    proc children do return (input,);

    proc forward() do
        return input.array.hardTanh(minVal, maxVal);
}

record eluOp : serializable {
    var input: shared BaseTensorResource(?);
    var alpha: input.eltType;

    proc children do return (input,);

    proc forward() do
        return input.array.elu(alpha);
}

record softplusOp : serializable {
    var input: shared BaseTensorResource(?);
    var beta: input.eltType;
    var threshold: input.eltType;

    proc children do return (input,);

    proc forward() do
        return input.array.softplus(beta, threshold);
}

record celuOp : serializable {
    var input: shared BaseTensorResource(?);
    var alpha: input.eltType;

    proc children do return (input,);

    proc forward() do
        return input.array.celu(alpha);
}

record leakyreluOp : serializable {
    var input: shared BaseTensorResource(?);
    var negativeSlope: input.eltType;

    proc children do return (input,);

    proc forward() do
        return input.array.leakyrelu(negativeSlope);
}

record softshrinkOp : serializable {
    var input: shared BaseTensorResource(?);
    var alpha: input.eltType;

    proc children do return (input,);

    proc forward() do
        return input.array.softshrink(alpha);
}

record squareOp : serializable {
    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward() do
        return input.array.square();

    proc spec : GradOpSpec do return new dict(("operation","Square"));
}

record expOp : serializable {
    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward() {
        var output = new ndarray(input.array.domain,input.array.eltType);
        ref inDat = input.array.data;
        ref outDat = output.data;
        // @assertOnGpu
        forall i in outDat.domain.every() {
            outDat[i] = exp(inDat[i]);
        }
        return output;
    }

    proc spec : GradOpSpec do return new dict(("operation","Exp"));
}


record addOp : serializable {
    param rank: int;
    type eltType;
    var lhs: shared BaseTensorResource(eltType,rank);
    var rhs: shared BaseTensorResource(eltType,rank);

    proc children do return (lhs,rhs);

    // proc forward() do
    //     return new ndarray(lhs.data + rhs.data);
    proc forward(): ndarray(rank,eltType) {
        // var sum = new ndarray(rank,eltType);
        // ref a = lhs.array;
        // ref b = rhs.array;

        // const newDom = a._domain;
        // sum.reshapeDomain(a._domain);
        // ref sumData = sum.data;
        // ref aData = a.data;
        // ref bData = b.data;
        // // @assertOnGpu
        // forall i in newDom.every() do
        //     sumData[i] = aData[i] + bData[i];
        // // sumData = aData + bData;
        // return sum;
        return lhs.array + rhs.array;
    }

    proc backward(grad: ndarray(rank,eltType)): (ndarray(rank,eltType),ndarray(rank,eltType)) do
        return (grad,grad);

    proc spec : GradOpSpec do return new dict(("operation","Add"));
}

record subOp : serializable {
    var lhs: shared BaseTensorResource(?);
    var rhs: shared BaseTensorResource(?);

    proc children do return (lhs,rhs);

    proc forward() do
        return lhs.array - rhs.array;
    
    proc spec : GradOpSpec do return new dict(("operation","Sub"));
}

record divOp : serializable {
    var lhs: shared BaseTensorResource(?);
    var rhs: shared BaseTensorResource(?);

    proc children do return (lhs,rhs);

    proc forward() {
        return lhs.array / rhs.array;
    }
    
    proc spec : GradOpSpec do return new dict(("operation","Div"));
}

record multOp : serializable {
    param rank: int;
    type eltType;
    var lhs: shared BaseTensorResource(eltType,rank);
    var rhs: shared BaseTensorResource(eltType,rank);

    proc children do return (lhs,rhs);

    proc forward() do 
        return lhs.array * rhs.array;

    proc backward(grad: ndarray(rank,eltType)): (ndarray(rank,eltType),ndarray(rank,eltType)) {
        ref G = grad.data;
        ref A = lhs.data;
        ref B = rhs.data;
        const gDom = grad.domain;
        var AG: ndarray(rank,eltType);
        AG.reshapeDomain(gDom);
        var BG: ndarray(rank,eltType);
        BG.reshapeDomain(gDom);
        ref AGR = AG.data;
        ref BGR = BG.data;
        // @assertOnGpu
        forall i in gDom.every() {
            AGR[i] = B[i] * G[i];
            BGR[i] = A[i] * G[i];
        }
        return (AG,BG);
    }

    proc spec : GradOpSpec do return new dict(("operation","Mul"));
}

// record scalarMapOp : serializable {
//     param opName: string;
//     enum scalarMapOpSide { ScalarMapOpLeft, ScalarMapOpRight }
//     param opSide: scalarMapOpSide;

//     var input: shared BaseTensorResource(?);
//     var scalar: input.eltType;

//     proc init(param opName: string, scalar: ?scalarType, input: shared BaseTensorResource(?))
//             where isNumericType(scalarType) {
//         this.opSide = ScalarMapOpLeft;
//         this.input = input;
//         this.scalar = scalar;
//     }

//     proc forward() { compilerError("TODO!"); }

// }

record reshapeOp : serializable {
    param oldRank: int;
    param newRank: int;
    type eltType;
    var shape: newRank * int;
    var input: shared BaseTensorResource(eltType,oldRank);

    proc children do return (input,);


    proc forward(): ndarray(newRank,eltType) do
        return input.array.reshape((...shape));
    
    proc backward(grad: ndarray(newRank,eltType)): (ndarray(oldRank,eltType),) {
        const inputDom = input.array.domain;
        const g = grad.reshape((...inputDom.shape));
        return (g,);
    }

    proc spec : GradOpSpec do return new dict(("operation","Reshape"),("shape",shape:string));
}

record permuteOp : serializable {
    param rank: int;
    type eltType = defaultEltType;
    var permutation; // tuple of ints
    var input: shared BaseTensorResource(eltType,rank);

    proc children do return (input,);


    proc forward() do
        return input.array.permute((...permutation));
    
    proc backward(grad: ndarray(rank,eltType)): (ndarray(rank,eltType),) {
        const inversePermutation = util.argsort((...permutation)); // This should be computed only once, in the initializer. 
        return (grad.permute((...inversePermutation)),);
    } 

    proc spec : GradOpSpec do return new dict(("operation","Permute"),("axes",permutation:string));
}


record expandOp : serializable {
    param rank: int;
    type eltType = defaultEltType;
    var expandedShape: rank*int; // tuple of ints
    var input: shared BaseTensorResource(eltType,rank);

    proc children do return (input,);

    // proc init(param rank: int, type eltType, )

    proc forward() {
        return input.array.expand((...expandedShape));
    }
    
    proc backward(grad: ndarray(rank,eltType)): (ndarray(rank,eltType),) {
        const inputShape = input.array.shape;
        // var expandedAxesMask: rank*int;
        var offset = 0;
        var g = grad;
        for param i in 0..<rank {
            if expandedShape(i) != inputShape(i) {
                g = g.sum(i);
                offset += 1;
            }
        }
        return (g,);
        // const g_ = g.squeeze(rank);
        // return (g_,);
    } 

    proc spec : GradOpSpec do return new dict(("operation","Expand"),("shape",expandedShape:string));
}

record padOp : serializable {
    param rank: int;
    type eltType = defaultEltType;
    var arg: rank * (2 * int);
    var value: eltType;
    var input: shared BaseTensorResource(eltType,rank);

    proc children do return (input,);

    proc forward(): ndarray(rank,eltType) {
        return input.array.pad((...arg),value);
    }

    proc backward(grad: ndarray(rank,eltType)): (ndarray(rank,eltType),) {
        const shape = input.array.shape;
        var narg: rank * (2 * int);
        for param i in 0..<rank {
            const (p0,p1) = arg(i);
            const s = shape(i);
            narg(i) = (p0,s + p0);
        }
        const g = grad.shrink((...narg));
        return (g,);
    }

    proc spec : GradOpSpec do return new dict(("operation","Pad"),("shape",arg:string),("value",value:string));
}

record shrinkOp : serializable {
    param rank: int;
    type eltType = defaultEltType;
    var arg: rank * (2 * int);
    var input: shared BaseTensorResource(eltType,rank);

    proc children do return (input,);

    proc forward(): ndarray(rank,eltType) {
        return input.array.shrink((...arg));
    }

    proc backward(grad: ndarray(rank,eltType)): (ndarray(rank,eltType),) {
        const shape = input.array.shape;
        var narg: rank * (2 * int);
        for param i in 0..<rank {
            const (p0,p1) = arg(i);
            const s = shape(i);
            narg(i) = (p0,s - p1);
        }
        const g = grad.pad((...narg));
        return (g,);
    }

    proc spec : GradOpSpec do return new dict(("operation","Shrink"),("shape",arg:string));
}

record sliceOp : serializable {
    param rank: int;
    type eltType = defaultEltType;
    var dom: domain(rank,int);
    var input: shared BaseTensorResource(eltType,rank);

    proc children do return (input,);

    proc forward(): ndarray(rank,eltType) {
        return new ndarray(input.array[dom]);
    }

    proc backward(grad: ndarray(rank,eltType)): (ndarray(rank,eltType),) {
        var g = new ndarray(input.array.domain,eltType);
        g.data[dom] = grad.data;
        return (g,);
    }

    proc spec : GradOpSpec do return new dict(("operation","Slice"),("domain",dom:string));
}

record layerSliceOp : serializable {
    param rank: int;
    type eltType = defaultEltType;
    var base: shared BaseTensorResource(eltType,rank);
    var mask: shared BaseTensorResource(eltType,rank);
    var maskDomain: domain(rank,int);

    proc children do return (base,mask);

    proc forward(): ndarray(rank,eltType) {
        var layered = new ndarray(base.array);
        ref maskData = mask.array.data;
        layered.data[maskDomain] = maskData[maskDomain];
        return layered;
    }

    proc backward(grad: ndarray(rank,eltType)): (ndarray(rank,eltType),ndarray(rank,eltType)) {
        const zero = 0:eltType;
        var gBase = new ndarray(grad);
        gBase.data[maskDomain] = zero;
        var gMask = new ndarray(mask.array.domain,eltType);
        gMask.data[maskDomain] = grad.data[maskDomain];
        return (gBase,gMask);
    }

    proc spec : GradOpSpec do return new dict(("operation","LayerSlice"),("maskDomain",maskDomain:string));
}

record sumOp : serializable {
    param rank: int;
    type eltType = defaultEltType;
    param reduceRank: int;
    var axes: reduceRank * int;
    var input: shared BaseTensorResource(eltType,rank);
    param keepDim: bool = false;

    proc children do return (input,);

    // proc init(param rank: int, type eltType, )

    proc newRank param : int do
        return rank - reduceRank; 

    proc outRank param : int do
        if keepDim then
            return rank;
        else
            if newRank == 0 then
                return 1;
            else
                return newRank;

    proc forward() {
        if keepDim then
            return input.array.sum((...axes));
        else
            if outRank == 0 then
                if rank == 1 then
                    return input.array.sum(0);
                else
                    return input.array.sum((...axes)).squeeze(1);
            else
                return input.array.sum((...axes)).squeeze(outRank);
    }
    proc backward(grad: ndarray(outRank,eltType)): (ndarray(rank,eltType),) {
        const inputShape: rank * int = input.array.data.shape;
        var unsqueezeShape: rank * int;
        for param i in 0..<rank {
            var found = false;
            for param j in 0..<reduceRank {
                if i == axes(j) {
                    found = true;
                }
            }
            if found {
                unsqueezeShape(i) = 1;
            } else {
                unsqueezeShape(i) = inputShape(i);
            }
        }
        const unsqueezeDom = util.domainFromShape((...unsqueezeShape));
        var g: ndarray(rank,eltType) = grad.reshape((...unsqueezeShape));
        g = g.expand((...inputShape));
        return (g,);
        // var oneDims: rank * int;
        // for param i in 0..<rank {
        //     // var found = false;
        //     // for param j in 0..<shape
        //     oneDims(i) = 1;

        // }
        // var g = grad.reshape((...oneDims));
        // writeln("hello", grad);
        // writeln("hello1",g);
        // var g_ = g.expand((...input.array.shape));
        // writeln("hello3 ", g_);

        // return (g_,);
    }
    // proc backward(grad: ndarray(rank - newRank,eltType)): (ndarray(rank,eltType),) {
    //     return (grad.reshape(input.domain),);
    // } 

    proc spec : GradOpSpec do return new dict(("operation","Sum"),("axes",axes:string));

}

record meanOp : serializable {
    param rank: int;
    type eltType = defaultEltType;
    param reduceRank: int;
    var axes: reduceRank * int;
    var input: shared BaseTensorResource(eltType,rank);
    param keepDim: bool = false;

    proc children do return (input,);

    proc newRank param : int do
        return rank - reduceRank;

    proc outRank param : int do
        if keepDim then
            return rank;
        else
            if newRank == 0 then
                return 1;
            else
                return newRank;

    proc forward() {
        if keepDim then
            return input.array.mean((...axes));
        else
            if outRank == 0 then
                if rank == 1 then
                    return input.array.mean(0);
                else
                    return input.array.mean((...axes)).squeeze(1);
            else
                return input.array.mean((...axes)).squeeze(outRank);
    }

    proc spec : GradOpSpec do return new dict(("operation","Sum"),("axes",axes:string));

}

record maxOp : serializable {
    param rank: int;
    type eltType = defaultEltType;
    param maxRank: int;
    var axes: maxRank * int;
    var input: shared BaseTensorResource(eltType,rank);

    proc children do return (input,);

    proc forward() {
        if rank - maxRank == 0 {
            return input.array.max();
        } else {
            return input.array.max((...axes)).squeeze(rank - maxRank);
        }
    }

    proc backward(grad): (ndarray(rank,eltType),) {
        return input.array;
    }
    
    proc spec : GradOpSpec do return new dict(("operation","Max"),("axes",axes:string));

}

record matVecMulOp : serializable {
    var mat: shared BaseTensorResource(?);
    var vec: shared BaseTensorResource(mat.eltType,?);

    proc children do return (mat,vec);

    proc forward() {
        writeln("a shape: ", mat.array.shape);
        writeln("b shape: ", vec.array.shape);
        writeln("a sum: ", mat.array.sum());
        writeln("b sum: ", vec.array.sum());
        return ndarray.matmul(mat.array,vec.array);
        // return ndarray.matvecmul(mat.array,vec.array);
    }

    proc spec : GradOpSpec do return new dict(("operation","MatVecMul"));
}

record matMulOp : serializable {
    var a: shared BaseTensorResource(?);
    var b: shared BaseTensorResource(a.eltType,?);

    proc outRank param : int do
        return ndarray.mmOutputRank(a.array.rank,b.array.rank);

    proc children do return (a,b);
    proc forward(): ndarray(outRank,a.eltType) do
        return ndarray.matmul(a.array,b.array);
    
    proc spec : GradOpSpec do return new dict(("operation","MatMul"));
}

// https://www.adityaagrawal.net/blog/deep_learning/bprop_strided_conv
record conv2DOp : serializable {
    type eltType = defaultEltType;
    var features: shared BaseTensorResource(eltType,3);
    var kernel: shared BaseTensorResource(eltType,4);
    var stride: int;
    var padding: int;

    proc children do return (features,kernel);

    proc forward(): ndarray(3,eltType) {
        return ndarray.convolve(features.array,kernel.array,stride,padding);
        // writeln((here,features.device,kernel.device));
        // var output: ndarray(3,eltType);
        // on features.device {
        //     const fet = features.array;
        //     const ker = kernel.array;
        //     const conv = ndarray.convolve(fet,ker,stride);
        //     output.reshapeDomain(conv.domain);
        //     ref outData = output.data;
        //     outData = conv.data;
        // }
        // return output;
    }


    proc backward(grad: ndarray(3,eltType)): (ndarray(3,eltType),ndarray(4,eltType)) {
        const (channels,inHeight,inWidth) = features.array.domain.shape;
        const (filters,outHeight,outWidth) = grad.domain.shape;
        const (_filters,_channels,kerHeight,kerWidth) = kernel.array.domain.shape;

        const strideDil = stride - 1;
        const dialGrad = grad.dilate(strideDil);

        const fet: ndarray(4,defaultEltType) = features.array.reshape(channels,1,inHeight,inWidth)
                                  .expand(channels,filters,inHeight,inWidth);

        // const kerGrad = ndarray.convolve(dialGrad,fet,stride=1);
        var kerGrad: ndarray(4,defaultEltType) = new ndarray(kernel.array.domain,eltType);
        for f in 0..<filters {
            const gradSl: ndarray(2,defaultEltType) = grad.slice(f,..,..);
            const fets = features.array;
            const gslice = gradSl.dilate(strideDil)
                                 .reshape(1,1,outHeight,outWidth)
                                 .expand(1,channels,outHeight,outWidth);
            const filterGrad: ndarray(3,defaultEltType) = ndarray.convolve(fets,gslice,stride=stride, 0);

            // foreach (c,h,w) in {0..<channels,0..<kerHeight,0..<kerWidth} with (ref kerGrad) {
            //     kerGrad.data[f,c,h,w] = filterGrad.data[c,h,w];
            // }
            kerGrad.data[f,..,..,..] = filterGrad.data[..,..,..];
        }
        const rotKernel = kernel.array.kernelRot();
                                // .permute(0,1,2,3);
        // const dilHeight = ((outHeight - 1) * strideDil) + outHeight;
        // const dilWidth = ((outWidth - 1) * strideDil) + outWidth;

        // const padH: int = ((((inHeight - 1)*stride - kerHeight) - dilHeight - 1) / 2); // (kerHeight - 1);
        // const padW: int = ((((inWidth - 1)*stride - kerWidth) - dilWidth - 1) / 2);// (kerWidth - 1);
        // writeln((inHeight,kerHeight,outHeight,dilHeight,padH));

        const padH: int = (kerHeight - 1);
        const padW: int = (kerWidth - 1);
        

        const kernelRot = kernel.array.kernelRot();

        var fetGrad: ndarray(3,defaultEltType) = new ndarray(features.array.domain,eltType); // ndarray.convolve(paddedDilGrad,rotKernel,stride=1);
        for f in 0..<filters {

            // This can really be optimized.
            const rotKernel = kernelRot.slice(f,..,..,..)
                                        .reshape(channels,1,kerHeight,kerWidth)
                                        .expand(channels,channels,kerHeight,kerWidth);
            const gslice = grad.slice(f,..,..)
                                 .dilate(strideDil)
                                 .reshape(1,outHeight,outWidth)
                                 .expand(channels,outHeight,outWidth)
                                 .pad((0,0),(padH,padH),(padW,padW));

            const imGrad = ndarray.convolve(gslice,rotKernel,stride=1,0);
            fetGrad.data += imGrad.data;
        }


       if fetGrad.shape != features.array.shape {
            writeln(fetGrad);
            util.err(fetGrad.shape,features.array.shape);
        }


        return (fetGrad,kerGrad);
    }

    proc spec : GradOpSpec do return new dict(("operation","Conv2D"),("stride",stride:string),("padding",padding:string));
}


record negOp : serializable {
    param rank: int;
    type eltType;

    var input: shared BaseTensorResource(eltType, rank);

    proc children do return (input, );

    proc forward(): ndarray(rank, eltType) {
        return new ndarray(eltType, input.array.domain, -1);
    }

    proc spec : GradOpSpec do return new dict(("operation", "-"));
}


record nllLossOp : serializable {
    var input: shared BaseTensorResource(?);
    var target: shared BaseTensorResource(?);
    var weight: shared BaseTensorResource(?);
    var ignoreIndex: int;
    var reduction: string;
    
    proc children do return (input,target,weight);

    proc forward() do
        return ndarray.nllLoss(input.array,target.array,weight.array,ignoreIndex,reduction);
    
    proc spec : GradOpSpec do return new dict(("operation", "nllLoss"));
}


record batchNormOp : serializable {
    type eltType = defaultEltType;
    var features: shared BaseTensorResource(?); // what to put here?
    var weight: shared BaseTensorResource(eltType, 1);
    var bias: shared BaseTensorResource(eltType, 1);
    var movingAvg: shared BaseTensorResource(eltType, 1);
    var movingVar: shared BaseTensorResource(eltType, 1);
    var eps: defaultEltType;
    var momentum: defaultEltType;
    var train: bool;
    var n: int;

    proc children do return (features, weight, bias, movingAvg, movingVar, train);

    proc forward() {
        if train {
            return ndarray.batchNormTrain(features.array, weight.array, bias.array, movingAvg.array, movingVar.array, eps, momentum, n);
        } else {
            return ndarray.batchNorm(features.array, weight.array, bias.array, movingAvg.array, movingVar.array, eps);
        }
    }

    proc spec : GradOpSpec do return new dict(("operation","BatchNorm"));
}

record dropoutOp : serializable {
    param rank: int;
    type eltType;

    var input: shared  BaseTensorResource(?);

    proc children do return (input,);

    proc forward(): ndarray(rank, eltType) {
        return input.array;
    }
}


record softmaxOp : serializable {
    param rank: int;
    type eltType;

    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward(): ndarray(rank, eltType) {
        return input.array;
    }
}


record softminOp : serializable {
    param rank: int;
    type eltType;

    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward(): ndarray(rank, eltType) {
        return input.array;
    }
}