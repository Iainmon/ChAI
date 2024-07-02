
import ChapelArray;
import IO;
use remote;

import Utilities as util;

use Reflection;
proc printType(type t) {
    param nfs = getNumFields(t);
    for param i in 0..#nfs {
        writeln(t:string, ".", getFieldName(t,i):string);
    }
}

type remote_ndarray = remote(ndarray(?,?));

record ndarray : writeSerializable {
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

    proc init(arr: [] ?eltType, param isNormal: bool) {
        this.rank = arr.rank;
        this.eltType = eltType;
        this._domain = arr.domain;
        this.data = arr;
    }

    proc init(A: ndarray(?rank,?eltType)) {
        this.init(rank,eltType);
        this._domain = A._domain;
        this.data = A.data;
    }

    proc init(it: _iteratorRecord) {
        const arr = it;
        this.init(arr,isNormal = true);
    }

    // proc init(unknown: ?t) where !isDomainType(t) {
    //     const arr = unknown;
    //     const normalArr = util.normalizeArray(arr);
    //     this.init(normalArr);
    // }

    proc init=(other: [] ?eltType) {
        // this.init(other); // less efficient
        this.init(other,isNormal = true);
    }

    proc init=(other: ndarray(?rank,?eltType)) {
        this.rank = rank;
        this.eltType = eltType;
        this._domain = other._domain;
        this.data = other.data;
    }

    proc init=(other: _iteratorRecord) {
        this.init(other);
    }
    
    // proc init=(dom: domain(rank,int)) {
    //     this._domain = dom;
    // }


    proc ref this(args: int...rank) ref {
        return data.this((...args));
    }

    proc ref setData(arr: [] eltType) where arr.rank == rank do
        if arr.domain == _domain { data = arr; } else { this = arr; }

    proc ref reshapeDomain(dom: _domain.type) do
        _domain = dom;

    proc reshape(dom: domain(?)): ndarray(rank,eltType) where dom.rank == rank {
        const normalDomain = util.normalizeDomain(dom);
        var me: ndarray(rank,eltType);
        me = this;
        me.reshapeDomain(normalDomain);
        return me;
    }
    proc reshape(dom: domain(?)): ndarray(dom.rank,eltType) where dom.rank != rank {
        param _rank: int = dom.rank;
        const normalDomain = util.normalizeDomain(dom);
        var arr: ndarray(_rank,eltType);
        arr.reshapeDomain(normalDomain);
        arr.data = foreach (_,a) in zip(normalDomain,data) do a;
        return arr;
    }


    // This can optimized such that it doesn't use two heavy utility functions...
    proc reshape(newShape: int ...?newRank): ndarray(newRank,eltType) {
        const normalDomain = util.domainFromShape((...newShape));
        var arr: ndarray(newRank,eltType);
        arr.reshapeDomain(normalDomain);
        ref arrData = arr.data;
        arr.data = foreach (_,a) in zip(normalDomain,data) do a;
        return arr;
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
        // const dom = util.domainFromShape((...axes));
        const dom = {(...newRanges)};
        var expanded = new ndarray(dom,eltType);

        const oldShape = shape;
        const newShape = dom.shape;
        
        ref expandedData = expanded.data;

        foreach idx in expandedData.domain {
            var origIdx: rank * int;
            if idx.type == int {
                origIdx(0) = idx;
            } else {
                origIdx = idx;
            }
            for param i in 0..<rank {
                if oldShape(i) == 1 then origIdx(i) = 0;
            }
            expandedData[idx] = data[origIdx];
        }
        // expanded.data[(...newRanges)] = data[(...oldRanges)];
        return expanded;
    }


    proc ref sumOneAxis(axis: int): ndarray(rank,eltType) {
        const dims = this.domain.dims();
        const sumAxis = dims(axis);
        var newDims = dims;
        newDims(axis) = 0..<1;

        const newDomain = {(...newDims)};
        var S = new ndarray(newDomain,eltType);
        ref B = S.data;
        ref A = data;
        foreach idx in newDomain {
            var origIdx: newDomain.rank * int;
            if idx.type == int {
                origIdx(0) = idx;
            } else {
                origIdx = idx;
            }

            var sum: real = 0;
            for i in sumAxis {
                origIdx(axis) = i;
                
                sum += A[origIdx];
            }
            B[idx] = sum;
        }
        return S;
    }

    proc sumAxesMask(withAxesMask: rank*int): ndarray(rank,eltType) {
        var acc: ndarray(rank,eltType) = this;
        for param i in 0..<rank {
            if withAxesMask(i) == 1 {
                acc = acc.sumOneAxis(i);
            }
        }
        return acc;
    }

    proc sum(axes: int...?axesCount): ndarray(rank,eltType) {
        var acc: ndarray(rank,eltType) = this;
        // var offset = 0;
        for param i in 0..<axesCount {
            acc = acc.sumOneAxis(axes(i) - i);
        }
        return acc;
    }

    proc shrink(narg: 2*int ... rank,param exactBounds = false): ndarray(rank,eltType) {
        var newShape: rank * int;
        var sliceRanges: rank * range;
        for param i in 0..<rank {
            var (start,end) = narg(i);
            if start < 0 && end < 0 {
                start = 0;
                end = data.domain.shape(i);
            }
            if !exactBounds {
                sliceRanges(i) = start..#end;
                // shrunkRanges(i) = 0..#end; // start..#end align 0;
            } else {
                sliceRanges(i) = start..<end;
            }
            newShape(i) = sliceRanges(i).size;
        }
        const sliceDom = {(...sliceRanges)};
        const newDom = util.domainFromShape((...newShape));
        var shrunk = new ndarray(newDom,eltType);
        shrunk.data = data[sliceDom];
        return shrunk;
    }

    proc pad(narg: 2*int ... rank,value: eltType = 0): ndarray(rank,eltType) {
        var newShape: rank * int;
        var sliceRanges: rank * range;
        for param i in 0..<rank {
            const dimSize = data.domain.shape(i);
            var (left,right) = narg(i);
            sliceRanges(i) = left..#dimSize;
            // shrunkRanges(i) = 0..#end; // start..#end align 0;
            newShape(i) = dimSize + left + right;
        }
        const sliceDom = {(...sliceRanges)};
        const newDom = util.domainFromShape((...newShape));
        var padded = new ndarray(newDom,eltType);
        padded.data = value;
        padded.data[sliceDom] = data;
        return padded;
    }

    proc squeeze(param newRank: int): ndarray(newRank,eltType) where newRank < rank {
        // I think this will work: (a member of the chapel team needs to review this) 
        // I suspect heavy performance hits will happen when running this on CUDA. 
        if newRank == 1 {
            var me = new ndarray(1,eltType);
            const s = data.size;
            me.reshapeDomain({0..<s});
            me.data = foreach (_,a) in zip(me.domain,data) do a;
            // var j = 0;
            // for i in data.domain {
            //     me[j] = data[i];
            //     j += 1;
            // }
            return me;
        }
        const oldShape = this.shape;
        var newShape: newRank*int;
        var offset: int = 0;
        for param i in 0..<rank {
            if oldShape(i) == 1 {
                offset -= 1;
            } else {
                newShape(i + offset) = oldShape(i);
            }
        }
        const dom = util.domainFromShape((...newShape));
        var me = new ndarray(dom,eltType);
        me.reshapeDomain(dom);
        me.data = foreach (_,a) in zip(dom,data) do a;
        return me;
    }

    proc populateRemote(ref re: remote(ndarray(rank,eltType))): remote(ndarray(rank,eltType)) {
        on re.device {
            ref reArr = re.access();
            ref reData = reArr.data;
            const me: ndarray(rank,eltType) = this;
            reArr = me;
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
    return new ndarray(val, isNormal = true);
}

// operator =(ref lhs: ndarray(?rank,?eltType), rhs: _iteratorRecord) {
//     var arr = rhs;
//     lhs._domain = arr.domain;
//     lhs.data = arr;
// }

// operator :(val: _iteratorRecord, type t: ndarray(?rank,?eltType)) {
//     return new ndarray(val);
// }

// This bunch is problematic.
proc remote.init(other: ndarray(?rank,?eltType)) {
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

proc zipArr(a: ndarray(?rank,?eltType),b: ndarray(rank,eltType),f): ndarray(rank,eltType) {
    const dom = a.domain;
    var c: ndarray(rank,eltType);
    c.reshapeDomain(dom);
    ref cData = c.data;
    foreach i in dom do
        cData[i] = f(a.data[i],b.data[i]);
    return c;
}

operator +(a: ndarray(?rank,?eltType),b: ndarray(rank,eltType)): ndarray(rank,eltType) {
    const dom = a.domain;
    var c: ndarray(rank,eltType);
    c.reshapeDomain(dom);
    ref cData = c.data;
    foreach i in dom do
        cData[i] = a.data[i] + b.data[i];
    return c;
}

operator *(a: ndarray(?rank,?eltType),b: ndarray(rank,eltType)): ndarray(rank,eltType) {
    const dom = a.domain;
    var c: ndarray(rank,eltType);
    c.reshapeDomain(dom);
    ref cData = c.data;
    foreach i in dom do
        cData[i] = a.data[i] * b.data[i];
    return c;
}

operator +(a: remote(ndarray(?rank,?eltType)),b: remote(ndarray(rank,eltType))): remote(ndarray(rank,eltType)) {
    const device = a.device;
    var c = new remote(ndarray(rank,eltType),device);
    on device {
        ref A = a.localAccess();
        ref B = b.localAccess();
        ref C = c.localAccess();
        C = a.localAccess() + b.localAccess();
    }
    return c;
}





// proc ndarray.serialize(writer: IO.fileWriter(locking=false, ?),ref serializer: ?st) {

// }


proc ndarray.serialize(writer: IO.fileWriter(locking=false, IO.defaultSerializer),ref serializer: IO.defaultSerializer) {
    // const name = "ndarray(" + rank:string + "," + eltType:string + ")";
    // var ser = serializer.startRecord(writer,name,2);
    // ser.writeField("shape",this.data.shape);
    // // var serArr = ser.startArray();
    // ser.writeField("data",this.data);
    // ser.endRecord();

    writer.write("ndarray(");
    const shape = this.data.shape;
    var first: bool = true;
    for (x,i) in zip(data,0..) {
        const idx = util.nbase(shape,i);
        if idx[rank - 1] == 0 {
            if !first {
                writer.write("\n        ");
                // writer.write("  ");
            }
            writer.write("[");
        }
        writer.writef("%{##.#}",x);
        
        if idx[rank - 1] < shape[rank - 1] - 1 {
            if rank == 1 then
                writer.write("  ");
            else
                writer.write("  ");
        } else {
            writer.write("]");
        }
        first = false;
    }
    writer.write(",\n        shape = ",this.data.shape);
    writer.write(",\n        rank = ",this.rank);
    writer.writeln(")");
    // writer.writeln(", shape=",this.data.shape,", rank=",this.rank,")");

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
