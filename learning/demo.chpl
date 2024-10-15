use Tensor;
use Network;

class CNN : Module(?) {
    var conv1: owned Conv2D(eltType);
    var conv2: owned Conv2D(eltType);
    var dropout1: owned Dropout(eltType);
    var dropout2: owned Dropout(eltType);
    var flatten: owned Flatten(eltType);
    var fc1: owned Linear(eltType);
    var fc2: owned Linear(eltType);

    proc init(type eltType = real) {
        super.init(eltType);

        this.conv1 = new Conv2D(eltType,channels=1,features=32,kernel=3,stride=1);
        this.conv2 = new Conv2D(eltType,channels=32,features=64,kernel=3,stride=1);
        this.dropout1 = new Dropout(eltType,0.25);
        this.dropout2 = new Dropout(eltType,0.5);
        this.flatten = new Flatten(eltType);
        this.fc1 = new Linear(eltType,9216,128);
        this.fc2 = new Linear(eltType,128,10);

        init this;
        this.moduleName = "cnn";

        for (n,m) in moduleFields() {
            addModule(n,m);
        }
    }

}



var cnn = new CNN(real);


config const modelPath = "data/models/mnist_cnn/";

cnn.loadPyTorchDump(modelPath);






config const imageCount = 1;

var images = for i in 0..<imageCount do
    Tensor.load("data/datasets/mnist/image_idx_" + i:string + ".chdata");

for i in images.domain {
    var output = cnn(images[i]);
    var pred = output.argmax();
    writeln((i, pred));
}
