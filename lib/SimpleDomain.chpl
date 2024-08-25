import Utilities as util;
// use Utilities.Standard;
private use IO;


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

proc pairOfHomTuples(tup) param : bool do
    return isHomogeneousTuple(tup) 
            && isHomogeneousTuple(tup(0))
            && isTuple(tup(0).type) 
            && isTuple(tup(1).type)
            && tup(0).type == tup(1).type;


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

record rect : serializable {
    param rank: int;
    const shape: rank * int;
    const offset: rank * int;
    const size: int;

    const strides: rank * int;

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

    inline proc init(const shape: ?rank*int,const offset: rank*int = zeroTup(rank)) {
        var strides: rank*int;
        var size = 1;
        for param j in 0..<rank {
            param i = rank - j - 1;
            strides(i) = size;
            size *= shape(i);
        }
        this.init(shape,offset,size,strides);
    }

    inline proc init(shape: int ...?rnk) do
        this.init(shape);

    inline proc init(const dom: _domain(?)) where isDomain(dom) {
        param rank = dom.rank;
        var shape,offset: rank * int;
        const dms = dom.dims();
        for param i in 0..<rank {
            const ref dm = dms(i);
            const hb = dm.highBound;
            const lb = dm.lowBound;
            offset(i) = lb;
            shape(i) = (hb - lb) + 1;
        }
        this.init(shape,offset);
    }

    inline proc init=(const shape: ?rank*int) do
        this.init(shape);

    inline operator :(const shape: ?rank*int, type toType: rect(rank)): rect(rank) do
        return new rect((...shape));

    inline proc init=(const shapeOffset: 2*(_tuple)) 
            where pairOfHomTuples(shapeOffset) do
        this.init(shapeOffset(0),shapeOffset(1));

    inline operator :(const shapeOffset: 2*(_tuple), type toType: rect(?rank))
            where pairOfHomTuples(shapeOffset) && rank == shapeOffset(0).size do
        return new rect(shapeOffset(0),shapeOffset(1));


    inline proc init=(const dom: _domain(?)) where isDomain(dom) do
        this.init(dom);

    inline operator :(const dom: _domain(?), type toType: rect(dom.rank)): rect(dom.rank) where isDomain(dom) do
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
        if !util.targetGpu() {
            const dom = toDomain();
            foreach idx in dom do yield idx;
            return;
        }

        if rank == 1 then
            foreach i in 0..<size do
                yield (i,i);
        else
            foreach i in 0..<size do
                yield (i,indexAt(i));
    }

    inline iter these(): simpleTupleType(rank) {
        // if !util.targetGpu() {
        //     const dom = toDomain();
        //     foreach idx in dom do yield idx;
        // }

        if rank == 1 then
            foreach i in 0..<size do
                yield i;
        else
            foreach i in 0..<size do
                yield indexAt(i);
    }


    proc toString() {
        use IO;
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

    // var chplType: string;
    // select metadata.dtype {
    //   when "i4", "<i4" do chplType = "int(32)";
    //   when "i8", "<i8" do chplType = "int(64)";
    //   when "f4", "<f4" do chplType = "real(32)";
    //   when "f8", "<f8" do chplType = "real(64)";
    //   otherwise {
    //     throw new Error("Only integer and floating point data types currently supported: %s".format(metadata.dtype));
    //   }
    // }