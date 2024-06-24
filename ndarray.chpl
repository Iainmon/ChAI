
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

    proc init(type eltType = real(64), shape: int ...?rank) {
        const dom = util.domainFromShape(shape);
        this.init(dom,eltType);
    }

    proc init(arr: [] ?eltType) {
        const arrDom = arr.domain;
        const normalDomain = util.normalizeDomain(arrDom);
        this.init(normalDomain,eltType);
        if normalDomain == arrDom {
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

    proc init(unknown: ?t) where !isDomainType(t) {
        const arr = unknown;
        const normalArr = util.normalizeArray(arr);
        this.init(normalArr);
    }

    proc init=(other: [] ?eltType) do
        this.init(other);

    proc init=(other: ndarray(?rank,?eltType)) {
        this.init(rank,eltType);
        this._domain = other._domain;
        this.data = other.data;
    }
    // proc ref this(d: _domain.type) ref {
    //     return data.this(d);
    // }
    // proc this(d: _domain.type) const {
    //     return data.this(d);
    // }
    // proc const ref this(d: _domain.type) out {
    //     const dat = data[d];
    //     return new ndarray(dat);
    // }
    proc ref this(args: int...rank) ref {
        return data.this((...args));
    }
    // proc this(args...rank) out {
    //     return new ndarray(data[(...args)]);
    // }

    // proc const this(args...) const ref {
    //     return data.this((...args));
    // }

    // pragma "no promotion when by ref"
    // pragma "reference to const when const this"
    // pragma "removable array access"
    // pragma "alias scope from this"
    // proc ref this(const args...?n) ref do
    //     return data.this((...args));

    // pragma "alias scope from this"
    // proc const this(const args...?n) where shouldReturnRvalueByValue(data.eltType) {
    //     return data.this((...args));
    // }

    // pragma "alias scope from this"
    // proc const this(const args...?n) const ref {
    //     return data.this((...args));
    // }

    proc ref reshapeDomain(dom: _domain.type) do
        _domain = dom;

    proc reshape(dom: domain): ndarray(dom.rank,eltType) where dom.idxType == int {
        param _rank: int = dom.rank;
        const normalDomain = util.normalizeDomain(dom);
        if rank == _rank {
            var me = new ndarray(this);
            me.reshapeDomain(normalDomain);
            return me;
        } else {
            var arr = new ndarray(normalDomain,eltType);
            arr.data = foreach (_,a) in zip(normalDomain,data) do a;
            return arr;
        }
        // alternative. less copying?
        // var arr = new ndarray(normalDomain,eltType);
        // arr.data = foreach (_,a) in zip(normalDomain,data) do a;
        // return arr;
    }

    proc slice(args...) {
        const slc = data[(...args)];
        return new ndarray(slc);
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

C[0,0] = 70.0;

var D = C[{0..1,0..1}];
C[{0..1,0..1}]=2.0;
writeln(D,D.type:string);
writeln(C,C.type:string);

var E = C.slice(1,..);
writeln(E);


