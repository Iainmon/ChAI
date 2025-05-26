use Tensor;
use Layer;

proc main() {
    writeln("Small ReLU test. ");
    var relu = new shared ReLU();
    writeln(relu(Tensor.zeros(4) - 1));
    writeln("Should be: [0, 0, 0, 0]"); // output according to pytorch

    relu = new shared ReLU();
    writeln(relu(Tensor.zeros(4) + 1.5));
    writeln("Should be: [1.5, 1.5, 1.5, 1.5]"); // output according to pytorch

    relu = new shared ReLU();
    writeln(relu(Tensor.zeros(4) + 2.4903));
    writeln("Should be: [2.4903, 2.4903, 2.4903, 2.4903]"); // output according to pytorch
}