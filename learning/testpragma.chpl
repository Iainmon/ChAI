



proc _tuple.imageType(f) type {
    type eltType = this.eltType;
    const t0: eltType = this(0);
    return f(t0).type;
}

proc _tuple.eltType type where isHomogeneousTuple(this) {
    return this(0).type;
}

proc _tuple.map(f: proc(_: this.eltType)): this.size * this.imageType(f) where isHomogeneousTuple(this) {
    param rank: int = this.size;
    type eltType = this.eltType;// this(0).type;
    type outType = this.imageType(f); // img.type;
    writeln(f.type);
    var imgs: rank * outType;
    for param i in 0..<rank do
        imgs(i) = f(this(i));
    return imgs;
}

proc suc(x: int) {
    return x + 1;
}

var t1 = (1,2,3,4);
var t2 = t1.map(suc);
writeln(t1);
writeln(t2);