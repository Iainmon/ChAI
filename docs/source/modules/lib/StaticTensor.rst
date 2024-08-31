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

.. type:: type tensor = staticTensor(?)

.. record:: staticTensor : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real(64)

   .. attribute:: var resource: shared(BaseTensorResource(eltType, rank))

   .. method:: proc meta

   .. method:: proc _dom

   .. method:: proc init(param rank: int, type eltType = real(64))

   .. method:: proc init(in resource: shared(BaseTensorResource(?eltType, ?rank)))

   .. method:: proc init(in resource: owned(BaseTensorResource(?eltType, ?rank)))

   .. method:: proc init(array: ndarray(?rank, ?eltType))

   .. method:: proc init(dom: domain(?), type eltType = real)

   .. method:: proc init(arr: [] ?eltType)

   .. method:: proc init(it: _iteratorRecord)

   .. method:: proc this(args ...)

   .. method:: proc reshapeDomain(dom: this._dom.type)

   .. method:: proc _setArrayData(value)

   .. method:: proc detach(copy: bool = true, keepGrad: bool = false): staticTensor(rank, eltType)

.. function:: operator :(in t: staticTensor(?rank, ?eltType), type toType): staticTensor(rank, toType)

.. function:: proc tensorFromCtx(param rank: int, type eltType, ctx): staticTensor(rank, eltType)

.. function:: operator +(a: staticTensor(?rank, ?eltType), b: staticTensor(rank, eltType))

.. function:: operator -(a: staticTensor(?rank, ?eltType), b: staticTensor(rank, eltType))

.. function:: operator *(a: staticTensor(?rank, ?eltType), b: staticTensor(rank, eltType))

.. function:: operator /(a: staticTensor(?rank, ?eltType), b: staticTensor(rank, eltType))

.. method:: proc staticTensor.reshape(dom: domain(?))

.. method:: proc staticTensor.reshape(newShape: int ...?newRank)

.. method:: proc staticTensor.relu()

.. method:: proc staticTensor.permute(axes: int ...rank)

.. method:: proc staticTensor.expand(axes: int ...rank)

.. method:: proc staticTensor.pad(args: 2*int ...rank, value: eltType = 0.0)

.. method:: proc staticTensor.shrink(args: 2*int ...rank)

.. method:: proc staticTensor.slice(dom: domain(?)) where dom.rank == rank

.. method:: proc staticTensor.slice(rngs: range ...rank)

.. method:: proc staticTensor.sum(axes: int ...?r)

.. method:: proc staticTensor.unsqueeze(dim: int): staticTensor(rank+1, eltType)

.. method:: proc staticTensor.max(): staticTensor(1, eltType)

.. method:: proc staticTensor.exp(): staticTensor(rank, eltType)

.. method:: proc staticTensor.softmax(): staticTensor(rank, eltType)

.. function:: proc matvec(mat: staticTensor(2, ?eltType), vec: staticTensor(1, eltType)): staticTensor(1, eltType)

.. function:: proc matvec(mat: staticTensor(2, ?eltType), vec: staticTensor(2, eltType)): staticTensor(2, eltType)

.. method:: proc type staticTensor.matvecmul(m, v)

.. method:: proc type staticTensor.convolve(features: staticTensor(3, ?eltType), kernel: staticTensor(4, eltType), stride: int): staticTensor(3, eltType)

.. method:: proc type staticTensor.convolve(features: staticTensor(3, ?eltType), kernel: staticTensor(4, eltType), bias: staticTensor(1, eltType), stride: int): staticTensor(3, eltType)

.. method:: proc type staticTensor.matvecmulFast(mat: staticTensor(2, ?eltType), vec: staticTensor(1, eltType)): staticTensor(1, eltType)

.. method:: proc staticTensor.dilate(dil: int): staticTensor(3, eltType) where this.rank == 3

.. method:: proc staticTensor.maxPool(poolSize: int): staticTensor(3, eltType) where this.rank == 3

.. method:: proc type staticTensor.arange(to: int, type eltType = real, shape: ?rank*int): staticTensor(rank, eltType)

.. method:: proc type staticTensor.arange(shape: int ...?rank): staticTensor(rank, real)

.. method:: proc type staticTensor.fromShape(type eltType = real, shape: int ...?rank, value: eltType = 0: eltType): staticTensor(rank, eltType)

.. method:: proc type staticTensor.zeros(shape: int ...?rank): staticTensor(rank, real)

.. method:: proc type staticTensor.zeros(type eltType, shape: int ...?rank): staticTensor(rank, eltType)

.. method:: proc type staticTensor.ones(shape: int ...?rank): staticTensor(rank, real)

.. method:: proc type staticTensor.ones(type eltType, shape: int ...?rank): staticTensor(rank, eltType)

.. data:: config const n = 100

.. data:: config const diag = false

.. data:: config const size = 3

.. function:: proc main()

.. method:: proc staticTensor.serialize(writer: IO.fileWriter(locking = false, IO.defaultSerializer), ref serializer: IO.defaultSerializer)

.. method:: proc staticTensor.serialize(writer: IO.fileWriter(?), ref serializer: ?srt2) where srt2 != IO.defaultSerializer

.. method:: proc staticTensor.serialize(writer: IO.fileWriter(locking = false, IO.defaultSerializer), ref serializer: IO.defaultSerializer, param capitalT: bool) where capitalT == true

.. method:: proc ref staticTensor.read(fr: IO.fileReader(?)) throws

