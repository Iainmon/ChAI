


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

    proc size {
        var s = 1;
        
    }
}