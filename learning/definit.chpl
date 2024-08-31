
use Reflection;


proc (class).defaultInit(args...?nargs) {
    param numFields = getNumFields(this.type);
    if numFields != nargs then compilerError("Fields must match args");

    for param i in 0..<numFields {
        getField(this, i) = args(i);
    }
}



class C {
    var x: int;
    var y: bool;

    proc init() {
        this.defaultInit(1,true);
    }
}

var c = new owned C();
writeln(c);