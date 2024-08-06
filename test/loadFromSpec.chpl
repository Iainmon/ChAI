use Tensor;

use Network;

import Time;

use UnitTest;

proc myTest2(test: borrowed Test) throws {

    // Construct the model from specification. 
    var model: owned Module(real) = modelFromSpecFile("scripts/models/cnn/specification.json");

    // Print the model's structure. 
    writeln(model.signature);

    // Load the weights into the model. 
    model.loadPyTorchDump("scripts/models/cnn/");

    // Load an array of images. 
    const numImages = 10;
    var images = forall i in 0..<numImages do Tensor.load("data/datasets/mnist/image_idx_" + i:string + ".chdata");

    // Create array of output results. 
    var preds: [0..<numImages] int;

    const numTimes = 1;
    var time: real;
    for i in 0..<numTimes {
        var st = new Time.stopwatch();

        st.start();
        forall (img,pred) in zip(images, preds) {
            pred = model(img).argmax();
        }
        st.stop();

        const tm = st.elapsed();
        writeln("Time: ", tm, " seconds.");
        time += tm;
    }

    time /= numTimes;

    test.assertTrue(preds[0] == 7);
    test.assertTrue(preds[1] == 2);

}

UnitTest.main();