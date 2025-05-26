use Tensor;
use Layer;

proc main() {
    writeln("Small CELU test. ");

    var celu = new shared CELU();
    writeln(celu(Tensor.zeros(4) - 1));
    writeln("Should be: [-0.6321, -0.6321, -0.6321, -0.6321]"); // output according to pytorch

    celu = new shared CELU(alpha=0.5);
    writeln(celu(Tensor.zeros(4) - 1));
    writeln("Should be: [-0.4323, -0.4323, -0.4323, -0.4323]"); // output according to pytorch
}