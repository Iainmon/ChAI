use Remote;

var D = {0..<10,0..<10};

var A: [D] real(32);

var a = new shared Remote(A);
writeln(a);