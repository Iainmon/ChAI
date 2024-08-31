.. default-domain:: chpl

.. module:: ConvLayerTest

ConvLayerTest
=============
**Usage**

.. code-block:: chapel

   use ConvLayerTest;


or

.. code-block:: chapel

   import ConvLayerTest;

.. data:: var t: Tensor(real) = Tensor.arange(1, 8, 8)

.. data:: var conv = new Conv2D(1, 1, 3, 1)

.. data:: var output = conv(t)

