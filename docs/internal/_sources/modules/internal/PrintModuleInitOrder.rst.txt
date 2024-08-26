.. default-domain:: chpl

.. module:: PrintModuleInitOrder
   :noindex:

PrintModuleInitOrder
====================
**Usage**

.. code-block:: chapel

   use PrintModuleInitOrder;


or

.. code-block:: chapel

   import PrintModuleInitOrder;

.. data:: config const printModuleInitOrder = false

   .. warning::

      The variable 'printModuleInitOrder' is unstable and its interface is subject to change in the future

.. data:: var moduleInitLevel = 2: int(32)

.. function:: proc printModuleInit( s1: chpl_c_string,  s2: chpl_c_string,  len: int) 

.. function:: proc initPrint() 

