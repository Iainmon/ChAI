use Remote;


use Debugger;

const dev = Remote.defaultDevice;

record R { var n: int; }

on dev var x: shared Remote(R) = new R(1);

writeln(x);

writeln(x.type:string);

writeln(chpl_wrapper_x,chpl_wrapper_x.get());

writeln();

writeln((x,x.type:string,x.get(),x.get().type:string));

x.ptr = new R(10);
writeln(x);




writeln("HAPPY EXIT!");
halt("eof");


var D = {0..<10,0..<10};

var A: [D] int;

// var a = new shared Remote(A);
// writeln(a);

// writeln(a.locale);
record integer {
    var x: int;
}

proc integer.init(other: integer) do
    this.x = other.x;

proc integer.init=(other: integer) do
    this.x = other.x;

operator =(ref lhs: integer, rhs: integer) do
    lhs.x = rhs.x;

operator :(val: integer, type T: integer): integer do
    return val;



proc integer.init(other: int) do
    this.x = other;

proc integer.init=(other: int) do
    this.x = other;

operator =(ref lhs: integer, rhs: int) do
    lhs.x = rhs;

operator :(val: int, type T: integer): integer do
    return new integer(val);


// proc Integer.init(other: int) {
//     this.x = other;
// }

// proc integer.init=(other: integer) do
//     this.x = other.x;


// proc integer.init=(other: int) do
//     this.x = other;

// operator =(ref lhs: integer, rhs: int) do
//     lhs.x = rhs;


// operator :(val: integer, type T: val.type) do
//     return val;

// operator :(val: int, type T: integer): integer do
//     return new integer(val);


proc f(): int {
    return A[0,0] + 3 : int;
}
// on Locales[0] var b: owned Remote(integer) = f();


proc makeList(n) do return [i in 0..<n] i;

use List;
// on Locales[0] var l: owned Remote(list(int)) = makeList(5);
// l = [1,2,3] : list(int);
// writeln((l.type:string));


// breakpoint;
// writeln((b,b.type:string));
// b = 4;

// Works
// var c: integer = f();
// c = 4;
// writeln(c);
// c = f();
// const i: int;
// writeln(c,", ",c.type:string,", ",c.x.type:string,", ",i.type:string);

// on dev var a: owned Remote(A.type) = A;

// on dev var a: owned Remote(integer) = + reduce A; // works
// on dev var b: owned Remote(integer);

///
// chpl remoteTest.chpl --print-callstack-on-error --detailed-errors --explain-verbose --devel --print-additional-errors --no-inline --print-all-candidates --baseline && ./remoteTest
///