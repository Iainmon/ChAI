use Tensor;
use Layer;

proc main() {
    writeln("Small LogSigmoid test. ");
    var logsigmoid = new shared LogSigmoid();
    writeln(logsigmoid(Tensor.zeros(4) - 1));
    writeln("Should be: [-1.3133, -1.3133, -1.3133, -1.3133]"); // output according to pytorch
}