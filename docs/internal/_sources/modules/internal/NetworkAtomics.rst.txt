.. default-domain:: chpl

.. module:: NetworkAtomics
   :noindex:

NetworkAtomics
==============
**Usage**

.. code-block:: chapel

   use NetworkAtomics;


or

.. code-block:: chapel

   import NetworkAtomics;

.. record:: RAtomicBool : writeSerializable

   .. method:: proc type valType type

   .. method:: proc  valType type

   .. attribute:: var _v: int(64)

.. record:: RAtomicT : writeSerializable

   .. attribute:: type valType

   .. attribute:: var _v: valType

