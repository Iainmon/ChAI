

record R {
    var x: int = 1;
    proc init() {writeln("hello");}
}

record C {
    var data;
    proc init() {
        var A: [0..10] R = noinit;
        this.data = A;
    }
}

var A: [0..10] R = noinit;

var B = A;

var c = new C();

writeln((B.size,A.size));

writeln(B,A);

writeln(c);