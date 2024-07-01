

use ndarray;
use remote;
use autograd;
import Utilities as util;









record tensor : writeSerializable {
    param rank: int;
    type eltType = real(64);
    var resource: shared BaseTensorResource(?);
    forwarding resource only to, array, grad, device;

    proc meta do return this.resource;

    proc init(param rank: int, type eltType = real(64)) {
        this.rank = rank;
        this.eltType = eltType;
        this.resource = new shared TensorResource(rank,eltType,baseValue);
    }

    proc init(resource: shared BaseTensorResource(?rank,?eltType), param strict: bool = false) {
        this.rank = rank;
        this.eltType = eltType;
        this.resource = resource;
        if strict then resource.forward();
    }

    proc init(nda: ndarray(?rank,?eltType)) {
        this.rank = rank;
        this.eltType = eltType;
        this.resource = new shared TensorResource(nda,new baseValue());
    }
}

proc tensorFromCtx(param rank: int, type eltType, ctx): tensor(rank,eltType,?) {
    var newMeta = new shared TensorResource(rank,eltType,ctx);
    return new tensor(newMeta, strict = true);
}


operator +(a: tensor(?rank,?eltType), b: tensor(rank,eltType)) {
    var ctx = new addOp(rank,eltType,a.meta,b.meta);
    var newMeta = new shared TensorResource(rank,eltType,ctx);
    return new tensor(newMeta, strict = true);
}

operator -(ref a: tensor(?rank,?eltType), ref b: tensor(rank,eltType)) {
    var ctx = new subOp(a.meta,b.meta);
    var newMeta = new shared TensorResource(rank,eltType,ctx);
    return new tensor(newMeta, strict = true);
}

operator *(ref a: tensor(?rank,?eltType), ref b: tensor(rank,eltType)) {
    var ctx = new multOp(rank,eltType,a.meta,b.meta);
    return tensorFromCtx(rank,eltType,ctx);
}

proc tensor.reshape(dom: domain(?)) where dom.idxType == int {
    param newRank = dom.rank;
    var ctx = new reshapeOp(dom,meta);
    return tensorFromCtx(newRank,eltType,ctx);
}

proc tensor.relu() {
    var ctx = new reluOp(meta);
    return tensorFromCtx(rank,eltType,ctx);
}

proc tensor.permute(axes: int...rank) {
    var ctx = new permuteOp(rank,eltType,axes,meta);
    return tensorFromCtx(rank,eltType,ctx);
}

proc tensor.expand(axes: int...rank) {
    var ctx = new expandOp(rank,eltType,axes,meta);
    return tensorFromCtx(rank,eltType,ctx);
}

proc tensor.sum(axes: int...?r) {
    if rank - r < 0 {
        compilerError("Cannot sum more axes than rank. ");
    }
    var ctx = new sumOp(rank,eltType,r,axes,meta);

    param newDim = if rank - r == 0 then 1 else rank - r;
    return tensorFromCtx(newDim,eltType,ctx);
}

proc arange(to: int,type eltType = real(64),shape: ?rank*int): ndarray(rank,eltType) {
    const dom = util.domainFromShape((...shape));
    const A: [dom] eltType = foreach (_,x) in zip(dom,0..<to) do x:eltType;
    const arr: ndarray(rank,eltType) = A;
    return arr;
}


config const n = 100;
config const diag = false;
config const size = 3;

if diag {
    use GpuDiagnostics;

    startGpuDiagnostics();
    startVerboseGpu();
}

// arange(15,real,(3,5));

// var t = new tensor(2,real);
// t.array.reshapeDomain({0..<3,0..<5});
// t.to(here.gpus[0]);
// on t.device {
//     ref tarr = t.array;
//     ref tdata = tarr.data;
//     // tdata += 1.0;
//     // foreach i in tdata.domain do
//     //     tdata[i] = tdata[i] + 1.0;
//     // tdata = foreach x in tdata do x + 1.0; // causes grained kernel launches 
//     foreach i in tarr.data.domain do
//         tdata[i] = tarr.data[i] + 1.0;
// }

// const ar = arange(15,real,(3,5));
// var t = new tensor(ar);
// t.to(here.gpus[0]);
// // writeln(ar.data.locale);
// // writeln(t.array.data.locale);
// on t.device {
//     ref tarr = t.array;
//     ref tData = tarr.data;
//     var res = t.meta.dataResource;
// }

// var a = new tensor(arange(15,real,(3,5)));
// var b = new tensor(arange(15,real,(3,5)));
// writeln(a.array.data.locale,b.array.data.locale);
const ar: ndarray(2,real) = arange(15,real,(3,5));
var a = new remote(ar);
var b = new remote(ar);
writeln(a.access().data.locale,b.access().data.locale);

var c = a + b;


// var arr1 = new ndarray({0..size,0..size,0..size});
// var arr2 = new ndarray({0..size,0..size,0..size});

// var t1 = new tensor(arr1);
// var t2 = new tensor(arr2);

// var t1 = new tensor(3,real);
// var t2 = new tensor(3,real);
// t1.array.reshapeDomain({0..size,0..size,0..size});
// t2.array.reshapeDomain({0..size,0..size,0..size});
// var t3 = t1 + t2;
// writeln(t3.array);

// var t4 = t3.sum(0,1);
// writeln(t4.array);

// writeln("-----------------------------");

// var t = new tensor(2,real);
// t.array.reshapeDomain({0..<3,0..<5});
// for (i,n) in zip(t.array.domain,0..<15) do
//     t.array.data[i] = n;
// writeln(t.array.data,"\n -------------- ");

// var u = t.sum(0);
// writeln(u.array);

// var w = u.sum(0);
// writeln(w.array);

// var x = t.sum(1).sum(0);
// writeln(x.array);

// var y = (t + t).sum(0,1);
// writeln(y);
// writeln(y);


// writeln(t.grad);

// y.resource.backward();

// writeln(t.grad);

// y.resource.backward();
// writeln(t);

// var z = arange(15,real,(3,5));
// writeln(z);

// var T = new tensor(z);

// var s = (T * T).sum(0,1);
// writeln(s);
// s.resource.backward();
// writeln(T.grad);

// var X = X.expand();
// for i in 0..n {
//     t3 = t3 + t1 + t2;
// }



// var input1 = new shared TensorResource(arr1,new baseValue());
// var input2 = new shared TensorResource(arr2,new baseValue());
// var sum = new shared TensorResource(1,real(64), new addOp(1,real,input1,input2));

// var t1 = new tensor(input1);
// var t2 = new tensor(input2);
// var t3 = new tensor(sum);

// writeln(t1);
// writeln(t2);
// writeln(t3.array);

// t3.forward();
// writeln(t3.array);

// writeln(t3.type:string);

// var t4 = t1 + t2;
// writeln(t1.data);

// // writeln((t1 * t2).data);

// var x = (t1 * t2).reshape({0..1});


// writeln(x.array);

// var rl = (t2 * t1).relu();
// writeln(rl.array);

// var matInput = for (i,j) in {0..<2,0..<3} do arr1[i] * arr2[j];

// var mat = new tensor(new ndarray(matInput));
// writeln(mat.array.shape,mat.array);

// var prm = mat.permute(1,0);
// writeln(prm.array.shape,prm.array);

// writeln((t4.meta : shared TensorResource(1,real,addOp(1,real))).operationData.backward(t4.array));

// var mInput = for (i,j) in {0..<3,0..<1} do i * 10.0 + j + 1;
// var m = new ndarray(mInput);
// writeln(m.data,m.shape);
// var mExpanded = m.expand(3,4);
// writeln(mExpanded.data,mExpanded.shape);










import IO;
proc tensor.serialize(writer: IO.fileWriter(locking=false, IO.defaultSerializer),ref serializer: IO.defaultSerializer) {
    // const name = "ndarray(" + rank:string + "," + eltType:string + ")";
    // var ser = serializer.startRecord(writer,name,2);
    // ser.writeField("shape",this.data.shape);
    // // var serArr = ser.startArray();
    // ser.writeField("data",this.data);
    // ser.endRecord();


    writer.write("tensor(");
    const shape = this.array.shape;
    var first: bool = true;
    for (x,i) in zip(this.array.data,0..) {
        const idx = util.nbase(shape,i);
        if idx[rank - 1] == 0 {
            if !first {
                writer.write("\n       ");
            }
            writer.write("[");
        }
        writer.writef("%{##.#}",x);
        
        if idx[rank - 1] < shape[rank - 1] - 1 {
            if rank == 1 then
                writer.write("  ");
            else
                writer.write("  ");
        } else {
            writer.write("]");
        }
        first = false;
    }
    writer.write(",\n       shape = ",this.array.data.shape);
    writer.write(",\n       rank = ",this.rank);
    writer.writeln(")");
}