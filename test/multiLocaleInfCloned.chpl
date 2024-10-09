use Tensor;
use Network;
use BlockDist;
use DynamicTensor;

config const baseDir = "../";

// Load an array of images.
config const numImages = 5;

// Create distributed domain for images.
const imagesD = blockDist.createDomain({0..<numImages});

// Load distributed array of images.
var images = forall i in imagesD do
    Tensor.load(baseDir + "examples/data/datasets/mnist/image_idx_" + i:string + ".chdata"): real(32);

// Create distributed domain for models.
const localeModelsD = blockDist.createDomain(Locales.domain);

// Load distributed array of models.
var localeModels = forall li in localeModelsD do
    loadModel(specFile = baseDir + "scripts/models/cnn/specification.json",
              weightsFolder = baseDir + "scripts/models/cnn/");

// Create distributed array of output results.
var preds: [imagesD] int;

// Run distributed inference.
coforall loc in Locales do on loc {
    var model = localeModels[here.id].borrow();
    for i in imagesD.localSubdomain() {
        preds[i] = model(images[i]).argmax();
    }
}

config const printResults = true;
if printResults {
    for i in imagesD {
        writeln((i, preds[i]));
    }
}
