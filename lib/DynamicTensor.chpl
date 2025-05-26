use NDArray;
use Remote;
use Autograd;
import Autograd as ag;
import StaticTensor as tn;
use StaticTensor;

import Utilities as util;
use Utilities.Standard;

use Env;

use List only list;

import LoadNumpy;

import Bridge;

param defaultDetachedMode = true;

type Tensor = dynamicTensor(?);

record dynamicTensor : serializable {
    type eltType = defaultEltType;

    var meta: shared TensorEssence(eltType);

    var runtimeRank: int = -1;

    proc init(type eltType) {
        this.eltType = eltType;
        this.meta = new shared TensorEssence(eltType);
        halt("Degenerate initialization of dynamicTensor.");
    }

    proc init(type eltType, in meta: shared TensorEssence(eltType)) {
        this.eltType = eltType;
        this.meta = meta;
        this.runtimeRank = meta.runtimeRank;
    }

    proc init(in meta: shared TensorEssence(?eltType)) {
        this.eltType = eltType;
        this.meta = meta;
        this.runtimeRank = meta.runtimeRank;
    }

    proc init(t: staticTensor(?rank,?eltType), detached: bool = dynamicTensor.detachMode()) {
        this.eltType = eltType;
        if detached {
            var u = t.detach();
            this.meta = u.meta;
            this.runtimeRank = u.meta.runtimeRank;
        } else {
            this.meta = t.meta;
            this.runtimeRank = t.meta.runtimeRank;
        }
    }

    proc init(a: ndarray(?rank,?eltType)) do
        this.init(new staticTensor(a));
    
    proc init(arr: [] ?eltType) do
        this.init(new staticTensor(arr));

    // proc init(type eltType t: staticTensor(?rank,?eltType)) {
    //     this.eltType = eltType;
    //     this.meta = t.meta;
    // }

    // todo: proc this(...) // slicing.

    proc this(args...) do
        return this.slice((...args));

    proc tensorize(param rank: int) : staticTensor(rank,eltType) {
        compilerWarning("Tensorize function depracated");
        if rank != runtimeRank then
            halt("Cannot cast this dynamicTensor of rank " + runtimeRank: string + " to dynamicTensor of rank " + rank : string + ".");
        return forceRank(rank);
    }

    proc resource(param rank: int): shared BaseTensorResource(eltType,rank) {
        if runtimeRank != rank then 
            halt("Given rank " + rank : string + " does not match this dynamicTensor of rank " + runtimeRank : string);
        return forceRankMeta(rank);
    }

    inline proc forceRankMeta(param rank: int): shared BaseTensorResource(eltType,rank) {
        compilerWarning("forceRankMeta is deprecated? maybe not.");
        return meta : shared BaseTensorResource(eltType,rank);
    }

    inline proc forceRank(param rank: int): staticTensor(rank,eltType) {
        if rank != runtimeRank then
            halt("Cannot cast this dynamicTensor of rank " + runtimeRank: string + " to dynamicTensor of rank " + rank : string + ".");
        return new staticTensor(meta : shared BaseTensorResource(eltType,rank));
        // return new staticTensor(this.forceRankMeta(rank));
    }

    proc hardCheckRank(param rank: int): bool {
        if var myMeta = meta : shared BaseTensorResource(eltType,rank)? then return true;
        return false;
    }

    proc checkRank(param rank: int): bool {
        return rank == runtimeRank;
    }

    proc to(device: locale) {
        for param rank in 1..maxRank {
            if checkRank(rank) {
                this.forceRank(rank).to(device);
                return this;
            }
        }
        halt("Unable to find my own rank.");
        return this;
    }

    proc device: locale {
        for param rank in 1..maxRank {
            if checkRank(rank) {
                return this.forceRank(rank).device;
            }
        }
        halt("Unable to find my own rank.");
        return this;
    }

    inline proc ref rankedArray(param rank: int) ref : ndarray(rank,eltType) do
        return (this.meta.borrow() : borrowed BaseTensorResource(eltType, rank)).array;

    inline proc rankedArray(param rank: int): ndarray(rank,eltType) do
        return (this.meta.borrow() : borrowed BaseTensorResource(eltType, rank)).array;

    inline proc ref rankedGradArray(param rank: int) ref : ndarray(rank,eltType) do
        return (this.meta.borrow() : borrowed BaseTensorResource(eltType, rank)).grad;

    inline proc rankedGradArray(param rank: int): ndarray(rank,eltType) do
        return (this.meta.borrow() : borrowed BaseTensorResource(eltType, rank)).grad;

    inline proc ref rankedData(param rank: int) ref : [] eltType do
        return (this.meta.borrow() : borrowed BaseTensorResource(eltType, rank)).array.data;

    inline proc rankedData(param rank: int): [] eltType do
        return (this.meta.borrow() : borrowed BaseTensorResource(eltType, rank)).array.data;


    proc toNDArray(param rank: int) : ndarray(rank,eltType) {
        var tt = this.forceRank(rank);
        const prevDev = tt.device;
        tt.to(here);
        const nda: ndarray(rank,eltType) = tt.array;
        tt.to(prevDev);
        return nda;
    }

    proc toArray(param rank: int) : [] eltType {
        const data = toNDArray(rank).data;
        return data;
    }

    proc detach(): dynamicTensor(eltType) {
        for param rank in 1..maxRank do
            if checkRank(rank) then
                return tensorize(rank).detach().eraseRank();
        halt("Could not identify rank for this: ", this);
    }
}

operator :(in t: dynamicTensor(?eltType), type toType): dynamicTensor(toType)
        where isNumericType(toType) {
    if eltType == toType then return t;
    for param rank in 1..maxRank do
        if t.checkRank(rank) then
            return (t.forceRank(rank) : toType).eraseRank();
    halt("Could not identify rank for this: ", t);
}

operator :(in t: dynamicTensor(?eltType), type toType: ndarray(?rank,?toEltType)): ndarray(rank,toEltType)
        where isNumericType(eltType) && isNumericType(toEltType) {
    if eltType == toEltType then 
        return t.toNDArray(rank);
    else
        return t.toNDArray(rank) : toEltType;
}

operator :(in t: dynamicTensor(?eltType), type btType: Bridge.tensorHandle(eltType)): Bridge.tensorHandle(eltType) {
    for param rank in 1..maxRank do
        if t.checkRank(rank) then
            return t.forceRank(rank).array : btType;
    halt("Could not identify rank for this: ", t);
}

operator :(bt: Bridge.tensorHandle(real(32)), type tType: dynamicTensor(?eltType)): dynamicTensor(eltType) {
    for param rank in 1..maxRank do
        if bt.dim == rank then
            return new dynamicTensor(bt : ndarray(rank,eltType));
    halt("Could not identify rank for this: ", tType:string);
}

// proc type dynamicTensor.fromBridgeTensor(handle: Bridge.tensorHandle(defaultEltType)): dynamicTensor(defaultEltType) {
//     for param rank in 1..maxRank do
//         if bt.dim == rank then
//             return 
// }

proc type dynamicTensor.detachMode() param : bool {
    return defaultDetachedMode;
}

proc type dynamicTensor.detachMode(detachMode: bool) {
    // defaultDetachedMode = detachMode;
}

inline proc ndarray.toTensor(): dynamicTensor(eltType) do
    return new dynamicTensor(this);

proc staticTensor.eraseRank(detach: bool = dynamicTensor.detachMode()): dynamicTensor(eltType) do
    return new dynamicTensor(this,detach);

operator :(t: staticTensor(?rank,?eltType), type T: dynamicTensor(eltType)): dynamicTensor(eltType) do
    return t.eraseRank();


proc dynamicTensor.shapeArray(): [] int {
    for param rank in 1..maxRank do
        if this.checkRank(rank) then
            return this.forceRank(rank).shapeArray();
    halt("Could not identify rank in dynamicTensor.shape");
}

proc zipBinOp(param opName: string, a: dynamicTensor(?eltType), b: dynamicTensor(eltType)): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if a.checkRank(rank) && b.checkRank(rank) {
            const at: staticTensor(rank,eltType) = a.forceRank(rank);
            const bt: staticTensor(rank,eltType) = b.forceRank(rank);
            select opName {
                when "+" do
                    return (at + bt).eraseRank();
                when "-" do
                    return (at - bt).eraseRank();
                when "*" do
                    return (at * bt).eraseRank();
                when "/" do
                    return (at / bt).eraseRank();
            }
        }
        if a.checkRank(rank) then
            for param rankB in 1..maxRank {
                if b.checkRank(rankB) then
                    halt("Rank mismatch in zipBinOp \"" +opName+ "\".  a has rank " + rank : string + " and b has rank " + rankB : string);
            }
    }
    halt("Degenerate initialization of dynamicTensor.");

    return new dynamicTensor(eltType);
}

proc type dynamicTensor.loadFromNumpy(path: string): dynamicTensor(defaultEltType) {
    var npa = LoadNumpy.loadNumpyArray(path);
    for param rank in 1..maxRank {
        if const x = npa : owned LoadNumpy.ArrClass(rank)? {
            const t: staticTensor(rank,defaultEltType) = new staticTensor(x!.data);
            return t.eraseRank();
        }
    }
    halt("Could not find rank of loaded numpy array.");
    return new dynamicTensor(defaultEltType);
}

operator +(a: dynamicTensor(?eltType),b: dynamicTensor(eltType)): dynamicTensor(eltType) do
    return zipBinOp("+",a,b);

operator -(a: dynamicTensor(?eltType)): dynamicTensor(eltType) {
    return dynamicTensor.valueLike(0) - a;
}

operator -(a: dynamicTensor(?eltType),b: dynamicTensor(eltType)): dynamicTensor(eltType) do
    return zipBinOp("-",a,b);

operator *(a: dynamicTensor(?eltType),b: dynamicTensor(eltType)): dynamicTensor(eltType) do
    return zipBinOp("*",a,b);

operator /(a: dynamicTensor(?eltType),b: dynamicTensor(eltType)): dynamicTensor(eltType) do
    return zipBinOp("/",a,b);

operator +(a: dynamicTensor(?eltType),c: ?scalarType): dynamicTensor(eltType) 
        where isNumericType(scalarType) {
    for param rank in 1..maxRank {
        if a.checkRank(rank) {
            return (a.forceRank(rank) + c).eraseRank();
        }
    }
    halt("Could not determine rank in dynamicTensor + " + scalarType:string + ".");
}

operator +(c: ?scalarType,a: dynamicTensor(?eltType)): dynamicTensor(eltType) 
        where isNumericType(scalarType) {
    for param rank in 1..maxRank {
        if a.checkRank(rank) {
            return (c + a.forceRank(rank)).eraseRank();
        }
    }
    halt("Could not determine rank in " + scalarType:string + " + dynamicTensor.");
}

operator -(a: dynamicTensor(?eltType),c: ?scalarType): dynamicTensor(eltType) 
        where isNumericType(scalarType) {
    for param rank in 1..maxRank {
        if a.checkRank(rank) {
            return (a.forceRank(rank) - c).eraseRank();
        }
    }
    halt("Could not determine rank in dynamicTensor - " + scalarType:string + ".");
}

operator -(c: ?scalarType,a: dynamicTensor(?eltType)): dynamicTensor(eltType) 
        where isNumericType(scalarType) {
    for param rank in 1..maxRank {
        if a.checkRank(rank) {
            return (c - a.forceRank(rank)).eraseRank();
        }
    }
    halt("Could not determine rank in " + scalarType:string + " - dynamicTensor.");
}

operator *(a: dynamicTensor(?eltType),c: ?scalarType): dynamicTensor(eltType) 
        where isNumericType(scalarType) {
    for param rank in 1..maxRank {
        if a.checkRank(rank) {
            return (a.forceRank(rank) * c).eraseRank();
        }
    }
    halt("Could not determine rank in dynamicTensor * " + scalarType:string + ".");
}

operator *(c: ?scalarType,a: dynamicTensor(?eltType)): dynamicTensor(eltType) 
        where isNumericType(scalarType) {
    for param rank in 1..maxRank {
        if a.checkRank(rank) {
            return (c * a.forceRank(rank)).eraseRank();
        }
    }
    halt("Could not determine rank in " + scalarType:string + " * dynamicTensor.");
}

operator /(a: dynamicTensor(?eltType),c: ?scalarType): dynamicTensor(eltType) 
        where isNumericType(scalarType) {
    for param rank in 1..maxRank {
        if a.checkRank(rank) {
            return (a.forceRank(rank) / c).eraseRank();
        }
    }
    halt("Could not determine rank in dynamicTensor / " + scalarType:string + ".");
}

operator /(c: ?scalarType,a: dynamicTensor(?eltType)): dynamicTensor(eltType) 
        where isNumericType(scalarType) {
    for param rank in 1..maxRank {
        if a.checkRank(rank) {
            return (c / a.forceRank(rank)).eraseRank();
        }
    }
    halt("Could not determine rank in " + scalarType:string + " / dynamicTensor.");
}

operator ==(a: dynamicTensor(?eltType),b: dynamicTensor(eltType)): bool {
    for param rank in 1..maxRank {
        if a.checkRank(rank) && b.checkRank(rank) {
            return a.forceRank(rank) == b.forceRank(rank);
        }
    }
    halt("Could not determine rank in dynamicTensor == dynamicTensor.");
}

inline proc dynamicTensor.reduceOpAxes(param opName: string, axes: ?axesCount*int, param keepDim: bool): dynamicTensor(eltType) {
    for param rank in 1..maxRank do
        if this.checkRank(rank) then
            select opName {
                when "sum" do
                    return this.forceRank(rank).sum(axes,keepDim=keepDim).eraseRank();
                when "mean" do
                    return this.forceRank(rank).mean(axes,keepDim=keepDim).eraseRank();
            }
    halt("Could not determine rank in dynamicTensor." + opName + ".");
    return new dynamicTensor(eltType);
}

inline proc dynamicTensor.reduceOpNoAxes(param opName: string, param keepDim: bool): dynamicTensor(eltType) {
    for param rank in 1..maxRank do
        if this.checkRank(rank) then
            select opName {
                when "sum" do
                    return this.forceRank(rank).sum(keepDim=keepDim).eraseRank();
                when "mean" do
                        return this.forceRank(rank).mean(keepDim=keepDim).eraseRank();
            }
    halt("Could not determine rank in dynamicTensor." + opName + ".");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.sum(axes: ?axesCount*int, param keepDim: bool): dynamicTensor(eltType) do
    return this.reduceOpAxes("sum",axes,keepDim);

proc dynamicTensor.sum(param keepDim: bool = true): dynamicTensor(eltType) do
    return this.reduceOpNoAxes("sum",keepDim);

proc dynamicTensor.sum(axes: int...?axesCount): dynamicTensor(eltType) do
    return this.sum(axes,keepDim=true);

proc dynamicTensor.mean(axes: ?axesCount*int, param keepDim: bool): dynamicTensor(eltType) do
    return this.reduceOpAxes("mean",axes,keepDim);

proc dynamicTensor.mean(param keepDim: bool = true): dynamicTensor(eltType) do
    return this.reduceOpNoAxes("mean",keepDim);

proc dynamicTensor.mean(axes: int...?axesCount): dynamicTensor(eltType) do
    return this.mean(axes,keepDim=true);

proc dynamicTensor.relu(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).relu().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.relu.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.square(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).square().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.square.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.gelu(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).gelu().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.gelu.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.silu(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).silu().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.silu.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.mish(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).mish().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.mish.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.sigmoid(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).sigmoid().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.sigmoid.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.tanh(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).tanh().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.tanh.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.relu6(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).relu6().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.relu6.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.selu(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).selu().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.selu.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.logsigmoid(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).logsigmoid().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.logsigmoid.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.tanhshrink(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).tanhshrink().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.tanhshrink.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.softsign(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).softsign().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.softsign.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.rrelu(lower: eltType=0.125, upper: eltType=1.0/3.0, training: bool = false): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).rrelu(lower, upper, training).eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.rrelu.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.hardswish(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).hardswish().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.hardswish.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.hardsigmoid(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).hardsigmoid().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.hardsigmoid.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.hardShrink(alpha: eltType = 0.5): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).hardShrink(alpha).eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.hardshrink.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.threshold(threshold: eltType, value: eltType): dynamicTensor(eltType) { // PyTorch has no defaults for threshold
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).threshold(threshold, value).eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.threshold.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.hardTanh(minVal: eltType = -1.0, maxVal: eltType = 1.0): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).hardTanh(minVal, maxVal).eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.hardTanh.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.elu(alpha: eltType = 1.0): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).elu(alpha).eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.elu.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.softplus(beta: eltType = 1.0, threshold: eltType = 20.0): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).softplus(beta, threshold).eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.softplus.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.celu(alpha: eltType = 1.0): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).celu(alpha).eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.celu.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.leakyrelu(negativeSlope: eltType = 0.01): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).leakyrelu(negativeSlope).eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.leakyrelu.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.softshrink(alpha: eltType = 0.5): dynamicTensor(eltType) {
    if alpha < 0 then util.err("Argument to softshrink function must be non-negative");
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).softshrink(alpha).eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.softshrink.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.max(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).max().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.max.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.exp(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).exp().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.exp.");
    return new dynamicTensor(eltType);
}

// NEW CODE for batch norm
proc type dynamicTensor.batchnorm(
    features: dynamicTensor(?eltType),
    weight: dynamicTensor(eltType),
    bias: dynamicTensor(eltType),
    movingAvg: dynamicTensor(eltType),
    movingVar: dynamicTensor(eltType),
    eps: defaultEltType,
    momentum: defaultEltType,
    train: bool,
    num_features: int
): dynamicTensor(eltType) {
    for param rankF in 2..4 {
        if features.checkRank(rankF) {
            return staticTensor.batchNorm(
                features.forceRank(rankF),
                weight.forceRank(1),
                bias.forceRank(1),
                movingAvg.forceRank(1),
                movingVar.forceRank(1),
                eps,
                momentum,
                train,
                num_features
            ).eraseRank();
        }
    }
    halt("Could not determine rank in dynamicTensor.maxPool.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.softmax(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).softmax().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.softmax.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.maxPool2d(
    kernelSize: int,
    stride: int = kernelSize,
    padding: int = 0,
    dilation: int = 1
): dynamicTensor(eltType) {
    for param rank in 3..4 do
        if this.checkRank(rank) then
            return this.forceRank(rank).maxPool(kernelSize, stride, padding, dilation).eraseRank();
    
    halt("Could not determine rank in dynamicTensor.maxPool2d.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.maxPool(poolSize: int) do return this.maxPool(poolSize,stride=poolSize, padding=0, dilation=1);
proc dynamicTensor.maxPool(poolSize: int, stride: int, padding: int, dilation: int): dynamicTensor(eltType) {
    for param rank in 3..3 {
        if this.checkRank(rank) then
            return this.forceRank(rank).maxPool(poolSize, stride, padding, dilation).eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.maxPool.");
    return new dynamicTensor(eltType);
}

// adaptiveAvgPool2d
proc dynamicTensor.adaptiveAvgPool2d(outputSize: int): dynamicTensor(eltType) {
    for param rank in 3..3 {
        if this.checkRank(rank) then
            return this.forceRank(rank).adaptiveAvgPool2d(outputSize).eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.adaptiveAvgPool2d.");
    return new dynamicTensor(eltType);
}


proc dynamicTensor.reshape(args...): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).reshape((...args)).eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.reshape.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.slice(rngs: range...?rank): dynamicTensor(eltType) {
    if rank != this.runtimeRank then halt("Rank mismatch in dynamicTensor.slice.");
    return this.forceRank(rank).slice((...rngs)).eraseRank();
}

proc dynamicTensor.slice(dom: domain(?)): dynamicTensor(eltType) {
    if dom.rank != this.runtimeRank then halt("Rank mismatch in dynamicTensor.slice.");
    return this.forceRank(dom.rank).slice(dom).eraseRank();
}

proc dynamicTensor.flatten(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) {
            var t = this.forceRank(rank);
            const size = t.domain.size;
            return t.reshape(size).eraseRank();
        }
    }
    halt("Could not determine rank in dynamicTensor.flatten.");
    return new dynamicTensor(eltType);
}


proc type dynamicTensor.nllLoss(
    input: dynamicTensor(?eltType), 
    target: dynamicTensor(eltType), 
    weight: dynamicTensor(eltType),
    ignoreIndex: int = -1,
    red: bool = true,
    reduction: string = "mean"
) {
    for param rankIn in 2..2 {
        if input.checkRank(rankIn) {
            for param rank in 1..1 {
                if target.checkRank(rankIn) && weight.checkRank(rank) {
                    return staticTensor.nllLoss(input.forceRank(rankIn),target.forceRank(rank),weight.forceRank(rank),ignoreIndex,red,reduction);
                }
            }
        }
    }
}

proc type dynamicTensor.nllLoss(
    input: dynamicTensor(?eltType), 
    target: dynamicTensor(eltType), 
    ignoreIndex: int = -1,
    red: bool = true,
    reduction: string = "mean"
) {
    param inRank: int = 2;
    param targetRank: int = 1;

    if input.checkRank(inRank) {
        if target.checkRank(targetRank) {
            var stInput: staticTensor(inRank,eltType) = input.forceRank(inRank);
            var stTarget: staticTensor(targetRank,eltType) = target.forceRank(targetRank);
            var weights: staticTensor(1,eltType) = staticTensor.ones(eltType,3);
            return staticTensor.nllLoss(stInput,stTarget,weights,ignoreIndex,red,reduction);
        }
    }
            
    halt("Could not determine rank in dynamicTensor.nllLoss. ");
    return staticTensor.zeros(eltType, 1);
}

proc type dynamicTensor.matvecmul(m: dynamicTensor(?eltType),v: dynamicTensor(eltType)): dynamicTensor(eltType) {
    for param rankM in 2..2 {
        if m.checkRank(rankM) {
            for param rankV in 1..2 {
                if v.checkRank(rankV) {
                    return staticTensor.matvecmul(m.forceRank(rankM),v.forceRank(rankV)).eraseRank();
                }
            }
        }
    }
    halt("Could not determine rank in dynamicTensor.matvecmul.");
    return new dynamicTensor(eltType);
}

proc type dynamicTensor.matvecmulFast(m: dynamicTensor(?eltType),v: dynamicTensor(eltType)): dynamicTensor(eltType) {
    return staticTensor.matvecmulFast(m.forceRank(2),v.forceRank(1)).eraseRank();
}

proc dynamicTensor.topk(k: int): dynamicTensor(int) {
    return staticTensor.topk(this.forceRank(1),k).eraseRank();
}

proc dynamicTensor.argmax(): int {
    var t = this.forceRank(1);
    const a = t.array;
    return a.argmax();
}

proc type dynamicTensor.matmul(
    a: dynamicTensor(?eltType),
    b: dynamicTensor(eltType)
): dynamicTensor(eltType) {
    for param rankA in 1..3 do
        if a.checkRank(rankA) then
            for param rankB in 1..3 do
                if ndarray.mmInputRanksValid(rankA,rankB) then
                    if b.checkRank(rankB) then
                        return staticTensor.matmul(a.forceRank(rankA),b.forceRank(rankB)).eraseRank();

    halt("Could not determine rank in dynamicTensor.matmul.");
    return new dynamicTensor(eltType);
}

proc type dynamicTensor.matVecMul(m: dynamicTensor(?eltType),v: dynamicTensor(eltType)): dynamicTensor(eltType) {
    for param rankM in 2..3 {
        if m.checkRank(rankM) {
            for param rankV in 1..3 {
                if v.checkRank(rankV) {
                    return staticTensor.matVecMul(m.forceRank(rankM),v.forceRank(rankV)).eraseRank();
                }
            }
        }
    }
    halt("Could not determine rank in dynamicTensor.matVecMul.");
    return new dynamicTensor(eltType);
}

// Right now, the supported shapes are (3,4) -> 3
proc type dynamicTensor.convolve(features: dynamicTensor(?eltType), kernel: dynamicTensor(eltType), stride: int, padding: int): dynamicTensor(eltType) do
    return staticTensor.convolve(features.forceRank(3),kernel.forceRank(4),stride, padding).eraseRank();

proc type dynamicTensor.convolve(features: dynamicTensor(?eltType), kernel: dynamicTensor(eltType), bias: dynamicTensor(eltType), stride: int, padding: int): dynamicTensor(eltType) do
    return staticTensor.convolve(features.forceRank(3),kernel.forceRank(4),bias.forceRank(1),stride,padding).eraseRank();


proc type dynamicTensor.arange(args...) do
    return staticTensor.arange((...args)).eraseRank();

proc type dynamicTensor.arange(type eltType,args...) do
    return staticTensor.arange(eltType,(...args)).eraseRank();

proc type dynamicTensor.ones(args...) do
    return staticTensor.ones((...args)).eraseRank();

proc type dynamicTensor.ones(type eltType,args...) do
    return staticTensor.ones(eltType,(...args)).eraseRank();

proc type dynamicTensor.zeros(args...) do
    return staticTensor.zeros((...args)).eraseRank();

proc type dynamicTensor.zeros(type eltType,args...) do
    return staticTensor.zeros(eltType,(...args)).eraseRank();

proc type dynamicTensor.valueLike(t: dynamicTensor(?eltType), value: eltType): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if t.checkRank(rank) {
            return staticTensor.valueLike(t.forceRank(rank),value).eraseRank();
        }
    }
    halt("Could not determine rank in dynamicTensor.valueLike.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.broadcast(shape: int...): dynamicTensor(eltType) {
    for param rank in 3..3 {
        if this.checkRank(rank) {
            return this.forceRank(rank).broadcast((...shape)).eraseRank();
        }
    }
    halt("Could not determine rank in dynamicTensor.broadcast.");
    return new dynamicTensor(eltType);
}

proc type dynamicTensor.sqrt(t: dynamicTensor(defaultEltType)): dynamicTensor(defaultEltType) {
    for param rank in 1..maxRank {
        if t.checkRank(rank) {
            return staticTensor.sqrt(t.forceRank(rank)).eraseRank();
        }
    }
    halt("Could not determine rank in sqrt.");
    return new dynamicTensor(defaultEltType);
}

proc dynamicTensor.degenerateFlatten(): [] eltType {
    for param rank in 1..maxRank {
        if this.checkRank(rank) {
            return this.forceRank(rank).array.degenerateFlatten();
        }
    }
    halt("Could not determine rank in dynamicTensor.degenerateFlatten.");
    return new dynamicTensor(eltType);
}

record dynamicShape : serializable {

    var size: int;
    var sizes: [0..<size] int;

    proc init(shape: ?rank*int) {
        this.size = rank;
        init this;
        for param i in 0..<rank do
            this.sizes[i] = shape(i);
    }

    proc init(dt: staticTensor(?rank,?eltType)) do
        this.init(dt.shapeTuple());

    proc init(sizes: [] int) do
        this.init(sizes.shape);
    
    proc init(sizes: list(int)) do
        this.init(sizes.toArray());

    proc checkRank(param rank: int): bool do
        return rank == size;
    
    proc toRankedShape(param rank: int): rank*int {
        var shape: rank*int;
        if this.checkRank(rank) {
            for param i in 0..<rank do
                shape(i) = this.sizes[i];
            return shape;
        }
        halt("DynamicShape rank is not given rank " + rank : string + ".");
        return shape;
    }

    proc toList(): list(int) do
        return new list(this.sizes);

    proc head: int do
        return this.sizes.first;
    
    proc tail: dynamicShape {
        var sizes = this.toList();
        sizes.remove(this.head);
        return new dynamicShape(sizes);
    }
}

proc dynamicTensor.shape(): dynamicShape {
    for param rank in 1..maxRank do
        if this.checkRank(rank) then
            return new dynamicShape(this.forceRank(rank));

    halt("Could not determine rank in dynamicTensor.shape.");
    return new dynamicShape((0,));
}

proc dynamicTensor.reshape(dShape: dynamicShape): dynamicTensor(eltType) {
    for param rank in 1..maxRank do
        for param shapeRank in 1..maxRank do
            if this.checkRank(rank) && dShape.checkRank(shapeRank) then
                return this.forceRank(rank).reshape(dShape.toRankedShape(shapeRank)).eraseRank();
    halt("Could not determine rank in dynamicTensor.reshape.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.unsqueeze(dim: int): dynamicTensor(eltType) {
    for param rank in 1..maxRank do
        if this.checkRank(rank) then
            return this.forceRank(rank).unsqueeze(dim).eraseRank();
    halt("Could not determine rank in dynamicTensor.unsqueeze.");
    return new dynamicTensor(eltType);
}


proc dynamicTensor.squeeze(): dynamicTensor(eltType) {
    var dShape = this.shape();
    var newSizes = new list(int);
    var prod = 1;
    for i in 0..<dShape.size do
        if dShape.sizes[i] != 1 {
            const s = dShape.sizes[i];
            newSizes.pushBack(s * prod);
            prod *= s;
        }
    var newDShape = new dynamicShape(newSizes);
    return this.reshape(newDShape);
}

proc dynamicTensor.squeeze(dim: int): dynamicTensor(eltType) {
    var dShape = this.shape();
    var newSizes = new list(int);
    var prod = 1;
    for i in 0..<dShape.size do
        if dShape.sizes[i] != 1 {
            const s = dShape.sizes[i];
            newSizes.pushBack(s * prod);
            prod *= s;
        } else { break; }
    var newDShape = new dynamicShape(newSizes);
    return this.reshape(newDShape);
}

// proc dynamicTensor.squeeze(dim: squee): dynamicTensor(eltType) {
//     for param rank in 1..maxRank do
//         for param shapeRank in 1..maxRank do
//             if this.checkRank(rank) && dShape.checkRank(shapeRank) then
//                 return this.forceRank(rank).squeeze(dShape.toRankedShape(shapeRank)).eraseRank();
//     halt("Could not determine rank in dynamicTensor.squeeze.");
//     return new dynamicTensor(eltType);
// }

// proc dynamicTensor.squeeze(dShape: dynamicShape): dynamicTensor(eltType) {
//     if dShape.size == 1 then
//         return this.squeeze(dShape.head);
//     else 
//         return (this.squeeze(dShape.tail)).squeeze(dShape.head);
// }

/*
proc main() {

    // Just some examples. 
    const t_: staticTensor(2,real) = staticTensor.arange(3,5);
    writeln(t_);
    const t = new dynamicTensor(t_);
    const t2 = t + t;

    const t3: dynamicTensor(real) = dynamicTensor.arange(3,5);
    writeln(t3 - dynamicTensor.ones(3,5));

    writeln(t3.sum(0).sum(0));

    writeln(t3.reshape(5,3));

    var t4 = t3.reshape(5,3);
    var t4t: staticTensor(2,real) = t4forceRank(2);
    t4t.array.data[1,1] = 70;
    t4.array(2).data[0,0] = 99;
    t4.data(2)[2,2] = 200;
    ref t4Data = t4.data(2);
    t4Data[1,0] = 500;



    const a: ndarray(2,real) = t4.array(2);
    writeln(a);

    var img = dynamicTensor.arange(1,9,9);
    var ker = dynamicTensor.arange(1,1,3,3);
    var fet = dynamicTensor.convolve(img,ker,1,0);

    writeln(fet);
    fet.save("data/my_features.chdata");
    // writeln(t4[1,2]);




    // config const iters = 50;
    // var T = dynamicTensor.arange(30,30);
    // for i in 0..<iters {
    //     T = T + T;
    // }
    // writeln(T);







    const npa = dynamicTensor.loadFromNumpy("notebooks/numpy_y.npy");


}*/



import IO;
proc dynamicTensor.serialize(writer: IO.fileWriter(locking=false, IO.defaultSerializer),ref serializer: IO.defaultSerializer) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) {
            this.forceRank(rank).writeMe(writer,name="Tensor");
            return;
        }
    }
}

proc dynamicTensor.serialize(writer: IO.fileWriter(?),ref serializer: ?srt2) where srt2 != IO.defaultSerializer {
    const prevDev = this.device;
    this.to(here);

    var rh = serializer.startRecord(writer,"dynamicTensor",2);
    // rh.writeField("rank",rank);
    rh.writeField("eltType",eltType:string);
    rh.writeField("meta",meta);
    rh.endRecord();

    this.to(prevDev);
}

proc dynamicTensor.write(fw: IO.fileWriter(?)) throws {
    for param rank in 1..maxRank {
        if rank == runtimeRank {
            const a = array(rank);
            fw.write(rank);
            for s in a.shape do
                fw.write(s:int);
            for i in a.data.domain do
                fw.write(a.data[i]);
        }
    }
}


proc dynamicTensor.save(path: string) {
    var file = IO.open(path, IO.ioMode.cw);
    var serializer = new IO.binarySerializer(IO.endianness.native);
    var fw = file.writer(locking=false,serializer=serializer);
    this.write(fw);
    fw.close();
}

proc type dynamicTensor.multiReader(path: string) {
    var file = IO.open(path, IO.ioMode.r);
    var deserializer = new IO.binaryDeserializer(IO.endianness.native);
    var fr = file.reader(locking=false,deserializer=deserializer);
    return fr;
}

proc type dynamicTensor.load(path: string,type dtype = real(32), param debug = false): dynamicTensor(dtype) 
        where isRealType(dtype) {
    return dynamicTensor.readInPlace(dynamicTensor.multiReader(path),dtype = dtype, debug = debug);
}

proc type dynamicTensor.load(path: string,param precision: int,param debug = false): dynamicTensor(real(precision)) {
    compilerWarning("Don't use me. Use type specifying version (dtype = real(precision)) instead.");
    return dynamicTensor.readInPlace(dynamicTensor.multiReader(path),dtype = real(precision),debug = debug);
}

/*
proc type dynamicTensor.readInPlace_(fr: IO.fileReader(?),type dtype = real(32), param debug = false): dynamicTensor(dtype) 
        where isRealType(dtype) {
    compilerAssert(isRealType(dtype));
    param precision = numBits(dtype);
    compilerAssert(real(precision) == dtype);
    fr.mark();
    const r = fr.read(int);
    for param rank in 1..maxRank {
        if r == rank {
            try! {
                var shape: rank * int;
                for param i in 0..<rank do
                    shape(i) = fr.read(int);
                const dom = util.domainFromShape((...shape));
                var eltBits = fr.read(int);
                fr.mark();
                for param attemptBytes in 4..6 {
                    param attemptBits = 2 ** attemptBytes;
                    try! {
                        if attemptBits == 16 {
                            var a: ndarray(rank,dtype) = new ndarray(A : real(attemptBits));
                            fr.commit();
                            return new dynamicTensor(a);
                        } else {
                            if eltBits == attemptBits {
                                var A: [dom] real(attemptBits);
                                fr.read(A);
                                var a: ndarray(rank,dtype) = new ndarray(A : real(attemptBits));
                                fr.commit();
                                return new dynamicTensor(a);
                            }
                        }
                    } catch e : IO.UnexpectedEofError {
                        IO.stderr.writeln("Error reading from ", fr.getFile().path, " with precision ", attemptBits);
                        fr.revert();
                    }
                }
                IO.stderr.writeln("Big error.");
            } catch e : IO.UnexpectedEofError {
                IO.stderr.writeln(e);
                IO.stderr.writeln("Error reading from ", fr.getFile().path, " . Going to try read with 64 bit precision instead of ", precision);
                fr.revert();
                return dynamicTensor.readInPlace(fr,dtype = real(64),debug = true) : dtype;
            }
        }
    }
    halt("Something bad happened.: " + r : string);
    return new dynamicTensor(real);
}*/

proc type dynamicTensor.readInPlace(
    fr: IO.fileReader(?),
    type dtype = real(32),
    param debug = false): dynamicTensor(dtype) 
        where isRealType(dtype) {
    
    param eltTypeBits = numBits(dtype);
    type eltType = real(eltTypeBits);

    inline proc returnDynamicArray(A: [] ?eltTypeA): dynamicTensor(eltType) {
        if eltType == eltTypeA then
            return new dynamicTensor(new ndarray(A));
        else {
            const B = A : eltType;
            var b = new ndarray(B);
            return new dynamicTensor(b);
        }
    }

    const dataRank = fr.read(int);
    for param rank in 1..maxRank do
        if dataRank == rank {
            var shape: rank * int;
            for param i in 0..<rank do
                shape(i) = fr.read(int);
            const dom = util.domainFromShape((...shape));

            const eltBits = fr.read(int);
            for param attemptBytes in 4..6 {
                param attemptBits: int = 2 ** attemptBytes;
                type loadType = if attemptBits == 16 
                                    then uint(16) 
                                    else real(attemptBits);
                if attemptBits == eltBits {
                    var A: [dom] loadType;
                    
                    try! {
                        fr.read(A);
                    } catch e : IO.UnexpectedEofError {
                        IO.stderr.writeln(e);
                        IO.stderr.writeln("Error reading from ", fr.getFile().path, " with precision ", attemptBits, " with shape ", shape);
                        halt("Error reading from ", fr.getFile().path, " with precision ", attemptBits, " with shape ", shape);
                    }
                    
                    if attemptBits == 16 {
                        var B = [i in dom] util.uint16ToReal32(A[i]);
                        return returnDynamicArray(B);
                    } else {
                        return returnDynamicArray(A);
                    }
                }
            }
            halt("Could not determine precision in dynamicTensor.readInPlace.");
        }
    halt("Could not determine rank in dynamicTensor.readInPlace.");
}


proc dynamicTensor.dropout(p: real(64) = 0.5): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.forceRank(rank).dropout().eraseRank();
    }

    halt("Could not determine rank in dynamicTensor.dropout.");
}