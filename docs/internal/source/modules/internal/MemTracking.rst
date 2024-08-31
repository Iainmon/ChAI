.. default-domain:: chpl

.. module:: MemTracking
   :noindex:

MemTracking
===========
**Usage**

.. code-block:: chapel

   use MemTracking;


or

.. code-block:: chapel

   import MemTracking;

.. data:: config const memTrack: bool = false

   .. warning::

      The variable 'memTrack' is unstable and its interface is subject to change in the future

.. data:: config const memStats: bool = false

   .. warning::

      The variable 'memStats' is unstable and its interface is subject to change in the future

.. data:: config const memLeaksByType: bool = false

   .. warning::

      The variable 'memLeaksByType' is unstable and its interface is subject to change in the future

.. data:: config const memLeaks: bool = false

   .. warning::

      The variable 'memLeaks' is unstable and its interface is subject to change in the future

.. data:: config const memMax: uint = 0

   .. warning::

      The variable 'memMax' is unstable and its interface is subject to change in the future

.. data:: config const memThreshold: uint = 0

   .. warning::

      The variable 'memThreshold' is unstable and its interface is subject to change in the future

.. data:: config const memLog: string

   .. warning::

      The variable 'memLog' is unstable and its interface is subject to change in the future

.. data:: config const memLeaksLog: string

   .. warning::

      The variable 'memLeaksLog' is unstable and its interface is subject to change in the future

.. data:: config const memLeaksByDesc: string

   .. warning::

      The variable 'memLeaksByDesc' is unstable and its interface is subject to change in the future

   Causes the contents of the memory tracking array to be printed at the end
   of the program.
   Entries remaining in the memory tracking array represent leaked memory,
   because they are tracked allocations with no corresponding free.
   
   The dump is performed only if the --memLeaksByDesc option is present and has
   a string argument.
     --memLeaksByDesc="" causes all memory records to be printed.  Same as --memLeaks.
     --memLeaksByDesc="<alloc-type-string>" causes only those memory records
       matching the given <alloc-type-string> to be printed.
   For example, --memLeaksByDesc="string copy data" causes only string copy
   data leaks to be printed.
   

.. data:: const cMemMax = memMax.safeCast(c_size_t)

.. data:: const cMemThreshold = memThreshold.safeCast(c_size_t)

.. function:: export proc chpl_memTracking_returnConfigVals(ref ret_memTrack: bool, ref ret_memStats: bool, ref ret_memLeaksByType: bool, ref ret_memLeaksByDesc: c_ptrConst(c_char), ref ret_memLeaks: bool, ref ret_memMax: c_size_t, ref ret_memThreshold: c_size_t, ref ret_memLog: c_ptrConst(c_char), ref ret_memLeaksLog: c_ptrConst(c_char)) 

