import Utilities as util;

on here.gpus[0] {
    const D = {0..<3,0..<3,0..<3};
    var A: [D] int;
    foreach i in D {
        A[i] = A[i] + 1;
    }

    writeln("My Break");

    foreach i in util.flatIter(D) {
        A[i] = A[i] + 1;
    }
}
