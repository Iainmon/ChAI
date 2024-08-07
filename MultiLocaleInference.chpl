use Tensor;

use Network;

use BlockCycDist;

import Time;

config const detach = true;

Tensor.detachMode(detach);

// Construct the model from specification. 
var model: owned Module(real) = modelFromSpecFile("scripts/models/cnn/specification.json");

// Print the model's structure. 
writeln(model.signature);

// Load the weights into the model. 
model.loadPyTorchDump("scripts/models/cnn/");

// Load an array of images. 
config const numImages = 1;
const imagesD = {0..<numImages};
var images = forall i in imagesD do Tensor.load("data/datasets/mnist/image_idx_" + i:string + ".chdata");

// Create array of output results. 
var preds: [imagesD] int;



config const numTimes = 1;
var time: real;
coforall loc in Locales {
    on loc {
        const myImagesD = imagesD.localSubdomain();
        const myModel = model;
        
        var st = new Time.stopwatch();

        st.start();
        coforall i in myImagesD {

            preds[i] = model(images[i]).argmax();
        }
        st.stop();
        const tm = st.elapsed();
        writeln("Time: ", tm, " seconds.");
        time += tm;
    }
}


time /= numTimes;

config const printResults = false;
if printResults {
    for i in images.domain {
        writeln((i, preds[i]));
    }
}

writeln("The average inference time for batch of size ", numImages, " was ", time, " seconds.");
