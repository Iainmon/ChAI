

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


record reluOp {
    var input: shared BaseTensorResource(?);

    proc forward() {
        var output: ndarray(input.rank,input.eltType) = _relu(input.data);
        return output;
    }
    inline proc _relu(x) do
        return ((0.0 < x):input.eltType) * x;
}




record addOp {
    var lhs: shared BaseTensorResource(?);
    var rhs: shared BaseTensorResource(?);

    proc forward() do
        return new ndarray(lhs.data + rhs.data);
}

record subOp {
    var lhs: shared BaseTensorResource(?);
    var rhs: shared BaseTensorResource(?);

    proc forward() do
        return new ndarray(lhs.data - rhs.data);
}

record multOp {
    var lhs: shared BaseTensorResource(?);
    var rhs: shared BaseTensorResource(?);

    proc forward() do 
        return new ndarray(lhs.data * rhs.data);
}


record reshapeOp {
    var dom;
    var input: shared BaseTensorResource(?);

    proc forward() do
        return input.array.reshape(dom);
}

record permuteOp {
    var permutation; // tuple of ints
    var input: shared BaseTensorResource(?);

    proc forward() do
        return input.array.permute((...permutation));
}

