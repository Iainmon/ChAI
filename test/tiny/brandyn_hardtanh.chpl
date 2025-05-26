use Tensor;
use Layer;

proc main() {
    writeln("Small Hardtanh test. ");
    var hardtanh = new shared Hardtanh();
    writeln(hardtanh(Tensor.zeros(4) - 1));
    writeln("Should be: [-1, -1, -1, -1]"); // output according to pytorch

    hardtanh = new shared Hardtanh(minVal=0);
    writeln(hardtanh(Tensor.zeros(4) - 1));
    writeln("Should be: [0, 0, 0, 0]"); // output according to pytorch

    hardtanh = new shared Hardtanh(minVal=0, maxVal=0.1);
    writeln(hardtanh(Tensor.zeros(4) + 1));
    writeln("Should be: [0.1, 0.1, 0.1, 0.1]"); // output according to pytorch
}