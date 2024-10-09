use Tensor;
use Network;

config const baseDir = "../";

// Load an array of images.
config const numImages = 5;

// Create domain for images.
const imagesD = {0..<numImages};

// Load array of images.
var images = [i in imagesD]
    Tensor.load(baseDir + "examples/data/datasets/mnist/image_idx_" + i:string + ".chdata"): real(32);

// Load model across target locales.
const model = loadModel(specFile = baseDir + "scripts/models/cnn/specification.json",
                        weightsFolder = baseDir + "scripts/models/cnn/",
                        targetLocales = Locales);

// Create array of output results.
var preds: [imagesD] int;

// Run inference on distributed model.
for (image,pred) in zip(images,preds) {
    pred = model(image).argmax();
}

config const printResults = true;
if printResults {
    for i in imagesD {
        writeln((i, preds[i]));
    }
}
