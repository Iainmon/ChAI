
use ndarray;
use remote;
use autograd;
use tensor;
import Utilities as util;
use Utilities.Standard;

param maxRank = 6;

import loadNumpy;


record Tensor : writeSerializable {
    type eltType = real;

    var meta: shared TensorEssence(eltType);

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
    // proc init(type eltType t: tensor(?rank,?eltType)) {
    //     this.eltType = eltType;
    //     this.meta = t.meta;
    // }

    proc forceTensor(param rank: int): tensor(rank,eltType) do
        return new tensor(forceRank(meta,rank),strict=false);

}


proc zipBinOp(param opName: string, a: Tensor(?eltType), b: Tensor(eltType)): Tensor(eltType) {
    const aMeta = a.meta;
    const bMeta = b.meta;
    for param i in 1..maxRank {
        if checkRank(aMeta,i) && checkRank(bMeta,i) {
            const at: tensor(i,eltType) = new tensor(forceRank(aMeta,i),strict=false);
            const bt: tensor(i,eltType) = new tensor(forceRank(bMeta,i),strict=false);
            select opName {
                when "+" do
                    return new Tensor((at + bt).meta);
                when "-" do
                    return new Tensor((at - bt).meta);
                when "*" do
                    return new Tensor((at * bt).meta);
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
            return new Tensor(t);
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

proc type Tensor.arange(args...) do
    return new Tensor(tensor.arange((...args)));

proc type Tensor.ones(args...) do
    return new Tensor(tensor.ones((...args)));



const t_: tensor(2,real) = tensor.arange(3,5);
writeln(t_);
const t = new Tensor(t_);
const t2 = t + t;

const t3 = Tensor.arange(3,5);
writeln(t3 - Tensor.ones(3,5));


const npa = Tensor.loadFromNumpy("notebooks/numpy_y.npy");
writeln(npa);
// var t2 = t + t;
// writeln(t2);



import IO;
proc Tensor.serialize(writer: IO.fileWriter(locking=false, IO.defaultSerializer),ref serializer: IO.defaultSerializer) {
    for param rank in 1..maxRank {
        if checkRank(this.meta,rank) {
            this.forceTensor(rank).serialize(writer,serializer,capitalT=true);
            return;
        }
    }
}
