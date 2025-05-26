module Layer {
    private use Tensor;
    private use Network;
    private use Env;
    private import Utilities as util;
    private use OrderedDict;

    class ReLU : Module(?) {

        proc init(type eltType = defaultEltType) {
            super.init(eltType);
            init this;
            this.moduleName = "ReLU";
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.relu();

        override proc attributes(): moduleAttributes do
            return new moduleAttributes("ReLU",moduleName);
    }

    class GELU : Module(?) {

        proc init(type eltType = defaultEltType) {
            super.init(eltType);
            init this;
            this.moduleName = "GELU";
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.gelu();

        override proc attributes(): moduleAttributes do
            return new moduleAttributes("GELU",moduleName);
    }

    class ELU : Module(?) {
        var alpha: eltType;

        proc init(type eltType = defaultEltType, alpha: eltType = 1.0) {
            super.init(eltType);
            this.alpha = alpha;
            init this;
            this.moduleName = "ELU";
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.elu(alpha);

        override proc attributes(): moduleAttributes do
            return new moduleAttributes(
                "ELU",
                moduleName,
                ("alpha",alpha)
            );
    }

    class RReLU : Module(?) {
        var lower: eltType;
        var upper: eltType;

        proc init(type eltType = defaultEltType, lower: eltType = 0.125, upper: eltType = 0.333) {
            super.init(eltType);
            this.lower = lower;
            this.upper = upper;
            init this;
            this.moduleName = "RReLU";            
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.rrelu(lower,upper);
        
        override proc attributes(): moduleAttributes do
            return new moduleAttributes(
                "RReLU",
                moduleName,
                ("lower",lower),
                ("upper",upper)
            );
    }

    class SiLU : Module(?) {

        proc init(type eltType = defaultEltType) {
            super.init(eltType);
            init this;
            this.moduleName = "SiLU";            
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.silu();
        
        override proc attributes(): moduleAttributes do
            return new moduleAttributes("SiLU", moduleName);
    }

    class Mish : Module(?) {

        proc init(type eltType = defaultEltType) {
            super.init(eltType);
            init this;
            this.moduleName = "Mish";            
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.mish();
        
        override proc attributes(): moduleAttributes do
            return new moduleAttributes("Mish", moduleName);
    }

    class Sigmoid : Module(?) {

        proc init(type eltType = defaultEltType) {
            super.init(eltType);
            init this;
            this.moduleName = "Sigmoid";            
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.sigmoid();
        
        override proc attributes(): moduleAttributes do
            return new moduleAttributes("Sigmoid", moduleName);
    }

    class Tanh : Module(?) {

        proc init(type eltType = defaultEltType) {
            super.init(eltType);
            init this;
            this.moduleName = "Tanh";            
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.tanh();
        
        override proc attributes(): moduleAttributes do
            return new moduleAttributes("Tanh", moduleName);
    }

    class ReLU6 : Module(?) {

        proc init(type eltType = defaultEltType) {
            super.init(eltType);
            init this;
            this.moduleName = "ReLU6";            
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.relu6();
        
        override proc attributes(): moduleAttributes do
            return new moduleAttributes("ReLU6", moduleName);
    }

    class SELU : Module(?) {

        proc init(type eltType = defaultEltType) {
            super.init(eltType);
            init this;
            this.moduleName = "SELU";            
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.selu();
        
        override proc attributes(): moduleAttributes do
            return new moduleAttributes("SELU", moduleName);
    }

    class Hardsigmoid : Module(?) {

        proc init(type eltType = defaultEltType) {
            super.init(eltType);
            init this;
            this.moduleName = "Hardsigmoid";            
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.hardsigmoid();
        
        override proc attributes(): moduleAttributes do
            return new moduleAttributes("Hardsigmoid", moduleName);
    }

    class LogSigmoid : Module(?) {

        proc init(type eltType = defaultEltType) {
            super.init(eltType);
            init this;
            this.moduleName = "LogSigmoid";            
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.logsigmoid();
        
        override proc attributes(): moduleAttributes do
            return new moduleAttributes("LogSigmoid", moduleName);
    }

    class Tanhshrink : Module(?) {

        proc init(type eltType = defaultEltType) {
            super.init(eltType);
            init this;
            this.moduleName = "Tanhshrink";            
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.tanhshrink();
        
        override proc attributes(): moduleAttributes do
            return new moduleAttributes("Tanhshrink", moduleName);
    }

    class SoftSign : Module(?) {

        proc init(type eltType = defaultEltType) {
            super.init(eltType);
            init this;
            this.moduleName = "SoftSign";            
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.softsign();
        
        override proc attributes(): moduleAttributes do
            return new moduleAttributes("SoftSign", moduleName);
    }

    class Hardswish : Module(?) {

        proc init(type eltType = defaultEltType) {
            super.init(eltType);
            init this;
            this.moduleName = "Hardswish";            
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.hardswish();
        
        override proc attributes(): moduleAttributes do
            return new moduleAttributes("Hardswish", moduleName);
    }

    class Hardshrink : Module(?) {
        var alpha: eltType;

        proc init(type eltType = defaultEltType, alpha: eltType = 0.5) {
            super.init(eltType);
            this.alpha = alpha;
            init this;
            this.moduleName = "Hardshrink";            
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.hardShrink(alpha);
        
        override proc attributes(): moduleAttributes do
            return new moduleAttributes(
                "Hardshrink",
                moduleName,
                ("alpha", alpha)
            );
    }

    class Hardtanh : Module(?) {
        var minVal: eltType;
        var maxVal: eltType;

        proc init(type eltType = defaultEltType, minVal: eltType = -1.0, maxVal: eltType = 1.0) {
            super.init(eltType);
            this.minVal = minVal;
            this.maxVal = maxVal;
            init this;
            this.moduleName = "Hardtanh";
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.hardTanh(minVal, maxVal);
        
        override proc attributes(): moduleAttributes do
            return new moduleAttributes(
                "Hardtanh",
                moduleName,
                ("minVal", minVal),
                ("maxVal", maxVal)
            );
    }

    class Softplus : Module(?) {
        var beta: eltType;
        var threshold: eltType;

        proc init(type eltType = defaultEltType, beta: eltType = 1.0, threshold: eltType = 20.0) {
            super.init(eltType);
            this.beta = beta;
            this.threshold = threshold;
            init this;
            this.moduleName = "Softplus";            
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.softplus(beta, threshold);
        
        override proc attributes(): moduleAttributes do
            return new moduleAttributes(
                "Softplus",
                moduleName,
                ("beta", beta),
                ("threshold", threshold)
            );
    }

    class Threshold : Module(?) {
        var threshold: eltType;
        var value: eltType;

        proc init(type eltType = defaultEltType, threshold: eltType, value: eltType) {
            super.init(eltType);
            this.threshold = threshold;
            this.value = value;
            init this;
            this.moduleName = "Threshold";            
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.threshold(threshold, value);
        
        override proc attributes(): moduleAttributes do
            return new moduleAttributes(
                "Threshold",
                moduleName,
                ("threshold",threshold),
                ("value",value)
            );
    }

    class CELU : Module(?) {
        var alpha: eltType;

        proc init(type eltType = defaultEltType, alpha: eltType=1.0) {
            super.init(eltType);
            this.alpha = alpha;
            init this;
            this.moduleName = "CELU";
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.celu(alpha);

        override proc attributes(): moduleAttributes do
            return new moduleAttributes(
                "CELU",
                moduleName,
                ("alpha", alpha)
            );
    }

    class LeakyReLU : Module(?) {
        var negativeSlope: eltType;

        proc init(type eltType = defaultEltType, negativeSlope: eltType=0.01) {
            super.init(eltType);
            this.negativeSlope = negativeSlope;
            init this;
            this.moduleName = "LeakyReLU";
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.leakyrelu(negativeSlope);

        override proc attributes(): moduleAttributes do
            return new moduleAttributes(
                "LeakyReLU",
                moduleName,
                ("negativeSlope", negativeSlope)
            );
    }

    class Softshrink : Module(?) {
        var alpha: eltType;

        proc init(type eltType = defaultEltType, alpha: eltType=0.5) {
            super.init(eltType);
            this.alpha = alpha;
            init this;
            this.moduleName = "Softshrink";
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.softshrink(alpha);

        override proc attributes(): moduleAttributes do
            return new moduleAttributes(
                "Softshrink",
                moduleName,
                ("alpha", alpha)
            );
    }





    class Flatten : Module(?) {
        proc init(type eltType = defaultEltType) {
            super.init(eltType);
            init this;
            this.moduleName = "Flatten";
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return input.flatten();

        override proc attributes(): moduleAttributes do
            return new moduleAttributes("Flatten",moduleName);
    }

    class Parameter : Module(?) {
        var data: dynamicTensor(eltType);

        proc init(data: dynamicTensor(?eltType)) {
            super.init(eltType);
            this.data = data;
            init this;
            this.moduleName = "Parameter";
        }

        proc init(data: staticTensor(?rank,?eltType)) do
            this.init(data.eraseRank());
        
        proc init(data: ndarray(?rank,?eltType)) do
            this.init(new staticTensor(data));
        

        override proc forward(input: dynamicTensor(eltType)) {
            compilerWarning("Should not be calling forward on a Parameter module");
            return this.data;
        }

        override proc attributes(): moduleAttributes do
            return new moduleAttributes(
                "Parameter",
                moduleName,
                ("data","<tensor>")
            );
    }

    class Linear : Module(?) {
        var weights: shared Parameter(eltType);
        var bias: shared Parameter(eltType);
        var inFeatures: int;
        var outFeatures: int;

        proc init(weights: dynamicTensor(?eltType), bias: dynamicTensor(eltType)) {
            super.init(eltType);
            this.weights = new shared Parameter(weights);
            this.bias = new shared Parameter(bias);
            if !weights.checkRank(2) then
                util.err("Weights tensor must have rank 2");
            if !bias.checkRank(1) then
                util.err("Bias tensor must have rank 1");
            
            const weightsShape = weights.forceRank(2).domain.shape;
            const (outFeatures,inFeatures) = weightsShape;
            if outFeatures != bias.forceRank(1).domain.shape[0] {
                writeln("weightsShape: ",weightsShape);
                writeln("biasShape: ",bias.forceRank(1).domain.shape);
                util.err("Weights output dimension must match bias input dimension");
            }

            init this;
            this.moduleName = "Linear";
        }

        proc init(type eltType = defaultEltType, inFeatures: int, outFeatures: int) {
            var weights = dynamicTensor.zeros(eltType=eltType,outFeatures,inFeatures);
            var bias = dynamicTensor.zeros(eltType=eltType,outFeatures);
            this.init(weights,bias);
        }

        proc init(inFeatures: int, outFeatures: int) do
            this.init(defaultEltType,inFeatures,outFeatures);

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) {
            writeln("input: ", input.shape());
            writeln("weights: ", this.weights.data.shape());
            writeln("bias: ", this.bias.data.shape());
            if input.checkRank(1) {
                compilerWarning("This could be written faster using a fused operation that includes the bias.");
                return dynamicTensor.matmul(this.weights.data,input) + this.bias.data;
            } else if input.checkRank(2) {
                return dynamicTensor.matmul(this.weights.data,input) + this.bias.data;
            } else {
                util.err("Input tensor must have rank 1 or 2");
            }
            halt("Unreachable");
        }

        override proc attributes(): moduleAttributes do
            return new moduleAttributes(
                "Linear",
                moduleName,
                ("inFeatures",this.inFeatures),
                ("outFeatures",this.outFeatures)
            );
    }



    class ResidualBlock : Module(?) {
        var innerModule : shared Module(eltType);

        proc init(innerModule: shared Module(?)) {
            super.init(innerModule.eltType);
            this.innerModule = innerModule;
            init this;
            this.moduleName = "ResidualBlock";
        }

        override proc forward(input: dynamicTensor(eltType)): dynamicTensor(eltType) do
            return this.innerModule(input) + input;

        override proc attributes(): moduleAttributes {
            // Java moment! (sorry)
            var innerModuleAttributesDict: dict(string,moduleAttributes) = new dict(string,moduleAttributes);
            innerModuleAttributesDict.insert("innerModule",innerModule.attributes());
            return new moduleAttributes(
                "ResidualBlock",
                moduleName,
                innerModuleAttributesDict
            );
        }
    }


    class TorchModule : Module(?) {
        var torchModuleHandle: Bridge.torchModuleHandle;

        proc init(type eltType, torchModuleHandle: Bridge.torchModuleHandle) {
            super.init(eltType);
            this.torchModuleHandle = torchModuleHandle;
            init this;
            this.moduleName = "TorchModule";
        }

        proc init(torchModuleHandle: Bridge.torchModuleHandle) do
            this.init(defaultEltType,torchModuleHandle);

        override proc forward(input: dynamicTensor(eltType)): 
                dynamicTensor(eltType) {
            const th = input : Bridge.tensorHandle(eltType);
            const thOutput = Bridge.modelForward(this.torchModuleHandle,th);
            return thOutput : dynamicTensor(eltType);
        }
    }

    class LoadedTorchModel : TorchModule(?) {
        var modelPath: string;

        proc init(type eltType, modelPath: string) {
            var torchModuleHandle = Bridge.loadModel(modelPath);
            super.init(eltType,torchModuleHandle);
            this.modelPath = modelPath;
            init this;
            this.moduleName = "LoadedTorchModel";
        }

        proc init(modelPath: string) do
            this.init(defaultEltType,modelPath);
    }

    class StyleTransfer : LoadedTorchModel(?) {
        proc init(type eltType, modelPath: string) {
            super.init(eltType,modelPath);
            init this;
            this.moduleName = "StyleTransferLoadedTorchModel";
        }
        
        proc init(modelPath: string) do
            this.init(defaultEltType,modelPath);
        
        override proc forward(input: dynamicTensor(eltType)): 
                dynamicTensor(eltType) {
            const th = input : Bridge.tensorHandle(eltType);
            const thOutput 
                = Bridge.modelForwardStyleTransfer(this.torchModuleHandle,th);
            return thOutput : dynamicTensor(eltType);
        }
    }



}