

// class C {
//     var n: int;
//     proc init(n: int = 0) {
//         this.n = n;
//     }
// }

// var a: shared C? = new C();
// writeln(a);


class B {
  var c: shared C?;
  proc init(c: shared C? = nil) { this.c = c; }
}
class C {
  proc init() {}
  proc method() {
    var b = new shared B(this);
    return b;
  }
}
var c: shared C? = new shared C();
writeln(c.method());
// how do I call c.method()?