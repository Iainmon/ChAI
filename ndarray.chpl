
import ChapelArray;
use remote;

import Utilities as util;

use Reflection;
proc printType(type t) {
    param nfs = getNumFields(t);
    for param i in 0..#nfs {
        writeln(t:string, ".", getFieldName(t,i):string);
    }
}

record ndarray {
    param rank: int;
    type eltType = real(64);
    var _domain: domain(rank,int) = util.emptyDomain(rank);
    var data: [_domain] eltType;
    // forwarding data except _dom;
    // proc _dom do return this._domain;
    forwarding data;

    proc init(param rank: int, type eltType = real(64)) {
        this.rank = rank;
        this.eltType = eltType;
    }

    proc init(dom: ?t,type eltType = real(64)) where isDomainType(t) {
        this.init(dom.rank,eltType);
        this._domain = util.normalizeDomain(dom);
    }

    proc init(arr: [] ?eltType) {
        const normalDomain = util.normalizeDomain(arr.domain);
        this.init(normalDomain, arr.eltType);
        if normalDomain == arr.domain {
            this.data = arr;
        } else {
            this.data = foreach (_,a) in zip(normalDomain,arr) do a;
        }
    }

    proc init(A: ndarray(?rank,?eltType)) {
        this.init(rank,eltType);
        this._domain = A._domain;
        this.data = A.data;
    }

    proc init(unknown: ?t) do
        this.init(util.normalizeArray(unknown));

    proc init=(other: [] ?eltType) do
        this.init(other);

    proc init=(other: ndarray(?rank,?eltType)) {
        this.init(rank,eltType);
        this._domain = other._domain;
        this.data = other.data;
    }

    proc reshapeDomain(dom: this.domain.type) do
        this._domain = dom;

    proc reshape(dom: domain(rank,int)) {
        const normalDomain = util.normalizeDomain(dom);
        var arr = new ndarray(normalDomain,this.eltType);
        arr.data = foreach (_,a) in zip(arr.domain,this.data) do a;
        return arr;
    }
}

operator =(ref lhs: ndarray(?rank,?eltType), rhs: ndarray(rank,eltType)) {
    lhs._domain = rhs._domain;
    lhs.data = rhs.data;
}

operator :(val: [] ?eltType, type t: ndarray(val.rank,eltType)) {
    return new ndarray(val);
}


class tensor_resource {
    param rank: int;
    type eltType = real(64);
    var data: ndarray;

}

const dom = util.emptyDomain(2);
writeln(dom);

printType(ndarray(1));
// var A: ndarray(1);
// A._domain = {0..#3};
// // A.data = [1.0,2.0,3.0];
// A = [1.0,2.0,3.0];
// writeln(A);

// use GpuDiagnostics;

// startGpuDiagnostics();
// startVerboseGpu();

// var device = here.gpus[0];

// on device {
//     var arr = [1.0,2.0,3.0];

//     var A: ndarray(1) = arr;
//     writeln("A -> ",A);

//     var B: ndarray(1) = new ndarray(arr);
//     // B = [1.0,2.0,3.0];

//     writeln("B -> ",B.domain);

//     var dom = {0..#3,0..#5};

//     var C: ndarray(2) = new ndarray(dom);
//     writeln("C -> ",C);
// }

var A: ndarray(1) = [1.0,2.0,3.0];
writeln(A);

var B: ndarray(1) = new ndarray([1.0,2.0,3.0]);
// B = [1.0,2.0,3.0];

writeln(B.domain);

var C: ndarray(2) = new ndarray({0..#3,0..#5});
var c = 0;
for i in C.domain {
    C.data[i] = c;
    c += 1;
}
writeln(C);

C = C.reshape({0..#5,0..#3});
writeln(C);

writeln(C[0,0]);