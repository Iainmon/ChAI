.. default-domain:: chpl

.. module:: NDArray

NDArray
=======
**Usage**

.. code-block:: chapel

   use NDArray;


or

.. code-block:: chapel

   import NDArray;

.. type:: type domainType = _domain(?)

.. record:: ndarray : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real(32)

   .. attribute:: var _domain: domain(rank, int)

   .. attribute:: var data: [_domain] eltType = noinit

   .. method:: proc _dom

   .. method:: proc shape: rank*int

   .. method:: proc init(type eltType, const dom: ?t) where isDomainType(t)

   .. method:: proc init(type eltType, const dom: ?t, const in fill: eltType) where isDomainType(t)

   .. method:: proc init(param rank: int, type eltType, const dom: ?t) where isDomainType(t) && dom.rank == rank

   .. method:: proc init(param rank: int, type eltType, const dom: ?t, const arr: [] eltType) where isDomainType(t) && dom.rank == rank

   .. method:: proc init(type eltType, shape: ?rank*int)

   .. method:: proc init(param rank: int, type eltType = real(32))

   .. method:: proc init(type eltType = real(32), const shape: int ...?rank)

   .. method:: proc init(const dom: rect(?rank), type eltType)

   .. method:: proc init(const dom: ?t, type eltType = real(32)) where isDomainType(t)

   .. method:: proc init(const Arr: [])

   .. method:: proc init(const A: ndarray(?rank, ?eltType))

   .. method:: proc init=(const other: [] ?eltType)

   .. method:: proc init=(const other: ndarray(?rank, ?eltType))

   .. method:: proc ref this(args: int ...rank) ref

   .. method:: proc ref setData(const arr: [] eltType) where arr.rank == rank

   .. method:: proc ref reshapeDomain(const dom: domain(rank, int)) where isRegularDomain(dom)

   .. method:: proc reshape(const dom: ?t): ndarray(rank, eltType) where isDomainType(t) && dom.rank == rank

   .. method:: proc reshape(const dom: ?t): ndarray(dom.rank, eltType) where isDomainType(t) && dom.rank != rank

   .. method:: proc reshape(newShape: int ...?newRank): ndarray(newRank, eltType)

   .. method:: proc slice(args ...)

   .. method:: proc permute(axes: int ...rank)

   .. method:: proc expand(axes: int ...rank)

   .. method:: proc ref sumOneAxis(axis: int): ndarray(rank, eltType)

   .. method:: proc sumAxesMask(withAxesMask: rank*int): ndarray(rank, eltType)

   .. method:: proc sum(axes: int ...?axesCount): ndarray(rank, eltType)

   .. method:: proc shrink(narg: 2*int ...rank, param exactBounds = false): ndarray(rank, eltType)

   .. method:: proc pad(narg: 2*int ...rank, value: eltType = 0): ndarray(rank, eltType)

   .. method:: proc dilate(dil: int) where rank == 2

   .. method:: proc dilate(dil: int) where rank == 3

   .. method:: proc squeeze(param newRank: int): ndarray(newRank, eltType) where newRank < rank

   .. method:: proc max(): ndarray(1, eltType)

   .. method:: proc max(axes: int ...?axesCount): ndarray(rank, eltType)

   .. method:: proc populateRemote(re: borrowed(Remote(ndarray(rank, eltType)))): borrowed(Remote(ndarray(rank, eltType)))

   .. method:: proc toRemote(): owned(Remote(ndarray(rank, eltType)))

   .. itermethod:: iter ref batchify(param dim: int = 0) ref where dim < rank

   .. method:: proc kernelRot(): ndarray(4, eltType) where rank == 4

   .. method:: proc kernelRot(): ndarray(3, eltType) where rank == 3

   .. method:: proc argmax() where rank == 1

   .. method:: proc relu()

.. method:: proc type ndarray.arange(type eltType = real(32), shape: ?rank*int): ndarray(rank, eltType)

.. method:: proc type ndarray.arange(shape: int ...?rank): ndarray(rank, real(32))

.. function:: operator  = (ref lhs: ndarray(?rank, ?eltType), const rhs: ndarray(rank, eltType))

.. function:: operator  = (ref lhs: ndarray(?rank, ?eltType), const rhs: [] eltType) where rhs.rank == rank

.. function:: operator :(const val: [] ?eltType, type t: ndarray(val.rank, eltType))

.. function:: operator :(const a: ndarray(?rank, ?eltType), type toType): ndarray(rank, toType) where toType != eltType

.. function:: operator :(const a: ndarray(?rank, ?eltType), type toType): ndarray(rank, toType) where toType == eltType

.. function:: operator :(it: _iteratorRecord, type t: ndarray(?rank, ?eltType))

.. function:: proc zipArr(a: ndarray(?rank, ?eltType), b: ndarray(rank, eltType), f): ndarray(rank, eltType)

.. function:: operator +(a: ndarray(?rank, ?eltType), b: ndarray(rank, eltType)): ndarray(rank, eltType)

.. function:: operator *(a: ndarray(?rank, ?eltType), b: ndarray(rank, eltType)): ndarray(rank, eltType)

.. function:: operator -(a: ndarray(?rank, ?eltType), b: ndarray(rank, eltType)): ndarray(rank, eltType)

.. function:: operator /(a: ndarray(?rank, ?eltType), b: ndarray(rank, eltType)): ndarray(rank, eltType)

.. method:: proc type ndarray.convolve(features: ndarray(3, ?eltType), kernel: ndarray(4, eltType), stride: int): ndarray(3, eltType)

.. method:: proc type ndarray.convolve(features: ndarray(3, ?eltType), kernel: ndarray(4, eltType), bias: ndarray(1, eltType), stride: int): ndarray(3, eltType)

.. method:: proc type ndarray.maxPool(features: ndarray(3, ?eltType), poolSize: int): ndarray(3, eltType)

.. method:: proc type ndarray.matvecmul(mat: ndarray(2, ?eltType), vec: ndarray(1, eltType)): ndarray(1, eltType)

.. method:: proc type ndarray.fromRanges(type eltType = real, rngs: range ...?rank): ndarray(rank, eltType)

.. method:: proc ndarray.serialize(writer: IO.fileWriter(locking = false, IO.defaultSerializer), ref serializer: IO.defaultSerializer)

.. method:: proc ref ndarray.read(fr: IO.fileReader(?)) throws

.. method:: proc ndarray.write(fw: IO.fileWriter(?)) throws

.. class:: _tensor_resource

   .. attribute:: param rank: int

   .. attribute:: type eltType = real(64)

   .. attribute:: var data: remote(ndarray(rank, eltType))

.. method:: proc type ndarray.fullOuter(a: ndarray(?rankA, ?eltType), b: ndarray(?rankB, eltType)): ndarray(rankA+rankB, eltType)

.. method:: proc type ndarray.contract(a: ndarray(?rankA, ?eltType), b: ndarray(?rankB, eltType), param axisA: int, param axisB: int)

.. function:: proc splitAt(param s: string, param del: string, param idx: int = 0) param

.. function:: proc getFirstIdx(param s: string, param del: string, param idx: int = 0) param

.. function:: proc sliceGeneric(type t, param start: int, param stop: int, param s: t, param idx: int = start) param

.. function:: proc slice(param start: int, param stop: int, param s: string, param idx: int = start) param

.. function:: proc take(param count: int, param s: string) param

.. function:: proc drop(param count: int, param s: string) param

.. method:: proc type ndarray.einsum(param subscripts: string, a: ndarray(?rankA, ?eltType), b: ndarray(?rankB, eltType))

.. function:: proc main()

