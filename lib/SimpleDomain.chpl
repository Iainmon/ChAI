import Utilities as util;
use Utilities.Standard;


proc isDomain(d: ?dt) param : bool {
    use Types only isDomainType;
    return isDomainType(dt) && d.isRectangular();
}

inline proc zeroTup(param rank: int) {
    const t: rank * int;
    return t;
}

proc simpleTupleType(param rank: int, type eltType = int) type do
    if rank == 1 then
        return eltType;
    else 
        return rank * eltType;

inline proc wrap(x: int): 1 * int do
    return (x,);

inline proc wrap(tup: ?rank * int): rank * int do
    return tup;

inline proc unwrap(tup: ?rank * int) do
    if rank == 1 then 
        return tup(0);
    else
        return tup;


inline proc computeStrides(shape: ?rank*int): simpleTupleType(rank) {
    var strides: rank * int;
    var stride = 1;
    for param i in 0..<rank {
        param j = rank - 1 - i;
        strides(j) = stride;
        stride *= shape(j);
    }
    return strides;
}

inline proc computeSize(shape: ?rank*int): int {
    var s: int = 1;
    for param i in 0..<rank do
        s *= shape(i);
    return s;
}

inline proc computeBlocks(shape: ?rank*int): rank*int {
    var blks: rank * int;
    for param j in 0..<rank {
        param i = rank - j - 1;
        if i == rank - 1 then
            blks(i) = 1;
        else
            blks(i) = shape(i) * blks(i + 1);
    }
    return blks;
}

record rect {
    param rank: int;
    const shape: rank * int;
    const strides: rank * int;
    const blocks: rank * int;
    const offset: rank * int;
    const size: int;

    proc init(shape: ?rank * int, strides: rank * int = computeStrides(shape), blocks: rank * int = computeBlocks(shape),offset: rank * int = zeroTup(rank),size: int = computeSize(shape)) {
        this.rank = rank;
        this.shape = shape;
        this.strides = strides;
        this.blocks = blocks;
        this.offset = offset;
        this.size = size;
    }

    proc init(shape: int ...?rank) do
        this.init(shape,computeStrides(shape),computeBlocks(shape),zeroTup(rank),computeSize(shape));

    proc init(dom: _domain(?)) where isDomain(dom) {
        param rank = dom.rank;
        var s,o: rank * int;
        const dms = dom.dims();
        for param i in 0..<rank {
            const ref dm = dms(i);
            const hb = dm.highBound;
            const lb = dm.lowBound;
            o(i) = lb;
            s(i) = (hb - lb) + 1;
        }
        this.init(s,computeStrides(s),computeBlocks(s),o,computeSize(s));
    }

    proc init=(shape: ?rank*int) do
        this.init(shape);

    operator :(shape: ?rank*int, type toType: rect(rank)): rect(rank) do
        return new rect((...shape));

    proc init=(dom: _domain(?)) where isDomain(dom) do
        this.init(dom);

    operator :(dom: _domain(?), type toType: rect(dom.rank)): rect(dom.rank) where isDomain(dom) do
        return new rect(dom);

    inline proc low: rank * int do
        return offset;

    inline proc high: rank * int {
        var his = offset;
        for param i in 0..<rank do
            his(i) += shape(i) - 1;
        return his;
    }
    
    inline proc dims(): rank * range {
        var dms: rank * range;
        for param i in 0..<rank do
            dms(i) = offset(i)..<shape(i);
        return dms;
    }

    inline proc indexAt(const order: int): simpleTupleType(rank) {
        if rank == 1 then
            return order;
        // if rank > 1 do
        var result: rank * int;
        var idx = order;
        for param i in 0..<rank {
            result(i) = idx / strides(i);
            idx %= strides(i);
        }
        return result;
    }

    inline proc toDomain(): domain(rank,int) do
        return {(...dims())};

    inline operator :(sd: rect(?rank), type toType: domain(rank,int)) do
        return sd.toDomain();

    inline iter eachOrder(): (int,simpleTupleType(rank)) {
        // if !util.targetGpu() {
        //     const dom = toDomain();
        //     foreach idx in dom do yield idx;
        // }
        foreach i in 0..<size do
            yield (i,indexAt(i));
    }

    inline iter these(): simpleTupleType(rank) {
        // if !util.targetGpu() {
        //     const dom = toDomain();
        //     foreach idx in dom do yield idx;
        // }

        if rank == 1 then {
            foreach i in 0..<size do
                yield i;
        } else {
            foreach i in 0..<size do
                yield indexAt(i);
        }
    }


}