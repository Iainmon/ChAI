use Tensor;
use Layer;

proc main() {
    writeln("Small SiLU test. ");
    var silu = new shared SiLU();
    writeln(silu(Tensor.zeros(4) - 1));
    writeln("Should be: [-0.2689, -0.2689, -0.2689, -0.2689]"); // output according to pytorch
}