# ChAI: Chapel Artificial Intelligence

ChAI is a library for AI/ML in [Chapel](https://github.com/chapel-lang/chapel).
Due to Chapel's highly parallel nature, it is well-suited for AI/ML tasks;
the goal of the library is to provide a foundation for such tasks, enabling
local, distributed, and GPU-enabled computations.

Please note that ChAI was developed as part of an internship summer project
by [Iain Moncrief](https://github.com/Iainmon), and as such is in a relatively
early stage of development.

## Overall Design
ChAI intends to provide a PyTorch-like API that is familiar to newcomers from
other languages. To this end, it provides a number of tensor primitives,
including pure-Chapel implementations of operations such as matrix-matrix
multiplication and convolution (in fact, ChAI provides _two_ tensor data types;
see [Static and Dynamic Tensors](#static-and-dynamic-tensors) below). On top
of this low-level API, ChAI defines a layer system, which makes it possible
to compose pieces such as `Conv2D`, `Linear`, and `Flatten` into a feed-forward
neural network.

ChAI's tensors keep track of the computational graph, making it usable for both
feed-forward and back-propagation tasks; however, the feed-forward components
have received more attention at this time.

## Examples
The [examples](https://github.com/chapel-lang/ChAI/tree/main/examples) folder contains
various sample programs written using ChAI.

Thus far, the concrete test for ChAI has been the MNIST dataset; specifically,
ChAI's PyTorch interop has been used to load a pre-trained
convolutional MNIST classifier and execute it on multiple locales.
The [`MultiLocaleInference.chpl`](https://github.com/chapel-lang/ChAI/blob/main/examples/MultiLocaleInference.chpl)
file demonstrates this.

## Getting Started

To use ChAI, you need to have installed Chapel; you can follow the installation
instructions [on this page](https://chapel-lang.org/download.html) to do so.

Once you have Chapel installed, you can use the following command to clone ChAI:

```bash
git clone https://github.com/chapel-lang/ChAI.git
```

You can then compile one of the example ChAI programs using the following
command:

```bash
chpl examples/ConvLayerTest.chpl -M lib
./ConvLayerTest
```

The above should produce the following output:

```
Tensor([ 0.0   1.0   2.0   3.0   4.0   5.0   6.0   7.0]
       [ 8.0   9.0  10.0  11.0  12.0  13.0  14.0  15.0]
       [16.0  17.0  18.0  19.0  20.0  21.0  22.0  23.0]
       [24.0  25.0  26.0  27.0  28.0  29.0  30.0  31.0]
       [32.0  33.0  34.0  35.0  36.0  37.0  38.0  39.0]
       [40.0  41.0  42.0  43.0  44.0  45.0  46.0  47.0]
       [48.0  49.0  50.0  51.0  52.0  53.0  54.0  55.0]
       [56.0  57.0  58.0  59.0  60.0  61.0  62.0  63.0],
       shape = (1, 8, 8),
       rank = 3)

Tensor([474.0  510.0  546.0  582.0  618.0  654.0]
       [762.0  798.0  834.0  870.0  906.0  942.0]
       [1050.0  1086.0  1122.0  1158.0  1194.0  1230.0]
       [1338.0  1374.0  1410.0  1446.0  1482.0  1518.0]
       [1626.0  1662.0  1698.0  1734.0  1770.0  1806.0]
       [1914.0  1950.0  1986.0  2022.0  2058.0  2094.0],
       shape = (1, 6, 6),
       rank = 3)
```


## Static and Dynamic Tensors

Chapel's type system is static and relatively strict; to iterate over tensors
-- thus implementing various mathematical operations -- the dimensions of
the tensors need to be known at compile-time. However, this does not mesh
well with the ability to dynamically load models from files on disk (since
the contents of the files can be arbitrary).

To mediate between these two requirements, ChAI provides two tensor types:
`StaticTensor` and `DynamicTensor`. The `StaticTensor` includes the rank
of the tensor; this makes it possible to iterate over it and perform the "usual"
operations. The `DynamicTensor` is a rank-erased version of `DynamicTensor`;
it cannot be iterated over, but it can be dynamically cast back to a
`StaticTensor` when needed. Both `StaticTensor` and `DynamicTensor` support
the same operations; `DynamicTensor` performs a dynamic cast to `StaticTensor`
under the hood.
