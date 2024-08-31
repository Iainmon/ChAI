.. default-domain:: chpl

.. module:: ChapelThreads
   :noindex:

ChapelThreads
=============
**Usage**

.. code-block:: chapel

   use ChapelThreads;


or

.. code-block:: chapel

   import ChapelThreads;

.. function:: proc chpl_task_getenvNumThreadsPerLocale() : int(32)

.. data:: const numThreadsPerLocale: int = chpl_task_getenvNumThreadsPerLocale()

