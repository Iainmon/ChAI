


inline proc zeroTup(param rank: int) {
    const t: rank * int;
    return t;
}


record rect {
    param rank: int;
    var shape: rank * int;
    var offset: rank * int = zeroTup(rank);

    proc init(shape: int ...?rank) {
        this.rank = rank;
        this.shape = shape;
    }

    inline proc size: int {
        var s: int = 1;
        for param i in 0..<rank do
            s *= shape(i);
        return s;
    }
}