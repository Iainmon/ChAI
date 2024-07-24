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

var moduleInstances = 0;

class Module {
    type eltType = real;
    var subModules: moduleChildren(eltType);
    var moduleId: int;
    var moduleName: string;

    proc init(type eltType = real) {
        this.eltType = eltType;
        this.subModules = new moduleChildren(eltType);
        this.moduleId = moduleInstances;
        this.moduleName = "module[" + moduleInstances:string + "]";
        moduleInstances += 1;
    }

    proc setup() {

    }

    proc this(input: Tensor(eltType)): Tensor(eltType) do
        return this.forward(input);

    proc getSubModuleName(name: string): string do
        return moduleName + "." + name;

    proc addModule(name: string, in m: owned Module(eltType)) {
        const modName = getSubModuleName(name);
        m.moduleName = modName;
        m.setup();
        subModules.add(modName,m);
    }
    proc addParameter(name: string, data: Tensor(eltType)) {
        const modName = getSubModuleName(name);
        var p = new Parameter(data);
        p.moduleName = modName;
        p.setup();
        subModules.add(modName,p);
    }

    proc forward(input: Tensor(eltType)): Tensor(eltType) do
        halt("Unimplemented.");

    proc this(paramName: string) ref : Tensor(eltType) {
        return (subModules.childDict[getSubModuleName(paramName)].borrow() : borrowed Parameter(eltType)).data;
    }

    proc mod(modName: string): borrowed Module(eltType) {
        return subModules.childDict[getSubModuleName(modName)].borrow();
    }

    iter parameters(): borrowed Parameter(eltType) {
        for m in subModules {
            for p in m.parameters() {
                yield p;
            }
        }
    }

    iter moduleNames(): string {
        for k in subModules {
            yield k.moduleName;
        }
    }

    iter modules(): borrowed Module(eltType) {
        for m in subModules {
            yield m;
            for m_ in m.modules() {
                yield m_;
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
    var m,n: int;

    proc init(type eltType, m: int, n: int) {
        super.init(eltType);
        init this;
        this.m = m;
        this.n = n;
    }

    override proc setup() {
        addParameter("weight",Tensor.arange(n,m));
        addParameter("bias",Tensor.zeros(m));
    }

    proc init(m: int, n: int) {
        this.init(real,m,n);
    }

    override proc forward(input: Tensor(eltType)): Tensor(eltType) do
        return Tensor.matvecmulFast(this["weight"],input) + this["bias"];
}

class Conv2D : Module(?) {
    var kernelShape: 4*int;
    var stride: int;

    proc init(type eltType = real,channels: int, features: int, kernel: int, stride: int = 1) {
        super.init(eltType);
        this.kernelShape = (features,channels,kernel,kernel);
        this.stride = stride;
        init this;
    }

    override proc setup() {
        const (features,channels,kernel,_) = kernelShape;
        var ker = Tensor.arange(features,channels,kernel,kernel);
        var bias = Tensor.arange(features);

        addParameter("weight",ker);
        addParameter("bias",bias);
    }

    proc init(channels: int, features: int, kernel: int, stride: int = 1) {
        this.init(real,channels,features,kernel,stride);
    }

    override proc forward(input: Tensor(eltType)): Tensor(eltType) {
        var weights = this["weight"];
        var bias = this["bias"];
        return Tensor.convolve(input,weights,bias,stride);
    }
}

class MaxPool : Module(?) {
    var poolSize: int;

    proc init(type eltType = real, poolSize: int) {
        super.init(eltType);
        this.poolSize = poolSize;
    }

    proc init(poolSize: int) do
        this.init(real,poolSize);

    override proc forward(input: Tensor(eltType)): Tensor(eltType) {
        return input.maxPool(poolSize);
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

class Dropout : Module(?) {
    proc init(type eltType = real,freq: real = 0.5) do
        super.init(eltType);
    
    override proc forward(input: Tensor(eltType)): Tensor(eltType) do
        return input;
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


proc chain(m: borrowed Module(?), modNames: string...?n, input: Tensor(?eltType)) {
    writeln("layer 0");
    var output = m.mod(modNames(0))(input);
    for param i in 1..<n {
        writeln("layer ", i);
        output = m.mod(modNames(i))(output);
    }
    return output;
}

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
        // addModule("conv2",new Conv2D(32,64,3,stride=1));
        // addModule("")
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

if diag {
    use GpuDiagnostics;

    startGpuDiagnostics();
    startVerboseGpu();
}

proc main() {

    var flower = Tensor.load("data/flower.chdata");

    // var mp = new moduleChildren(real);

    var conv = new Conv2D(1,1,3,stride=1);
    var flat = new Flatten();
    var linear = new Linear(3,49);
    var relu = new ReLU();
    var softmax = new Softmax();

    // var model = new Squential(
    //     new Conv2D(1,1,3,stride=1),
    //     new Flatten(),
    //     new Linear(3,49),
    //     new ReLU(),
    //     new Softmax()
    // );

    var img = Tensor.arange(1,9,9);
    var fet = conv.forward(img);
    writeln(fet);

    var output = softmax(relu(linear(flat(conv(img)))));
    writeln(output);

    var t = Tensor.load("notebooks/mini_cnn_params.chdata");
    writeln(t);

    writeln(flower.tensorize(3).array.domain.shape);


    writeln("Instantiating network.");

    var net = new Net();
    // (net.subModules.childDict["conv1"].subModules.childDict["weights"] : borrowed Parameter(real)).data = Tensor.load("notebooks/mini_cnn_params.chdata");

    writeln("Feeding flower through network.");


    // var out_flower = net(flower);
    // writeln(out_flower.tensorize(3).array.domain.shape);

    // writeln(linear);

    import IO;
    import JSON;
    import ObjectSerialization;

    var objWriter = IO.stdout.withSerializer(ObjectSerialization.objectSerializer);
    var jsonWriter = IO.stdout.withSerializer(JSON.jsonSerializer);


    var a = ndarray.arange(15, real, (3,5));


    jsonWriter.writeln(a);
    objWriter.writeln(a);
    writeln(a);


    var b = tensor.arange(3,5);
    jsonWriter.writeln(b);
    objWriter.writeln(b);
    writeln(b);


    var c = Tensor.arange(3,5);
    jsonWriter.writeln(c);
    objWriter.writeln(c);
    writeln(c);

    var f = IO.open("myfile.txt", IO.ioMode.cw);
    var fw = f.writer();
    fw.writeln(c);
}