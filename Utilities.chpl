
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
        var ranges: rank*range;
        for param i in 0..<rank do
            ranges(i) = 0..<shape(i);
        return {(...ranges)};
    }


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
}
