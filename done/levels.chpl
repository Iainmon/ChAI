


record tensor {
    type eltType;
    param rank: int;
    var _domain: domain(rank,int);
    var data: [_domain] eltType;
}

record tensor (eltType,rank) {
    var _domain: domain(rank,int);
    var data: [_domain] eltType;
}





record tensor (eltType,rank) {
    var resource: owned Remote(ndarray(eltType,rank));
}

record ndarray {
    type eltType;
    param rank: int;
    var _domain: domain(rank,int);
    var data: [_domain] eltType;
}





record tensor (eltType,rank) {
    var opGraph: shared TensorResource(eltType,rank,?);
}

class TensorResource (eltType,rank) {
    type opType;
    var opData: opType;
    var resource: owned Remote(ndarray(eltType,rank));
}

record ndarray (eltType,rank) {
    var _domain: domain(rank,int);
    var data: [_domain] eltType;
}





record tensor (eltType,rank) {
    var opGraph: shared BaseTensorResource(eltType,rank);
}

class BaseTensorResource (eltType,rank) {
    var resource: owned Remote(ndarray(eltType,rank));
}

class TensorResource : BaseTensorResource (eltType,rank) {
    type opType;
    var opData: opType;
}

record ndarray (eltType,rank) {
    var _domain: domain(rank,int);
    var data: [_domain] eltType;
}










record dynamicTensor (eltType,rank) {
    var opGraph: shared BaseTensorResource(eltType,rank); }
// "record tensor" -> "record staticTensor"

record dynamicTensor (eltType) {
    var opGraph: shared DynamicTensorResource(eltType); }


class DynamicTensorResource {
    type eltType;
}

class BaseTensorResource : DynamicTensorResource {
    param rank: int;
    var resource: owned Remote(ndarray(eltType,rank));
}

class TensorResource : BaseTensorResource {
    type opType;
    var opData: opType;
}

record ndarray (eltType,rank) {
    var _domain: domain(rank,int);
    var data: [_domain] eltType;
}



// Convenient notation 



