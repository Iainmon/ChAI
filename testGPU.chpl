use Tensor;

on here.gpus[0] {
    var a = new ndarray({0..<5,0..<5},real);
    @assertOnGpu
    foreach (i,j) in a.domain.each with (ref a) {
        a.data[i,j] = i + j;
    }

    writeln(a);
}
