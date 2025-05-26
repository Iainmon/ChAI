use Tensor;
use Layer;

proc main() {
    writeln("Small LeakyReLU test. ");

    var leakyrelu = new shared LeakyReLU();
    writeln(leakyrelu(Tensor.zeros(4) - 100));
    writeln("Should be: [-1, -1, -1, -1]"); // output according to pytorch

    leakyrelu = new shared LeakyReLU(negativeSlope=1.5);
    writeln(leakyrelu(Tensor.zeros(4) - 1));
    writeln("Should be: [-1.5, -1.5, -1.5, -1.5]"); // output according to pytorch

    leakyrelu = new shared LeakyReLU(negativeSlope=0.5);
    writeln(leakyrelu(Tensor.zeros(4) + 0.5));
    writeln("Should be: [0.5, 0.5, 0.5, 0.5]"); // output according to pytorch
}