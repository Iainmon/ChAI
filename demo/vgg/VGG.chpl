module VGG {

  use Tensor;
  use Network;

  class Conv2DReluInPlace: Conv2D(?) {
    proc init(type eltType = real,channels: int, features: int, kernel: int, stride: int = 1, padding: int = 0) {
      super.init(eltType, channels, features, kernel, stride, padding);
    }
    override proc forward(input: Tensor(eltType)): Tensor(eltType) {
      // writeln("am i here?");
            // writeln(this);
      var x = super.forward(input);
      x = x.relu();
      return x;
    }
  }

  class LinearReluInPlace: Linear(?) {
    proc init(type eltType = real, in_features: int, out_features: int) {
      super.init(eltType, in_features, out_features);
    }
    override proc forward(input: Tensor(eltType)): Tensor(eltType) {
      var x = super.forward(input);
      x = x.relu();
      return x;
    }
  }

  class VGG16: Module(?) {
    // features=64
    var conv64_1: owned Conv2DReluInPlace(?);
    var conv64_2: owned Conv2DReluInPlace(?);
    var maxPool64: owned MaxPool(?);
    // features=128
    var conv128_1: owned Conv2DReluInPlace(?);
    var conv128_2: owned Conv2DReluInPlace(?);
    var maxPool128: owned MaxPool(?);
    // features=256
    var conv256_1: owned Conv2DReluInPlace(?);
    var conv256_2: owned Conv2DReluInPlace(?);
    var conv256_3: owned Conv2DReluInPlace(?);
    var maxPool256: owned MaxPool(?);
    // features=512
    var conv512_1_1: owned Conv2DReluInPlace(?);
    var conv512_1_2: owned Conv2DReluInPlace(?);
    var conv512_1_3: owned Conv2DReluInPlace(?);
    var maxPool512_1: owned MaxPool(?);
    // features=512
    var conv512_2_1: owned Conv2DReluInPlace(?);
    var conv512_2_2: owned Conv2DReluInPlace(?);
    var conv512_2_3: owned Conv2DReluInPlace(?);
    var maxPool512_2: owned MaxPool(?);

    // avg pool
    var avgPool: owned AdaptiveAvgPool2D(?);

    // flatten
    var flatten: owned Flatten(?);

    // classifier
    var linear1: owned LinearReluInPlace(?);
    var linear2: owned LinearReluInPlace(?);
    var linear3: owned Linear(?);

    proc init(type eltType = real, num_classes: int = 1000) {
      super.init(eltType);

      this.conv64_1 = new Conv2DReluInPlace(eltType,channels=3,features=64,kernel=3,stride=1,padding=1);
      this.conv64_2 = new Conv2DReluInPlace(eltType,channels=64,features=64,kernel=3,stride=1,padding=1);
      this.maxPool64 = new MaxPool(eltType, poolSize=2, stride=2);
      this.conv128_1 = new Conv2DReluInPlace(eltType,channels=64,features=128,kernel=3,stride=1,padding=1);
      this.conv128_2 = new Conv2DReluInPlace(eltType,channels=128,features=128,kernel=3,stride=1,padding=1);
      this.maxPool128 = new MaxPool(eltType, poolSize=2, stride=2);
      this.conv256_1 = new Conv2DReluInPlace(eltType,channels=128,features=256,kernel=3,stride=1,padding=1);
      this.conv256_2 = new Conv2DReluInPlace(eltType,channels=256,features=256,kernel=3,stride=1,padding=1);
      this.conv256_3 = new Conv2DReluInPlace(eltType,channels=256,features=256,kernel=3,stride=1,padding=1);
      this.maxPool256 = new MaxPool(eltType, poolSize=2, stride=2);
      this.conv512_1_1 = new Conv2DReluInPlace(eltType,channels=256,features=512,kernel=3,stride=1,padding=1);
      this.conv512_1_2 = new Conv2DReluInPlace(eltType,channels=512,features=512,kernel=3,stride=1,padding=1);
      this.conv512_1_3 = new Conv2DReluInPlace(eltType,channels=512,features=512,kernel=3,stride=1,padding=1);
      this.maxPool512_1 = new MaxPool(eltType, poolSize=2, stride=2);
      this.conv512_2_1 = new Conv2DReluInPlace(eltType,channels=512,features=512,kernel=3,stride=1,padding=1);
      this.conv512_2_2 = new Conv2DReluInPlace(eltType,channels=512,features=512,kernel=3,stride=1,padding=1);
      this.conv512_2_3 = new Conv2DReluInPlace(eltType,channels=512,features=512,kernel=3,stride=1,padding=1);
      this.maxPool512_2 = new MaxPool(eltType, poolSize=2, stride=2);

      this.avgPool = new AdaptiveAvgPool2D(eltType, outputSize=7);
      this.flatten = new Flatten(eltType);

      this.linear1 = new LinearReluInPlace(eltType,512*7*7,4096);
      this.linear2 = new LinearReluInPlace(eltType,4096,4096);
      this.linear3 = new Linear(eltType,4096,num_classes);


      init this;
      this.moduleName = "vgg16";
      // match the moduleNames from the pytorch model
      this.conv64_1.moduleName = "features.0";
      this.conv64_2.moduleName = "features.2";
      this.conv128_1.moduleName = "features.5";
      this.conv128_2.moduleName = "features.7";
      this.conv256_1.moduleName = "features.10";
      this.conv256_2.moduleName = "features.12";
      this.conv256_3.moduleName = "features.14";
      this.conv512_1_1.moduleName = "features.17";
      this.conv512_1_2.moduleName = "features.19";
      this.conv512_1_3.moduleName = "features.21";
      this.conv512_2_1.moduleName = "features.24";
      this.conv512_2_2.moduleName = "features.26";
      this.conv512_2_3.moduleName = "features.28";
      this.linear1.moduleName = "classifier.0";
      this.linear2.moduleName = "classifier.3";
      this.linear3.moduleName = "classifier.6";
      // add the fields
      for (_,m) in this.moduleFields() {
        this.addModule(m.moduleName,m);
      }
    }

    override proc forward(input: Tensor(eltType)): Tensor(eltType) {
      // writeln("input", input.shape);
      // writeln("run here");
      var x = this.conv64_1(input);
      x = this.conv64_2(x);
      x = this.maxPool64(x);
      x = this.conv128_1(x);
      x = this.conv128_2(x);
      x = this.maxPool128(x);
      x = this.conv256_1(x);
      x = this.conv256_2(x);
      x = this.conv256_3(x);
      x = this.maxPool256(x);
      x = this.conv512_1_1(x);
      x = this.conv512_1_2(x);
      x = this.conv512_1_3(x);
      x = this.maxPool512_1(x);
      x = this.conv512_2_1(x);
      x = this.conv512_2_2(x);
      x = this.conv512_2_3(x);
      x = this.maxPool512_2(x);
      x = this.avgPool(x);
      x = this.flatten(x);
      x = this.linear1(x);
      x = this.linear2(x);
      x = this.linear3(x);
      return x;

    }


  }

}
