use Tensor;
use Layer;

proc main() {
    writeln("Small GELU test. ");
    var gelu = new shared GELU();
    writeln(gelu(Tensor.zeros(4) - 1));
    writeln("Should be: [-0.1587, -0.1587, -0.1587, -0.1587]"); // output according to pytorch
}