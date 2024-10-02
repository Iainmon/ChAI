import Utilities as util;
private use IO;


proc isDomain(d: ?dt) param : bool {
    use Types only isDomainType;
    return isDomainType(dt) && d.isRectangular();
}

proc isRegularDomain(d: ?dt) param : bool {
    use Types only isDomainType;
    return isDomainType(dt) && d.isRectangular();
}

inline proc zeroTup(param rank: int): rank*int {
    const t: rank * int;
    return t;
}

proc simpleTupleType(param rank: int, type eltType = int) type do
    if rank == 1 then
        return eltType;
    else 
        return rank * eltType;


type tuple = _tuple(?);

pragma "reference to const when const this"
inline proc tuple.first ref do 
    return this(0);

pragma "reference to const when const this"
inline proc tuple.last ref do
    return this(this.size - 1);

proc tuple.eltType type do
    if isHomogeneousTuple(this.type) then
        return this(0).type;
    else
        compilerError("Not homogeneous.");

// proc type tuple.eltType type
//     where isHomogeneousTuple(this) do
//         return this(0);

pragma "reference to const when const this"
inline proc tuple.uncons ref : (this.head.type,this.tail.type) {
    inline proc firstRest(first, rest...) do
        return (first,rest);
    return firstRest((...this));
}

pragma "reference to const when const this"
inline proc tuple.head ref do
    return this(0);

pragma "reference to const when const this"
inline proc tuple.tail {
    inline proc rest(first, rst...) do
        return rst;
    if this.size > 1 then
        return rest((...this));
    else
        return compilerError("Taking the tail of a tuple must require it to have more than one elements.");
}


inline proc isTupleOfOrder(type leafType, param order: int, tup: ?tupType) param : bool {
    
    inline proc isTupleOfOrderHelp(param level: int,tup: ?tupType) param : bool {
        if !isTuple(tupType) then
            return tupType == leafType && level == 0;

        if !isHomogeneousTuple(tupType) then
            return false;
        
        return isTupleOfOrderHelp(level - 1, tup(0));
    }
    return isTupleOfOrderHelp(order, tup);
}



inline proc computeStrides(shape: ?rank*int): simpleTupleType(rank) {
    var strides: rank * int;
    var prod = 1;
    for param j in 0..<rank {
        param i = rank - j - 1;
        strides(i) = prod;
        prod *= shape(i);
    }
    return strides;
}

inline proc computeSize(shape: ?rank*int): int {
    var s: int = 1;
    for param i in 0..<rank do
        s *= shape(i);
    return s;
}

inline proc computeAtIndex(const idx: int): int do
    return idx;

inline proc computeAtIndex(const shape: ?rank*int, const idx: rank*int): int {
    if rank == 1 then
        return idx;
    const strides = computeStrides(shape);
    // if rank > 1 do
    var i: int;
    for param j in 0..<rank do
        i += idx(j) * strides(j);
    return i;
}



record rect : serializable {
    param rank: int;
    var shape: rank * int;
    var offset: rank * int;
    var size: int;

    var strides: rank * int;

    inline
    proc init(const shape: ?rank * int,
              const offset: rank * int,
              const size: int,
              const strides: rank * int = computeStrides(shape)) {
        this.rank = rank;
        this.shape = shape;
        this.offset = offset;
        this.size = size;
        this.strides = strides;
    }

    inline
    proc init(const shape: ?rank*int,
              const offset: rank*int = zeroTup(rank)) {
        var strides: rank*int;
        var size = 1;
        for param j in 0..<rank {
            param i = rank - j - 1;
            strides(i) = size;
            size *= shape(i);
        }
        this.init(shape,offset,size,strides);
    }

    inline 
    proc init(const shape: int ...?rnk) do
        this.init(shape);

    inline 
    proc init(const ranges: ?rank*range) {
        var shape,offset: rank * int;
        for param i in 0..<rank {
            const ref dm = ranges(i);
            const hb = dm.highBound;
            const lb = dm.lowBound;
            offset(i) = lb;
            shape(i) = (hb - lb) + 1;
        }
        this.init(shape,offset);
    }

    inline 
    proc init(const ranges: range(?)...?rank) do
        this.init(ranges);

    inline 
    proc init(const dom: domain(?)) 
            where isDomain(dom) 
                && dom.isRectangular() do
        this.init(dom.dims());

    inline
    proc init(const other: rect(?rank)) do
        this.init(other.shape,
                  other.offset,
                  other.size,
                  other.strides);


    inline
    proc init=(const other: rect(?rank)) do
        this.init(other);
    
    /*
        Copy initializes a ``rect`` of rank ``rank`` from a tuple ``shape`` of ``int``s where ``shape.size == rank``.
    */
    inline 
    proc init=(const shape: ?rank*int) do
        this.init(shape);

    inline 
    operator :(const shape: ?rank*int, type toType: rect(rank)): rect(rank) do
        return new rect(shape);

    inline 
    proc init=(const shapeOffset: 2*(tuple(?))) 
            where isTupleOfOrder(int,2,shapeOffset) do
        this.init((...shapeOffset));

    inline 
    operator :(const shapeOffset: 2*(tuple(?)), type toType: rect(?))
            where isTupleOfOrder(int,2,shapeOffset) do
        return new rect((...shapeOffset));


    inline 
    proc init=(const ref dom: domain(?)) 
            where isDomain(dom) 
                && dom.isRectangular() do
        this.init(dom);

    inline 
    operator :(const ref dom: domain(?), type toType: rect(?))
            where isDomain(dom) 
                && dom.isRectangular() do
        return new rect(dom);

    inline 
    proc low const : rank * int do
        return offset;

    inline 
    proc high: rank * int {
        var his = offset;
        for param i in 0..<rank do
            his(i) += shape(i) - 1;
        return his;
    }

    inline proc coords const : 2*(rank*int) {
        var l,h = offset;
        for param i in 0..<rank do
            h(i) += shape(i);
        return (l,h);
    }

    inline proc shiftedShape: rank * int {
        var ss = shape;
        for param i in 0..<rank do
            ss(i) += offset(i);
        return ss;
    }
    
    inline 
    proc dims() const : rank * range {
        var dms: rank * range;
        for param i in 0..<rank do
            dms(i) = offset(i)..#shape(i);
        return dms;
    }

    inline 
    proc indexAt(const order: int): simpleTupleType(rank) {
        if rank == 1 then
            return order;
        // if rank > 1 do
        var result: rank * int;
        var idx = order;
        for param i in 0..<rank {
            const strideI = strides(i);
            result(i) = (idx / strideI) + offset(i);
            idx %= strideI;
        }
        return result;
    }

    inline 
    proc atIndex(const idx: int): int do
        return idx;

    inline 
    proc atIndex(const idx: rank*int): int {
        if rank == 1 then
            return idx;
        // if rank > 1 do
        var i: int;
        for param j in 0..<rank do
            i += (idx(j) - offset(j)) * strides(j);
        return i;
    }

    //compilerWarning("Come back to me. Not done with this. ");

    // pragma "suppress lvalue error"
    // pragma "fn returns iterator"
    // inline proc every(param tag: iterKind) do
    //     return these(tag=tag);
    
    // pragma "suppress lvalue error"
    // pragma "fn returns iterator"
    // inline proc every() do
    //     return these();

    inline iter serialIter() const : simpleTupleType(rank) do
        for i in 0..<size do
            yield indexAt(i);

    pragma "order independent yielding loops"
    inline iter these() const : simpleTupleType(rank) do
        if util.targetGpu() then
            @assertOnGpu
            foreach i in 0..<size do
                yield indexAt(i);
        else {
            const dom = toDomain();
            foreach idx in dom do
                yield idx;
        }

    pragma "order independent yielding loops"
    inline iter these(param tag: iterKind) const : simpleTupleType(rank) 
            where tag == iterKind.standalone do
        if util.targetGpu() then
            @assertOnGpu
            forall i in 0..<size do
                yield indexAt(i);
        else {
            const dom = toDomain();
            forall idx in dom do
                yield idx;
        }

    pragma "order independent yielding loops"
    inline iter eachOrder() const : (int,simpleTupleType(rank)) do
        if util.targetGpu() then
            @assertOnGpu
            foreach i in 0..<size do
                yield (i,indexAt(i));
        else {
            const dom = toDomain();
            foreach idx in dom do
                yield (atIndex(idx),idx);
        }

    pragma "order independent yielding loops"
    inline iter eachOrder(param tag: iterKind) const : (int,simpleTupleType(rank))
            where tag == iterKind.standalone do
        if util.targetGpu() then
            @assertOnGpu
            forall i in 0..<size do
                yield (i,indexAt(i));
        else {
            const dom = toDomain();
            forall idx in dom do
                yield (atIndex(idx),idx);
        }
    

    inline proc originate(const origin: rank * int) do
        return new rect(shape,origin,size,strides);

    inline proc translate(const change: rank * int) {
        var off = offset;
        for param i in 0..<rank do
            off(i) += change(i);
        return originate(off);
    }

    inline proc contains(const rct: rect(rank)): bool do
        return offset <= rct.offset && rct.shape <= shape;

    inline proc contains(const idx: rank*int): bool {
        var res: bool = true;
        for param i in 0..<rank do
            res &= offset(i) <= idx(i) && idx(i) < shape(i);
        return res;
    }

    proc toString() {
        use IO.FormattedIO;
        const dms = dims();
        var content: string = "";
        for param i in 0..<rank do
            content += (if i > 0 then ", %?" else "%?").format(shape(i));
        if offset != zeroTup(rank) then
            content = "(%s) + %?".format(content,offset);
        return "{ " + content + " }"; // + "[%i]}".format(size);
    }

    proc serialize(writer: IO.stdout.type,ref serializer) {
            if writer == IO.stdout then
                writer.write(toString());
            else
                halt("This should not happen.");
    }

    proc serialize(writer: IO.fileWriter(?),ref serializer) {
            var rh = serializer.startRecord(writer,"rect",5);
            rh.writeField("rank",rank);
            rh.writeField("shape",shape);
            rh.writeField("offset",offset);
            rh.writeField("strides",strides);
            rh.writeField("size",size);
            rh.endRecord();
    }
}

inline
operator =(ref me: rect(?rank), const other: rect(rank)) {
    me.shape   = other.shape;
    me.offset  = other.offset;
    me.size    = other.size;
    me.strides = other.strides;
}

operator +(const d: rect(?rank), const offset: rank*int): rect(rank) do
    return d.translate(offset);

operator -(const d: rect(?rank), const offset: rank*int): rect(rank) do
    return d.translate(-offset);

operator &(const a: rect(?rank), const b: rect(rank)): rect(rank) {
    const shape = min(a.shape,b.shape);
    const offset = max(a.offset,b.offset);
    return new rect(shape,offset);
}

// Unused but good functions.


// Same as computeStrides.
inline proc computeBlocks(shape: ?rank*int): rank*int {
    var blks: rank * int;
    for param j in 0..<rank {
        param i = rank - j - 1;
        if i == rank - 1 then
            blks(i) = 1;
        else
            blks(i) = shape(i + 1) * blks(i + 1);
    }
    return blks;
}

inline proc wrap(x: int): 1 * int do
    return (x,);

inline proc wrap(tup: ?rank * int): rank * int do
    return tup;

inline proc unwrap(tup: ?rank * int) do
    if rank == 1 then 
        return tup(0);
    else
        return tup;


inline proc isTupleOfOrder(param order: int, tup: ?tupType) param : bool {
    if !isTuple(tupType) then
        return false;
    inline proc isTupleOfOrderHelp(param level: int,tup: ?tupType) param : bool {
        if !isTuple(tupType) then
            return level == 0;

        if !isHomogeneousTuple(tupType) then
            return isTupleOfOrderHelp(level - 1, tup(0));

        for param i in 0..<tup.size do
            if !isTupleOfOrderHelp(level - 1, tup(i)) then
                return false;

        return true;
    }
    return isTupleOfOrderHelp(order, tup);
}

/*careful
    // I don't like working with thses.
        // pragma "reference to const when const this"
    inline iter eachOrder(param tag: iterKind) const : (int,simpleTupleType(rank))
            where tag == iterKind.leader {
        if util.targetGpu() then
            forall i in 0..<size do
                yield (i,indexAt(i));
        else {
            const dom = toDomain();
            forall idx in dom.these(tag) do
                yield (atIndex(idx),idx);
        }
    }

    inline iter eachOrder(param tag: iterKind,followThis) const : (int,simpleTupleType(rank))
            where tag == iterKind.follower {
        if util.targetGpu() then
            forall i in 0..<size do
                yield (i,indexAt(i));
        else {
            const dom = toDomain();
            // compilerError(followThis.type:string);
            foreach idx in dom.these(tag=tag,followThis) do
                yield (atIndex(idx),idx);
        }
    }

    // iter these_help(param d: int) /*where storageOrder == ArrayStorageOrder.RMO*/ {
    //   if d == rank-1 {
    //     foreach i in ranges(d) do
    //       yield i;
    //   } else if d == rank - 2 {
    //     foreach i in ranges(d) do
    //       foreach j in these_help(rank-1) do
    //         yield (i, j);
    //   } else {
    //     foreach i in ranges(d) do
    //       foreach j in these_help(d+1) do
    //         yield (i, (...j));
    //   }
    // }

    // pragma "reference to const when const this"
    // inline iter eachOrder(param tag: iterKind) ref : (int,simpleTupleType(rank))
    //         where tag == iterKind.leader {
    //     if util.targetGpu() then
    //         forall i in 0..<size do
    //             yield (i,indexAt(i));
    //     else {
    //         const dom = toDomain();
    //         forall idx in dom.these(tag) do
    //             yield (atIndex(idx),idx);
    //     }
    // }

    // pragma "order independent yielding loops"
    // pragma "reference to const when const this"
    // inline iter these() : simpleTupleType(rank) do
    //     foreach i in 0..<size do
    //         yield indexAt(i);

    // pragma "order independent yielding loops"
    // pragma "reference to const when const this"
    // inline iter these(param tag: iterKind) : simpleTupleType(rank) 
    //         where tag == iterKind.standalone do
    //     forall i in 0..<size do
    //         yield indexAt(i);

    pragma "order independent yielding loops"
    pragma "reference to const when const this"
    inline iter these(param tag: iterKind)
            where tag == iterKind.leader do
        yield this.dims();

    pragma "order independent yielding loops"
    inline iter these(param tag: iterKind, followThis, param fast: bool = false) const : simpleTupleType(rank)
            where tag == iterKind.follower {
        const rct = new rect({(...followThis)});
        if boundsChecking then
            if !contains(rct) then
                halt("Cannot have leading window be larger than following domain.");
        foreach idx in rct do
            yield indexAt(rct.atIndex(idx));
    }
    */
