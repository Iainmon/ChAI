use Tensor;
use Layer;

proc main() {
    writeln("Small ELU test. ");
    var elu = new shared ELU();
    writeln(elu(Tensor.zeros(4) - 1).toNDArray(1));
    writeln("Should be: [-0.6321, -0.6321, -0.6321, -0.6321]"); // output according to pytorch

    elu = new shared ELU(alpha=0.1);
    writeln(elu(Tensor.zeros(4) - 1).toNDArray(1));
    writeln("Should be: [-0.0632, -0.0632, -0.0632, -0.0632]"); // output according to pytorch
}