.. default-domain:: chpl

.. module:: ChapelReduce
   :noindex:

ChapelReduce
============
**Usage**

.. code-block:: chapel

   use ChapelReduce;


or

.. code-block:: chapel

   import ChapelReduce;

.. function:: proc chpl__scanStateResTypesMatch( op) param

.. function:: proc chpl__scanIteratorZip( op,  data) 

   .. warning::

      scans are unstable due to questions about exclusive scans and the default behavior.  See issue #20204

.. function:: proc chpl__scanIterator( op,  data) 

   .. warning::

      scans are unstable due to questions about exclusive scans and the default behavior.  See issue #20204

.. function:: proc chpl__accumgen( op,  d) 

.. function:: proc chpl__reduceCombine( globalOp,  localOp) 

.. function:: proc chpl__cleanupLocalOp( globalOp,  localOp) 

.. function:: proc chpl_sumTypeIsSame(type eltType) param

.. function:: proc chpl__sumType(type eltType) type

.. class:: ReduceScanOp

   .. attribute:: var l: chpl_LocalSpinlock

.. class:: SumReduceScanOp : ReduceScanOp

   .. attribute:: type eltType

   .. attribute:: var value: chpl__sumType(eltType)

   .. method:: proc  identity 

   .. method:: proc  accumulate( x) 

   .. method:: proc  accumulateOntoState(ref state,  x) 

   .. method:: proc  combine( x) 

   .. method:: proc  generate() 

   .. method:: proc  clone() 

.. class:: ProductReduceScanOp : ReduceScanOp

   .. attribute:: type eltType

   .. attribute:: var value = _prod_id(eltType)

   .. method:: proc  identity 

   .. method:: proc  accumulate( x) 

   .. method:: proc  accumulateOntoState(ref state,  x) 

   .. method:: proc  combine( x) 

   .. method:: proc  generate() 

   .. method:: proc  clone() 

.. class:: MaxReduceScanOp : ReduceScanOp

   .. attribute:: type eltType

   .. attribute:: var value = min(eltType)

   .. method:: proc  identity 

   .. method:: proc  accumulate( x) 

   .. method:: proc  accumulateOntoState(ref state,  x) 

   .. method:: proc  combine( x) 

   .. method:: proc  generate() 

   .. method:: proc  clone() 

.. class:: MinReduceScanOp : ReduceScanOp

   .. attribute:: type eltType

   .. attribute:: var value = max(eltType)

   .. method:: proc  identity 

   .. method:: proc  accumulate( x) 

   .. method:: proc  accumulateOntoState(ref state,  x) 

   .. method:: proc  combine( x) 

   .. method:: proc  generate() 

   .. method:: proc  clone() 

.. class:: minmax : ReduceScanOp

   .. attribute:: type eltType

   .. attribute:: var value = (max(eltType), min(eltType))

   .. method:: proc  identity 

   .. method:: proc  accumulateOntoState(ref state,  x: eltType) 

   .. method:: proc  accumulateOntoState(ref state,  other: 2*(eltType)) 

   .. method:: proc  accumulate( x: eltType) 

   .. method:: proc  accumulate( state: 2*(eltType)) 

   .. method:: proc  combine( other: minmax(eltType)) 

   .. method:: proc  generate() 

   .. method:: proc  clone() 

.. class:: LogicalAndReduceScanOp : ReduceScanOp

   .. attribute:: type eltType

   .. attribute:: var value = _land_id(eltType)

   .. method:: proc  identity 

   .. method:: proc  accumulate( x) 

   .. method:: proc  accumulateOntoState(ref state,  x) 

   .. method:: proc  combine( x) 

   .. method:: proc  generate() 

   .. method:: proc  clone() 

.. class:: LogicalOrReduceScanOp : ReduceScanOp

   .. attribute:: type eltType

   .. attribute:: var value = _lor_id(eltType)

   .. method:: proc  identity 

   .. method:: proc  accumulate( x) 

   .. method:: proc  accumulateOntoState(ref state,  x) 

   .. method:: proc  combine( x) 

   .. method:: proc  generate() 

   .. method:: proc  clone() 

.. class:: BitwiseAndReduceScanOp : ReduceScanOp

   .. attribute:: type eltType

   .. attribute:: var value = _band_id(eltType)

   .. method:: proc  identity 

   .. method:: proc  accumulate( x) 

   .. method:: proc  accumulateOntoState(ref state,  x) 

   .. method:: proc  combine( x) 

   .. method:: proc  generate() 

   .. method:: proc  clone() 

.. class:: BitwiseOrReduceScanOp : ReduceScanOp

   .. attribute:: type eltType

   .. attribute:: var value = _bor_id(eltType)

   .. method:: proc  identity 

   .. method:: proc  accumulate( x) 

   .. method:: proc  accumulateOntoState(ref state,  x) 

   .. method:: proc  combine( x) 

   .. method:: proc  generate() 

   .. method:: proc  clone() 

.. class:: BitwiseXorReduceScanOp : ReduceScanOp

   .. attribute:: type eltType

   .. attribute:: var value = _bxor_id(eltType)

   .. method:: proc  identity 

   .. method:: proc  accumulate( x) 

   .. method:: proc  accumulateOntoState(ref state,  x) 

   .. method:: proc  combine( x) 

   .. method:: proc  generate() 

   .. method:: proc  clone() 

.. function:: proc _maxloc_id(type eltType) 

.. function:: proc _minloc_id(type eltType) 

.. class:: maxloc : ReduceScanOp

   .. attribute:: type eltType

   .. attribute:: var value = _maxloc_id(eltType)

   .. method:: proc  identity 

   .. method:: proc  accumulate( x) 

   .. method:: proc  accumulateOntoState(ref state,  x) 

   .. method:: proc  combine( x) 

   .. method:: proc  generate() 

   .. method:: proc  clone() 

.. class:: minloc : ReduceScanOp

   .. attribute:: type eltType

   .. attribute:: var value = _minloc_id(eltType)

   .. method:: proc  identity 

   .. method:: proc  accumulate( x) 

   .. method:: proc  accumulateOntoState(ref state,  x) 

   .. method:: proc  combine( x) 

   .. method:: proc  generate() 

   .. method:: proc  clone() 

