

proc idk(arg: _iteratorRecord) {}

proc printType(arg) {writeln(arg.type:string); writeln(arg);}


var A = [1.0,2.0,3.0];
proc f(B: [] real): _iteratorRecord do return  B * B;

// idk(f(A)); // does this compile?
printType(A * A);
printType(f(A));