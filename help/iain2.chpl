class BaseTensorResource {
  proc forwardDifferentiate() {
    halt("Unimplemented forwardDifferentiate in base class");
  }
}

record ndarray {
  param rank;
  type eltType;
}

class TensorResource : BaseTensorResource {
  type operation;

  param rank: uint;
  type eltType;
  var data: ndarray(rank, eltType);

  forwarding var operationData: operation;

  override proc forwardDifferentiate() {
    operationData.forwardDifferentiate();
  }
}

record rawInput {
  proc forwardDifferentiate() {
    writeln("Calling forward differentiate from rawInput");
  }
}

record addOp {
  var lhs: shared BaseTensorResource;
  var rhs: shared BaseTensorResource;

  proc forwardDifferentiate() {
    writeln("Calling forward differentiate from addOp");
    lhs.forwardDifferentiate();
    rhs.forwardDifferentiate();
  }
}

record tensor {
  forwarding var resource: shared BaseTensorResource;
}

var input1 = new shared TensorResource(rawInput, 1, real, new ndarray(1 : uint, real));
var input2 = new shared TensorResource(rawInput, 1, real, new ndarray(1 : uint, real));
var add = new shared TensorResource(addOp, 1, real, new ndarray(1 : uint, real), new addOp(input1, input2));

writeln(add.lhs);

var t1 = new tensor(input1);
var t2 = new tensor(input2);
var t3 = new tensor(add);

t3.forwardDifferentiate();


writeln(t1.type:string);

writeln(t3);