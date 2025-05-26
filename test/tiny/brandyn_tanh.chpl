use Tensor;
use Layer;

proc main() {
    writeln("Small Tanh test. ");
    var tanh = new shared Tanh();
    writeln(tanh(Tensor.zeros(4) - 1));
    writeln("Should be: [-0.7616, -0.7616, -0.7616, -0.7616]"); // output according to pytorch
}