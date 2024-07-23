use Tensor;

use Network;


class CNN : Module(?) {
    proc init(type eltType = real) {
        super.init(eltType);
        init this;
        this.moduleName = "cnn";
        addModule("conv1", new Conv2D(eltType,channels=1,features=32,kernel=3,stride=1));
        addModule("conv2", new Conv2D(eltType,channels=32,features=64,kernel=3,stride=1));
        addModule("dropout1", new Dropout(eltType,0.25));
        addModule("dropout2", new Dropout(eltType,0.5));
        addModule("flatten", new Flatten(eltType));
        addModule("fc1", new Linear(eltType,9216,128));
        addModule("fc2", new Linear(eltType,128,10));
    }

    override proc forward(input: Tensor(eltType)): Tensor(eltType) {
        writeln("conv1");
        var x = mod("conv1")(input);

        writeln("relu");
        x = x.relu();

        writeln("conv2");
        x = mod("conv2")(x);

        writeln("relu");
        x = x.relu();

        writeln("maxpool");
        x = x.maxPool(2);

        writeln("dropout");
        x = mod("dropout1")(x);

        writeln("flatten");
        x = x.flatten();

        writeln("fc1");
        x = mod("fc1")(x);

        writeln("relu");
        x = x.relu();

        writeln("dropout");
        x = mod("dropout1")(x);

        writeln("fc2");
        x = mod("fc2")(x);

        writeln("softmax");
        var output = x.softmax();
        return output;
    }
}


var cnn = new CNN(real);

config const testImgSize = 28;

var img = Tensor.load("data/datasets/mnist/image_idx_0_7_7.chdata");// Tensor.arange(1,testImgSize,testImgSize);
writeln(img);
writeln(img.runtimeRank);

const modelPath = "data/models/mnist_cnn/";

for m in cnn.modules() {
    const name = m.moduleName;
    if var p = m : borrowed Parameter(real)? {
        const paramName = name[4..];
        const paramPath = modelPath + paramName + ".chdata";
        writeln("Loading ", paramPath);
        var loaded = Tensor.load(paramPath);
        p!.data = loaded;
    }
}

var output = cnn(img);

writeln(output);

config const imageCount = 10;

var images = for i in 0..<imageCount do Tensor.load("data/datasets/mnist/image_idx_" + i:string + ".chdata");
var preds: [images.domain] int;

for i in images.domain {
    var output = cnn(images[i]);
    var pred = output.argmax();
    preds[i] = pred + 1;
    writeln((i, pred + 1));
}

for i in images.domain {
    writeln((i, preds[i]));
}


