use Tensor;

use Network;

use CyclicDist;

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
const imagesD = cyclicDist.createDomain({0..<numImages});
var images: [imagesD] Tensor(real);
forall img in imagesD {
    img = Tensor.load("data/datasets/mnist/image_idx_" + i:string + ".chdata");
    writeln("Loaded image from ", (here,here.id,here.hostname));
}
// Create array of output results. 
var preds: [imagesD] int;



config const numTimes = 1;
var time: real;
coforall loc in Locales {
    writeln("Running from ", (loc,loc.id,loc.hostname));
    on loc {
        const myImagesD = imagesD.localSubdomain();
        const myModel = model;
        
        var st = new Time.stopwatch();

        st.start();
        coforall i in myImagesD {
            preds[i] = myModel(images[i]).argmax();
        }
        st.stop();
        const tm = st.elapsed();
        writeln("Time: ", tm, " seconds.", (here,here.id,here.hostname));
        // time += tm;
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
