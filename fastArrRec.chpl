use SimpleDomain;
use Utilities.Standard;


compilerWarning("Bounds checking: ", boundsChecking:string);


record ar {
    param rank: int;
    type eltType;

}

record ar2 {
    var sdom;
    var data;

    proc rank param: int {
        // return dom.rank;
        writeln("I was run");
        compilerWarning("I was run at compile time.");
        return data.rank;
    }

    proc eltType type do
        return data.eltType;
    
    proc init(type eltType, const dom: rect(?rank)) {
        var A: [dom.toDomain()] eltType = noinit;
        this.sdom = dom;
        this.data = A;
    }


    proc init(const dom: rect(?rank),const in fill: ?eltType) {
        //Winner
        const A: [dom.toDomain()] eltType = fill;
        this.sdom = dom;
        this.data = A;
        // or
        // Marginally faster, very acceptable
        // this.init(eltType,dom);
        // this.data = fill;
    }

    proc init(const dom: rect(?rank),const in data: [])
        where data.rank == rank {
        this.sdom = dom;
        this.data = data;
    }

}

config const n = 15000;
type dtype = real(64);

const sd: rect(2) = (n,n);

import Time;
var st = new Time.stopwatch();
st.start();

var timeCount = 0;


proc lapse(msg: string = "Timer " + timeCount:string) {
    st.stop();
    const t = st.elapsed();
    timeCount += 1;
    writeln(msg, "\t\t |\t\t ", (t * 1000_000.0):int, "us\t\t ", (t * 1000.0):int, "ms\t\t (", t:int," seconds)");
    st.clear();
    st.start();
}

proc _ref.foo() {
    writeln("meow");
    writeln(this.type:string);
    writeln(_val.type:string);
}

{
    lapse();
    var t1 = new ar2(dtype,sd);
    lapse("No fill.");

    var t2 = new ar2(sd,70);
    lapse("With fill.");

    var A1: [sd.toDomain()] dtype = noinit;
    var t3 = new ar2(sd,A1);
    lapse("With data noinit.");

    var t4 = new ar2(dtype,sd);
    t4.data = 70;
    lapse("With fill later.");

    writeln((t1.rank,t2.rank,t3.rank,t4.rank));
    writeln(t1.type:string);

    ref t4_ref = t4;
    t4_ref.foo();

}