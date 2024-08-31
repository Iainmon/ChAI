
import ChapelArray;
import IO;
use Remote;
import Math;

import Utilities as util;
use Utilities.Standard;
use Utilities.Types;

use SimpleDomain;

type domainType = _domain(?);

record ndarray : serializable {
    param rank: int;
    type eltType = real(32);
    var _domain: domain(rank,int);
    var data: [_domain] eltType = noinit;

    forwarding data except shape, _dom;

    pragma "no copy return"
    pragma "return not owned"
    inline proc _dom do return _domain;

    proc shape: rank * int {
        var s: rank * int;
        const dms = _domain.dims();
        for param i in 0..<rank {
            const ref dm = dms(i);
            s(i) = (dm.highBound - dm.lowBound) + 1;
        }
        return s;
    }

    inline
    proc init(type eltType, const dom: ?t)
            where isDomainType(t) {
        this.rank = dom.rank;
        this.eltType = eltType;
        this._domain = dom;
    }

    inline
    proc init(type eltType, const dom: ?t, const in fill: eltType) 
            where isDomainType(t) {
        this.rank = dom.rank;
        this.eltType = eltType;
        this._domain = dom;
        this.data = fill;
    }

    proc init(param rank: int, type eltType, const dom: ?t) 
            where isDomainType(t) 
                && dom.rank == rank {
        this.rank = rank;
        this.eltType = eltType;
        this._domain = dom;
    }

    proc init(param rank: int, type eltType, const dom: ?t, const arr: [] eltType)
        where isDomainType(t)
             && dom.rank == rank {
        this.rank = rank;
        this.eltType = eltType;
        this._domain = dom;
        this.data = arr;
    }

    proc init(type eltType, shape: ?rank * int) {
        var ranges: rank*range;
        for param i in 0..<rank do
            ranges(i) = 0..<shape(i);
        this.init(eltType,{(...ranges)});
    }

    proc init(param rank: int, type eltType = real(32)) {
        const shape: rank * int;
        this.init(eltType,shape);
    }

    proc init(type eltType = real(32), const shape: int ...?rank) do
        this.init(eltType,shape);

    proc init(const dom: rect(?rank), type eltType) do
        this.init(eltType,dom);  // This could be optimized by refactoring whole init system. 

    proc init(const dom: ?t,type eltType = real(32)) 
            where isDomainType(t) {
        this.init(eltType,dom);
    }

    proc init(const Arr: []) {
        this.rank = Arr.rank;
        this.eltType = Arr.eltType;
        this._domain = Arr.domain;
        this.data = Arr;
    }
    
    proc init(const A: ndarray(?rank,?eltType)) {
        this.rank = rank;
        this.eltType = eltType;
        this._domain = A._domain;
        this.data = A.data;
    }

    // proc init(it: _iteratorRecord) {
    //     const arr = it;
    //     this.init(arr);
    // }

    proc init=(const other: [] ?eltType) do
        this.init(other);

    proc init=(const other: ndarray(?rank,?eltType)) {
        this.rank = rank;
        this.eltType = eltType;
        this._domain = other._domain;
        this.data = other.data;
    }

    // proc init=(other: _iteratorRecord) do
    //     this.init(other);

    proc ref this(args: int...rank) ref {
        return data.this((...args));
    }

    proc ref setData(const arr: [] eltType) 
            where arr.rank == rank do
        if arr.domain == this.domain then 
            data = arr;
        else
            this = arr;

    proc ref reshapeDomain(const dom: domain(rank,int))
        where isRegularDomain(dom) {
        _domain = dom;
    }

    proc reshape(const dom: ?t): ndarray(rank,eltType)
            where isDomainType(t)
                && dom.rank == rank {
        var arr = new ndarray(eltType,dom);
        const arrDom  = arr.domain;
        const selfDom = _domain;
 
        const inter = selfDom[arrDom];
        arr.data[inter] = data[inter];
        return arr;
    }

    proc reshape(const dom: ?t): ndarray(dom.rank,eltType)
            where isDomainType(t)
                && dom.rank != rank {

        var arr: ndarray(dom.rank,eltType) = new ndarray(eltType,dom);

        const selfDom = this.domain;
        const newDom  = arr.domain;
        const ref selfData = this.data;
        ref arrData = arr.data;

        const zero: eltType = 0;

        forall (i,meIdx) in newDom.everyZip() {
            const selfIdx = selfDom.indexAt(i);
            const a = if selfDom.contains(selfIdx) then selfData[selfIdx] else zero;
            arrData[meIdx] = a;
        }
        return arr;
        // const minSize: int           = min(selfDom.size,newDom.size);
        // const dataDom: rect(1)       = (minSize,);
        // const zeroDom: rect(1)       = ((newDom.size - dataDom.size,),(dataDom.size,));

        // ref arrData = arr.data;
        // const ref selfData = data;

        // // Fills in intersection. 
        // forall i in dataDom {
        //     const arrIdx  = newDom.indexAt(i);
        //     const selfIdx = selfDom.indexAt(i);
        //     arrData[arrIdx] = selfData[selfIdx];
        // }

        // const zero: eltType = 0;
        // forall i in zeroDom do
        //     arrData[newDom.indexAt(i)] = 0; // should this be `zero` for performance?
        
        // return arr;
    }


    // This can optimized such that it doesn't use two heavy utility functions...
    proc reshape(newShape: int ...?newRank): ndarray(newRank,eltType) {
        return this.reshape(util.domainFromShape((...newShape)));
        // const normalDomain = util.domainFromShape((...newShape));
        // var arr = new ndarray(normalDomain, eltType);
        // ref arrData = arr.data;
        // const myDomain = data.domain;
        // foreach i in 0..<min(myDomain.size,normalDomain.size) {
        //     arrData[normalDomain.orderToIndex(i)] = data[myDomain.orderToIndex(i)];
        // }
        // return arr;
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
        const ref thisData = this.data;

        forall i in 0..<data.size {
            var oldIdx,newIdx: rank*int;
            for param j in 0..<rank {
                oldIdx(j) = i % oldShape(j);
                newIdx(j) = i % newShape(j);
            }
            prmData[newIdx] = thisData[oldIdx];
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
        const expandedDataDomain = expandedData.domain;
        const ref thisData = this.data;
        // @assertOnGpu
        forall idx in expandedDataDomain.every() {
            var origIdx: rank * int;
            if idx.type == int {
                origIdx(0) = idx;
            } else {
                origIdx = idx;
            }
            for param i in 0..<rank {
                if oldShape(i) == 1 then origIdx(i) = 0;
            }
            expandedData[idx] = thisData[origIdx];
        }
        return expanded;
    }


    proc ref sumOneAxis(axis: int): ndarray(rank,eltType) {
        const dims = this.domain.dims();
        const sumAxis = dims(axis);
        const sumAxisSize = sumAxis.size;
        var newDims = dims;
        newDims(axis) = 0..<1;

        const newDomain = {(...newDims)};
        var S = new ndarray(newDomain,eltType);
        ref B = S.data;
        ref A = data;
        // @assertOnGpu
        forall idx in newDomain.every() {
            var origIdx: newDomain.rank * int;
            if idx.type == int {
                origIdx(0) = idx;
            } else {
                origIdx = idx;
            }

            var sum: eltType = 0;
            for i in 0..<sumAxisSize {
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
        var acc: ndarray(rank,eltType) = new ndarray(data);
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
                end = this.shape(i);
            }
            if !exactBounds {
                sliceRanges(i) = start..#end;
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
            newShape(i) = dimSize + left + right;
        }
        const sliceDom = {(...sliceRanges)};
        const newDom = util.domainFromShape((...newShape));
        var padded = new ndarray(newDom,eltType);
        padded.data = value;
        padded.data[sliceDom] = data;
        return padded;
    }


    proc dilate(dil: int) where rank == 2 {
        if dil < 0 then util.err("Cannot dilate ", this.type:string, ", of shape ", this.shape, ", by dilation=", dil);
        if dil == 0 then return this;
        const (height,width) = this.shape;
        const insertH = (height - 1) * dil;
        const insertW = (width - 1) * dil;

        const newHeight = insertH + height;
        const newWidth = insertW + width;

        const dom = util.domainFromShape(newHeight,newWidth);
        var dilated = new ndarray(dom,eltType);
        ref dat = dilated.data;
        const ref thisData = data;
        const step = dil + 1;
        const selfDom = this.domain;
        forall (h,w) in data.domain.every() {
            dat[h * step,w * step] = thisData[h,w];
        }
        return dilated;
    }

    proc dilate(dil: int) where rank == 3 {
        if dil < 0 then util.err("Cannot dilate ", this.type:string, ", of shape ", this.shape, ", by dilation=", dil);
        if dil == 0 then return this;
        const (channels,height,width) = this.shape;
        const insertH = (height - 1) * dil;
        const insertW = (width - 1) * dil;

        const newHeight = insertH + height;
        const newWidth = insertW + width;

        const dom = util.domainFromShape(channels,newHeight,newWidth);
        var dilated = new ndarray(dom,eltType);
        ref dat = dilated.data;
        const ref thisData = data;
        const step = dil + 1;
        forall (c,h,w) in this.domain.every() do
            dat[c,h * step,w * step] = thisData[c,h,w];

        return dilated;
    }


    proc squeeze(param newRank: int): ndarray(newRank,eltType) where newRank < rank {
        // I think this will work: (a member of the chapel team needs to review this) 
        // I suspect heavy performance hits will happen when running this on CUDA. 
        if newRank == 1 {
            var me = new ndarray(1,eltType);
            const s = data.size;
            me.reshapeDomain({0..<s});
            const dataDomain = data.domain;
            ref meData = me.data;
            const ref thisData = data;
            // @assertOnGpu
            forall i in me.domain.every() {
                meData[i] = thisData[dataDomain.indexAt(i)];
            }
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
        ref meData = me.data;
        forall (i,a) in zip(dom,this.data) do meData[i] = a;
        return me;
    }

    proc max(): ndarray(1,eltType) {
        var me = new ndarray({0..<1},eltType);
        const myData = this.data;
        me.data[0] = max reduce myData;
        return me;
    }

    proc max(axes: int...?axesCount): ndarray(rank,eltType) {
        compilerWarning("max is unimplemented.");
        return this; // Implement me.
    }


    proc populateRemote(re: borrowed Remote(ndarray(rank,eltType))): borrowed Remote(ndarray(rank,eltType)) {
        on re.device {
            ref reArr = re.ptr;
            reArr = this;
        }
        return re;
    }

    proc toRemote(): owned Remote(ndarray(rank,eltType)) {
        var re = new Remote(ndarray(rank,eltType));
        populateRemote(re.borrow());
        return re;
    }

    iter ref batchify(param dim: int = 0) ref where dim < rank {
        const dimR = data.domain.shape(dim);
        var dims = data.dims();
        for i in dimR {
            yield data[(...((...dims(0..<dim)),i,(...dims((dim+1)..<rank))))];
        }
    }

    proc kernelRot(): ndarray(4,eltType) where rank == 4 {
        const (features,channels,height,width) = data.domain.shape;
        var me = new ndarray(data.domain,eltType);
        ref meData = me.data;
        const ref thisData = data;
        const selfDom = this.domain;
        forall (f,c,h,w) in selfDom.every() {
            meData[f,c,h,w] = thisData[f,c,height - h - 1,width - w - 1];
        }
        return me;
    }
    
    proc kernelRot(): ndarray(3,eltType) where rank == 3 {
        const (channels,height,width) = data.domain.shape;
        var me = new ndarray(data.domain,eltType);
        ref meData = me.data;
        const ref thisData = data;
        forall (c,h,w) in this.domain.every() {
            meData[c,h,w] = thisData[c,height - h - 1,width - w - 1];
        }
        return me;
    }

    proc argmax() where rank == 1 {
        // const D__________________A______________T____________A = this.data;
        // const (_,i) = maxloc reduce zip(
        //     D__________________A______________T____________A,
        //     D__________________A______________T____________A.domain);
        // return i;
        // For some reason this is causing problems.  Keeping this because I am worried the above wont run on gpu.
        var mxi: int = 0;
        const data = this.data;
        var mx: eltType = data[mxi];
        for i in data.domain {
            const mei = data[i];
            if mx < mei {
                mxi = i;
                mx = mei;
            }
        }
        return mxi;
    }

    inline proc relu() {
        const ref thisData = data;
        const dom = this.domain;
        var rl = new ndarray(dom,eltType);
        ref rlD = rl.data;
        // @assertOnGpu
        forall i in dom.every() {
            const x = thisData[i];
            rlD[i] = Math.max(0,x);
        }
        return rl;
    }
}


proc type ndarray.arange(to: int,type eltType = real(64),shape: ?rank*int): ndarray(rank,eltType) {
    const dom = util.domainFromShape((...shape));
    const A: [dom] eltType = foreach (_,x) in zip(dom,0..<to) do x:eltType;
    return new ndarray(A);
}


operator =(ref lhs: ndarray(?rank,?eltType), const rhs: ndarray(rank,eltType)) {
    lhs._domain = rhs._domain;
    lhs.data = rhs.data;
}

operator =(ref lhs: ndarray(?rank,?eltType),const rhs: [] eltType) where rhs.rank == rank {
    lhs._domain = rhs.domain;
    lhs.data = rhs.data;
}

operator :(const val: [] ?eltType, type t: ndarray(val.rank,eltType)) do
    return new ndarray(val);

operator :(const a: ndarray(?rank,?eltType),type toType): ndarray(rank,toType) where toType != eltType {
    const A = a.data;
    const D = A : toType;
    return new ndarray(D);
}

operator :(const a: ndarray(?rank,?eltType),type toType): ndarray(rank,toType) where toType == eltType do
    return a;

operator :(it: _iteratorRecord, type t: ndarray(?rank,?eltType)) do
    return new ndarray(it);


// Need help implementtion these. 
// operator =(ref lhs: ndarray(?rank,?eltType), rhs: _iteratorRecord) {
//     var arr = rhs;
//     lhs._domain = arr.domain;
//     lhs.data = arr;
// }
// operator :(val: _iteratorRecord, type t: ndarray(?rank,?eltType)) {
//     return new ndarray(val);
// }


// // This bunch is problematic.
// proc remote.init(other: ndarray(?rank,?eltType)) {
//     this.init(ndarray(rank,eltType));
//     other.populateRemote(this);
// }

// proc remote.init=(ref other: ndarray(?rank,?eltType)) {
//     this.init(ndarray(rank,eltType));
//     other.populateRemote(this);
// }



// operator =(ref lhs: remote(ndarray(?rank,?eltType)), rhs: ndarray(rank,eltType)) {
//     rhs.populateRemote(lhs);
// }

// operator :(val: ndarray(?rank,?eltType), type t: remote(ndarray(rank,eltType))) {
//     return val.toRemote();
// }

// proc remote.init(ref other: remote(ndarray(?rank,?eltType))) {
//     this.eltType = ndarray(rank,eltType);
//     this.remoteResource = other.remoteResource;
// }

// proc remote.init=(ref other: remote(ndarray(?rank,?eltType))) {
//     this.eltType = ndarray(rank,eltType);
//     this.remoteResource = other.remoteResource;
// }

// operator =(ref lhs: remote(ndarray(?rank,?eltType)), rhs:remote( ndarray(rank,eltType))) {
//     lhs.remoteResource = rhs.remoteResource;
// }

// End problemetic bunch.

proc zipArr(a: ndarray(?rank,?eltType),b: ndarray(rank,eltType),f): ndarray(rank,eltType) {
    const dom = a.domain;
    var c: ndarray(rank,eltType) = new ndarray(a.domain,eltType);
    ref cData = c.data;
    forall i in dom.every() do
        cData[i] = f(a.data[i],b.data[i]);
    return c;
}

operator +(a: ndarray(?rank,?eltType),b: ndarray(rank,eltType)): ndarray(rank,eltType) {
    const dom = a.domain;

    const ref aData = a.data;
    const ref bData = b.data;
    var c: ndarray(rank,eltType) = new ndarray(dom,eltType);
    ref cData = c.data;
    // @assertOnGpu
    forall i in dom.every() do
        cData[i] = aData[i] + bData[i];
    return c;
}

operator *(a: ndarray(?rank,?eltType),b: ndarray(rank,eltType)): ndarray(rank,eltType) {
    const dom = a.domain;
    var c: ndarray(rank,eltType) = new ndarray(a.domain,eltType);
    ref cData = c.data;
    const ref aData = a.data;
    const ref bData = b.data;
    // @assertOnGpu
    forall i in dom.every() do
        cData[i] = aData[i] * bData[i];
    return c;
}

operator -(a: ndarray(?rank,?eltType),b: ndarray(rank,eltType)): ndarray(rank,eltType) {
    const dom = a.domain;
    var c: ndarray(rank,eltType) = new ndarray(a.domain,eltType);
    ref cData = c.data;
    const ref aData = a.data;
    const ref bData = b.data;
    // @assertOnGpu
    forall i in dom.every() do
        cData[i] = aData[i] - bData[i];
    return c;
}

operator /(a: ndarray(?rank,?eltType),b: ndarray(rank,eltType)): ndarray(rank,eltType) {
    const dom = a.domain;
    var c: ndarray(rank,eltType) = new ndarray(a.domain,eltType);
    ref cData = c.data;
    const ref aData = a.data;
    const ref bData = b.data;
    // @assertOnGpu
    forall i in dom.every() do
        cData[i] = aData[i] / bData[i];
    return c;
}

// operator +(a: remote(ndarray(?rank,?eltType)),b: remote(ndarray(rank,eltType))): remote(ndarray(rank,eltType)) {
//     const device = a.device;
//     var c = new remote(ndarray(rank,eltType),device);
//     on device {
//         ref A = a.localAccess();
//         ref B = b.localAccess();
//         ref C = c.localAccess();
//         C = a.localAccess() + b.localAccess();
//     }
//     return c;
// }


proc type ndarray.convolve(features: ndarray(3,?eltType),kernel: ndarray(4,eltType), stride: int): ndarray(3,eltType) {
    const (channels,inHeight,inWidth) = features.shape;
    const (filters,channels_,kernelHeight,kernelWidth) = kernel.shape;
    if channels != channels_ then halt("Channels must match.");

    const outHeight: int = ((inHeight - kernelHeight) / stride) + 1;
    const outWidth: int = ((inWidth - kernelWidth) / stride) + 1;
    const outShape = (filters,outHeight,outWidth);
    const outDom = util.domainFromShape((...outShape));
    var outFeatures = new ndarray(outDom,eltType);

    const chanR = 0..<channels; // don't trust daniel's codemotion.
    const kernelD = util.domainFromShape(kernelHeight,kernelWidth);
    const kernelChanD = util.domainFromShape(channels,kernelHeight,kernelWidth);

    ref dat = outFeatures.data;
    ref fet = features.data;
    ref ker = kernel.data;

    // @assertOnGpu
    forall (f,h_,w_) in outDom.every() {
        const hi: int = h_ * stride;
        const wi: int = w_ * stride;
        var sum: eltType = 0;
        for j in 0..<kernelChanD.size {
            const (c,kh,kw) = kernelChanD.indexAt(j);
            sum += fet[c,hi + kh, wi + kw] * ker[f,c,kh,kw];
        }
        dat[f,h_,w_] = sum;
    }

    return outFeatures;
}

proc type ndarray.convolve(features: ndarray(3,?eltType),kernel: ndarray(4,eltType), bias: ndarray(1,eltType), stride: int): ndarray(3,eltType) {
    const (channels,inHeight,inWidth) = features.shape;
    const (filters,channels_,kernelHeight,kernelWidth) = kernel.shape;
    const (filters_,) = bias.shape;
    if channels != channels_ then halt("Channels must match. ", features.shape , " ", kernel.shape);
    if filters != filters_ then halt("Bias and filters must match.");

    const outHeight: int = ((inHeight - kernelHeight) / stride) + 1;
    const outWidth: int = ((inWidth - kernelWidth) / stride) + 1;
    const outShape = (filters,outHeight,outWidth);
    const outDom = util.domainFromShape((...outShape));

    const ref fet = features.data;
    const ref ker = kernel.data;
    const ref bis = bias.data;

    var outFeatures = new ndarray(outDom,eltType);
    ref dat = outFeatures.data;

    inline proc fastKernel(param kernelSize: int) {
        forall (f,h_,w_) in outDom.every() {
            const hi = h_ * stride;
            const wi = w_ * stride;
            var sum: eltType = 0;
            for c in 0..<channels {
                for param kh in 0..<kernelSize {
                    for param kw in 0..<kernelSize {
                        sum += fet[c,hi + kh, wi + kw] * ker[f,c,kh,kw];
                    }
                }
            }
            dat[f,h_,w_] = sum + bis[f];
        }
    }

    inline proc slowKernel() {
        const kernelChanD = util.domainFromShape(channels,kernelHeight,kernelWidth);
        forall (f,h_,w_) in outDom.every() {
            const hi = h_ * stride;
            const wi = w_ * stride;
            var sum: eltType = 0;
            if util.targetGpu() then
                for c in 0..<channels do
                    for kh in 0..<kernelHeight do
                        for kw in 0..<kernelWidth do
                            sum += fet[c,hi + kh, wi + kw] * ker[f,c,kh,kw];
            else
                for (c,kh,kw) in kernelChanD do
                    sum += fet[c,hi + kh, wi + kw] * ker[f,c,kh,kw];
            dat[f,h_,w_] = sum + bis[f];
        }
    }

    select (kernelHeight,kernelWidth) {
        when (3,3) do 
            fastKernel(3);
        when (5,5) do
            fastKernel(5);
        when (7,7) do
            fastKernel(7);
        when (9,9) do
            fastKernel(9);
        when (11,11) do
            fastKernel(11);
        otherwise do
            slowKernel();
    }

    // @assertOnGpu
    // forall (f,h_,w_) in outDom {
    //     const hi: int = h_ * stride;
    //     const wi: int = w_ * stride;
    //     // proc innerHelper() {
    //     var sum: eltType = 0;
    //         // @llvm.assertVectorized()
    //         // for (c,kh,kw) in kernelChanD {
    //         //     sum += fet[c,hi + kh, wi + kw] * ker[f,c,kh,kw];
    //         // }
    //     for c in 0..<channels {
    //         for param kh in 0..<3 {
    //             for param kw in 0..<3 {
    //                 sum += fet[c,hi + kh, wi + kw] * ker[f,c,kh,kw];
    //             }
    //         }
    //     }
    //     dat[f,h_,w_] = sum + bis[f];
    // }

    return outFeatures;
}


proc type ndarray.maxPool(features: ndarray(3,?eltType),poolSize: int): ndarray(3,eltType) {

    const (channels,height,width) = features.shape;
    if (height % poolSize != 0) || (width % poolSize != 0) {
        const moreH = (Math.ceil(height:real / poolSize:real): int) * poolSize;
        const moreW = (Math.ceil(width:real / poolSize:real): int) * poolSize;
        return ndarray.maxPool(features.reshape(channels,moreH,moreW),poolSize);
    }

    const newHeight: int = height / poolSize;
    const newWidth: int = width / poolSize;
    const dom = util.domainFromShape(channels,newHeight,newWidth);
    var pool = new ndarray(dom,eltType);
    ref dat = pool.data;
    ref fet = features.data;
    const poolDom = util.domainFromShape(poolSize,poolSize);
    // @assertOnGpu
    forall (c,h,w) in dom.every() {
        const hs = h * poolSize;
        const ws = w * poolSize;
        var mx: eltType = fet[c,h,w];
        for (ph,pw) in poolDom {
            const x: eltType = fet[c,ph + hs,pw + ws];
            mx = Math.max(x,mx);
        }
        dat[c,h,w] = mx;
    }
    return pool;
}

proc type ndarray.matvecmul(mat: ndarray(2,?eltType),vec: ndarray(1,eltType)): ndarray(1,eltType) {
    const (m,n) = mat.shape;
    const (n_,) = vec.shape;
    assert(n == n_, "Vector and matrix must be the same shape.");
    const dom = util.domainFromShape(m);
    var u = new ndarray(dom,eltType);
    ref matD = mat.data;
    ref vecD = vec.data;
    ref uD = u.data;
    // @assertOnGpu
    forall i in 0..<m {
        var sum: eltType;
        for j in 0..<n {
            sum += matD[i,j] * vecD[j];
        }
        uD[i] = sum;
    }
    return u;
}


inline proc type ndarray.fromRanges(type eltType = real, rngs: range...?rank): ndarray(rank,eltType) {
    const dom_ = {(...rngs)};
    const dom = util.domainFromShape((...dom_.shape));
    var a = new ndarray(dom,eltType);
    ref aData = a.data;
    // @assertOnGpu
    forall i in 0..<dom.size with (ref a) {
        const idx = dom.indexAt(i);
        aData[idx] = i : eltType;
    }
    return a;
}



// For printing. 
proc ndarray.serialize(writer: IO.fileWriter(locking=false, IO.defaultSerializer),ref serializer: IO.defaultSerializer) {
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

proc ref ndarray.read(fr: IO.fileReader(?)) throws {
    var r = fr.read(int);
    if r != rank then
        err("Error reading tensor: rank mismatch.", r , " != this." , rank);
    var s = this.shape;
    for i in 0..#rank do
        s[i] = fr.read(int);
    var d = util.domainFromShape((...s));
    this._domain = d;
    for i in d do
        this.data[i] = fr.read(eltType);
}


proc ndarray.write(fw: IO.fileWriter(?)) throws {
    fw.write(rank);
    for s in data.domain.shape do
        fw.write(s:int);
    for i in data.domain do
        fw.write(data[i]);
}

class _tensor_resource {
    param rank: int;
    type eltType = real(64);
    var data: remote(ndarray(rank,eltType));


}

// Some examples. 
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

// end examples. 



proc type ndarray.fullOuter(a: ndarray(?rankA,?eltType), b: ndarray(?rankB, eltType)): ndarray(rankA + rankB, eltType) {
    param rankC = rankA + rankB;
    var newShape: rankC * int = ((...a.shape), (...b.shape));
    const domC = util.domainFromShape((...newShape));
    var c: ndarray(rankC,eltType) = new ndarray(domC,eltType);
    ref cData = c.data;
    foreach i in domC.each {
        const aIdx = i.slice(0,rankA); // i(0..<rankA);
        const bIdx = i.slice(rankA+1,rankB); // i(rankA..<rankB);
        cData[i] = a.data[aIdx] * b.data[bIdx];
    }
    return c;
}

proc type ndarray.contract(a: ndarray(?rankA,?eltType), b: ndarray(?rankB, eltType), param axisA: int, param axisB: int) {
    const axA = a.domain.dim(axisA);
    const axB = b.domain.dim(axisB);
    if axA != axB then halt("Not same axes!");

    param newRank = a.rank + b.rank - 2;
    const contractedShapeA = a.shape.removeIdx(axisA);
    const contractedShapeB = b.shape.removeIdx(axisB);


    const newShape = ((...contractedShapeA),(...contractedShapeB));
    const dom = util.domainFromShape((...newShape));
    var c: ndarray(newRank, eltType) = new ndarray(dom,eltType);
    foreach i in c.domain.each with (ref c) {
        var idxA: a.rank * int = i.slice(0,contractedShapeA.size).insertIdx(axisA,0);
        var idxB: b.rank * int = i.slice(contractedShapeA.size,newRank).insertIdx(axisB,0);
        var sum: eltType = 0;
        for (ai,bi) in {a.domain.dim(axisA),b.domain.dim(axisB)} {
            idxA(axisA) = ai;
            idxB(axisB) = bi;
            sum += a.data[idxA] * b.data[idxB];
        }
        c.data[i] = sum;
    }
    return c;
}

proc splitAt(param s: string, param del: string, param idx: int = 0) param {
    if s[idx] == del {
        return "";
    } else {
        return s[idx] + splitAt(s,del,idx + 1);
    }
}

proc getFirstIdx(param s: string, param del: string, param idx: int = 0) param {
    if s[idx] == del {
        return idx;
    } else {
        return getFirstIdx(s,del,idx + 1);
    }
}

proc sliceGeneric(type t, param start: int, param stop: int, param s: t, param idx: int = start) param {
    compilerAssert(start <= stop);
    compilerAssert(stop <= s.size);
    if start <= idx && idx < stop {
        return s[idx] + slice(start,stop,s,idx + 1);
    } else {
        param zero: t;
        return zero;
    }
}

proc slice(param start: int, param stop: int, param s: string, param idx: int = start) param {
    compilerAssert(start <= stop);
    compilerAssert(stop <= s.size);
    if start <= idx && idx < stop {
        return s[idx] + slice(start,stop,s,idx + 1);
    } else {
        param zero: string;
        return zero;
    }
}

proc take(param count: int, param s: string) param do
    return slice(0,count,s);

proc drop(param count: int, param s: string) param do
    return slice(count,s.size,s);



proc type ndarray.einsum(param subscripts: string,a: ndarray(?rankA,?eltType), b: ndarray(?rankB, eltType)) {

    for param i in 0..<subscripts.size {
        param c = subscripts[i];
        // writeln(c);
    }
    param fst = subscripts.takeUntil(",");
    param subscripts_1 = subscripts.drop(fst.size + 1);
    param snd = splitAt(subscripts_1,"-");
    param subscripts_2 = subscripts_1.drop(snd.size + 2);
    // param thd 
    // param fth
    // param vth
    // Cool three letter names for 3,4,5

    for param i in 0..<fst.size {
        param ci = fst[i];
        if fst.countOccurrences(ci) != subscripts_2.countOccurrences(ci) {
            for param j in 0..<snd.size {
                param cj = snd[j];
                if snd.countOccurrences(cj) != subscripts_2.countOccurrences(cj) {
                    return ndarray.contract(a,b,i,j);
                }
            }
        }
    }
    // compilerError("Must sum across one axis!");
    return a;
}


proc main() {
    // More examples. 
    writeln("Hello!");
    // {
    //     var A = ndarray.fromRanges(real, 0..<5);
    //     var B = ndarray.fromRanges(real, 0..<3);

    //     A.data += 1;
    //     B.data += 1;

    //     writeln(A);
    //     writeln(B);
        
    //     var C = ndarray.fullOuter(A,B);
    //     writeln(C);

    //     var t = (1,2,3,4,5,6);
    //     writeln(t);
    //     writeln(t.removeIdx(3));
    // }

    // var A = ndarray.fromRanges(real, 0..<5,0..<3);
    // var B = ndarray.fromRanges(real, 0..<3,0..<7);

    // A.data += 1;
    // B.data += 1;

    // var D = ndarray.contract(A,B,1,0);
    // writeln(D);

    // var E = ndarray.einsum("ij,kh->ih",A,B);
    // writeln(E);
    // E[1,1] = 2;


    var A = ndarray.fromRanges(real, 0..<5,0..<3);
    var B = ndarray.fromRanges(real, 0..<5,0..<3);

    writeln(A + B);


    // param r = 0..<3;
    // writeln(r);
}