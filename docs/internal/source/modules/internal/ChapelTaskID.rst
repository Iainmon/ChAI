.. default-domain:: chpl

.. module:: ChapelTaskID
   :noindex:

ChapelTaskID
============
**Usage**

.. code-block:: chapel

   use ChapelTaskID;


or

.. code-block:: chapel

   import ChapelTaskID;

.. function:: operator  = (ref a: chpl_taskID_t,  b: chpl_taskID_t) 

.. function:: operator ==( a: chpl_taskID_t,  b: chpl_taskID_t) 

.. function:: operator !=( a: chpl_taskID_t,  b: chpl_taskID_t) 

.. function:: operator :( x: chpl_taskID_t, type t: int(64)) 

.. function:: operator :( x: chpl_taskID_t, type t: uint(64)) 

