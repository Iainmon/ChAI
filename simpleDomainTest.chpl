use SimpleDomain;
use Utilities.Standard;
import Utilities as util;

proc compare(dom:domain(?),d: rect(?rank)) where dom.rank == rank {
    inline proc compareI(i) do
        return compareI((...i));
    inline proc compareI(i,j) do
        if i.type != j.type then
            compilerError(i.type:string + "!=" + j.type:string);
        else
            return i == j;
    proc test(i) do
        if i.type == tuple then
            if !compareI(i) then
                halt("Error on comparing ", i(0), " and ", i(1));

    for i in zip(dom,d) do
        test(i);
    foreach i in zip(dom,d) do
        test(i);
    forall i in zip(dom,d) do
        test(i);
    
    // for i in zip(dom.everyZip(),d.eachOrder()) do
    //     test(i);
    // foreach i in zip(dom.everyZip(),d.eachOrder()) do
    //     test(i);
    // forall i in zip(dom.everyZip(),d.eachOrder()) do
    //     test(i);
    
}

{
    const d: rect(2) = {0..<5,0..<5};

    writeln(d);

    // for i in d.eachOrder() do
    //     writeln(i);
}

const Dom = {0..<3,0..<4,0..<5};
const d: rect(3) = new rect(Dom);

// compare(Dom,d);

// forall i in zip(d,d) do
//     writeln(i);

writeln(d);

writeln(d.toString());

const e: rect(4) = ((1,2,3,4),(1,1,1,1));
writeln(e.toString());

const f: rect(4) = (1,2,3,4);
writeln(f.toString());

proc fo(x,xs...) {
    writeln((x,xs));
}

fo(1,2,3);
// fo((...(1,)));

// var t: _tuple = ((1,2),(3,4));
// writeln(t.type:string);

// use Reflection;

// proc getField_(const ref obj:?t, param idx: int) param
//   where idx >= 0 &&
//         isParam(__primitive("field by num", obj, idx+1)) {

//   return __primitive("field by num", obj, idx+1);
// }

// proc isRecordType(type t: _tuple) param : bool do return true;

// param nf = __primitive("num fields",t.type);
// for param i in 0..<nf {
//     param fn: string = __primitive("field num to name",t.type,i+1);
//     writeln(fn:string);
//     writeln(__primitive("field by num",t,i+1).type:string);
// }

proc domainType(param rank: int) type do
    return DefaultRectangularDom(rank,int,strideKind.one);

{
    const d = util.domainFromShape(2,3,4);
    writeln(d.type:string);
    writeln(d._instance.type:string);
    writeln(d.distribution.type:string);
    writeln(d._instance.type:string);
    writeln(d._value.type:string);
}

{
    const d = util.domainFromShape(2,3,4);
    writeln(d._instance.type:string);
    writeln(domainType(3):string);

    writeln(domainType(3) == d.type);
    const x: domain(3,int) = util.domainFromShape(2,3,4);
    writeln(x.type:string);
    writeln(x.type == d.type);

    const y: _domain(?) = x;
    writeln(x.type == y.type);

}