
use NDArray;
use Remote;
use Autograd;
import Autograd as ag;
import StaticTensor as tn;
use StaticTensor;

import Utilities as util;
use Utilities.Standard;

config param maxRank = 6;

import LoadNumpy;

param defaultDetachedMode = true;

type Tensor = dynamicTensor(?);

record dynamicTensor : serializable {
    type eltType = real;

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
        if rank != runtimeRank then
            halt("Cannot cast this dynamicTensor of rank " + runtimeRank: string + " to dynamicTensor of rank " + rank : string + ".");
        return forceRank(rank);
    }

    proc resource(param rank: int): shared BaseTensorResource(eltType,rank) {
        if runtimeRank != rank then 
            halt("Given rank " + rank : string + " does not match this dynamicTensor of rank " + runtimeRank : string);
        return forceRankMeta(rank);
    }

    proc forceRank(param rank: int): staticTensor(rank,eltType) do
        return new staticTensor(meta : shared BaseTensorResource(eltType,rank));

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

    proc device: locale {
        for param rank in 1..maxRank {
            if checkRank(rank) {
                return this.tensorize(rank).device;
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

    proc detach(): dynamicTensor(eltType) {
        for param rank in 1..maxRank do
            if checkRank(rank) then
                return tensorize(rank).detach().eraseRank();
        halt("Could not identify rank for this: ", this);
    }
}

operator :(in t: dynamicTensor(?eltType), type toType): dynamicTensor(toType) {
    for param rank in 1..maxRank do
        if t.checkRank(rank) then
            return (t.tensorize(rank) : toType).eraseRank();
    halt("Could not identify rank for this: ", t);
}

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


proc zipBinOp(param opName: string, a: dynamicTensor(?eltType), b: dynamicTensor(eltType)): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if a.checkRank(rank) && b.checkRank(rank) {
            const at: staticTensor(rank,eltType) = a.tensorize(rank);
            const bt: staticTensor(rank,eltType) = b.tensorize(rank);
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

    return new dynamicTensor(eltType);
}

proc type dynamicTensor.loadFromNumpy(path: string): dynamicTensor(real) {
    var npa = LoadNumpy.loadNumpyArray(path);
    for param rank in 1..maxRank {
        if const x = npa : owned LoadNumpy.ArrClass(rank)? {
            const t: staticTensor(rank,real) = new staticTensor(x!.data);
            return t.eraseRank();
        }
    }
    halt("Could not find rank of loaded numpy array.");
    return new dynamicTensor(real);
}

operator +(a: dynamicTensor(?eltType),b: dynamicTensor(eltType)): dynamicTensor(eltType) do
    return zipBinOp("+",a,b);

operator -(a: dynamicTensor(?eltType),b: dynamicTensor(eltType)): dynamicTensor(eltType) do
    return zipBinOp("-",a,b);

operator *(a: dynamicTensor(?eltType),b: dynamicTensor(eltType)): dynamicTensor(eltType) do
    return zipBinOp("*",a,b);


proc dynamicTensor.sum(axes: int...?r): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.tensorize(rank).sum((...axes)).eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.sum.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.relu(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.tensorize(rank).relu().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.relu.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.max(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.tensorize(rank).max().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.max.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.exp(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.tensorize(rank).exp().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.exp.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.softmax(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.tensorize(rank).softmax().eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.softmax.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.maxPool(poolSize: int) do return this.maxPool(poolSize,stride=poolSize);
proc dynamicTensor.maxPool(poolSize: int, stride: int): dynamicTensor(eltType) {
    for param rank in 3..3 {
        if this.checkRank(rank) then
            return this.tensorize(rank).maxPool(poolSize, stride).eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.maxPool.");
    return new dynamicTensor(eltType);
}

// adaptiveAvgPool2d
proc dynamicTensor.adaptiveAvgPool2d(outputSize: int): dynamicTensor(eltType) {
    for param rank in 3..3 {
        if this.checkRank(rank) then
            return this.tensorize(rank).adaptiveAvgPool2d(outputSize).eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.adaptiveAvgPool2d.");
    return new dynamicTensor(eltType);
}


proc dynamicTensor.reshape(args...): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) then
            return this.tensorize(rank).reshape((...args)).eraseRank();
    }
    halt("Could not determine rank in dynamicTensor.reshape.");
    return new dynamicTensor(eltType);
}

proc dynamicTensor.slice(rngs: range...?rank): dynamicTensor(eltType) {
    if rank != this.runtimeRank then halt("Rank mismatch in dynamicTensor.slice.");
    return this.tensorize(rank).slice((...rngs)).eraseRank();
}

proc dynamicTensor.slice(dom: domain(?)): dynamicTensor(eltType) {
    if dom.rank != this.runtimeRank then halt("Rank mismatch in dynamicTensor.slice.");
    return this.tensorize(dom.rank).slice(dom).eraseRank();
}

proc dynamicTensor.flatten(): dynamicTensor(eltType) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) {
            var t = this.tensorize(rank);
            const size = t.domain.size;
            return t.reshape(size).eraseRank();
        }
    }
    halt("Could not determine rank in dynamicTensor.flatten.");
    return new dynamicTensor(eltType);
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
  return staticTensor.topk(this.tensorize(1),k).eraseRank();
}

proc dynamicTensor.argmax(): int {
    var t = this.tensorize(1);
    const a = t.array;
    return a.argmax();
}

// Right now, the supported shapes are (3,4) -> 3
proc type dynamicTensor.convolve(features: dynamicTensor(?eltType), kernel: dynamicTensor(eltType), stride: int, padding: int): dynamicTensor(eltType) do
    return staticTensor.convolve(features.forceRank(3),kernel.forceRank(4),stride, padding).eraseRank();

proc type dynamicTensor.convolve(features: dynamicTensor(?eltType), kernel: dynamicTensor(eltType), bias: dynamicTensor(eltType), stride: int, padding: int): dynamicTensor(eltType) do
    return staticTensor.convolve(features.forceRank(3),kernel.forceRank(4),bias.forceRank(1),stride,padding).eraseRank();


proc type dynamicTensor.arange(args...) do
    return staticTensor.arange((...args)).eraseRank();

proc type dynamicTensor.ones(args...) do
    return staticTensor.ones((...args)).eraseRank();

proc type dynamicTensor.zeros(args...) do
    return staticTensor.zeros((...args)).eraseRank();

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
    var t4t: staticTensor(2,real) = t4.tensorize(2);
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


}



import IO;
proc dynamicTensor.serialize(writer: IO.fileWriter(locking=false, IO.defaultSerializer),ref serializer: IO.defaultSerializer) {
    for param rank in 1..maxRank {
        if this.checkRank(rank) {
            this.forceRank(rank).serialize(writer,serializer,capitalT=true);
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

proc type dynamicTensor.load(path: string,param precision = 64): dynamicTensor(real) {
    return dynamicTensor.readInPlace(dynamicTensor.multiReader(path),precision);
}


proc type dynamicTensor.readInPlace(fr: IO.fileReader(?),param precision = 64): dynamicTensor(real) {
    fr.mark();
    const r = fr.read(int);
    // writeln("rank: ",r);
    for param rank in 1..maxRank {
        if r == rank {
            try! {
                var shape: rank * int;
                for param i in 0..<rank do
                    shape(i) = fr.read(int);
                const dom = util.domainFromShape((...shape));
                var A: [dom] real(precision);
                // for i in dom do 
                //     a.data[i] = fr.read(real);
                fr.read(A);
                const AReal: [dom] real = A : real(64);
                var a: ndarray(rank,real) = new ndarray(AReal);
                fr.commit();
                return new dynamicTensor(a);
            } catch e : IO.UnexpectedEofError {
                IO.stderr.writeln(e);
                IO.stderr.writeln("Error reading from ", fr.getFile().path, " . Going to try read with 32 bit precision instead of ", precision);
                fr.revert();
                return dynamicTensor.readInPlace(fr,precision=32);
            }
        }
    }
    halt("Something bad happened.: " + r : string);
    return new dynamicTensor(real);
}





