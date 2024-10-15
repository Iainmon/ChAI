use Tensor;

use Network;

import Time;

use UnitTest;

config const baseDir = "../";

proc myTest2(test: borrowed Test) throws {

    // Construct the model from specification.
    var model: owned Module(real(32)) =  Network.loadModel(specFile=baseDir+"scripts/models/cnn/specification.json",
              weightsFolder=baseDir+"scripts/models/cnn/",
              dtype=real(32));

    // Load an array of images.
    const numImages = 10;
    var images = forall i in 0..<numImages do Tensor.load(baseDir+"examples/data/datasets/mnist/image_idx_" + i:string + ".chdata") : real(32);

    // Create array of output results. 
    var preds: [0..<numImages] int;

    forall (img,pred) in zip(images, preds) {
        pred = model(img).argmax();
    }

    test.assertTrue(preds[0] == 7);
    test.assertTrue(preds[1] == 2);

}

UnitTest.main();
