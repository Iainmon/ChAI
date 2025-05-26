use Tensor;
use Layer;

proc main() {
    writeln("Small Hardshrink test. ");
    var hardshrink = new shared Hardshrink();
    writeln(hardshrink(Tensor.zeros(4) - 1));
    writeln("Should be: [-1, -1, -1, -1]"); // output according to pytorch

    hardshrink = new shared Hardshrink(alpha=1.0);
    writeln(hardshrink(Tensor.zeros(4) - 1));
    writeln("Should be: [0, 0, 0, 0]"); // output according to pytorch
}