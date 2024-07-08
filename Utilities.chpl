
module Utilities {

    import IO;
    import ChapelArray;
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
        for i in D {
            yield i;
        }
    }

    iter flatIter(param tag: iterKind,D: domain(?)) where tag == iterKind.standalone {
        const flat = {0..<D.size};
        foreach i in flat {
            yield D.orderToIndex(i);
        }
    }

    inline proc normalizeArray(arr: []) {
        const arrDom = arr.domain;
        const normalDomain = normalizeDomain(arrDom);
        return foreach (_,a) in zip(normalDomain,arr) do a;
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
        const shape = dom.shape;
        const normalDom = domainFromShape((...shape));
        return normalDom;
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

    proc argsort(tup: int...?rank) {
        writeln("IAIN: just do it, it's not that hard. (tuple argsort)");
        return tup;
    }

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
}
