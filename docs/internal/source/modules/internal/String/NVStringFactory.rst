.. default-domain:: chpl

.. module:: NVStringFactory
   :noindex:

NVStringFactory
===============
**Usage**

.. code-block:: chapel

   use String.NVStringFactory;


or

.. code-block:: chapel

   import String.NVStringFactory;

.. function:: proc chpl_createStringWithNewBufferNV( x: bufferType,  length: int,  size: int,  numCodepoints: int) 

.. function:: proc chpl_createStringWithBorrowedBufferNV( x: bufferType,  length: int,  size: int,  numCodepoints: int) 

.. function:: proc chpl_createStringWithOwnedBufferNV( x: bufferType,  length: int,  size: int,  numCodepoints: int) 

