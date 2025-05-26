use Tensor;
use Layer;

proc main() {
    writeln("Small Tanhshrink test. ");
    var tanhshrink = new shared Tanhshrink();
    writeln(tanhshrink(Tensor.zeros(4) - 1));
    writeln("Should be: [-0.2384, -0.2384, -0.2384, -0.2384]"); // output according to pytorch
}