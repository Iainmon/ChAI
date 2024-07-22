
var conv = new Conv2D(1,1,3,stride=1);
var flat = new Flatten();
var linear = new Linear(3,49);
var relu = new ReLU();
var softmax = new Softmax();

var img: Tensor(real) = Tensor.arange(1,9,9);

var output = softmax(relu(linear(flat(conv(img)))));
writeln(output);
























class Net : Module(?) {
    proc init(type eltType = real) {
        super.init(eltType);
        init this;
        addModule("conv1",new Conv2D(eltType,3,32,3,stride=1));
        addModule("pool1",new MaxPool(eltType,2));
        addModule("conv2",new Conv2D(eltType,32,64,3,stride=1));
        addModule("pool2",new MaxPool(eltType,2));
        addModule("conv3",new Conv2D(eltType,64,128,3,stride=1));
        addModule("pool3",new MaxPool(eltType,2));
        addModule("conv4",new Conv2D(eltType,128,256,3,stride=1));
        addModule("pool4",new MaxPool(eltType,2));
        addModule("conv5",new Conv2D(eltType,256,512,3,stride=1));
        addModule("pool5",new MaxPool(eltType,2));
        addModule("conv6",new Conv2D(eltType,512,1024,3,stride=1));
        addModule("pool6",new MaxPool(eltType,2));

        // TODO
        this.conv1 = new Conv2D(eltType,3,32,3,stride=1);
    }

    override proc forward(input: Tensor(eltType)): Tensor(eltType) {
        return chain(this,
                    "conv1",
                    // "pool1",
                    "conv2",
                    // "pool2",
                    "conv3",
                    // "pool3",
                    "conv4",
                    // "pool4",
                    "conv5",
                    // "pool5",
                    "conv6",
                    // "pool6",
                    input);
        // var x1 = this.mod("conv1").forward(input);
        // var x2 = this.mod("conv2").forward(x1);
        // var x3 = this.mod("conv3").forward(x2);
        // return this.mod("conv4").forward(x3);
    }
}








var flower = Tensor.load("data/flower.chdata");

var net = new Net();

var out_flower = net(flower);
writeln(out_flower.tensorize(3).array.domain.shape);























record tensor {
    param rank: int;
    type eltType = real;
}

var t: tensor(3,real) = tensor.loadFromFile(rank=3, "myimage.tensor");
t *= 1.5;
t = t + t;

foreach (c,i,j) in t.domain {
    t[c,i,j] *= 1.5;
}
























record Tensor {
    type eltType = real;
}

var t: Tensor(real) = Tensor.loadFromFile("myimage.tensor");
t *= 1.5;
t = t + t;

foreach (c,i,j) in t.domain { // can't do this
    t[c,i,j] *= 1.5;
}

















proc Tensor.tensorize(param rank: int): tensor(rank,eltType);

var t: Tensor(real) = Tensor.loadFromFile("myimage.tensor");
var tt: tensor(3,real) = t.tensorize(3);
foreach (c,i,j) in tt.domain { // can't do this
    tt[c,i,j] *= 1.5;
}













