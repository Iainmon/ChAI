.. default-domain:: chpl

.. module:: ChapelHashing
   :noindex:

ChapelHashing
=============
**Usage**

.. code-block:: chapel

   use ChapelHashing;


or

.. code-block:: chapel

   import ChapelHashing;

.. function:: proc chpl__defaultHashWrapperInner( x) : uint

.. function:: proc chpl__defaultHashWrapper( x) : int

.. function:: proc _gen_key( i: uint) : uint

.. function:: proc _gen_key( i: int) : uint

.. function:: proc chpl__defaultHashCombine( a: uint,  b: uint,  fieldnum: int) : uint

.. method:: proc  bool.hash() : uint

.. method:: proc  int.hash() : uint

.. method:: proc  uint.hash() : uint

.. method:: proc  enum.hash() : uint

.. method:: proc  real.hash() : uint

.. method:: proc  complex.hash() : uint

.. method:: proc  imag.hash() : uint

.. method:: proc  chpl_taskID_t.hash() : uint

.. method:: proc  _array.hash() : uint

.. method:: proc  (borrowed(RootClass?)).hash() : uint

.. method:: proc  locale.hash() : uint

.. method:: proc  range.hash() : uint

