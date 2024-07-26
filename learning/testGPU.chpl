// use Tensor;

// on here.gpus[0] {
//     var a = new ndarray({0..<5,0..<5},real);
//     @assertOnGpu
//     foreach (i,j) in a.domain.each with (ref a) {
//         a.data[i,j] = i + j;
//     }

//     writeln(a);
// }



proc foo(type eltType = real, args: eltType ...?rank) {
    var sum: eltType = 0;
    for param i in 0..<rank {
        sum += args(i);
    }
    return sum;
}


var x = foo(real, 3, 4, 5, 6);
writeln(x);

// var y = foo(3, 4, 5, 6);
// writeln(y);

var z = foo(3, 4, 5, 6,eltType=real);
writeln(z);

