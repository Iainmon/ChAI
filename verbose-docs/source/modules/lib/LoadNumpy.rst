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

.. function:: proc readData(param rank: int, deflt fr, deflt shape: rank*int, deflt dtype: bytes) deflt: owned(NoRankArray)

.. function:: proc readShape(deflt fr) deflt

.. function:: proc loadNumpyArray(deflt path: string) deflt: owned(NoRankArray)

.. function:: proc main() deflt

