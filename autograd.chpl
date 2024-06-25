

use ndarray;
use remote;


class BaseTensorResource {
    param rank: int;
    type eltType = real(64);
    // Tensor resource interface
    proc forward() do halt("Forward function not defined for BaseTensorResource.");
    proc ndarrayData(): ndarray(rank,eltType) do halt("ndarray() no defined for base tensor resource.");
    // proc getRank() param : int { return -1; }
    // proc getEltType() type { return real(64); }
}

var defaultDevice = here;


class TensorResource : BaseTensorResource {
    // param rank: int;
    // type eltType = real(64);
    type operation;

    var operationData: operation;
    var resource: remote(ndarray(rank,eltType));

    forwarding operationData only to, access, device;

    // override proc getRank() param: int {
    //     return this.rank;
    // }
    // override proc getEltType() type {
    //     return this.eltType;
    // }

    proc init(param rank: int, type eltType, type operation) {
        super.init(rank,eltType);

        // super.rank = rank;
        // super.eltType = eltType;
        this.operation = operation;
    }

    proc init(param rank: int, type eltType, operationData: ?operation) {
        super.init(rank,eltType);
        // super.rank = rank;
        // super.eltType = eltType;
        this.operation = operation;
        this.operationData = operationData;
    }

    proc init(resource: remote(ndarray(?rank,?eltType)), operationData: ?operation, device: locale = defaultDevice) {
        this.init(rank,eltType,operationData);
        var res = new remote(resource.item.get(),device);
        this.resource = res;
    }

    // proc init(param rank: int, type eltType, operationData: ?operation, device: locale) {
    //     var res = new remote(ndarray(rank,eltType),device);
    //     this.init(res,operationData,device);
    //     init this;
    //     this.forward();
    // }

    proc init(data: ndarray(?rank,?eltType),operationData: ?operation, device: locale = defaultDevice) {
        this.init(rank,eltType,operationData);
        this.resource = new remote(data,device);
    }

    override proc forward() {
        if operationData.type != baseValue {
            on resource.device {
                ref data = resource.access();
                data = operationData.forward();
            }
        }
    }

    override proc ndarrayData() do return resource.access();
}

record baseValue {
    proc forward() do halt("Unimplemented baseValue forward.");
}

record addOp {
    var lhs: shared TensorResource;
    var rhs: shared TensorResource;

    // proc init(lhs: shared BaseTensorResource, rhs: shared BaseTensorResource) {
    //     this.lhs = lhs;
    //     this.rhs = rhs;
    // }

    proc forward() {
        ref A = lhs.resource.access();
        ref B = rhs.resource.access();
        return A.data + B.data;
    }
}

record tensor {
    forwarding var resource: shared BaseTensorResource;

    proc get(): shared TensorResource(?) {
        return try! resource : shared TensorResource;
    }
}

var arr1 = new ndarray([1.0, 1.0, 1.0]);
var arr2 = new ndarray([2.0, 2.0, 2.0]);

var input1 = new shared TensorResource(arr1,new baseValue());
var input2 = new shared TensorResource(arr2,new baseValue());
var op: addOp = new addOp(input1,input2);
var sum = new shared TensorResource(1,real(64), op);

var t1 = new tensor(input1);
var t2 = new tensor(input2);
var t3 = new tensor(sum);

writeln(t1);
writeln(t2);
writeln(t3.ndarrayData());

t3.forward();
writeln(t3.ndarrayData());
