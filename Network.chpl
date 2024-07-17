// use ndarray;
// use remote;
// use autograd;
// import autograd as ag;
// import StaticTensor as tn;
// use StaticTensor;

// use DynamicTensor


use Tensor;

use Map; // only map;


record moduleChildren {
    type eltType = real;
    var childDict: map(string,owned Module(eltType));

    proc init(type eltType = real) {
        this.eltType = eltType;
        this.childDict = new map(string,owned Module(eltType),initialCapacity=1);
    }

    iter ref these(): borrowed Module(eltType) do
        for k in childDict do
            yield childDict[k].borrow();

    proc ref add(name: string,in m: owned Module(eltType)) do
        childDict.addOrReplace(name,m);
    

}

class Module {
    type eltType = real;
    var subModules: moduleChildren(eltType);

    proc init(type eltType = real) {
        this.eltType = eltType;
        this.subModules = new moduleChildren(eltType);
    }

    proc this(input: Tensor(eltType)): Tensor(eltType) do
        return this.forward(input);

    proc addModule(name: string, in m: owned Module(eltType)) do
        subModules.add(name,m);

    proc addParameter(name: string, data: Tensor(eltType)) do
        addModule(name,new Parameter(data));

    proc forward(input: Tensor(eltType)): Tensor(eltType) do
        halt("Unimplemented.");

    proc this(paramName: string) ref : Tensor(eltType) {
        return (subModules.childDict[paramName].borrow() : borrowed Parameter(eltType)).data;
    }

    iter parameters(): borrowed Parameter(eltType) {
        for m in subModules {
            for p in m.parameters() {
                yield p;
            }
        }
    }
}

class Parameter : Module(?) {
    var data: Tensor(eltType);

    proc init(data: Tensor(?eltType)) {
        super.init(eltType);
        this.data = data;
    }

    override iter parameters(): borrowed Parameter(eltType) {
        yield this.borrow();
    }
}

class Linear : Module(?) {
    proc init(m: int, n: int) {
        super.init(real);
        init this;
        addParameter("weights",Tensor.arange(m,n));
        addParameter("bias",Tensor.zeros(n));
    }

    override proc forward(input: Tensor(eltType)): Tensor(eltType) do
        return Tensor.matvecmul(this["weights"],input) + this["bias"];
}

class Conv2D : Module(?) {
    var kernelShape: 4*int;
    var stride: int;

    proc init(channels: int, features: int, kernel: int, stride: int = 1) {
        super.init(real);
        this.kernelShape = (features,channels,kernel,kernel);
        this.stride = stride;
        init this;

        var ker = Tensor.arange(features,channels,kernel,kernel);
        var bias = Tensor.zeros(features);

        addParameter("weights",ker);
        addParameter("bias",bias);
    }

    override proc forward(input: Tensor(real)): Tensor(real) {
        return Tensor.convolve(input,this["weights"],stride);
    }
}

class Flatten : Module(?) {
    proc init(type eltType = real) do
        super.init(eltType);
    
    override proc forward(input: Tensor(eltType)): Tensor(eltType) do
        return input.flatten();
}

class ReLU : Module(?) {
    proc init(type eltType = real) do
        super.init(eltType);
    
    override proc forward(input: Tensor(eltType)): Tensor(eltType) do
        return input.relu();
}

class Softmax : Module(?) {
    proc init(type eltType = real) do
        super.init(eltType);
    
    override proc forward(input: Tensor(eltType)): Tensor(eltType) do
        return input.softmax();
}

// record parameter {
//     type eltType = real;
//     var name: string;
//     var data: Tensor(eltType);
// }

// record moduleParameters {
//     type eltType = real;
//     var paramDict: map(string,parameter(eltType));

//     proc init(type eltType = real) {
//         this.eltType = eltType;
//         this.paramDict = new map(string,parameter(eltType),initialCapacity=1);
//     }

//     iter these() ref : parameter(eltType) {
//         for k in paramDict {
//             yield paramDict[k];
//         }
//     }

//     proc ref add(name: string,data: Tensor(eltType)) {

//     }
// }


class Net : Module(?) {
    proc init() {
        super.init(real);
        init this;
        addModule("conv1",new Conv2D(1,32,3,stride=1));
        addModule("conv2",new Conv2D(32,64,3,stride=1));
        // addModule("")
    }
}




// var mp = new moduleChildren(real);

var conv = new Conv2D(1,1,3,stride=1);
var flat = new Flatten();
var linear = new Linear(3,49);
var relu = new ReLU();
var softmax = new Softmax();

var img = Tensor.arange(1,9,9);
var fet = conv.forward(img);
writeln(fet);

var output = softmax(relu(linear(flat(conv(img)))));
writeln(output);

var t = Tensor.load("notebooks/mini_cnn_params.chdata");
writeln(t);
// writeln(linear);