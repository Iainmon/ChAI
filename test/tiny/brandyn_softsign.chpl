use Tensor;
use Layer;

proc main() {
    writeln("Small SoftSign test. ");
    var softsign = new shared SoftSign();
    writeln(softsign(Tensor.zeros(4) - 1));
    writeln("Should be: [-0.5, -0.5, -0.5, -0.5]"); // output according to pytorch
}