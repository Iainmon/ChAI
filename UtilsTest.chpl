import Utilities as util;
use Utilities.Standard;

const d = {0..<2,0..<3,0..<4};
for i in 0..<d.size {
    writeln(i);
    writeln(d.orderToIndex(i));
    writeln(util.indexAt(i,(...d.fastShape)));
    writeln(d.indexAt(i));
}

writeln(d.shape, d.fastShape);

writeln({0..1}.shape);
