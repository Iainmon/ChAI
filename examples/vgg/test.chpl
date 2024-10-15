use VGG;
use Tensor;

config const k = 5;
config const labelFile = "imagenet/LOC_synset_mapping.txt";


proc getLabels(): [] {
  use IO;
  const r = openReader(labelFile);
  const lines = r.lines(stripNewline=true);
  // for each line, split on space, take the second part
  forall l in lines {
    var splat = l.split(" ", maxsplit=1);
    l = splat[1];
  }
  return lines;
}

proc confidence(x: []): [] {
  use Math;
  var expSum = + reduce exp(x);
  return (exp(x) / expSum) * 100.0;
}

// returns (top k indicies, top k condiences)
proc run(model: borrowed, file: string) {
  const img = Tensor.load(file):real(64);
  const output = model(img);

  const top = output.topk(k);
  var topArr = top.tensorize(1).array.data;
  var percent = confidence(output.tensorize(1).array.data);

  var percentTopk = [i in 0..<k] percent(topArr[i]);
  return (topArr, percentTopk);
}

proc main(args: [] string) {
  const labels = getLabels();
  const vgg = new VGG16(real(64));
  vgg.loadPyTorchDump("models/vgg16/", false);


  var files = args[1..];

  for f in files {
    var (topArr, percent) = run(vgg, f);
    writeln("For '", f, "' the top ", k, " predictions are: ");
    for i in 0..<k {
      writef("  %?: label=%?; confidence=%2.2r%%\n", i, labels[topArr[i]], percent[i]);
    }
    writeln();
  }

}
