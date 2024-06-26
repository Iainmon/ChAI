module M {
  pragma "infer custom type"
  record R {
    var val : int;
  }
  proc R.chpl__inferCopyType() type {
    return int;
  }
  operator =(ref lhs: int, const rhs: R) {
    lhs = rhs.val;
  }
  var x : R;
  var y = x;
  var z : R = x;
}