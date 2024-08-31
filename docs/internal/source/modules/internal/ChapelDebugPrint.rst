.. default-domain:: chpl

.. module:: ChapelDebugPrint
   :noindex:

ChapelDebugPrint
================
**Usage**

.. code-block:: chapel

   use ChapelDebugPrint;


or

.. code-block:: chapel

   import ChapelDebugPrint;

Debug printing for internal modules.

In order to work around problems with resolution order
(commonly, stdout not defined in methods in DefaultRectangular),
this module implements a debug printing facility that can
be used before IO.chpl is resolved (or initialized).


.. function:: proc chpl_debug_stringify(args ...) : string

.. function:: proc chpl_debug_writeln(args ...) 

.. data:: config param chpl__testParFlag = false

.. data:: var chpl__testParOn = false

.. function:: proc chpl__testParStart() 

.. function:: proc chpl__testParStop() 

.. function:: proc chpl__testPar(args ...) 

.. function:: proc chpl__testParWriteln(args ...) 

