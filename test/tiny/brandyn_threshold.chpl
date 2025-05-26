use Tensor;
use Layer;

proc main() {
    writeln("Small Threshold test. ");

    var threshold = new shared Threshold(value=0.1, threshold=1.0);
    writeln(threshold(Tensor.zeros(4) - 1));
    writeln("Should be: [0.1, 0.1, 0.1, 0.1]"); // output according to pytorch

    threshold = new shared Threshold(value=0.5, threshold=2.0);
    writeln(threshold(Tensor.zeros(4) + 1));
    writeln("Should be: [0.5, 0.5, 0.5, 0.5]"); // output according to pytorch
}