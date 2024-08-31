
module Utilities {
    private use ChplConfig only CHPL_LOCALE_MODEL;
    config param loopGpuSupport = CHPL_LOCALE_MODEL == "gpu";

    proc targetGpu() param : bool {
        if loopGpuSupport && CHPL_LOCALE_MODEL == "gpu" {
            return true;
        } else if CHPL_LOCALE_MODEL == "gpu" {
            return true;
        } else if loopGpuSupport {
            compilerError("loopGpuSupport should be enabled if CHPL_LOCALE_MODEL is set to 'gpu'.");
            return false;
        } else {
            return false;
        }
    }

    module Types {
        type stdRange = range(idxType=int,bounds=boundKind.both,strides=strideKind.one);
        // type stdDomain = domain(DefaultRectangularDom(?));
        type f32 = real(32);
        type f64 = real(64);
    }

    import IO;
    import ChapelArray;
    // import ChapelDomain;
    import Math;


    param debugPrint = false;

    proc err(args...?n) {
        var s = "";
        for param i in 0..<n {
            s += args(i): string;
        }
        try! throw new Error(s);
    }
    proc debugWrite(args...?n) {
        if debugPrint {
            var s = "";
            for param i in 0..<n {
                s += args(i): string;
            }
            try! IO.stdout.write(s);
            try! IO.stdout.flush();
        }
    }

    iter cartesian(X,Y) {
        for x in X {
            for y in Y {
                yield (x,y);
            }
        }
    }
    iter cartesian(param tag: iterKind,X,Y) where tag == iterKind.standalone {
        forall x in X {
            forall y in Y {
                yield (x,y);
            }
        }
    }

    iter flatIter(D: domain(?)) {
        for i in 0..<D.size {
            yield D.orderToIndex(i);
        }
    }

    inline iter flatIter(param tag: iterKind,D: domain(?)) where tag == iterKind.standalone {
        forall i in 0..<D.size {
            yield D.orderToIndex(i);
        }
    }

    inline proc normalizeArray(arr: []) {
        const arrDom = arr.domain;
        const normalDomain = normalizeDomain(arrDom);
        compilerWarning("normalizeArray should be used sparingly.");
        return forall (_,a) in zip(normalDomain,arr) do a;
    }

    // proc captureArray(unknown: ?t) {
    //     const arr: ChapelArray._array = unknown;
    //     type eltType = arr.eltType;
    //     const dom = arr.domain;
    //     type ArrayType = [dom] eltType;
    //     return (arr: ArrayType);
    // }

    inline proc normalizeArray(unknown: ?t) where !isArrayType(t) {
        const arr: ChapelArray._array = unknown;
        const arrDom = arr.domain;
        const normalDomain = normalizeDomain(arrDom);
        return foreach (_,a) in zip(normalDomain,arr) do a;
    }

    inline proc normalizeDomain(dom: domain(?)): domain(dom.rank,int) /*where dom.strides == strideKind.one*/ {
        return dom.normalize;
    }

    inline proc emptyDomain(param rank: int) : domain(rank,int) {
        var shape: rank*range;
        const nullRange = 0..#0;
        for param d in 0..<rank do
            shape(d) = nullRange;
        return {(...shape)};
    }

    inline proc domainFromShape(shape: int ...?rank): domain(rank,int) {
        const _shape = shape;
        var ranges: rank*range;
        for param i in 0..<rank do
            ranges(i) = 0..<_shape(i);
        return {(...ranges)};
    }

    inline proc rangeFromBound(high: int): range do
        return 0..<high;

    inline proc rangeFromBound(low: int, high: int): range do
        return low..<high;

    inline proc rangeFromStart(start: int, count: int) do
        return start..#count;

    inline proc rangesFromBounds(bounds: (2*int) ...?rank): rank * range do
        return bounds.map(rangeFromBound);

    inline proc rangesFromShape(shape: int ...?rank): rank * range do
        return shape.map(rangeFromBound);


    // Returns the nth element in a domain of shape `bounds`. Arbitrary mixed base counter.
    proc nbase(bounds: ?rank*int, n: int): rank*int {
        var filled: rank*int;
        var idx: int = rank - 1;
        var curr: int = 0;
        var carry: bool = false;
        while curr < n {
            filled[idx] += 1;
            if filled[idx] >= bounds[idx] {
                carry = true;
                filled[idx] = 0;
                idx -= 1;
                if idx < 0 then err("Error in nbase: ", n," is too large for bounds.");
            } else {
                carry = false;
                idx = rank - 1;
                curr += 1;
            }
        }
        return filled;
    }

    proc nbase(bounds: int, n: int): 1*int {
        return (n,);
    }

    // Does the same thing, but linear in the shape size instead. 
    proc indexInShape(shape: ?rank*int, in n: int): rank*int {
        var idxs: rank*int;
        const size = * reduce shape;
        if n > size then err("Error in indexInShape: ", n," is too large for shape.");
        for param i in 0..#rank {
            const dim = shape[rank - i - 1];
            idxs[rank - i - 1] = n % dim;
            n = Math.divFloor(n,dim);
        }
        return idxs;
    }

    inline proc indexAtHelperProd(n: int, prod: int, shape: int ...?rank): rank * int where rank > 1 {
        var idx: rank * int;
        var order = n;
        var div = prod;
        for param i in 0..<rank {
            div /= shape(i);
            idx(i) = order / div;
            order %= div;
        }
        return idx;
    }

    inline proc indexAtHelperMultiples(n: int, divs: int ...?rank): rank * int {
        var idx: rank * int;
        var order = n;
        for param i in 0..<rank {
            idx(i) = order / divs(i);
            order %= divs(i);
        }
        return idx;
    }

    inline proc indexAt(n: int, shape: int) do 
        return n;

    inline proc indexAt(n: int, shape: int ...?rank): rank * int where rank > 1 {
        var result: rank * int;
        var strides: rank * int;
        var idx = n;
        var stride = 1;
        for param i in 0..<rank {
            param j = rank - 1 - i;
            strides(j) = stride;
            stride *= shape(j);
        }
        for param i in 0..<rank {
            result(i) = idx / strides(i);
            idx %= strides(i);
        }
        return result;

        // var idx: rank * int;
        // var order = n;
        // var div = 1;
        // for param i in 0..<rank do
        //     div *= shape(i);
        // for param i in 0..<rank {
        //     div /= shape(i);
        //     idx(i) = order / div;
        //     order %= div;
        // }
        // return idx;

        // var order = n;
        // var prod = 1;
        // var idx: rank * int;
        // var divs: rank * int;
        // for param i in 0..<rank {
        //     divs(rank - i - 1) = prod;
        //     prod *= shape(rank - i - 1);
        // }
        // for param i in 0..<rank {
        //     idx(i) = order / divs(i);
        //     order %= divs(i);
        // }
        // return idx;
    }

    inline iter fastEach(shape: int...?rank): rank * int {
        var prod = 1;
        var divs: rank * int;
        for param j in 0..<rank {
            param i = rank - j - 1;
            divs(i) = prod;
            prod *= shape(i);
        }
        foreach i in 0..<prod {
            yield indexAtHelperMultiples(i,(...divs));
        }
    }

    proc argsort(tup: int...?rank) {
        writeln("IAIN: just do it, it's not that hard. (tuple argsort)");
        return tup;
    }

    module Standard {
        private use ChplConfig;


        private use Utilities;
        private import Utilities as util;

        public use SimpleDomain;

        proc _tuple.imageType(f) type {
            type eltType = this.eltType;
            const t0: eltType = this(0);
            return f(t0).type;
        }

        proc _tuple.eltType type where isHomogeneousTuple(this) {
            return this(0).type;
        }

        proc _tuple.map(f): this.size * this.imageType(f) where isHomogeneousTuple(this) {
            param rank: int = this.size;
            type eltType = this.eltType;// this(0).type;
            type outType = this.imageType(f); // img.type;
            var imgs: rank * outType;
            for param i in 0..<rank do
                imgs(i) = f(this(i));
            return imgs;
        }

        proc _tuple.slice(param low: int, param high: int): (high - low) * this.eltType where isHomogeneousTuple(this) && low < high && 0 <= low && high <= this.size {
            param newRank = high - low;
            var slc: newRank * this.eltType;
            for param i in 0..<slc.size do
                slc(i) = this(i + low);
            return slc; 
        }

        proc _tuple.removeIdx(param idx: int): (this.size - 1) * this.eltType {
            param newRank = this.size - 1;
            var nw: newRank * this.eltType;
            var offset = 0;
            for param i in 0..<this.size {
                if i == idx {
                    offset += 1;
                } else {
                    nw(i - offset) = this(i);
                }
            }
            return nw; 
        }

        proc _tuple.untuplify() do
            if this.size == 1 { return this(0); } else { return this; }


        proc _tuple.slice(param start: int, param stop: int, param idx: int = start) param {
            compilerAssert(start <= stop);
            compilerAssert(stop <= this.size);
            compilerAssert(start <= idx);
            compilerAssert(idx < stop);
            if idx < stop - 1 {
                return (this(idx),(...this.slice(start,stop,idx + 1)));
            } else {
                return (this(idx),);
            }
        }

        proc _tuple.insertIdx(param idx: int, x: this.eltType): (this.size + 1) * this.eltType {
            param newRank = this.size + 1;
            var nw: newRank * this.eltType;
            var offset = 0;
            for param i in 0..<idx do
                nw(i) = this(i);
            nw(idx) = x;
            for param i in (idx + 1)..<newRank do
                nw(i) = this(i - 1);
            return nw;
        }

        inline proc _tuple.indexAt(n: int): this.size * int where isHomogeneousTuple(this) && this(0).type == int {
            return indexAt(n,(...this));
        }

        inline iter _tuple.each(n: int): this.size * int where isHomogeneousTuple(this) && this(0).type == int {
            param rank = this.size;
            var prod = 1;
            var divs: rank * int;
            for param j in 0..<rank {
                param i = rank - j - 1;
                divs(i) = prod;
                prod *= this(i);
            }
            if loopGpuSupport {
                @assertOnGpu
                foreach i in 0..<prod {
                    yield indexAtHelperMultiples(i,(...divs));
                }
            } else {
                foreach i in 0..<prod {
                    yield indexAtHelperMultiples(i,(...divs));
                }
            }
        }


        // inline operator =(ref tup: _tuple, v: tup(0).type) where isHomogeneousTuple(tup) {
        //     for param i in 0..<tup.size do
        //         tup(i) = v;
        // }

        /*inline proc _domain.simple() const : rect(rank) do
            return new rect(this);

        inline iter _domain.every() {
            const simple = this.simple();
            foreach idx in simple do yield idx;
        }
        inline iter _domain.every(param tag: iterKind) 
                where tag == iterKind.standalone {
            const simple = this.simple();
            foreach idx in simple do yield idx;
        }

        inline iter _domain.everyZip() {
            const simple = this.simple();
            foreach idx in simple.eachOrder() do yield idx;
        }
        inline iter _domain.everyZip(param tag: iterKind) 
                where tag == iterKind.standalone {
            const simple = this.simple();
            foreach idx in simple.eachOrder() do yield idx;
        }*/



        inline iter _domain.each {
            const shape = this.shape;
            var prod = 1;
            var divs: rank * int;
            for param j in 0..<rank {
                param i = rank - j - 1;
                divs(i) = prod;
                prod *= shape(i);
            }
            if loopGpuSupport {
                @assertOnGpu
                foreach i in 0..<prod {
                    yield indexAtHelperMultiples(i,(...divs));
                }
            } else {
                foreach i in 0..<prod {
                    yield indexAtHelperMultiples(i,(...divs));
                }
            }
        }

        inline iter _domain.every() where rank == 1 {
            const shape = this.fastShape;
            if CHPL_LOCALE_MODEL != "gpu" {
                foreach i in 0..<shape do 
                    yield i;
            } else {
                if loopGpuSupport && here.isGpu() {
                    @assertOnGpu
                    foreach i in 0..<shape do
                        yield i;
                } else {
                    foreach i in 0..<shape do
                        yield i;
                }
            }
        }

        inline iter _domain.every(param tag: iterKind) where tag == iterKind.standalone && rank == 1 {
            const shape = this.fastShape;
            if CHPL_LOCALE_MODEL != "gpu" {
                forall i in 0..<shape do 
                    yield i;
            } else {
                if loopGpuSupport && here.isGpu() {
                    @assertOnGpu
                    forall i in 0..<shape do
                        yield i;
                } else {
                    forall i in 0..<shape do
                        yield i;
                }
            }
        }

        inline iter _domain.every() where rank > 1 {
            if CHPL_LOCALE_MODEL != "gpu" {
                foreach i in this do 
                    yield i;
            } else {
                const shape = this.fastShape;
                var prod = 1;
                var divs: rank * int;
                for param j in 0..<rank {
                    param i = rank - j - 1;
                    divs(i) = prod;
                    prod *= shape(i);
                }
                if loopGpuSupport && here.isGpu() {
                    @assertOnGpu
                    foreach i in 0..<prod {
                        yield indexAtHelperMultiples(i,(...divs));
                    }
                } else {
                    foreach i in 0..<prod {
                        yield indexAtHelperMultiples(i,(...divs));
                    }
                }
            }
        }

        inline iter _domain.every(param tag: iterKind) where tag == iterKind.standalone && rank > 1 {

            if CHPL_LOCALE_MODEL != "gpu" {
                forall i in this do 
                    yield i;
            } else {
                // compilerWarning("Using domain every.");
                const shape = this.fastShape;
                var prod = 1;
                var divs: rank * int;
                for param j in 0..<rank {
                    param i = rank - j - 1;
                    divs(i) = prod;
                    prod *= shape(i);
                }
                if loopGpuSupport && here.isGpu() {
                    @assertOnGpu
                    forall i in 0..<prod {
                        yield indexAtHelperMultiples(i,(...divs)); // orderToIndex(i); // indexAtHelperMultiples(i,(...divs));
                    }
                } else {
                    forall i in 0..<prod {
                        yield indexAtHelperMultiples(i,(...divs)); // orderToIndex(i); // indexAtHelperMultiples(i,(...divs));
                    }
                }
            }

        }

        inline iter _domain.everyZip() {
            const shape = this.fastShape;
            if CHPL_LOCALE_MODEL != "gpu" {
                if rank == 1 {
                    foreach i in 0..<shape do yield (i,i);
                } else {
                    var strides: rank * int;
                    var prod = 1;
                    for param j in 0..<rank {
                        param i = rank - j - 1;
                        strides(i) = prod;
                        prod *= shape(i);
                    }
                    foreach idx in this {
                        var i: int;
                        for param k in 0..<rank do
                            i += idx(k) * strides(k);
                        yield (i,idx);
                    }
                }
            } else {
                if rank == 1 {
                    if loopGpuSupport {
                        @assertOnGpu
                        foreach i in 0..<shape do 
                            yield (i,i);
                    } else {
                        foreach i in 0..<shape do
                            yield (i,i);
                    }
                } else {
                    var prod = 1;
                    var divs: rank * int;
                    for param j in 0..<rank {
                        param i = rank - j - 1;
                        divs(i) = prod;
                        prod *= shape(i);
                    }
                    if loopGpuSupport {
                        @assertOnGpu
                        foreach i in 0..<prod {
                            yield (i,indexAtHelperMultiples(i,(...divs))); // orderToIndex(i); // indexAtHelperMultiples(i,(...divs));
                        }
                    } else {
                        foreach i in 0..<prod {
                            yield (i,indexAtHelperMultiples(i,(...divs))); // orderToIndex(i); // indexAtHelperMultiples(i,(...divs));
                        }
                    }
                }
            }
        }

        inline iter _domain.everyZip(param tag: iterKind) where tag == iterKind.standalone {
            const shape = this.fastShape;
            if CHPL_LOCALE_MODEL != "gpu" {
                if rank == 1 {
                    forall i in 0..<shape do yield (i,i);
                } else {
                    var strides: rank * int;
                    var prod = 1;
                    for param j in 0..<rank {
                        param i = rank - j - 1;
                        strides(i) = prod;
                        prod *= shape(i);
                    }
                    forall idx in this {
                        var i: int;
                        for param k in 0..<rank do
                            i += idx(k) * strides(k);
                        yield (i,idx);
                    }

                }
            } else {
                if rank == 1 {
                    if loopGpuSupport {
                        @assertOnGpu
                        forall i in 0..<shape do 
                            yield (i,i);
                    } else {
                        forall i in 0..<shape do
                            yield (i,i);
                    }
                } else {
                    var prod = 1;
                    var divs: rank * int;
                    for param j in 0..<rank {
                        param i = rank - j - 1;
                        divs(i) = prod;
                        prod *= shape(i);
                    }
                    if loopGpuSupport {
                        @assertOnGpu
                        forall i in 0..<prod {
                            yield (i,indexAtHelperMultiples(i,(...divs))); // orderToIndex(i); // indexAtHelperMultiples(i,(...divs));
                        }
                    } else {
                        forall i in 0..<prod {
                            yield (i,indexAtHelperMultiples(i,(...divs))); // orderToIndex(i); // indexAtHelperMultiples(i,(...divs));
                        }
                    }
                }
            }
        }

        inline iter _domain.everyZip(param tag: iterKind) where tag == iterKind.leader {
            const shape = this.fastShape;
            if CHPL_LOCALE_MODEL != "gpu" {
                if rank == 1 {
                    forall i in 0..<shape do yield (i,i);
                } else {
                    var blks: rank * int;
                    for param j in 0..<rank {
                        param i = rank - j - 1;
                        if i == rank - 1 then
                            blks(i) = 1;
                        else
                            blks(i) = shape(i) * blks(i + 1);
                    }
                    // forall idx in this {
                    //     var i: int;
                    //     for param k in 0..<rank do
                    //         i += idx(k) * blks(k);
                    //     yield (i,idx);
                    // }
                    forall followThis in _value.these(tag) do yield followThis;
                }
            } else {
                if rank == 1 {
                    if loopGpuSupport {
                        @assertOnGpu
                        forall i in 0..<shape do 
                            yield (i,i);
                    } else {
                        forall i in 0..<shape do
                            yield (i,i);
                    }
                } else {
                    var prod = 1;
                    var divs: rank * int;
                    for param j in 0..<rank {
                        param i = rank - j - 1;
                        divs(i) = prod;
                        prod *= shape(i);
                    }
                    if loopGpuSupport {
                        @assertOnGpu
                        forall i in 0..<prod {
                            yield (i,indexAtHelperMultiples(i,(...divs))); // orderToIndex(i); // indexAtHelperMultiples(i,(...divs));
                        }
                    } else {
                        forall i in 0..<prod {
                            yield (i,indexAtHelperMultiples(i,(...divs))); // orderToIndex(i); // indexAtHelperMultiples(i,(...divs));
                        }
                    }
                }
            }
        }
        inline iter _domain.everyZip(param tag: iterKind,followThis) where tag == iterKind.follower {
            const shape = this.fastShape;
            if CHPL_LOCALE_MODEL != "gpu" {
                if rank == 1 {
                    forall i in 0..<shape do yield (i,i);
                } else {
                    var strides: rank * int;
                    var prod = 1;
                    for param j in 0..<rank {
                        param i = rank - j - 1;
                        strides(i) = prod;
                        prod *= shape(i);
                    }
                    forall idx in this {
                        var i: int;
                        for param k in 0..<rank do
                            i += idx(k) * strides(k);
                        yield (i,idx);
                    }
                }
            } else {
                if rank == 1 {
                    if loopGpuSupport {
                        @assertOnGpu
                        forall i in 0..<shape do 
                            yield (i,i);
                    } else {
                        forall i in 0..<shape do
                            yield (i,i);
                    }
                } else {
                    var prod = 1;
                    var divs: rank * int;
                    for param j in 0..<rank {
                        param i = rank - j - 1;
                        divs(i) = prod;
                        prod *= shape(i);
                    }
                    if loopGpuSupport {
                        @assertOnGpu
                        forall i in 0..<prod {
                            yield (i,indexAtHelperMultiples(i,(...divs))); // orderToIndex(i); // indexAtHelperMultiples(i,(...divs));
                        }
                    } else {
                        forall i in 0..<prod {
                            yield (i,indexAtHelperMultiples(i,(...divs))); // orderToIndex(i); // indexAtHelperMultiples(i,(...divs));
                        }
                    }
                }
            }
        }

        inline proc _domain.indexAt(n: int) where rank == 1 {
            return n;
        }
        inline proc _domain.indexAt(n: int) where rank > 1 {
            // return util.indexAt(n,(...this.fastShape)); // this.orderToIndex(n);
            const shape_ = this.fastShape;
            // var idx: rank * int; // 33 sec @ 1000
            // var order = n;
            // var div = 1;
            // for param i in 0..<rank do
            //     div *= shape_(i);
            // for param i in 0..<rank {
            //     div /= shape_(i);
            //     idx(i) = order / div;
            //     order %= div;
            // }
            // return idx;
            var result: rank * int;
            var strides: rank * int;
            var idx = n;
            var stride = 1;
            for param i in 0..<rank {
                param j = rank - 1 - i;
                strides(j) = stride;
                stride *= shape_(j);
            }
            for param i in 0..<rank {
                result(i) = idx / strides(i);
                idx %= strides(i);
            }
            return result;
        }

        inline proc _domain.fastShape {
            var s: rank * int;
            const dms = dims();
            for param i in 0..<rank {
                const ref dm = dms(i);
                s(i) = (dm.highBound - dm.lowBound) + 1;
            }
            if rank == 1 then 
                return s(0);
            else
                return s;
        }

        inline proc _domain.fastNormalDims {
            var s: rank * range;
            const dms = dims();
            for param i in 0..<rank {
                const ref dm = dms(i);
                const upper = (dm.highBound - dm.lowBound) + 1;
                s(i) = 0..<upper;
            }
            return s;
        }


        inline proc _domain.myShape {
            var s: rank * int;
            const dms = dims();
            for param i in 0..<rank {
                s(i) = dms(i).highBound - dms(i).lowBound;
            }
            return s;
        }


        // inline operator =(ref tup: _tuple, val: tup.eltType) where isHomogeneousTuple(tup) {
        //     for param i in 0..<tup.size {
        //         tup(i) = val;
        //     }
        // }

        // inline proc _range.init=(end: int) {
        //     this.init(int,0,end);
        // }

        // inline operator :(end: int, type T: range(idxType=int)) {
        //     return 0..<end;
        // }

        inline proc _domain.normalize where this.isRectangular() {
            const dms = fastNormalDims;
            return {(...dms)};
        }

        inline proc _domain.isNormal: bool where this.isRectangular() {
            if this.strides == strideKind.one {
                const lw: this.fullIdxType;
                return this.stride == lw + 1 && lw == this.low;
            } else {
                return false;
            }
        }


        inline proc param string.this(param start: int, param stop: int) param do
            return this.slice(start,stop);

        inline proc param string.slice(param start: int, param stop: int, param idx: int = start) param {
            compilerAssert(start <= stop);
            compilerAssert(stop <= this.size);
            if start <= idx && idx < stop {
                return this[idx] + slice(start,stop,idx + 1);
            } else {
                return "";
            }
        }

        inline proc param string.take(param count: int) param do
            return this.slice(0,count);

        inline proc param string.drop(param count: int) param do
            return this.slice(count,this.size);

        inline proc param string.countOccurrences(param c: string, param idx: int = 0) param {
            if idx == this.size {
                return 0;
            } else if c == this[idx] {
                return 1 + this.countOccurrences(c,idx + 1);
            } else {
                return countOccurrences(c,idx + 1);
            }
        }

        inline proc param string.takeUntil(param del: string, param idx: int = 0, param keepDel: bool = false) param {
            if this[idx] == del {
                if keepDel then
                    return this[idx];
                else
                    return "";
            } else {
                return this[idx] + this.takeUntil(del,idx + 1);
            }
        }

    }
}


