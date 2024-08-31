.. default-domain:: chpl

.. module:: MNISTNet

MNISTNet
========
**Usage**

.. code-block:: chapel

   use MNISTNet;


or

.. code-block:: chapel

   import MNISTNet;

.. data:: config param layerDebug = false

.. type:: type dtype = real(32)

.. class:: CNN : Module(?)

   .. attribute:: var conv1: owned(Conv2D(eltType))

   .. attribute:: var conv2: owned(Conv2D(eltType))

   .. attribute:: var dropout1: owned(Dropout(eltType))

   .. attribute:: var dropout2: owned(Dropout(eltType))

   .. attribute:: var flatten: owned(Flatten(eltType))

   .. attribute:: var fc1: owned(Linear(eltType))

   .. attribute:: var fc2: owned(Linear(eltType))

   .. method:: proc init(type eltType = dtype)

   .. method:: override proc forward(input: Tensor(eltType)): Tensor(eltType)

.. data:: config const diag = false

.. data:: var cnn = new CNN(dtype)

.. data:: var model = Network.loadModel(specFile = "../scripts/models/cnn/specification.json", weightsFolder = "../scripts/models/cnn/", dtype = dtype)

.. data:: config const testImgSize = 28

.. data:: var img = Tensor.load("data/datasets/mnist/image_idx_0_7_7.chdata"): dtype

.. data:: const modelPath = "data/models/mnist_cnn/"

.. data:: var output = cnn(img)

.. data:: config const imageCount = 0

.. data:: var images = forall i in 0..<imageCount do Tensor.load("data/datasets/mnist/image_idx_" + i : string + ".chdata") : dtype

.. data:: var preds: [images.domain] int

.. data:: config const numTimes = 1

.. data:: config const printResults = false

.. data:: var cnn2 = new Sequential(real, (new Conv2D(real, channels = 1, features = 32, kernel = 3, stride = 1)?, new Conv2D(real, channels = 32, features = 64, kernel = 3, stride = 1)?, new Dropout(real, 0.25)?, new Dropout(real, 0.5)?, new Flatten(real)?, new Linear(real, 9216, 128)?, new Linear(real, 128, 10)?))

