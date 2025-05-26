use Tensor;

var a = Tensor.zeros(2,3).leakyrelu();
Testing.numericPrint(a);

var b = (Tensor.zeros(2,3,4) - 60.0).leakyrelu();
Testing.numericPrint(b);

b = (Tensor.zeros(2,3,4) - 1.0).leakyrelu();
Testing.numericPrint(b);

var c = (Tensor.zeros(10) + 40.0).leakyrelu();
Testing.numericPrint(c);

// same values with negativeSlope = -0.001
a = Tensor.zeros(2,3).leakyrelu(negativeSlope=-0.001);
Testing.numericPrint(a);

b = (Tensor.zeros(2,3,4) - 60.0).leakyrelu(negativeSlope=-0.001);
Testing.numericPrint(b);

c = (Tensor.zeros(10) + 40.0).leakyrelu(negativeSlope=-0.001);
Testing.numericPrint(c);

// same values with negativeSlope = 10.0
a = Tensor.zeros(2,3).leakyrelu(negativeSlope=10.0);
Testing.numericPrint(a);

b = (Tensor.zeros(2,3,4) - 60.0).leakyrelu(negativeSlope=10.0);
Testing.numericPrint(b);

c = (Tensor.zeros(10) + 40.0).leakyrelu(negativeSlope=10.0);
Testing.numericPrint(c);