
use ndarray;
use remote;
use autograd;
use tensor;
import Utilities as util;
use Utilities.Standard;

param maxRank = 11;

import loadNumpy;


record Tensor {
    type eltType = real;

    var meta: shared TensorEssence(eltType);

    proc init(type eltType) {
        halt("Degenerate initialization of dynamicTensor.");

        this.eltType = eltType;
        this.meta = new shared TensorEssence(eltType);
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
}


proc zipBinOp(param opName: string, a: Tensor(?eltType), b: Tensor(eltType)): Tensor(eltType) {
    const aMeta = a.meta;
    const bMeta = b.meta;
    for param i in 0..maxRank {
        if checkRank(aMeta,i) && checkRank(bMeta,i) {
            const at: tensor(i,eltType) = new tensor(forceRank(aMeta,i),strict=false);
            const bt: tensor(i,eltType) = new tensor(forceRank(bMeta,i),strict=false);
            select opName {
                when "+" do
                    return new Tensor((at + bt).meta);
                // when "-" do
                //     te = (at - bt).meta;
                // when "*" do
                //     te = (at * bt).meta;
                // when "/" do
                //     te = (at / bt).meta;
            }
        }
    }
}

operator +(a: Tensor(?eltType),b: Tensor(eltType)): Tensor(eltType) {
    // const aMeta = a.meta;
    // const bMeta = b.meta;
    // for param i in 0..maxRank {
    //     if checkRank(aMeta,i) && checkRank(bMeta,i) {
    //         const at: tensor(i,eltType) = new tensor(aMeta.forceRank(i),strict=false);
    //         const bt: tensor(i,eltType) = new tensor(bMeta.forceRank(i),strict=false);
    //         const c = at + bt;
    //         return new Tensor(c.meta : shared TensorEssence(eltType));
    //     }
    // }
    return zipBinOp("+",a,b);
}

proc add(t1: Tensor(real),t2: Tensor(real)) {
    const t3 = t1 + t2;
    writeln(t3);
}

const t_: tensor(2,real) = new tensor(2,real);
writeln(t_);
const t2 = new Tensor(t_);
const t1 = new Tensor(t_);
add(t1,t2);

// var t2 = t + t;
// writeln(t2);