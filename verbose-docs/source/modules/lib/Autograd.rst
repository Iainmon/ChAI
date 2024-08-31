.. default-domain:: chpl

.. module:: Autograd

Autograd
========
**Usage**

.. code-block:: chapel

   use Autograd;


or

.. code-block:: chapel

   import Autograd;

.. function:: proc checkRank(deflt te: shared(TensorEssence(?eltType)), param rank: int) deflt: bool

.. function:: proc getRank(deflt te: shared(TensorEssence(?eltType))) deflt: int

.. function:: proc forceRank(deflt te: shared(TensorEssence(?eltType)), param rank: int) deflt: shared(BaseTensorResource(eltType, rank))

.. class:: TensorEssence : serializable

   .. attribute:: type eltType = real

   .. method:: proc deflt runtimeRank deflt: int

   .. itermethod:: iter deflt children() deflt: borrowed(TensorEssence(eltType))

   .. method:: proc deflt treeHeight() deflt: int

.. class:: ForgetfulTensor : TensorEssence

   .. attribute:: param rank: int

.. class:: BaseTensorResource : TensorEssence, serializable

   .. attribute:: param rank: int

   .. attribute:: var dataResource: shared(Remote(ndarray(rank, eltType)))

   .. attribute:: var gradResource: shared(Remote(ndarray(rank, eltType))?)

   .. method:: proc deflt init(type eltType, param rank: int) deflt

   .. method:: proc deflt init(in dataResource: shared(Remote(ndarray(?rank, ?eltType))), in gradResource: shared(Remote(ndarray(rank, eltType))?) = nil) deflt

   .. method:: proc deflt init(deflt data: ndarray(?rank, ?eltType), deflt device: locale = Remote.defaultDevice) deflt

   .. method:: proc deflt to(deflt dest: locale) deflt

   .. method:: proc deflt device deflt: locale

   .. method:: proc deflt array ref: ndarray(rank, eltType)

   .. method:: proc deflt grad ref: ndarray(rank, eltType)

   .. method:: proc deflt forward() deflt

   .. method:: proc deflt backward(deflt grad: remote(ndarray(rank, eltType)), param alreadyPopulated = false) deflt

   .. method:: proc deflt backward() deflt where rank == 1

   .. method:: proc deflt detach(deflt copy: bool = true, deflt keepGrad: bool = false) deflt: owned(TensorResource(eltType, rank, baseValue))

   .. method:: override proc deflt runtimeRank deflt: int

.. class:: TensorResource : BaseTensorResource(?), serializable

   .. attribute:: type operationType

   .. attribute:: var operationCtx: operationType

   .. method:: proc deflt init(type eltType, param rank: int, deflt operationCtx: ?operationType) deflt

   .. method:: proc deflt init(in dataResource: shared(Remote(ndarray(?rank, ?eltType))), in gradResource: shared(Remote(ndarray(rank, eltType))?) = nil, deflt operationCtx: ?operationType) deflt

   .. method:: proc deflt init(in dataResource: shared(Remote(ndarray(?rank, ?eltType)))) deflt

   .. method:: proc deflt init(deflt bt: borrowed(BaseTensorResource(?eltType, ?rank)), deflt operationCtx: ?operationType) deflt

   .. method:: override proc deflt detach(deflt copy: bool = true, deflt keepGrad: bool = false) deflt: owned(TensorResource(eltType, rank, baseValue))

   .. method:: override proc deflt forward() deflt

   .. itermethod:: override iter deflt children() deflt: borrowed(TensorEssence(eltType))

.. record:: baseValue : serializable

   .. method:: proc deflt forward() deflt

   .. method:: proc deflt children deflt

.. record:: reluOp : serializable

   .. attribute:: var input: shared(BaseTensorResource(?))

   .. method:: proc deflt children deflt

   .. method:: proc deflt forward() deflt

   .. method:: proc deflt _relu(deflt x) deflt

.. record:: expOp : serializable

   .. attribute:: var input: shared(BaseTensorResource(?))

   .. method:: proc deflt children deflt

   .. method:: proc deflt forward() deflt

.. record:: addOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType

   .. attribute:: var lhs: shared(BaseTensorResource(eltType, rank))

   .. attribute:: var rhs: shared(BaseTensorResource(eltType, rank))

   .. method:: proc deflt children deflt

   .. method:: proc deflt forward() deflt: ndarray(rank, eltType)

   .. method:: proc deflt backward(deflt grad: ndarray(rank, eltType)) deflt: (ndarray(rank, eltType), ndarray(rank, eltType))

.. record:: subOp : serializable

   .. attribute:: var lhs: shared(BaseTensorResource(?))

   .. attribute:: var rhs: shared(BaseTensorResource(?))

   .. method:: proc deflt children deflt

   .. method:: proc deflt forward() deflt

.. record:: divOp : serializable

   .. attribute:: var lhs: shared(BaseTensorResource(?))

   .. attribute:: var rhs: shared(BaseTensorResource(?))

   .. method:: proc deflt children deflt

   .. method:: proc deflt forward() deflt

.. record:: multOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType

   .. attribute:: var lhs: shared(BaseTensorResource(eltType, rank))

   .. attribute:: var rhs: shared(BaseTensorResource(eltType, rank))

   .. method:: proc deflt children deflt

   .. method:: proc deflt forward() deflt

   .. method:: proc deflt backward(deflt grad: ndarray(rank, eltType)) deflt: (ndarray(rank, eltType), ndarray(rank, eltType))

.. record:: reshapeOp : serializable

   .. attribute:: param oldRank: int

   .. attribute:: param newRank: int

   .. attribute:: type eltType

   .. attribute:: var shape: newRank*int

   .. attribute:: var input: shared(BaseTensorResource(eltType, oldRank))

   .. method:: proc deflt children deflt

   .. method:: proc deflt forward() deflt: ndarray(newRank, eltType)

   .. method:: proc deflt backward(deflt grad: ndarray(newRank, eltType)) deflt: (ndarray(oldRank, eltType),)

.. record:: permuteOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real

   .. attribute:: var permutation

   .. attribute:: var input: shared(BaseTensorResource(eltType, rank))

   .. method:: proc deflt children deflt

   .. method:: proc deflt forward() deflt

   .. method:: proc deflt backward(deflt grad: ndarray(rank, eltType)) deflt: (ndarray(rank, eltType),)

.. record:: expandOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real

   .. attribute:: var expandedShape: rank*int

   .. attribute:: var input: shared(BaseTensorResource(eltType, rank))

   .. method:: proc deflt children deflt

   .. method:: proc deflt forward() deflt

   .. method:: proc deflt backward(deflt grad: ndarray(rank, eltType)) deflt: (ndarray(rank, eltType),)

.. record:: padOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real

   .. attribute:: var arg: rank*(2*(int))

   .. attribute:: var value: eltType

   .. attribute:: var input: shared(BaseTensorResource(eltType, rank))

   .. method:: proc deflt children deflt

   .. method:: proc deflt forward() deflt: ndarray(rank, eltType)

   .. method:: proc deflt backward(deflt grad: ndarray(rank, eltType)) deflt: (ndarray(rank, eltType),)

.. record:: shrinkOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real

   .. attribute:: var arg: rank*(2*(int))

   .. attribute:: var input: shared(BaseTensorResource(eltType, rank))

   .. method:: proc deflt children deflt

   .. method:: proc deflt forward() deflt: ndarray(rank, eltType)

   .. method:: proc deflt backward(deflt grad: ndarray(rank, eltType)) deflt: (ndarray(rank, eltType),)

.. record:: sliceOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real

   .. attribute:: var dom: domain(rank, int)

   .. attribute:: var input: shared(BaseTensorResource(eltType, rank))

   .. method:: proc deflt children deflt

   .. method:: proc deflt forward() deflt: ndarray(rank, eltType)

   .. method:: proc deflt backward(deflt grad: ndarray(rank, eltType)) deflt: (ndarray(rank, eltType),)

.. record:: layerSliceOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real

   .. attribute:: var base: shared(BaseTensorResource(eltType, rank))

   .. attribute:: var mask: shared(BaseTensorResource(eltType, rank))

   .. attribute:: var maskDomain: domain(rank, int)

   .. method:: proc deflt children deflt

   .. method:: proc deflt forward() deflt: ndarray(rank, eltType)

   .. method:: proc deflt backward(deflt grad: ndarray(rank, eltType)) deflt: (ndarray(rank, eltType), ndarray(rank, eltType))

.. record:: sumOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real

   .. attribute:: param sumRank: int

   .. attribute:: var axes: sumRank*int

   .. attribute:: var input: shared(BaseTensorResource(eltType, rank))

   .. method:: proc deflt children deflt

   .. method:: proc deflt outRank param: int

   .. method:: proc deflt forward() deflt

   .. method:: proc deflt backward(deflt grad: ndarray(outRank, eltType)) deflt: (ndarray(rank, eltType),)

.. record:: maxOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real

   .. attribute:: param maxRank: int

   .. attribute:: var axes: maxRank*int

   .. attribute:: var input: shared(BaseTensorResource(eltType, rank))

   .. method:: proc deflt children deflt

   .. method:: proc deflt forward() deflt

   .. method:: proc deflt backward(deflt grad) deflt: (ndarray(rank, eltType),)

.. record:: conv2DOp : serializable

   .. attribute:: type eltType = real

   .. attribute:: var features: shared(BaseTensorResource(eltType, 3))

   .. attribute:: var kernel: shared(BaseTensorResource(eltType, 4))

   .. attribute:: var stride: int

   .. method:: proc deflt children deflt

   .. method:: proc deflt forward() deflt: ndarray(3, eltType)

   .. method:: proc deflt backward(deflt grad: ndarray(3, eltType)) deflt: (ndarray(3, eltType), ndarray(4, eltType))

