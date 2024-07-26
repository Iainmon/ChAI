class C { var n: int; }
proc f(in x: owned C) (std::unique_ptr<C> x);
proc f(ref x: owned C) (std::unique_ptr<C>& x);
proc f(in x: borrowed C) (C*x);
proc f(ref x: borrowed C) (C* & x);

proc f(x: owned C) {
    writeln(x.type:string);
    // x = nil;
}

var c = new owned C(1);
writeln(c);
f(c);

writeln(c);