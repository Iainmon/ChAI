
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
            // this.data = foreach (_,a) in zip(normalDomain,arr) do a;
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
        this.rank = rank;
        this.eltType = eltType;
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

    proc ref setData(arr: [] eltType) where arr.rank == rank do
        if arr.domain == _domain { data = arr; } else { this = arr; }

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
    }

    // This can optimized such that it doesn't use two heavy utility functions...
    proc reshape(newShape: int ...?newRank): ndarray(newRank,eltType) {
        const dom = util.domainFromShape((...newShape));
        return this.reshape(dom);
    }

    proc slice(args...) {
        const slc = data[(...args)];
        return new ndarray(slc);
    }

    proc permute(axes: int...rank) {
        const oldShape = data.shape;
        var oldShapeR = data.dims();

        var newShapeR: rank*range;
        for param i in 0..<rank {
            newShapeR(i) = data.dim(axes(i));
        }

        const newDom = {(...newShapeR)};
        var prm = new ndarray(newDom,eltType);
        const newShape = prm.shape;

        ref prmData = prm.data;

        foreach i in 0..<data.size {
            var oldIdx,newIdx: rank*int;
            for param j in 0..<rank {
                oldIdx(j) = i % oldShape(j);
                newIdx(j) = i % newShape(j);
            }
            prmData[newIdx] = data[oldIdx];
        }

        return prm;
    }

    proc expand(axes: int...rank) {
        const shape = data.domain.shape;
        const oldRanges = data.dims();
        var newRanges: rank*range = oldRanges;
        for param i in 0..<rank {
            const axis = axes(i);
            const ds = shape(i);
            if axis != ds {
                if ds == 1 {
                    newRanges(i) = 0..<axis;
                } else {
                    halt("Cannot expand an axis that is not 1.");
                }
            } else {
                newRanges(i) = oldRanges(i);
            }
        }
        const dom = util.domainFromShape((...axes));
        var expanded = new ndarray(dom,eltType);

        const oldShape = shape;
        const newShape = dom.shape;
        
        ref expandedData = expanded.data;

        foreach idx in expandedData.domain {
            var origIdx = idx;
            for param i in 0..<rank {
                if oldShape(i) == 1 then origIdx(i) = 0;
            }
            expandedData[idx] = data[origIdx];
        }
        // expanded.data[(...newRanges)] = data[(...oldRanges)];
        return expanded;
    }

    proc sum(withAxesMask: rank*int): ndarray(rank,eltType) {
        return this;
    }

    proc squeeze(param newRank: int): ndarray(newRank,eltType) where newRank < rank {
        // I think this will work: (a member of the chapel team needs to review this) 
        // I suspect heavy performance hits will happen when running this on CUDA. 
        const oldShape = this.shape;
        var newShape: newRank*int;
        var offset: int = 0;
        for param i in 0..<rank {
            if oldShape(i + offset) == 1 {
                offset -= 1;
            } else {
                newShape(i) = oldShape(i + offset);
            }
        }
        return this.reshape((...newShape));
    }

    proc populateRemote(ref re: remote(ndarray(rank,eltType))): remote(ndarray(rank,eltType)) {
        if here == re.device {
            re.access()._domain = this.domain;
            re.access().data = data;
        } else {
            // on re.device var meData = data;
            on re.device {
                re.access()._domain = this.domain;
                re.access().data = data;
            }
        }
        return re;
    }

    proc toRemote(): remote(ndarray(rank,eltType)) {
        var re = new remote(ndarray(rank,eltType));
        this.populateRemote(re);
        return re;
    }
}



operator =(ref lhs: ndarray(?rank,?eltType), rhs: ndarray(rank,eltType)) {
    lhs._domain = rhs._domain;
    lhs.data = rhs.data;
}

operator =(ref lhs: ndarray(?rank,?eltType), rhs: [?d] eltType) where d.rank == rank {
    lhs.reshapeDomain(d);
    lhs.data = rhs;
}

operator :(val: [] ?eltType, type t: ndarray(val.rank,eltType)) {
    return new ndarray(val);
}

proc remote.init(ref other: ndarray(?rank,?eltType)) {
    this.init(ndarray(rank,eltType));
    other.populateRemote(this);
}

proc remote.init=(ref other: ndarray(?rank,?eltType)) {
    this.init(ndarray(rank,eltType));
    other.populateRemote(this);
}



operator =(ref lhs: remote(ndarray(?rank,?eltType)), rhs: ndarray(rank,eltType)) {
    rhs.populateRemote(lhs);
}

operator :(val: ndarray(?rank,?eltType), type t: remote(ndarray(rank,eltType))) {
    return val.toRemote();
}

proc remote.init(ref other: remote(ndarray(?rank,?eltType))) {
    this.eltType = ndarray(rank,eltType);
    this.remoteResource = other.remoteResource;
}

proc remote.init=(ref other: remote(ndarray(?rank,?eltType))) {
    this.eltType = ndarray(rank,eltType);
    this.remoteResource = other.remoteResource;
}

operator =(ref lhs: remote(ndarray(?rank,?eltType)), rhs:remote( ndarray(rank,eltType))) {
    lhs.remoteResource = rhs.remoteResource;
}


class _tensor_resource {
    param rank: int;
    type eltType = real(64);
    var data: remote(ndarray(rank,eltType));


}

// const dom = util.emptyDomain(2);
// writeln(dom);

// printType(ndarray(1));
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

// var A: ndarray(1) = [1.0,2.0,3.0];
// writeln(A);

// var B: ndarray(1) = new ndarray([1.0,2.0,3.0]);
// // B = [1.0,2.0,3.0];

// writeln(B.domain);

// var C: ndarray(2) = new ndarray({0..#3,0..#5});
// var c = 0;
// for i in C.domain {
//     C.data[i] = c;
//     c += 1;
// }
// writeln(C);

// C = C.reshape({0..#5,0..#3});
// writeln(C);

// writeln(C[0,0]);

// C[0,0] = 70.0;

// var D = C[{0..1,0..1}];

// C[{0..1,0..1}]=2.0;


// writeln(D,D.type:string);
// writeln(C,C.type:string);

// var E = C.slice(1,..);
// writeln(E);


// type T = (int,real);
// writeln(T:string,isTupleType(T));
