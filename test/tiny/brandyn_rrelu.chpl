use Tensor;
use Layer;

proc main() {
    writeln("Small RReLU test. ");
    var rrelu = new shared RReLU();
    writeln(rrelu(Tensor.zeros(4) - 1));

    rrelu = new shared RReLU(lower=0.1);
    writeln(rrelu(Tensor.zeros(4) - 1));

    rrelu = new shared RReLU(upper=1.0);
    writeln(rrelu(Tensor.zeros(4) - 1));

    rrelu = new shared RReLU(lower=0.6, upper=0.8);
    writeln(rrelu(Tensor.zeros(4) + 1));


    writeln("RReLU has no pytorch comparison b/c there is randomness involved. ");
}