module ConvNext {
  use Tensor;
  use Network;
  use List;

  class LayerNorm2d {

  }

  class ConvNextStem {
    var conv: owned Conv2D(eltType);
    var layernorm_2d: owned LayerNorm2d(eltType);

    proc init(in_channels: int, out_channels: int, kernel_size: int = 3) {
      super.init(eltType);
      this.conv = new Conv2D(eltType, channels=in_channels, features=out_channels, kernel=kernel_size, stride=kernel_size);
      this.layernorm_2d = new LayerNorm2d(); // incomplete
    }
    
    override proc forward(x: Tensor(eltType)): Tensor(eltType) {
      x = this.conv(x)
      x = this.layernorm_2d(x) // incomplete
      return x
    }
  }

  class ConvNextBlock: Module(?) {
    var depthwise_conv: owned Conv2D(eltType); // need groups param in convolutions
    var layernorm_2d: owned LayerNorm2d(eltType);
    var conv1: owned Conv2D(eltType);
    // var gelu; // incomplete, need class wrappers for activation functions?
    var conv2: owned Conv2D(eltType);
    var layer_scale: owned Parameter(eltType);

    proc init(in_channels: int, layer_scale: int = 1e-6, kernel_size: int = 7, stochastic_depth_prob:int = 1) {

      /////////////////// need to finish this
      super.init(eltType);
      this.depthwise_conv = new Conv2D();
      this.conv1 = new Conv2D();
      // this.gelu 
      this.conv2 = new Conv2D();
      this.layer_scale = new Parameter();
    }

    override proc forward(x: Tensor(eltType)): Tensor(eltType) {
      residual = x;
      x = this.depthwise_conv(x);
      x = this.layernorm_2d(x);
      x = this.conv1(x);
      x = x.gelu(); // should be changed to use classes
      x = this.conv2(x);
      x = this.layer_scale(x);
      x = residual + x;
      return x;
    }
  }

  class ConvNextDownsample {
    var layernorm_2d: owned LayerNorm2d(eltType);
    var conv: owned Conv2D(eltType);

    proc init(d_in: int, d_out: int, width:int = 2) {
      super.init(eltType)
      this.layer_norm = new LayerNorm2d(); // incomplete
      this.conv = new Conv2D(eltType, channels=d_in, features=d_out, kernel=width, stride=width);
    }

    override proc forward(x: Tensor(eltType)): Tensor(eltType) {
      x = this.layernorm_2d(x);
      x = this.conv(x);
      return x;
    }
  }

  class ConvNextClassifier {
    // var global_pool: // incomplete, need AdaptiveAvgPool2d (Global average pooling)
    // adaptiveAvgPool2d is a method on NDArrays
    // var flatten: // need Flatten
    // var layer_norm: LayerNorm();
    // var linear: Linear();

    proc init(d_in: int, d_out: int) {
      // this.global_pool = AdaptiveAvgPool2d(...);
      // this.flatten = Flatten();
      // this.layer_norm = LayerNorm(...);
      // this.linear = Linear();
    }

    override proc forward(x: Tensor(eltType)): Tensor(eltType) {
      x = this.global_pool(x);
      x = this.flatten(x);
      x = this.layer_norm(x);
      x = this.linear(x);
      return x;
    }
  }

  class ConvNext {
    var layers: owned Sequential(eltType);

    proc init(in_channels: int, out_channels: int, blocks: [] int = [96]) {
      var layer_list = list(owned Module(eltType));
      layer_list.pushBack()// etc


      this.layers = new Sequential(layer_list);
    }

    override proc forward(x: Tensor(eltType)): Tensor(eltType) {
      x = layers(x);
    }
  }
}