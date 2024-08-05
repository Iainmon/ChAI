use Tensor;

use Network;

import Time;


// Construct the model from specification. 
var m: owned Module(real) = modelFromSpecFile("scripts/models/cnn/specification.json");

// Print the model's structure. 
writeln(m.signature);

// Load the weights into the model. 
m.loadPyTorchDump("scripts/models/cnn/");

// Load an array of images. 
config const imageCount = 1;
var images = forall i in 0..<imageCount do Tensor.load("data/datasets/mnist/image_idx_" + i:string + ".chdata");

// Create array of output results. 
var preds: [images.domain] int;



config const numTimes = 1;
var time: real;
for i in 0..<numTimes {
    var st = new Time.stopwatch();
    st.start();
    forall (img,pred) in zip(images, preds) {
        var output: Tensor(real) = m(img);
        pred = output.argmax();
    }
    const tm = st.elapsed();
    st.stop();
    writeln("Time: ", tm, " seconds.");
    time = tm;
}

config const printResults = false;
if printResults {
    for i in images.domain {
        writeln((i, preds[i]));
    }
}

writeln("The last inference batch took ", time, " ms.");