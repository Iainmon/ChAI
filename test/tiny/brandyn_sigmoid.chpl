use Tensor;
use Layer;

proc main() {
    writeln("Small Sigmoid test. ");
    var sigmoid = new shared Sigmoid();
    writeln(sigmoid(Tensor.zeros(4) - 1));
    writeln("Should be: [-0.2689, -0.2689, -0.2689, -0.2689]"); // output according to pytorch
}