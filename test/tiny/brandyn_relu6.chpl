use Tensor;
use Layer;

proc main() {
    writeln("Small ReLU6 test. ");
    var relu6 = new shared ReLU6();
    writeln(relu6(Tensor.zeros(4) - 1));
    writeln("Should be: [0, 0, 0, 0]"); // output according to pytorch
}