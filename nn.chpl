use Tensor;

use Network;

class WeirdLayer : Module {

    proc forward(x: Tensor): Tensor {
        
    }
}


// Construct the model from specification. 
var model: owned Module(real)
     = modelFromSpecFile("../scripts/models/cnn/specification.json");

// Print the model's structure. 
writeln(model.signature);

// Load the weights into the model. 
model.loadPyTorchDump("scripts/models/cnn/");

// Load an array of images. 
config const numImages = 10000;
var images = forall i in 0..<numImages do 
    Tensor.load("data/datasets/mnist/image_idx_" + i:string + ".chdata");

// Create array of output results. 
var preds: [0..<numImages] int;



forall (img,pred) in zip(images, preds) {
    pred = model(img).argmax();
}

