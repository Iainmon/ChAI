use Tensor;
use Layer;

proc main() {
    writeln("Small Hardsigmoid test. ");
    var hardsigmoid = new shared Hardsigmoid();
    writeln(hardsigmoid(Tensor.zeros(4) - 1));
    writeln("Should be: [0.3333, 0.3333, 0.3333, 0.3333]"); // output according to pytorch
}