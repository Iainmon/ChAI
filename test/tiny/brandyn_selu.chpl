use Tensor;
use Layer;

proc main() {
    writeln("Small SELU test. ");
    var selu = new shared SELU();
    writeln(selu(Tensor.zeros(4) - 1));
    writeln("Should be: [-1.1113, -1.1113, -1.1113, -1.1113]"); // output according to pytorch
}