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

   .. method:: proc deflt _dom deflt

   .. method:: proc deflt shape deflt: rank*int

   .. method:: proc deflt init(type eltType, const dom: ?t) deflt where isDomainType(t)

   .. method:: proc deflt init(type eltType, const dom: ?t, const in fill: eltType) deflt where isDomainType(t)

   .. method:: proc deflt init(param rank: int, type eltType, const dom: ?t) deflt where isDomainType(t) && dom.rank == rank

   .. method:: proc deflt init(param rank: int, type eltType, const dom: ?t, const arr: [] eltType) deflt where isDomainType(t) && dom.rank == rank

   .. method:: proc deflt init(type eltType, deflt shape: ?rank*int) deflt

   .. method:: proc deflt init(param rank: int, type eltType = real(32)) deflt

   .. method:: proc deflt init(type eltType = real(32), const shape: int ...?rank) deflt

   .. method:: proc deflt init(const dom: rect(?rank), type eltType) deflt

   .. method:: proc deflt init(const dom: ?t, type eltType = real(32)) deflt where isDomainType(t)

   .. method:: proc deflt init(const Arr: []) deflt

   .. method:: proc deflt init(const A: ndarray(?rank, ?eltType)) deflt

   .. method:: proc deflt init=(const other: [] ?eltType) deflt

   .. method:: proc deflt init=(const other: ndarray(?rank, ?eltType)) deflt

   .. method:: proc ref this(args: int ...rank) ref

   .. method:: proc ref setData(const arr: [] eltType) deflt where arr.rank == rank

   .. method:: proc ref reshapeDomain(const dom: domain(rank, int)) deflt where isRegularDomain(dom)

   .. method:: proc deflt reshape(const dom: ?t) deflt: ndarray(rank, eltType) where isDomainType(t) && dom.rank == rank

   .. method:: proc deflt reshape(const dom: ?t) deflt: ndarray(dom.rank, eltType) where isDomainType(t) && dom.rank != rank

   .. method:: proc deflt reshape(newShape: int ...?newRank) deflt: ndarray(newRank, eltType)

   .. method:: proc deflt slice(args ...) deflt

   .. method:: proc deflt permute(axes: int ...rank) deflt

   .. method:: proc deflt expand(axes: int ...rank) deflt

   .. method:: proc ref sumOneAxis(deflt axis: int) deflt: ndarray(rank, eltType)

   .. method:: proc deflt sumAxesMask(deflt withAxesMask: rank*int) deflt: ndarray(rank, eltType)

   .. method:: proc deflt sum(axes: int ...?axesCount) deflt: ndarray(rank, eltType)

   .. method:: proc deflt shrink(narg: 2*int ...rank, param exactBounds = false) deflt: ndarray(rank, eltType)

   .. method:: proc deflt pad(narg: 2*int ...rank, deflt value: eltType = 0) deflt: ndarray(rank, eltType)

   .. method:: proc deflt dilate(deflt dil: int) deflt where rank == 2

   .. method:: proc deflt dilate(deflt dil: int) deflt where rank == 3

   .. method:: proc deflt squeeze(param newRank: int) deflt: ndarray(newRank, eltType) where newRank < rank

   .. method:: proc deflt max() deflt: ndarray(1, eltType)

   .. method:: proc deflt max(axes: int ...?axesCount) deflt: ndarray(rank, eltType)

   .. method:: proc deflt populateRemote(deflt re: borrowed(Remote(ndarray(rank, eltType)))) deflt: borrowed(Remote(ndarray(rank, eltType)))

   .. method:: proc deflt toRemote() deflt: owned(Remote(ndarray(rank, eltType)))

   .. itermethod:: iter ref batchify(param dim: int = 0) ref where dim < rank

   .. method:: proc deflt kernelRot() deflt: ndarray(4, eltType) where rank == 4

   .. method:: proc deflt kernelRot() deflt: ndarray(3, eltType) where rank == 3

   .. method:: proc deflt argmax() deflt where rank == 1

   .. method:: proc deflt relu() deflt

.. method:: proc type ndarray.arange(deflt to: int, type eltType = real(64), deflt shape: ?rank*int) deflt: ndarray(rank, eltType)

.. function:: operator  = (ref lhs: ndarray(?rank, ?eltType), const rhs: ndarray(rank, eltType)) deflt

.. function:: operator  = (ref lhs: ndarray(?rank, ?eltType), const rhs: [] eltType) deflt where rhs.rank == rank

.. function:: operator :(const val: [] ?eltType, type t: ndarray(val.rank, eltType)) deflt

.. function:: operator :(const a: ndarray(?rank, ?eltType), type toType) deflt: ndarray(rank, toType) where toType != eltType

.. function:: operator :(const a: ndarray(?rank, ?eltType), type toType) deflt: ndarray(rank, toType) where toType == eltType

.. function:: operator :(deflt it: _iteratorRecord, type t: ndarray(?rank, ?eltType)) deflt

.. function:: proc zipArr(deflt a: ndarray(?rank, ?eltType), deflt b: ndarray(rank, eltType), deflt f) deflt: ndarray(rank, eltType)

.. function:: operator +(deflt a: ndarray(?rank, ?eltType), deflt b: ndarray(rank, eltType)) deflt: ndarray(rank, eltType)

.. function:: operator *(deflt a: ndarray(?rank, ?eltType), deflt b: ndarray(rank, eltType)) deflt: ndarray(rank, eltType)

.. function:: operator -(deflt a: ndarray(?rank, ?eltType), deflt b: ndarray(rank, eltType)) deflt: ndarray(rank, eltType)

.. function:: operator /(deflt a: ndarray(?rank, ?eltType), deflt b: ndarray(rank, eltType)) deflt: ndarray(rank, eltType)

.. method:: proc type ndarray.convolve(deflt features: ndarray(3, ?eltType), deflt kernel: ndarray(4, eltType), deflt stride: int) deflt: ndarray(3, eltType)

.. method:: proc type ndarray.convolve(deflt features: ndarray(3, ?eltType), deflt kernel: ndarray(4, eltType), deflt bias: ndarray(1, eltType), deflt stride: int) deflt: ndarray(3, eltType)

.. method:: proc type ndarray.maxPool(deflt features: ndarray(3, ?eltType), deflt poolSize: int) deflt: ndarray(3, eltType)

.. method:: proc type ndarray.matvecmul(deflt mat: ndarray(2, ?eltType), deflt vec: ndarray(1, eltType)) deflt: ndarray(1, eltType)

.. method:: proc type ndarray.fromRanges(type eltType = real, rngs: range ...?rank) deflt: ndarray(rank, eltType)

.. method:: proc deflt ndarray.serialize(deflt writer: IO.fileWriter(locking = false, IO.defaultSerializer), ref serializer: IO.defaultSerializer) deflt

.. method:: proc ref ndarray.read(deflt fr: IO.fileReader(?)) deflt throws

.. method:: proc deflt ndarray.write(deflt fw: IO.fileWriter(?)) deflt throws

.. class:: _tensor_resource

   .. attribute:: param rank: int

   .. attribute:: type eltType = real(64)

   .. attribute:: var data: remote(ndarray(rank, eltType))

.. method:: proc type ndarray.fullOuter(deflt a: ndarray(?rankA, ?eltType), deflt b: ndarray(?rankB, eltType)) deflt: ndarray(rankA+rankB, eltType)

.. method:: proc type ndarray.contract(deflt a: ndarray(?rankA, ?eltType), deflt b: ndarray(?rankB, eltType), param axisA: int, param axisB: int) deflt

.. function:: proc splitAt(param s: string, param del: string, param idx: int = 0) param

.. function:: proc getFirstIdx(param s: string, param del: string, param idx: int = 0) param

.. function:: proc sliceGeneric(type t, param start: int, param stop: int, param s: t, param idx: int = start) param

.. function:: proc slice(param start: int, param stop: int, param s: string, param idx: int = start) param

.. function:: proc take(param count: int, param s: string) param

.. function:: proc drop(param count: int, param s: string) param

.. method:: proc type ndarray.einsum(param subscripts: string, deflt a: ndarray(?rankA, ?eltType), deflt b: ndarray(?rankB, eltType)) deflt

.. function:: proc main() deflt

