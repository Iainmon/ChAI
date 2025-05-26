use Tensor;
use Layer;

proc main() {
    writeln("Small Hardswish test. ");
    var hardswish = new shared Hardswish();
    writeln(hardswish(Tensor.zeros(4) - 1));
    writeln("Should be: [-0.3333, -0.3333, -0.3333, -0.3333]"); // output according to pytorch
}