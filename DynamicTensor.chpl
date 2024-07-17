
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

    var runtimeRank: int = -1;

    proc init(type eltType) {
        this.eltType = eltType;
        this.meta = new shared TensorEssence(eltType);
        halt("Degenerate initialization of dynamicTensor.");
    }

    proc init(type eltType, meta: shared TensorEssence(eltType)) {
        this.eltType = eltType;
        this.meta = meta;
        this.runtimeRank = meta.runtimeRank;
    }

    proc init(meta: shared TensorEssence(?eltType)) {
        this.eltType = eltType;
        this.meta = meta;
        this.runtimeRank = meta.runtimeRank;
    }

    proc init(t: tensor(?rank,?eltType)) {
        this.eltType = eltType;
        this.meta = t.meta;
        this.runtimeRank = t.meta.runtimeRank;
    }

    proc init(a: ndarray(?rank,?eltType)) do
        this.init(new tensor(a));
    
    proc init(arr: [] ?eltType) do
        this.init(new tensor(arr));

    // proc init(type eltType t: tensor(?rank,?eltType)) {
    //     this.eltType = eltType;
    //     this.meta = t.meta;
    // }

    // todo: proc this(...) // slicing.

    proc this(args...) do
        return this.slice((...args));

    proc tensorize(param rank: int) : tensor(rank,eltType) {
        if rank != runtimeRank then 
            halt("Cannot cast this Tensor of rank " + runtimeRank: string + " to tensor of rank " + rank : string + ".");
        return forceRank(rank);
    }

    proc resource(param rank: int): shared BaseTensorResource(eltType,rank) {
        if runtimeRank != rank then 
            halt("Given rank " + rank : string + " does not match this Tensor of rank " + runtimeRank : string);
        return forceRankMeta(rank);
    }

    proc forceRank(param rank: int): tensor(rank,eltType) do
        return new tensor(meta : shared BaseTensorResource(eltType,rank),strict=false);

    proc forceRankMeta(param rank: int): shared BaseTensorResource(eltType,rank) do
        return meta : shared BaseTensorResource(eltType,rank);

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
                this.tensorize(rank).to(device);
                return this;
            }
        }
        halt("Unable to find my own rank.");
        return this;
    }


    proc array(param rank: int) ref : ndarray(rank,eltType) do
        return (this.meta.borrow() : borrowed BaseTensorResource(eltType, rank)).array;

    proc grad(param rank: int) ref : ndarray(rank,eltType) do
        return (this.meta.borrow() : borrowed BaseTensorResource(eltType, rank)).grad;

    proc data(param rank: int) ref : [] eltType do
        return (this.meta.borrow() : borrowed BaseTensorResource(eltType, rank)).data;


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
    return new Tensor(this);

operator :(t: tensor(?rank,?eltType), type T: Tensor(eltType)): Tensor(eltType) do
    return t.eraseRank();


proc zipBinOp(param opName: string, a: Tensor(?eltType), b: Tensor(eltType)): Tensor(eltType) {
    for param rank in 1..maxRank {
        if a.checkRank(rank) && b.checkRank(rank) {
            const at: tensor(rank,eltType) = a.tensorize(rank);
            const bt: tensor(rank,eltType) = b.tensorize(rank);
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

proc Tensor.relu(): Tensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.tensorize(rank).relu().eraseRank();
    }
    halt("Could not determine rank in Tensor.relu.");
    return new Tensor(eltType);
}

proc Tensor.max(): Tensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.tensorize(rank).max().eraseRank();
    }
    halt("Could not determine rank in Tensor.max.");
    return new Tensor(eltType);
}

proc Tensor.exp(): Tensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.tensorize(rank).exp().eraseRank();
    }
    halt("Could not determine rank in Tensor.exp.");
    return new Tensor(eltType);
}

proc Tensor.softmax(): Tensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.tensorize(rank).softmax().eraseRank();
    }
    halt("Could not determine rank in Tensor.softmax.");
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
    if rank != this.runtimeRank then halt("Rank mismatch in Tensor.slice.");
    return this.tensorize(rank).slice((...rngs)).eraseRank();
}

proc Tensor.slice(dom: domain(?)): Tensor(eltType) {
    if dom.rank != this.runtimeRank then halt("Rank mismatch in Tensor.slice.");
    return this.tensorize(dom.rank).slice(dom).eraseRank();
}

proc Tensor.flatten(): Tensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) {
            var t = this.tensorize(rank);
            const size = t.domain.size;
            return t.reshape(size).eraseRank();
        }
    }
    halt("Could not determine rank in Tensor.flatten.");
    return new Tensor(eltType);
}

proc type Tensor.matvecmul(m: Tensor(?eltType),v: Tensor(eltType)): Tensor(eltType) {
    for param rankM in 2..2 {
        if m.checkRank(rankM) {
            for param rankV in 1..2 {
                if v.checkRank(rankV) {
                    return tensor.matvecmul(m.forceRank(rankM),v.forceRank(rankV)).eraseRank();
                }
            }
        }
    }
    halt("Could not determine rank in Tensor.matvecmul.");
    return new Tensor(eltType);
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

proc main() {
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
    t4.array(2).data[0,0] = 99;
    t4.data(2)[2,2] = 200;
    ref t4Data = t4.data(2);
    t4Data[1,0] = 500;
    // t4.array(2).data[0,0]=70; // this doesn't seem to work 


    // forall (i,j) in t4t.domain.every() {
    //     writeln(t4t.array.data[i,j]);
    // }



    const a: ndarray(2,real) = t4.array(2);
    writeln(a);

    var img = Tensor.arange(1,9,9);
    var ker = Tensor.arange(1,1,3,3);
    var fet = Tensor.convolve(img,ker,1);

    writeln(fet);
    fet.save("data/my_features.chdata");

    // writeln(t4[1,2]);




    // config const iters = 50;
    // var T = Tensor.arange(30,30);
    // for i in 0..<iters {
    //     T = T + T;
    // }
    // writeln(T);







    const npa = Tensor.loadFromNumpy("notebooks/numpy_y.npy");
    // writeln(npa);
    // var t2 = t + t;
    // writeln(t2);

}



import IO;
proc Tensor.serialize(writer: IO.fileWriter(locking=false, IO.defaultSerializer),ref serializer: IO.defaultSerializer) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) {
            this.forceRank(rank).serialize(writer,serializer,capitalT=true);
            return;
        }
    }
}

proc Tensor.write(fw: IO.fileWriter(?)) throws {
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


proc Tensor.save(path: string) {
    var file = IO.open(path, IO.ioMode.cw);
    var serializer = new IO.binarySerializer(IO.endianness.native);
    var fw = file.writer(locking=false,serializer=serializer);
    this.write(fw);
    fw.close();
}

proc type Tensor.load(path: string) {
    var file = IO.open(path, IO.ioMode.r);
    var deserializer = new IO.binaryDeserializer(IO.endianness.native);
    var fr = file.reader(locking=false,deserializer=deserializer);
    const r = fr.read(int);
    writeln("rank: ",r);
    for param rank in 1..maxRank {
        if r == rank {
            var shape: rank * int;
            for param i in 0..<rank do
                shape(i) = fr.read(int);
            const dom = util.domainFromShape((...shape));
            var a: ndarray(rank,real) = new ndarray(dom,real);
            for i in dom do 
                a.data[i] = fr.read(real);
            fr.close();
            return new Tensor(a);
        }
    }
    halt("Something bad happened.: " + r : string);
    return new Tensor(real);
}






