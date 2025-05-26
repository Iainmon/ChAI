use Tensor;
use Layer;

proc main() {
    writeln("Small Softplus test. ");
    var softplus = new shared Softplus();
    writeln(softplus(Tensor.zeros(4) - 1));
    writeln("Should be: [0.3133, 0.3133, 0.3133, 0.3133]"); // output according to pytorch

    softplus = new shared Softplus(beta=0.2);
    writeln(softplus(Tensor.zeros(4) - 1));
    writeln("Should be: [2.9907, 2.9907, 2.9907, 2.9907]"); // output according to pytorch

    softplus = new shared Softplus(beta=0.3, threshold=1.5);
    writeln(softplus(Tensor.zeros(4) - 1));
    writeln("Should be: [1.8479, 1.8479, 1.8479, 1.8479]"); // output according to pytorch
}