

use ndarray;
use remote;

import Utilities as util;


class BaseTensorResource {
    param rank: int;
    type eltType = real(64);
    var dataResource: remote(ndarray(rank,eltType));
    var gradResource: remote(ndarray(rank,eltType));
    // forwarding resource only to, access, device;

    proc to(device_: locale) {
        dataResource.to(device_);
        gradResource.to(device_);
    }

    proc device : locale {
        if dataResource.device != gradResource.device then halt("data resource and grad resource devices do not match. ");
        return dataResource.device;
    }



    // Tensor resource interface
    proc forward() do halt("Forward function not defined for BaseTensorResource.");
    proc backward(grad: remote(ndarray(rank,eltType)), param alreadyPopulated = false) do halt("Backward function not defined for BaseTensorResource.");
    proc backward() where rank == 1 do halt("Backward function not defined for BaseTensorResource.");

    proc array ref : ndarray(rank,eltType) do
        return dataResource.access();
    proc data ref : [] eltType do
        return dataResource.access().data;
    proc grad ref : ndarray(rank,eltType) do
        return gradResource.access();
    proc gradData ref : ndarray(rank,eltType) do
        return gradResource.access().data;

    proc _loc do return device;

    
}


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

    proc init(ref resource: remote(ndarray(?rank,?eltType)), operationData: ?operation, device_: locale = defaultDevice) {
        resource.to(device_);
        var dataRes = resource;
        var gradRes = resource.copy();
        super.init(rank,eltType,dataRes,gradRes);
        this.operation = operation;
        this.operationData = operationData;
    }

    // proc init(param rank: int, type eltType, operationData: ?operation, device: locale) {
    //     var res = new remote(ndarray(rank,eltType),device);
    //     this.init(res,operationData,device);
    //     init this;
    //     this.forward();
    // }

    proc init(data: ndarray(?rank,?eltType),operationData: ?operation, device_: locale = defaultDevice) {
        var res = data.toRemote();
        res.to(device_);
        this.init(res,operationData);
    }

    override proc forward() {
        if operationData.type != baseValue {
            on dataResource.device {
                // ref data = dataResource.access().data;
                // data = operationData.forward();
                dataResource = operationData.forward();
            }
        }
    }

    override proc backward(grad: remote(ndarray(rank,eltType)), param alreadyPopulated: bool = false) {
        if operationData.type == baseValue then return;

        var childrenRefs = operationData.children;

        grad.to(device);
        on device {
            ref myGradData = gradResource.access().data;
            const gArr = gradResource.access();
            if !alreadyPopulated {
                ref gData = gArr.data;
                myGradData += gData; // This is likely to fail if there is a shape mismatch.
            }
            const childGrads = operationData.backward(gArr);
            for param i in 0..<childrenRefs.size do
                childrenRefs(i).grad = childGrads(i);
        }

        for param i in 0..<childrenRefs.size do
            childrenRefs(i).backward(childrenRefs(i).gradResource,alreadyPopulated = true);
    }

    override proc backward() where rank == 1 {
        if array.shape.size == 1 {
            backward(dataResource);
        } else {
            halt("Trying to default backpropagate tensor of higher shape than 1.");
        }
    }

}




// Operations

record baseValue {
    proc forward() do halt("Unimplemented baseValue forward.");
    proc children do return (false,);
}


record reluOp {
    var input: shared BaseTensorResource(?);

    proc children do return (input,);

    proc forward() {
        var output: ndarray(input.rank,input.eltType) = _relu(input.data);
        return output;
    }
    inline proc _relu(x) do
        return ((0.0 < x):input.eltType) * x;
}




record addOp {
    param rank: int;
    type eltType;
    var lhs: shared BaseTensorResource(rank,eltType);
    var rhs: shared BaseTensorResource(rank,eltType);

    proc children do return (lhs,rhs);

    // proc forward() do
    //     return new ndarray(lhs.data + rhs.data);
    proc forward(): ndarray(rank,eltType) {
        var sum = new ndarray(rank,eltType);
        ref a = lhs.array;
        ref b = rhs.array;

        const newDom = a._domain;
        sum.reshapeDomain(a._domain);
        ref sumData = sum.data;
        ref aData = a.data;
        ref bData = b.data;
        foreach i in newDom do
            sumData[i] = aData[i] + bData[i];
        // sumData = aData + bData;
        return sum;
    }

    proc backward(grad: ndarray(rank,eltType)): (ndarray(rank,eltType),ndarray(rank,eltType)) do
        return (grad,grad);
}



record subOp {
    var lhs: shared BaseTensorResource(?);
    var rhs: shared BaseTensorResource(?);

    proc forward() do
        return new ndarray(lhs.data - rhs.data);
    
}

record multOp {
    param rank: int;
    type eltType;
    var lhs: shared BaseTensorResource(rank,eltType);
    var rhs: shared BaseTensorResource(rank,eltType);

    proc children do return (lhs,rhs);

    proc forward() do 
        return new ndarray(lhs.data * rhs.data);

    proc backward(grad: ndarray(rank,eltType)): (ndarray(rank,eltType),ndarray(rank,eltType)) {
        ref G = grad.data;
        ref A = lhs.data;
        ref B = rhs.data;

        return (new ndarray(B * G),new ndarray(A * G));
    }
}


record reshapeOp {
    var dom;
    var input: shared BaseTensorResource(?);

    proc children do return (input,);


    proc forward() do
        return input.array.reshape(dom);
    
    proc backward(grad: ndarray(dom.rank,input.eltType)): (ndarray(input.rank,input.eltType),) {
        const inputDom = input.array.domain;
        return grad.reshape(inputDom);
    }
}

record permuteOp {
    param rank: int;
    type eltType = real;
    var permutation; // tuple of ints
    var input: shared BaseTensorResource(rank,eltType);

    proc children do return (input,);


    proc forward() do
        return input.array.permute((...permutation));
    
    proc backward(grad: ndarray(rank,eltType)): (ndarray(rank,eltType),) {
        const inversePermutation = util.argsort((...permutation)); // This should be computed only once, in the initializer. 
        return (grad.permute((...inversePermutation)),);
    } 
}


record expandOp {
    param rank: int;
    type eltType = real;
    var expandedShape: rank*int; // tuple of ints
    var input: shared BaseTensorResource(rank,eltType);

    proc children do return (input,);

    // proc init(param rank: int, type eltType, )

    proc forward() {
        return input.array.expand((...expandedShape));
    }
    
    proc backward(grad: ndarray(rank,eltType)): (ndarray(rank,eltType),) {
        const inputShape = input.array.shape;
        var expandedAxesMask: rank*int;
        for param i in 0..<rank {
            expandedAxesMask(i) = if expandedShape != inputShape then 1 else 0;
        }
        const g = grad.sumAxesMask(withMask=expandedAxesMask).squeeze(rank);
        return (g,);
    } 


}

record sumOp {
    param rank: int;
    type eltType = real;
    param newRank: int;
    var axes: newRank * int; // tuple of ints
    var input: shared BaseTensorResource(rank,eltType);

    proc children do return (input,);

    // proc init(param rank: int, type eltType, )

    proc forward() {
        param newDim = rank - newRank;
        if newDim == 0 {
            if rank == 1 {
                return input.array.sum(0);
            }
            return input.array.sum((...axes)).squeeze(1);
        }
        return input.array.sum((...axes)).squeeze(newDim);
    }
    proc backward(grad): (ndarray(rank,eltType),) {
        return (input.array,);
    }
    // proc backward(grad: ndarray(rank - newRank,eltType)): (ndarray(rank,eltType),) {
    //     return (grad.reshape(input.domain),);
    // } 


}