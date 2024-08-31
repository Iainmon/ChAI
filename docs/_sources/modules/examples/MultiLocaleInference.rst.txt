.. default-domain:: chpl

.. module:: MultiLocaleInference

MultiLocaleInference
====================
**Usage**

.. code-block:: chapel

   use MultiLocaleInference;


or

.. code-block:: chapel

   import MultiLocaleInference;

.. data:: config const detach = true

.. type:: type dtype = real(32)

.. data:: config const numImages = 1

.. data:: const imagesD = blockDist.createDomain({0..<numImages})

.. data:: var images = forall i in imagesD do Tensor.load("data/datasets/mnist/image_idx_" + i : string + ".chdata") : dtype

.. data:: const localeModelsD = blockDist.createDomain(Locales.domain)

.. data:: var localeModels = forall li in localeModelsD do loadModel(specFile = "scripts/models/cnn/specification.json", weightsFolder = "scripts/models/cnn/", dtype = dtype)

.. data:: var preds: [imagesD] int

.. data:: config const numTries = 1

.. data:: var totalTime: real

.. data:: const averageTime = totalTime / numTries

.. data:: config const printResults = false

