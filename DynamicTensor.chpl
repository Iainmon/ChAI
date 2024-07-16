
use ndarray;
use remote;
use autograd;
import autograd as ag;
import StaticTensor as tn;
use StaticTensor;

import Utilities as util;
use Utilities.Standard;

param maxRank = 6;

import loadNumpy;


record Tensor : writeSerializable {
    type eltType = real;

    var meta: shared TensorEssence(eltType);

    var _cached_rank: int = -1;

    proc init(type eltType) {
        this.eltType = eltType;
        this.meta = new shared TensorEssence(eltType);
        halt("Degenerate initialization of dynamicTensor.");
    }

    proc init(type eltType, meta: shared TensorEssence(eltType)) {
        this.eltType = eltType;
        this.meta = meta;
    }

    proc init(meta: shared TensorEssence(?eltType)) {
        this.eltType = eltType;
        this.meta = meta;
    }

    proc init(t: tensor(?rank,?eltType)) {
        this.eltType = eltType;
        this.meta = t.meta;
    }

    proc init(a: ndarray(?rank,?eltType)) do
        this.init(new tensor(a));
    
    proc init(arr: [] ?eltType) do
        this.init(new tensor(arr));

    // proc init(type eltType t: tensor(?rank,?eltType)) {
    //     this.eltType = eltType;
    //     this.meta = t.meta;
    // }

    proc tensorize(param rank: int) : tensor(rank,eltType) {
        // if rank != getRank() then 
        //     halt("Cannot cast this Tensor of rank " + getRank(): string + " to tensor of rank " + rank : string + ".");
        if var myMeta = meta : shared BaseTensorResource(eltType,rank)? {
            var myMeta2 = meta : shared BaseTensorResource(eltType,rank);
            return new tensor(myMeta2,strict=false);
        } else {
            halt("Cannot cast this Tensor to tensor of rank " + rank : string + ".");
        }
        return forceRank(rank);
    }

    // proc const ref tensorize(param rank: int) : tensor(rank,eltType) {
    //     return forceRank(rank);
    // }

    proc resource(param rank: int): shared BaseTensorResource(eltType,rank) {
        if !this.checkRank(rank) then 
            halt("Given rank " + rank : string + " does not match this Tensor.");
        return forceRankMeta(rank);
    }

    proc forceRank(param rank: int): tensor(rank,eltType) do
        return new tensor(meta : shared BaseTensorResource(eltType,rank),strict=false);

    proc forceRankMeta(param rank: int): shared BaseTensorResource(eltType,rank) do
        return meta : shared BaseTensorResource(eltType,rank);

    proc _checkRank(param rank: int): bool {
        if var myMeta = meta : shared BaseTensorResource(eltType,rank)? then return true;
        return false;
    }

    proc checkRank(param rank: int): bool {
        if 0 < _cached_rank then return rank == _cached_rank;
        return this._checkRank(rank);
        // return this.getRank() == rank;
    }

    proc getRank(): int {
        if 0 < _cached_rank then 
            return _cached_rank;
        for param rank in 1..maxRank {
            if this._checkRank(rank) {
                _cached_rank = rank;
                return rank;
            }
        }
        halt("Unable to find my own rank.");
        return -1;
    }

    proc to(device: locale) {
        for param rank in 1..maxRank {
            if checkRank(rank) {
                this.tensorize(rank).to(device);
                return this;
            }
        }
        halt("Unable to find my own rank.");
        return this;
    }


    // proc ref array(param rank: int) ref : ndarray(rank,eltType) do
    //     return this.resource(rank).array;

    proc array(param rank: int) : ndarray(rank,eltType) {
        return (this.meta : shared BaseTensorResource(eltType, rank)).array;
    }

    proc grad(param rank: int) ref : ndarray(rank,eltType) do
        return this.resource(rank).grad;

    proc data(param rank: int) : [] eltType do
        return this.resource(rank).data;


    proc toNDArray(param rank: int) : ndarray(rank,eltType) {
        var tt = this.tensorize(rank);
        const prevDev = tt.device;
        tt.to(here);
        const nda: ndarray(rank,eltType) = tt.array;
        tt.to(prevDev);
        return nda;
    }

    proc toArray(param rank: int) : [] eltType do
        return toNDArray(rank).data;

}

inline proc ndarray.toTensor(): Tensor(eltType) do
    return new Tensor(this);

proc tensor.eraseRank(): Tensor(eltType) do
    return new Tensor(this.meta);

operator :(t: tensor(?rank,?eltType), type T: Tensor(eltType)): Tensor(eltType) do
    return t.eraseRank();


proc zipBinOp(param opName: string, a: Tensor(?eltType), b: Tensor(eltType)): Tensor(eltType) {
    for param rank in 1..maxRank {
        if a.checkRank(rank) && b.checkRank(rank) {
            const at: tensor(rank,eltType) = a.forceRank(rank);
            const bt: tensor(rank,eltType) = b.forceRank(rank);
            select opName {
                when "+" do
                    return (at + bt).eraseRank();
                when "-" do
                    return (at - bt).eraseRank();
                when "*" do
                    return (at * bt).eraseRank();
                // when "/" do
                //     te = (at / bt).meta;
            }
        }
    }
    halt("Degenerate initialization of dynamicTensor.");

    return new Tensor(eltType);
}

proc type Tensor.loadFromNumpy(path: string): Tensor(real) {
    var npa = loadNumpy.loadNumpyArray(path);
    for param rank in 1..maxRank {
        if const x = npa : owned loadNumpy.ArrClass(rank)? {
            const t: tensor(rank,real) = new tensor(x!.data);
            return t.eraseRank();
        }
    }
    halt("Could not find rank of loaded numpy array.");
    return new Tensor(real);
}

operator +(a: Tensor(?eltType),b: Tensor(eltType)): Tensor(eltType) do
    return zipBinOp("+",a,b);

operator -(a: Tensor(?eltType),b: Tensor(eltType)): Tensor(eltType) do
    return zipBinOp("-",a,b);

operator *(a: Tensor(?eltType),b: Tensor(eltType)): Tensor(eltType) do
    return zipBinOp("*",a,b);


proc Tensor.sum(axes: int...?r): Tensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.tensorize(rank).sum((...axes)).eraseRank();
    }
    halt("Could not determine rank in Tensor.sum.");
    return new Tensor(eltType);
}

proc Tensor.reshape(args...): Tensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.tensorize(rank).reshape((...args)).eraseRank();
    }
    halt("Could not determine rank in Tensor.reshape.");
    return new Tensor(eltType);
}

proc Tensor.slice(rngs: range...?rank): Tensor(eltType) {
    if rank != this.getRank() then halt("Rank mismatch in Tensor.slice.");
    return this.tensorize(rank).slice((...rngs)).eraseRank();
}

proc Tensor.slice(dom: domain(?)): Tensor(eltType) {
    if dom.rank != this.getRank() then halt("Rank mismatch in Tensor.slice.");
    return this.tensorize(dom.rank).slice(dom).eraseRank();
}

// Right now, the supported shapes are (3,4) -> 3
proc type Tensor.convolve(features: Tensor(?eltType), kernel: Tensor(eltType), stride: int): Tensor(eltType) do
    return tensor.convolve(features.forceRank(3),kernel.forceRank(4),stride).eraseRank();


proc type Tensor.arange(args...) do
    return tensor.arange((...args)).eraseRank();

proc type Tensor.ones(args...) do
    return tensor.ones((...args)).eraseRank();

proc type Tensor.zeros(args...) do
    return tensor.zeros((...args)).eraseRank();


const t_: tensor(2,real) = tensor.arange(3,5);
writeln(t_);
const t = new Tensor(t_);
const t2 = t + t;

const t3 = Tensor.arange(3,5);
writeln(t3 - Tensor.ones(3,5));

writeln(t3.sum(0).sum(0));

writeln(t3.reshape(5,3));

var t4 = t3.reshape(5,3);
var t4t: tensor(2,real) = t4.tensorize(2);
t4t.array.data[1,1] = 70;
// t4.array(2).data[0,0]=70; // this doesn't seem to work 
writeln(t4t);

writeln(t4);

const a: ndarray(2,real) = t4.array(2);
writeln(a);


// config const iters = 50;
// var T = Tensor.arange(30,30);
// for i in 0..<iters {
//     T = T + T;
// }
// writeln(T);





const npa = Tensor.loadFromNumpy("notebooks/numpy_y.npy");
writeln(npa);
// var t2 = t + t;
// writeln(t2);



import IO;
proc Tensor.serialize(writer: IO.fileWriter(locking=false, IO.defaultSerializer),ref serializer: IO.defaultSerializer) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) {
            this.forceRank(rank).serialize(writer,serializer,capitalT=true);
            return;
        }
    }
}
