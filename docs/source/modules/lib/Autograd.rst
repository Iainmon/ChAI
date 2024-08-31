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

.. function:: proc checkRank(te: shared(TensorEssence(?eltType)), param rank: int): bool

.. function:: proc getRank(te: shared(TensorEssence(?eltType))): int

.. function:: proc forceRank(te: shared(TensorEssence(?eltType)), param rank: int): shared(BaseTensorResource(eltType, rank))

.. class:: TensorEssence : serializable

   .. attribute:: type eltType = real

   .. method:: proc runtimeRank: int

   .. itermethod:: iter children(): borrowed(TensorEssence(eltType))

   .. method:: proc treeHeight(): int

.. class:: ForgetfulTensor : TensorEssence

   .. attribute:: param rank: int

.. class:: BaseTensorResource : TensorEssence, serializable

   .. attribute:: param rank: int

   .. attribute:: var dataResource: shared(Remote(ndarray(rank, eltType)))

   .. attribute:: var gradResource: shared(Remote(ndarray(rank, eltType))?)

   .. method:: proc init(type eltType, param rank: int)

   .. method:: proc init(in dataResource: shared(Remote(ndarray(?rank, ?eltType))), in gradResource: shared(Remote(ndarray(rank, eltType))?) = nil)

   .. method:: proc init(data: ndarray(?rank, ?eltType), device: locale = Remote.defaultDevice)

   .. method:: proc to(dest: locale)

   .. method:: proc device: locale

   .. method:: proc array ref: ndarray(rank, eltType)

   .. method:: proc grad ref: ndarray(rank, eltType)

   .. method:: proc forward()

   .. method:: proc backward(grad: remote(ndarray(rank, eltType)), param alreadyPopulated = false)

   .. method:: proc backward() where rank == 1

   .. method:: proc detach(copy: bool = true, keepGrad: bool = false): owned(TensorResource(eltType, rank, baseValue))

   .. method:: override proc runtimeRank: int

.. class:: TensorResource : BaseTensorResource(?), serializable

   .. attribute:: type operationType

   .. attribute:: var operationCtx: operationType

   .. method:: proc init(type eltType, param rank: int, operationCtx: ?operationType)

   .. method:: proc init(in dataResource: shared(Remote(ndarray(?rank, ?eltType))), in gradResource: shared(Remote(ndarray(rank, eltType))?) = nil, operationCtx: ?operationType)

   .. method:: proc init(in dataResource: shared(Remote(ndarray(?rank, ?eltType))))

   .. method:: proc init(bt: borrowed(BaseTensorResource(?eltType, ?rank)), operationCtx: ?operationType)

   .. method:: override proc detach(copy: bool = true, keepGrad: bool = false): owned(TensorResource(eltType, rank, baseValue))

   .. method:: override proc forward()

   .. itermethod:: override iter children(): borrowed(TensorEssence(eltType))

.. record:: baseValue : serializable

   .. method:: proc forward()

   .. method:: proc children

.. record:: reluOp : serializable

   .. attribute:: var input: shared(BaseTensorResource(?))

   .. method:: proc children

   .. method:: proc forward()

   .. method:: proc _relu(x)

.. record:: expOp : serializable

   .. attribute:: var input: shared(BaseTensorResource(?))

   .. method:: proc children

   .. method:: proc forward()

.. record:: addOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType

   .. attribute:: var lhs: shared(BaseTensorResource(eltType, rank))

   .. attribute:: var rhs: shared(BaseTensorResource(eltType, rank))

   .. method:: proc children

   .. method:: proc forward(): ndarray(rank, eltType)

   .. method:: proc backward(grad: ndarray(rank, eltType)): (ndarray(rank, eltType), ndarray(rank, eltType))

.. record:: subOp : serializable

   .. attribute:: var lhs: shared(BaseTensorResource(?))

   .. attribute:: var rhs: shared(BaseTensorResource(?))

   .. method:: proc children

   .. method:: proc forward()

.. record:: divOp : serializable

   .. attribute:: var lhs: shared(BaseTensorResource(?))

   .. attribute:: var rhs: shared(BaseTensorResource(?))

   .. method:: proc children

   .. method:: proc forward()

.. record:: multOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType

   .. attribute:: var lhs: shared(BaseTensorResource(eltType, rank))

   .. attribute:: var rhs: shared(BaseTensorResource(eltType, rank))

   .. method:: proc children

   .. method:: proc forward()

   .. method:: proc backward(grad: ndarray(rank, eltType)): (ndarray(rank, eltType), ndarray(rank, eltType))

.. record:: reshapeOp : serializable

   .. attribute:: param oldRank: int

   .. attribute:: param newRank: int

   .. attribute:: type eltType

   .. attribute:: var shape: newRank*int

   .. attribute:: var input: shared(BaseTensorResource(eltType, oldRank))

   .. method:: proc children

   .. method:: proc forward(): ndarray(newRank, eltType)

   .. method:: proc backward(grad: ndarray(newRank, eltType)): (ndarray(oldRank, eltType),)

.. record:: permuteOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real

   .. attribute:: var permutation

   .. attribute:: var input: shared(BaseTensorResource(eltType, rank))

   .. method:: proc children

   .. method:: proc forward()

   .. method:: proc backward(grad: ndarray(rank, eltType)): (ndarray(rank, eltType),)

.. record:: expandOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real

   .. attribute:: var expandedShape: rank*int

   .. attribute:: var input: shared(BaseTensorResource(eltType, rank))

   .. method:: proc children

   .. method:: proc forward()

   .. method:: proc backward(grad: ndarray(rank, eltType)): (ndarray(rank, eltType),)

.. record:: padOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real

   .. attribute:: var arg: rank*(2*(int))

   .. attribute:: var value: eltType

   .. attribute:: var input: shared(BaseTensorResource(eltType, rank))

   .. method:: proc children

   .. method:: proc forward(): ndarray(rank, eltType)

   .. method:: proc backward(grad: ndarray(rank, eltType)): (ndarray(rank, eltType),)

.. record:: shrinkOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real

   .. attribute:: var arg: rank*(2*(int))

   .. attribute:: var input: shared(BaseTensorResource(eltType, rank))

   .. method:: proc children

   .. method:: proc forward(): ndarray(rank, eltType)

   .. method:: proc backward(grad: ndarray(rank, eltType)): (ndarray(rank, eltType),)

.. record:: sliceOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real

   .. attribute:: var dom: domain(rank, int)

   .. attribute:: var input: shared(BaseTensorResource(eltType, rank))

   .. method:: proc children

   .. method:: proc forward(): ndarray(rank, eltType)

   .. method:: proc backward(grad: ndarray(rank, eltType)): (ndarray(rank, eltType),)

.. record:: layerSliceOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real

   .. attribute:: var base: shared(BaseTensorResource(eltType, rank))

   .. attribute:: var mask: shared(BaseTensorResource(eltType, rank))

   .. attribute:: var maskDomain: domain(rank, int)

   .. method:: proc children

   .. method:: proc forward(): ndarray(rank, eltType)

   .. method:: proc backward(grad: ndarray(rank, eltType)): (ndarray(rank, eltType), ndarray(rank, eltType))

.. record:: sumOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real

   .. attribute:: param sumRank: int

   .. attribute:: var axes: sumRank*int

   .. attribute:: var input: shared(BaseTensorResource(eltType, rank))

   .. method:: proc children

   .. method:: proc outRank param: int

   .. method:: proc forward()

   .. method:: proc backward(grad: ndarray(outRank, eltType)): (ndarray(rank, eltType),)

.. record:: maxOp : serializable

   .. attribute:: param rank: int

   .. attribute:: type eltType = real

   .. attribute:: param maxRank: int

   .. attribute:: var axes: maxRank*int

   .. attribute:: var input: shared(BaseTensorResource(eltType, rank))

   .. method:: proc children

   .. method:: proc forward()

   .. method:: proc backward(grad): (ndarray(rank, eltType),)

.. record:: conv2DOp : serializable

   .. attribute:: type eltType = real

   .. attribute:: var features: shared(BaseTensorResource(eltType, 3))

   .. attribute:: var kernel: shared(BaseTensorResource(eltType, 4))

   .. attribute:: var stride: int

   .. method:: proc children

   .. method:: proc forward(): ndarray(3, eltType)

   .. method:: proc backward(grad: ndarray(3, eltType)): (ndarray(3, eltType), ndarray(4, eltType))

