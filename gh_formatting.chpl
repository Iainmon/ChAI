proc param string.this(param start: int, param stop: int) param do
    return this.slice(start,stop);

proc param string.slice(param start: int, param stop: int, param idx: int = start) param {
    compilerAssert(start <= stop);
    compilerAssert(stop <= this.size);
    if start <= idx && idx < stop {
        return this[idx] + this.slice(start,stop,idx + 1);
    } else {
        return "";
    }
}

proc param string.take(param count: int) param do
    return this.slice(0,count);

proc param string.drop(param count: int) param do
    return this.slice(count,this.size);

proc param string.countOccurrences(param c: string, param idx: int = 0) param {
    if idx == this.size {
        return 0;
    } else if c == this[idx] {
        return 1 + this.countOccurrences(c,idx + 1);
    } else {
        return this.countOccurrences(c,idx + 1);
    }
}

proc param string.takeUntil(param del: string, param idx: int = 0, param keepDel: bool = false) param {
    if this[idx] == del {
        if keepDel then
            return this[idx];
        else
            return "";
    } else {
        return this[idx] + this.takeUntil(del,idx + 1);
    }
}