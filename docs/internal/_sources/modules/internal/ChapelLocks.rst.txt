.. default-domain:: chpl

.. module:: ChapelLocks
   :noindex:

ChapelLocks
===========
**Usage**

.. code-block:: chapel

   use ChapelLocks;


or

.. code-block:: chapel

   import ChapelLocks;


* Collection of mutexes/locks.


.. record:: chpl_LocalSpinlock

   
   * Local processor atomic spinlock. Intended for situations with minimal
   * contention or very short critical sections.
   

   .. attribute:: var l: chpl__processorAtomicType(bool)

   .. method:: proc  init() 

   .. method:: proc  init=( other: chpl_LocalSpinlock) 

   .. method:: proc ref lock() 

   .. method:: proc ref unlock() 

