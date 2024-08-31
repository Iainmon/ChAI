.. default-domain:: chpl

.. module:: ModuleSpec

ModuleSpec
==========
**Usage**

.. code-block:: chapel

   use ModuleSpec;


or

.. code-block:: chapel

   import ModuleSpec;

.. data:: config const detach = true

.. data:: var model: owned(Module(real(32))) = loadModel(specFile = "scripts/models/cnn/specification.json", weightsFolder = "scripts/models/cnn/", dtype = real(32))

.. data:: config const numImages = 1

.. data:: var images = forall i in 0..<numImages do Tensor.load("data/datasets/mnist/image_idx_" + i : string + ".chdata") : real(32)

.. data:: var preds: [0..<numImages] int

.. data:: config const numTimes = 1

.. data:: var time: real

.. data:: config const printResults = false

