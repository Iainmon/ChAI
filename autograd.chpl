

use ndarray;
use remote;


class BaseTensorResource {
    param rank: int;
    type eltType = real(64);
    var resource: remote(ndarray(rank,eltType));
    forwarding resource only to, access, device;



    // Tensor resource interface
    proc forward() do halt("Forward function not defined for BaseTensorResource.");
    proc array ref : ndarray(rank,eltType) do
        return resource.access();
    proc data ref : [] eltType do
        return resource.access().data;
}

var defaultDevice = here;


class TensorResource : BaseTensorResource(?) {
    type operation;

    var operationData: operation;

    proc init(param rank: int, type eltType, type operation) {
        super.init(rank,eltType);
        this.operation = operation;
    }

    proc init(param rank: int, type eltType, operationData: ?operation) {
        super.init(rank,eltType);
        this.operation = operation;
        this.operationData = operationData;
    }

    proc init(ref resource: remote(ndarray(?rank,?eltType)), operationData: ?operation, device: locale = defaultDevice) {
        var res = new remote(resource.access(),device);
        super.init(rank,eltType,res);
        this.operation = operation;
        this.operationData = operationData;
    }

    // proc init(param rank: int, type eltType, operationData: ?operation, device: locale) {
    //     var res = new remote(ndarray(rank,eltType),device);
    //     this.init(res,operationData,device);
    //     init this;
    //     this.forward();
    // }

    proc init(data: ndarray(?rank,?eltType),operationData: ?operation, device: locale = defaultDevice) {
        this.init(new remote(data,device),operationData);
    }

    override proc forward() {
        if operationData.type != baseValue {
            on resource.device {
                ref data = resource.access();
                data = operationData.forward();
            }
        }
    }
}




// Operations

record baseValue {
    proc forward() do halt("Unimplemented baseValue forward.");
}

record addOp {
    var lhs: shared BaseTensorResource;
    var rhs: shared BaseTensorResource;

    proc forward() do
        return new ndarray(lhs.data + rhs.data);
}

// record subOp {
//     var lhs: shared BaseTensorResource;
//     var rhs: shared BaseTensorResource;

//     proc forward() do
//         return new ndarray(lhs.data - rhs.data);
// }

// record multOp {
//     var lhs: shared BaseTensorResource;
//     var rhs: shared BaseTensorResource;

//     proc forward() do
//         return new ndarray(lhs.data * rhs.data);
// }





record tensor {
    param rank: int;
    type eltType = real(64);
    forwarding var resource: shared BaseTensorResource;

    proc init(param rank: int, type eltType = real(64)) {
        this.rank = rank;
        this.eltType = eltType;
        this.resource = new shared TensorResource(rank,eltType,baseValue);
    }

    proc init(resource: shared BaseTensorResource(?rank,?eltType)) {
        this.rank = rank;
        this.eltType = eltType;
        this.resource = resource;
    }
}

operator +(ref a: tensor(?rank,?eltType), ref b: tensor(rank,eltType)) {
    var atr = a.resource;
    var btr = b.resource;
    var ctx = new addOp(atr,btr);
    var sumtr = new shared TensorResource(rank,eltType,ctx);
    sumtr.forward();
    return new tensor(sumtr);
}


var arr1 = new ndarray([1.0, 1.0, 1.0]);
var arr2 = new ndarray([2.0, 2.0, 2.0]);

var input1 = new shared TensorResource(arr1,new baseValue());
var input2 = new shared TensorResource(arr2,new baseValue());
var sum = new shared TensorResource(1,real(64), new addOp(input1,input2));

var t1 = new tensor(input1);
var t2 = new tensor(input2);
var t3 = new tensor(sum);

writeln(t1);
writeln(t2);
writeln(t3.array);

t3.forward();
writeln(t3.array);

writeln(t3.type:string);

var t4 = t1 + t2;
writeln(t1.data);
