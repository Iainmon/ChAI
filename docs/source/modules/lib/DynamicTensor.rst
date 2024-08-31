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

   .. method:: proc init(type eltType)

   .. method:: proc init(type eltType, in meta: shared(TensorEssence(eltType)))

   .. method:: proc init(in meta: shared(TensorEssence(?eltType)))

   .. method:: proc init(t: staticTensor(?rank, ?eltType), detached: bool = dynamicTensor.detachMode())

   .. method:: proc init(a: ndarray(?rank, ?eltType))

   .. method:: proc init(arr: [] ?eltType)

   .. method:: proc this(args ...)

   .. method:: proc tensorize(param rank: int): staticTensor(rank, eltType)

   .. method:: proc resource(param rank: int): shared(BaseTensorResource(eltType, rank))

   .. method:: proc forceRank(param rank: int): staticTensor(rank, eltType)

   .. method:: proc forceRankMeta(param rank: int): shared(BaseTensorResource(eltType, rank))

   .. method:: proc hardCheckRank(param rank: int): bool

   .. method:: proc checkRank(param rank: int): bool

   .. method:: proc to(device: locale)

   .. method:: proc device: locale

   .. method:: proc array(param rank: int) ref: ndarray(rank, eltType)

   .. method:: proc grad(param rank: int) ref: ndarray(rank, eltType)

   .. method:: proc data(param rank: int) ref: [] eltType

   .. method:: proc toNDArray(param rank: int): ndarray(rank, eltType)

   .. method:: proc toArray(param rank: int): [] eltType

   .. method:: proc detach(): dynamicTensor(eltType)

.. function:: operator :(in t: dynamicTensor(?eltType), type toType): dynamicTensor(toType)

.. method:: proc type dynamicTensor.detachMode() param: bool

.. method:: proc type dynamicTensor.detachMode(detachMode: bool)

.. method:: proc ndarray.toTensor(): dynamicTensor(eltType)

.. method:: proc staticTensor.eraseRank(detach: bool = dynamicTensor.detachMode()): dynamicTensor(eltType)

.. function:: operator :(t: staticTensor(?rank, ?eltType), type T: dynamicTensor(eltType)): dynamicTensor(eltType)

.. function:: proc zipBinOp(param opName: string, a: dynamicTensor(?eltType), b: dynamicTensor(eltType)): dynamicTensor(eltType)

.. method:: proc type dynamicTensor.loadFromNumpy(path: string): dynamicTensor(real)

.. function:: operator +(a: dynamicTensor(?eltType), b: dynamicTensor(eltType)): dynamicTensor(eltType)

.. function:: operator -(a: dynamicTensor(?eltType), b: dynamicTensor(eltType)): dynamicTensor(eltType)

.. function:: operator *(a: dynamicTensor(?eltType), b: dynamicTensor(eltType)): dynamicTensor(eltType)

.. method:: proc dynamicTensor.sum(axes: int ...?r): dynamicTensor(eltType)

.. method:: proc dynamicTensor.relu(): dynamicTensor(eltType)

.. method:: proc dynamicTensor.max(): dynamicTensor(eltType)

.. method:: proc dynamicTensor.exp(): dynamicTensor(eltType)

.. method:: proc dynamicTensor.softmax(): dynamicTensor(eltType)

.. method:: proc dynamicTensor.maxPool(poolSize: int): dynamicTensor(eltType)

.. method:: proc dynamicTensor.reshape(args ...): dynamicTensor(eltType)

.. method:: proc dynamicTensor.slice(rngs: range ...?rank): dynamicTensor(eltType)

.. method:: proc dynamicTensor.slice(dom: domain(?)): dynamicTensor(eltType)

.. method:: proc dynamicTensor.flatten(): dynamicTensor(eltType)

.. method:: proc type dynamicTensor.matvecmul(m: dynamicTensor(?eltType), v: dynamicTensor(eltType)): dynamicTensor(eltType)

.. method:: proc type dynamicTensor.matvecmulFast(m: dynamicTensor(?eltType), v: dynamicTensor(eltType)): dynamicTensor(eltType)

.. method:: proc dynamicTensor.argmax(): int

.. method:: proc type dynamicTensor.convolve(features: dynamicTensor(?eltType), kernel: dynamicTensor(eltType), stride: int): dynamicTensor(eltType)

.. method:: proc type dynamicTensor.convolve(features: dynamicTensor(?eltType), kernel: dynamicTensor(eltType), bias: dynamicTensor(eltType), stride: int): dynamicTensor(eltType)

.. method:: proc type dynamicTensor.arange(args ...)

.. method:: proc type dynamicTensor.ones(args ...)

.. method:: proc type dynamicTensor.zeros(args ...)

.. function:: proc main()

.. method:: proc dynamicTensor.serialize(writer: IO.fileWriter(locking = false, IO.defaultSerializer), ref serializer: IO.defaultSerializer)

.. method:: proc dynamicTensor.serialize(writer: IO.fileWriter(?), ref serializer: ?srt2) where srt2 != IO.defaultSerializer

.. method:: proc dynamicTensor.write(fw: IO.fileWriter(?)) throws

.. method:: proc dynamicTensor.save(path: string)

.. method:: proc type dynamicTensor.multiReader(path: string)

.. method:: proc type dynamicTensor.load(path: string, param precision = 64): dynamicTensor(real)

.. method:: proc type dynamicTensor.readInPlace(fr: IO.fileReader(?), param precision = 64): dynamicTensor(real)

