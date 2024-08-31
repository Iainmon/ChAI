.. default-domain:: chpl

.. module:: DynamicTensor

DynamicTensor
=============
**Usage**

.. code-block:: chapel

   use DynamicTensor;


or

.. code-block:: chapel

   import DynamicTensor;

.. data:: config param maxRank = 6

.. data:: param defaultDetachedMode = true

.. type:: type Tensor = dynamicTensor(?)

.. record:: dynamicTensor : serializable

   .. attribute:: type eltType = real

   .. attribute:: var meta: shared(TensorEssence(eltType))

   .. attribute:: var runtimeRank: int = -1

   .. method:: proc deflt init(type eltType) deflt

   .. method:: proc deflt init(type eltType, in meta: shared(TensorEssence(eltType))) deflt

   .. method:: proc deflt init(in meta: shared(TensorEssence(?eltType))) deflt

   .. method:: proc deflt init(deflt t: staticTensor(?rank, ?eltType), deflt detached: bool = dynamicTensor.detachMode()) deflt

   .. method:: proc deflt init(deflt a: ndarray(?rank, ?eltType)) deflt

   .. method:: proc deflt init(deflt arr: [] ?eltType) deflt

   .. method:: proc deflt this(args ...) deflt

   .. method:: proc deflt tensorize(param rank: int) deflt: staticTensor(rank, eltType)

   .. method:: proc deflt resource(param rank: int) deflt: shared(BaseTensorResource(eltType, rank))

   .. method:: proc deflt forceRank(param rank: int) deflt: staticTensor(rank, eltType)

   .. method:: proc deflt forceRankMeta(param rank: int) deflt: shared(BaseTensorResource(eltType, rank))

   .. method:: proc deflt hardCheckRank(param rank: int) deflt: bool

   .. method:: proc deflt checkRank(param rank: int) deflt: bool

   .. method:: proc deflt to(deflt device: locale) deflt

   .. method:: proc deflt device deflt: locale

   .. method:: proc deflt array(param rank: int) ref: ndarray(rank, eltType)

   .. method:: proc deflt grad(param rank: int) ref: ndarray(rank, eltType)

   .. method:: proc deflt data(param rank: int) ref: [] eltType

   .. method:: proc deflt toNDArray(param rank: int) deflt: ndarray(rank, eltType)

   .. method:: proc deflt toArray(param rank: int) deflt: [] eltType

   .. method:: proc deflt detach() deflt: dynamicTensor(eltType)

.. function:: operator :(in t: dynamicTensor(?eltType), type toType) deflt: dynamicTensor(toType)

.. method:: proc type dynamicTensor.detachMode() param: bool

.. method:: proc type dynamicTensor.detachMode(deflt detachMode: bool) deflt

.. method:: proc deflt ndarray.toTensor() deflt: dynamicTensor(eltType)

.. method:: proc deflt staticTensor.eraseRank(deflt detach: bool = dynamicTensor.detachMode()) deflt: dynamicTensor(eltType)

.. function:: operator :(deflt t: staticTensor(?rank, ?eltType), type T: dynamicTensor(eltType)) deflt: dynamicTensor(eltType)

.. function:: proc zipBinOp(param opName: string, deflt a: dynamicTensor(?eltType), deflt b: dynamicTensor(eltType)) deflt: dynamicTensor(eltType)

.. method:: proc type dynamicTensor.loadFromNumpy(deflt path: string) deflt: dynamicTensor(real)

.. function:: operator +(deflt a: dynamicTensor(?eltType), deflt b: dynamicTensor(eltType)) deflt: dynamicTensor(eltType)

.. function:: operator -(deflt a: dynamicTensor(?eltType), deflt b: dynamicTensor(eltType)) deflt: dynamicTensor(eltType)

.. function:: operator *(deflt a: dynamicTensor(?eltType), deflt b: dynamicTensor(eltType)) deflt: dynamicTensor(eltType)

.. method:: proc deflt dynamicTensor.sum(axes: int ...?r) deflt: dynamicTensor(eltType)

.. method:: proc deflt dynamicTensor.relu() deflt: dynamicTensor(eltType)

.. method:: proc deflt dynamicTensor.max() deflt: dynamicTensor(eltType)

.. method:: proc deflt dynamicTensor.exp() deflt: dynamicTensor(eltType)

.. method:: proc deflt dynamicTensor.softmax() deflt: dynamicTensor(eltType)

.. method:: proc deflt dynamicTensor.maxPool(deflt poolSize: int) deflt: dynamicTensor(eltType)

.. method:: proc deflt dynamicTensor.reshape(args ...) deflt: dynamicTensor(eltType)

.. method:: proc deflt dynamicTensor.slice(rngs: range ...?rank) deflt: dynamicTensor(eltType)

.. method:: proc deflt dynamicTensor.slice(deflt dom: domain(?)) deflt: dynamicTensor(eltType)

.. method:: proc deflt dynamicTensor.flatten() deflt: dynamicTensor(eltType)

.. method:: proc type dynamicTensor.matvecmul(deflt m: dynamicTensor(?eltType), deflt v: dynamicTensor(eltType)) deflt: dynamicTensor(eltType)

.. method:: proc type dynamicTensor.matvecmulFast(deflt m: dynamicTensor(?eltType), deflt v: dynamicTensor(eltType)) deflt: dynamicTensor(eltType)

.. method:: proc deflt dynamicTensor.argmax() deflt: int

.. method:: proc type dynamicTensor.convolve(deflt features: dynamicTensor(?eltType), deflt kernel: dynamicTensor(eltType), deflt stride: int) deflt: dynamicTensor(eltType)

.. method:: proc type dynamicTensor.convolve(deflt features: dynamicTensor(?eltType), deflt kernel: dynamicTensor(eltType), deflt bias: dynamicTensor(eltType), deflt stride: int) deflt: dynamicTensor(eltType)

.. method:: proc type dynamicTensor.arange(args ...) deflt

.. method:: proc type dynamicTensor.ones(args ...) deflt

.. method:: proc type dynamicTensor.zeros(args ...) deflt

.. function:: proc main() deflt

.. method:: proc deflt dynamicTensor.serialize(deflt writer: IO.fileWriter(locking = false, IO.defaultSerializer), ref serializer: IO.defaultSerializer) deflt

.. method:: proc deflt dynamicTensor.serialize(deflt writer: IO.fileWriter(?), ref serializer: ?srt2) deflt where srt2 != IO.defaultSerializer

.. method:: proc deflt dynamicTensor.write(deflt fw: IO.fileWriter(?)) deflt throws

.. method:: proc deflt dynamicTensor.save(deflt path: string) deflt

.. method:: proc type dynamicTensor.multiReader(deflt path: string) deflt

.. method:: proc type dynamicTensor.load(deflt path: string, param precision = 64) deflt: dynamicTensor(real)

.. method:: proc type dynamicTensor.readInPlace(deflt fr: IO.fileReader(?), param precision = 64) deflt: dynamicTensor(real)

