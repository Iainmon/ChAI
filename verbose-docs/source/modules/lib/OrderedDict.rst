.. default-domain:: chpl

.. module:: OrderedDict

OrderedDict
===========
**Usage**

.. code-block:: chapel

   use OrderedDict;


or

.. code-block:: chapel

   import OrderedDict;

.. record:: dict : serializable

   .. attribute:: type keyType

   .. attribute:: type valType

   .. attribute:: var table: map(keyType, valType)

   .. attribute:: var order: list(keyType)

   .. method:: proc deflt init(in table: map(?keyType, ?valType), in order: list(keyType)) deflt

   .. method:: proc deflt init(in table: map(?keyType, ?valType)) deflt

   .. method:: proc deflt init(type keyType, type valType) deflt

   .. method:: proc deflt size deflt: int

   .. itermethod:: iter deflt keys() deflt: keyType

   .. itermethod:: iter deflt values() deflt: valType

   .. itermethod:: iter ref these() deflt

   .. method:: proc ref insert(deflt key: keyType, in value: valType) deflt

