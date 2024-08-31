.. default-domain:: chpl

.. module:: LoadNumpy

LoadNumpy
=========
**Usage**

.. code-block:: chapel

   use LoadNumpy;


or

.. code-block:: chapel

   import LoadNumpy;

.. class:: NoRankArray

.. class:: ArrClass : NoRankArray

   .. attribute:: param rank: int

   .. attribute:: var _domain: domain(rank, int)

   .. attribute:: var data: [_domain] real

.. function:: proc readData(param rank: int, fr, shape: rank*int, dtype: bytes): owned(NoRankArray)

.. function:: proc readShape(fr)

.. function:: proc loadNumpyArray(path: string): owned(NoRankArray)

.. function:: proc main()

