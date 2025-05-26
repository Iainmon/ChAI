use Tensor;
use Layer;

proc main() {
    writeln("Small Mish test. ");
    var mish = new shared Mish();
    writeln(mish(Tensor.zeros(4) - 1));
    writeln("Should be: [-0.3034, -0.3034, -0.3034, -0.3034]"); // output according to pytorch
}