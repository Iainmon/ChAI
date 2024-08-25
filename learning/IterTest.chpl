use Utilities.Standard;

const D = {0..<5,0..<5};

// for idx in D {
//     var i = 0;
//     var blk = 1;
//     for param j in 0..<idx.size {
//         param k = idx.size - j - 1;
//         i += idx(k) * blk;
//         blk *= D.shape(k);
//     }
//     writeln((i,idx));
// }


for (i,idx) in D.everyZip() {
    writeln((i,idx));
}