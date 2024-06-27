

use ndarray;
use remote;
use autograd;










record tensor {
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

proc tensorFromCtx(param rank: int, type eltType, ctx): tensor(rank,eltType) {
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


config const n = 100;
config const diag = false;
config const size = 10;

if diag {
    use GpuDiagnostics;

    startGpuDiagnostics();
    startVerboseGpu();
}




var arr1 = new ndarray({0..size,0..size,0..size});
var arr2 = new ndarray({0..size,0..size,0..size});

var t1 = new tensor(arr1);
var t2 = new tensor(arr2);
var t3 = t1 + t2;
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



