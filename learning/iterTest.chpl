use ChapelIteratorSupport;
use Reflection;
use Types;

type itr = _iteratorRecord;
type thnk = _thunkRecord;


// pragma "no implicit copy"
// pragma "fn returns iterator"
inline proc thunk(e) {
    var a = __primitive("create thunk",e);
    return a;
}

// pragma "fn returns iterator"
proc force(in t: thnk) { // thunkToReturnType(t.type) {
     return __primitive("force thunk", t);
}

pragma "fn returns iterator"
operator +(in a: itr,in b: itr): itr where chpl_iteratorFromForeachExpr(a) && chpl_iteratorFromForeachExpr(b) {
    return foreach (x,y) in zip(a,b) do x + y;
}



operator +(ref a: thnk,ref b: thnk) {
    return thunk(force(a) + force(b));
}

proc say(s:string): string { writeln(s); return ":)"; }


// // pragma "no copy" const a = thunk(say("Hello"));
// var a = thunk(for i in 0..10 do say("Hello " + i:string));//__primitive("create thunk", for i in 0..10 do say("Hello " + i:string));
// writeln("hi");
// // writeln(__primitive("force thunk", a));
// // writeln(__primitive("force thunk", a));
// writeln(force(a));


var a = thunk(foreach x in 0..10 do x);
var b = thunk(foreach x in 0..10 do x);

for param i in 0..<numFields(a.type)  {
    writeln(getFieldName(a.type,i));
}

writeln(a.type:string);
writeln(b.type:string);

writeln(force(a).type:string);

writeln(force(a));

// var d = a + b;
// writeln(d.type:string);
// writeln(force(d),force(d).type);

// var c = a + b;

var m1 = thunk(
    foreach (i,j) in {0..<5,0..<5} do 
        if i == j then 1 else 0
);

var m2 = thunk(
    foreach (i,j) in {0..<5,0..<5} do 
        if i - j == j then 1 else 0
);


writeln(force(m1));
writeln(force(m2));

var c = thunk(force(m1) + force(m2)) + (a + b);

writeln(force(c));


var kernel = thunk(foreach (f,c,h,w) in {0..                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              })
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        jj5nmb                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           iuuiui