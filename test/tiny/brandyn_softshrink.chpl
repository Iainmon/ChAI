use Tensor;
use Layer;

proc main() {
    writeln("Small Softshrink test. ");
    var softshrink = new shared Softshrink();
    writeln(softshrink(Tensor.zeros(4) - 1));
    writeln("Should be: [-0.5, -0.5, -0.5, -0.5]"); // output according to pytorch
    softshrink = new shared Softshrink(alpha=0.1);
    writeln(softshrink(Tensor.zeros(4) - 1));
    writeln("Should be: [-0.9, -0.9, -0.9, -0.9]"); // output according to pytorch
}