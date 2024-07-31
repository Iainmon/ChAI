

use Tensor;

use Network;

var t: Tensor(real) = Tensor.arange(1,8,8);

var conv = new Conv2D(1,1,3,1);
conv.setup();


writeln(t);

var output = conv(t);

writeln(output);

