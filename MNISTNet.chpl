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
        var x = mod("conv1")(input);
        x = x.relu();
        x = mod("conv2")(x);
        x = x.relu();
        x = x.maxPool(2);
        x = mod("dropout1")(x);
        x = x.flatten();
        x = mod("fc1")(x);
        x = x.relu();
        x = mod("dropout1")(x);
        x = mod("fc2")(x);
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


var images = for i in 0..<10 do Tensor.load("data/datasets/mnist/image_idx_" + i:string + ".chdata");

for i in images.domain {
    var output = cnn(images[i]);
    writeln(i, output);
}
