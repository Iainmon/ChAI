// watch -d -n 0.1 nvidia-smi

use NDArray;
use Remote;

import Utilities as util;

import Math.exp;


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
    halt("Unable to find rank for this tensor. Rank may be too high.");
}

proc forceRank(te: shared TensorEssence(?eltType),param rank: int): shared BaseTensorResource(eltType,rank) {
    return te: shared BaseTensorResource(eltType,rank);
    // if var ? then
    //     return tr!;
    // else
    //     halt("Unable to force this TensorEssence to rank " + rank : string + " .");
}

class TensorEssence : serializable {
    type eltType = real;
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
}

class ForgetfulTensor : TensorEssence {
    param rank: int; 
    
}

class BaseTensorResource : TensorEssence, serializable{
    param rank: int;
    // type eltType = real(64);
    var dataResource: ndarray(rank,eltType);
    var gradResource: ndarray(rank,eltType);
    // forwarding resource only to, access, device;

    proc to(device_: locale) {
    }

    proc device : locale {
        return this.locale;
    }

    // Tensor resource interface
    proc forward() do halt("Forward function not defined for BaseTensorResource.");
    proc backward(grad: remote(ndarray(rank,eltType)), param alreadyPopulated = false) do halt("Backward function not defined for BaseTensorResource.");
    proc backward() where rank == 1 do halt("Backward function not defined for BaseTensorResource.");

    proc array ref : ndarray(rank,eltType) do
        return dataResource;
    proc data ref : [] eltType do
        return dataResource.data;
    proc grad ref : ndarray(rank,eltType) do
        return gradResource;
    proc gradData ref : [] eltType do
        return gradResource.data;
    
    override proc runtimeRank: int do
        return rank;
}


class TensorResource : BaseTensorResource(?), serializable {
    type operation;

    var operationData: operation;

    proc init(param rank: int, type eltType, type operation) {
        super.init(eltType,rank);
        this.operation = operation;
    }

    proc init(param rank: int, type eltType, operationData: ?operation) {
        super.init(eltType,rank);
        this.operation = operation;
        this.operationData = operationData;
    }

    proc init(dataRes: ndarray(?rank,?eltType), operationData: ?operation, device_: locale = defaultDevice) {
        var gradRes = new ndarray(rank,eltType);
        super.init(eltType,rank,dataRes,gradRes);
        this.operation = operation;
        this.operationData = operationData;
    }

    proc init(tr: shared BaseTensorResource(?eltType,?rank),param forget: bool) where forget == true {
        super.init(eltType,rank,tr.dataResource,new ndarray(rank,eltType));
        // super.rank = rank;
        // super.dataResource = tr.dataResource;
        // super.gradResource = new remote(ndarray(rank,eltType));
        this.operation = baseValue;
        this.operationData = new baseValue();
    }

    // proc init(param rank: int, type eltType, operationData: ?operation, device: locale) {
    //     var res = new remote(ndarray(rank,eltType),device);
    //     this.init(res,operationData,device);
    //     init this;
    //     this.forward();
    // }

    // proc init(data: ndarray(?rank,?eltType),operationData: ?operation, device_: locale = defaultDevice) {
    //     // var res = data.toRemote();
    //     // res.to(device_);
    //     this.init(data,operationData,device_);
    // }

    override proc forward() {
        if operationData.type != baseValue {

            // ref data = dataResource.access().data;
            // data = operationData.forward();
            dataResource = operationData.forward();
            param requiresGrad = false;
            if requiresGrad {
                if gradResource.access().data.size == 0 {
                    gradResource.access().reshapeDomain(dataResource.access().domain);
                }
            }

        }
    }

    override proc backward(grad: remote(ndarray(rank,eltType)), param alreadyPopulated: bool = false) {
        if operationData.type == baseValue then return;

        var childrenRefs = operationData.children;

        grad.to(device);
        on device {
            ref myGradData = gradResource.access().data;
            ref gArrRef = grad.localAccess();
            // const gArrRef = g;
            if !alreadyPopulated {
                ref gData = gArrRef.data;
                myGradData += gData; // This is likely to fail if there is a shape mismatch.
            }
            ref gArr = gradResource.localAccess();
            const childGrads = operationData.backward(gArr);
            for param i in 0..<childrenRefs.size do
                childrenRefs(i).grad = childGrads(i);
        }

        for param i in 0..<childrenRefs.size do
            childrenRefs(i).backward(childrenRefs(i).gradResource,alreadyPopulated = true);
    }

    override proc backward() where rank == 1 {
        if array.shape.size == 1 {
            on gradResource.device {
                gradResource.access().data = 1.0;
            }
            // var res = gradResource.copy();
            // on res.device {
            //     res.access() = new ndarray([1.0]);
            // }
            backward(gradResource,alreadyPopulated = true);
        } else {
            halt("Trying to default backpropagate tensor of higher shape than 1.");
        }
    }

    override iter children(): borrowed TensorEssence(eltType) {
        // import Types;

        const childs = operationData.children;
        for param i in 0..<childs.size {
            if isSubtype(childs(i).type,shared TensorEssence(eltType)) then
                yield childs(i).borrow();
        }
    }

}




// Operations

record baseValue : serializable {
    proc forward() do halt("Unimplemented baseValue forward.");
    proc children do return (false,);
}


record reluOp : serializable {
    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward() {
        return input.array.relu();
    }
    inline proc _relu(x) do
        return ((0.0 < x):input.eltType) * x;
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
        var sum = new ndarray(rank,eltType);
        ref a = lhs.array;
        ref b = rhs.array;

        const newDom = a._domain;
        sum.reshapeDomain(a._domain);
        ref sumData = sum.data;
        ref aData = a.data;
        ref bData = b.data;
        // @assertOnGpu
        forall i in newDom.every() do
            sumData[i] = aData[i] + bData[i];
        // sumData = aData + bData;
        return sum;
    }

    proc backward(grad: ndarray(rank,eltType)): (ndarray(rank,eltType),ndarray(rank,eltType)) do
        return (grad,grad);
}



record subOp : serializable {
    var lhs: shared BaseTensorResource(?);
    var rhs: shared BaseTensorResource(?);

    proc children do return (lhs,rhs);

    proc forward() do
        return lhs.array - rhs.array;
    
}

record divOp : serializable {
    var lhs: shared BaseTensorResource(?);
    var rhs: shared BaseTensorResource(?);

    proc children do return (lhs,rhs);

    proc forward() {
        return lhs.array / rhs.array;
    }
    
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
}


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
}

record permuteOp : serializable {
    param rank: int;
    type eltType = real;
    var permutation; // tuple of ints
    var input: shared BaseTensorResource(eltType,rank);

    proc children do return (input,);


    proc forward() do
        return input.array.permute((...permutation));
    
    proc backward(grad: ndarray(rank,eltType)): (ndarray(rank,eltType),) {
        const inversePermutation = util.argsort((...permutation)); // This should be computed only once, in the initializer. 
        return (grad.permute((...inversePermutation)),);
    } 
}


record expandOp : serializable {
    param rank: int;
    type eltType = real;
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


}

record padOp : serializable {
    param rank: int;
    type eltType = real;
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

}

record shrinkOp : serializable {
    param rank: int;
    type eltType = real;
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

}

record sliceOp : serializable {
    param rank: int;
    type eltType = real;
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

}

record layerSliceOp : serializable {
    param rank: int;
    type eltType = real;
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

}

record sumOp : serializable {
    param rank: int;
    type eltType = real;
    param sumRank: int;
    var axes: sumRank * int; // tuple of ints
    var input: shared BaseTensorResource(eltType,rank);

    proc children do return (input,);

    // proc init(param rank: int, type eltType, )

    proc outRank param : int {
        if rank - sumRank == 0 {
            if rank == 1 {
                return rank;
            }
            return 1;
        }
        return rank - sumRank;
    }

    proc forward() {
        param newDim = rank - sumRank;
        if newDim == 0 {
            if rank == 1 {
                return input.array.sum(0);
            }
            return input.array.sum((...axes)).squeeze(1);
        }
        return input.array.sum((...axes)).squeeze(newDim);
    }
    proc backward(grad: ndarray(outRank,eltType)): (ndarray(rank,eltType),) {
        const inputShape: rank * int = input.array.data.shape;
        var unsqueezeShape: rank * int;
        for param i in 0..<rank {
            var found = false;
            for param j in 0..<sumRank {
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


}

record maxOp : serializable {
    param rank: int;
    type eltType = real;
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
    

}

// https://www.adityaagrawal.net/blog/deep_learning/bprop_strided_conv
record conv2DOp : serializable {
    type eltType = real;
    var features: shared BaseTensorResource(eltType,3);
    var kernel: shared BaseTensorResource(eltType,4);
    var stride: int;

    proc children do return (features,kernel);

    proc forward(): ndarray(3,eltType) {
        return ndarray.convolve(features.array,kernel.array,stride);
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

        const fet: ndarray(4,real) = features.array.reshape(channels,1,inHeight,inWidth)
                                  .expand(channels,filters,inHeight,inWidth);

        // const kerGrad = ndarray.convolve(dialGrad,fet,stride=1);
        var kerGrad: ndarray(4,real) = new ndarray(kernel.array.domain,eltType);
        for f in 0..<filters {
            const gradSl: ndarray(2,real) = grad.slice(f,..,..);
            const fets = features.array;
            const gslice = gradSl.dilate(strideDil)
                                 .reshape(1,1,outHeight,outWidth)
                                 .expand(1,channels,outHeight,outWidth);
            const filterGrad: ndarray(3,real) = ndarray.convolve(fets,gslice,stride=stride);

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

        var fetGrad: ndarray(3,real) = new ndarray(features.array.domain,eltType); // ndarray.convolve(paddedDilGrad,rotKernel,stride=1);
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

            const imGrad = ndarray.convolve(gslice,rotKernel,stride=1);
            fetGrad.data += imGrad.data;
        }


       if fetGrad.shape != features.array.shape {
            writeln(fetGrad);
            util.err(fetGrad.shape,features.array.shape);
        }


        return (fetGrad,kerGrad);
    }

}

