.. default-domain:: chpl

.. module:: StaticTensor

StaticTensor
============
**Usage**

.. code-block:: chapel

   use StaticTensor;


or

.. code-block:: chapel

   import StaticTensor;

.. record:: staticTensor : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real(64)

   .. attribute:: var resource: shared(BaseTensorResource(eltType, rank))

   .. method:: proc deflt meta deflt

   .. method:: proc deflt _dom deflt

   .. method:: proc deflt init(param rank: int, type eltType = real(64)) deflt

   .. method:: proc deflt init(in resource: shared(BaseTensorResource(?eltType, ?rank))) deflt

   .. method:: proc deflt init(in resource: owned(BaseTensorResource(?eltType, ?rank))) deflt

   .. method:: proc deflt init(deflt array: ndarray(?rank, ?eltType)) deflt

   .. method:: proc deflt init(deflt dom: domain(?), type eltType = real) deflt

   .. method:: proc deflt init(deflt arr: [] ?eltType) deflt

   .. method:: proc deflt init(deflt it: _iteratorRecord) deflt

   .. method:: proc deflt this(args ...) deflt

   .. method:: proc deflt reshapeDomain(deflt dom: this._dom.type) deflt

   .. method:: proc deflt _setArrayData(deflt value) deflt

   .. method:: proc deflt detach(deflt copy: bool = true, deflt keepGrad: bool = false) deflt: staticTensor(rank, eltType)

.. function:: operator :(in t: staticTensor(?rank, ?eltType), type toType) deflt: staticTensor(rank, toType)

.. function:: proc tensorFromCtx(param rank: int, type eltType, deflt ctx) deflt: staticTensor(rank, eltType)

.. function:: operator +(deflt a: staticTensor(?rank, ?eltType), deflt b: staticTensor(rank, eltType)) deflt

.. function:: operator -(deflt a: staticTensor(?rank, ?eltType), deflt b: staticTensor(rank, eltType)) deflt

.. function:: operator *(deflt a: staticTensor(?rank, ?eltType), deflt b: staticTensor(rank, eltType)) deflt

.. function:: operator /(deflt a: staticTensor(?rank, ?eltType), deflt b: staticTensor(rank, eltType)) deflt

.. method:: proc deflt staticTensor.reshape(deflt dom: domain(?)) deflt

.. method:: proc deflt staticTensor.reshape(newShape: int ...?newRank) deflt

.. method:: proc deflt staticTensor.relu() deflt

.. method:: proc deflt staticTensor.permute(axes: int ...rank) deflt

.. method:: proc deflt staticTensor.expand(axes: int ...rank) deflt

.. method:: proc deflt staticTensor.pad(args: 2*int ...rank, deflt value: eltType = 0.0) deflt

.. method:: proc deflt staticTensor.shrink(args: 2*int ...rank) deflt

.. method:: proc deflt staticTensor.slice(deflt dom: domain(?)) deflt where dom.rank == rank

.. method:: proc deflt staticTensor.slice(rngs: range ...rank) deflt

.. method:: proc deflt staticTensor.sum(axes: int ...?r) deflt

.. method:: proc deflt staticTensor.unsqueeze(deflt dim: int) deflt: staticTensor(rank+1, eltType)

.. method:: proc deflt staticTensor.max() deflt: staticTensor(1, eltType)

.. method:: proc deflt staticTensor.exp() deflt: staticTensor(rank, eltType)

.. method:: proc deflt staticTensor.softmax() deflt: staticTensor(rank, eltType)

.. function:: proc matvec(deflt mat: staticTensor(2, ?eltType), deflt vec: staticTensor(1, eltType)) deflt: staticTensor(1, eltType)

.. function:: proc matvec(deflt mat: staticTensor(2, ?eltType), deflt vec: staticTensor(2, eltType)) deflt: staticTensor(2, eltType)

.. method:: proc type staticTensor.matvecmul(deflt m, deflt v) deflt

.. method:: proc type staticTensor.convolve(deflt features: staticTensor(3, ?eltType), deflt kernel: staticTensor(4, eltType), deflt stride: int) deflt: staticTensor(3, eltType)

.. method:: proc type staticTensor.convolve(deflt features: staticTensor(3, ?eltType), deflt kernel: staticTensor(4, eltType), deflt bias: staticTensor(1, eltType), deflt stride: int) deflt: staticTensor(3, eltType)

.. method:: proc type staticTensor.matvecmulFast(deflt mat: staticTensor(2, ?eltType), deflt vec: staticTensor(1, eltType)) deflt: staticTensor(1, eltType)

.. method:: proc deflt staticTensor.dilate(deflt dil: int) deflt: staticTensor(3, eltType) where this.rank == 3

.. method:: proc deflt staticTensor.maxPool(deflt poolSize: int) deflt: staticTensor(3, eltType) where this.rank == 3

.. method:: proc type staticTensor.arange(deflt to: int, type eltType = real, deflt shape: ?rank*int) deflt: staticTensor(rank, eltType)

.. method:: proc type staticTensor.arange(shape: int ...?rank) deflt: staticTensor(rank, real)

.. method:: proc type staticTensor.fromShape(type eltType = real, shape: int ...?rank, deflt value: eltType = 0: eltType) deflt: staticTensor(rank, eltType)

.. method:: proc type staticTensor.zeros(shape: int ...?rank) deflt: staticTensor(rank, real)

.. method:: proc type staticTensor.zeros(type eltType, shape: int ...?rank) deflt: staticTensor(rank, eltType)

.. method:: proc type staticTensor.ones(shape: int ...?rank) deflt: staticTensor(rank, real)

.. method:: proc type staticTensor.ones(type eltType, shape: int ...?rank) deflt: staticTensor(rank, eltType)

.. data:: config const n = 100

.. data:: config const diag = false

.. data:: config const size = 3

.. function:: proc main() deflt

.. method:: proc deflt staticTensor.serialize(deflt writer: IO.fileWriter(locking = false, IO.defaultSerializer), ref serializer: IO.defaultSerializer) deflt

.. method:: proc deflt staticTensor.serialize(deflt writer: IO.fileWriter(?), ref serializer: ?srt2) deflt where srt2 != IO.defaultSerializer

.. method:: proc deflt staticTensor.serialize(deflt writer: IO.fileWriter(locking = false, IO.defaultSerializer), ref serializer: IO.defaultSerializer, param capitalT: bool) deflt where capitalT == true

.. method:: proc ref staticTensor.read(deflt fr: IO.fileReader(?)) deflt throws

