


proc sum_dim(A: [] real, param axis: int) {

    const dims = A.domain.dims();
    // const dimsRange = dims.inices;

    const sumAxis = dims(axis);

    var newDims = dims;
    newDims(axis) = 0..<1;

    const newDomain = {(...newDims)};
    var B: [newDomain] real;
    foreach idx in newDomain {
        var origIdx = idx;

        var sum: real = 0;
        for i in sumAxis {
            origIdx(axis) = i;
            
            sum += A[origIdx];
        }
        B[idx] = sum;
    }
    return B;
}

proc removeTupleIdx(type eltType,param rank: int, tup: rank*eltType, i: int) {
    param newRank: int = rank - 1;
    var newTup: newRank*eltType;
    var offset = 0;
    for param j in 0..<rank {
        if j != i {
            newTup(j + offset) = tup(j);
        } else {
            offset = -1;
        }
    }
    return newTup;
}

proc sum_dim_contract(A: [] real, param axis: int) {

    param rank: int = A.rank;
    param newRank: int = A.rank - 1;

    const dims = A.domain.dims();
    // const dimsRange = dims.inices;
    var newDims: newRank*range = removeTupleIdx(range,A.rank,dims,axis);
    // newDims(0..<axis) = dims(0..<axis);
    // newDims()
    // newDims(axis) = 0..<1;

    const sumAxis = dims(axis);

    var blankR: rank*range;
    for param i in 0..<newRank do
        blankR(i) = newDims(i);
    blankR(newRank) = A.domain.dim(axis);

    const newDomain = {(...newDims)};
    var B: [newDomain] real;
    foreach idx in newDomain {
        var origIdx: newRank * int;
        if idx.type == int {
            origIdx(0) = idx;
        }
        var sumR = blankR;
        for param i in 0..<newRank {
            const n = origIdx(i);
            sumR(i) = n..n;
        }
        sumR(newRank) = sumR(axis);
        sumR(axis) = blankR(newRank);
        const sumDom = {(...sumR)};
        var sum: real = 0;
        for i in sumDom {
            sum += A[i];
        }
        B[idx] = sum;
    }
    return B;
}

const D = {0..<3,0..<5};
var M: [D] real;
for (i,n) in zip(D,0..<15) do
    M[i] = n;

writeln(M);

var K = sum_dim(M,axis = 0);
writeln(K);



var J = sum_dim_contract(M,axis = 0);
writeln(J);

