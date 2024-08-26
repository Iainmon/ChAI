.. default-domain:: chpl

.. module:: ChapelSerializedBroadcast
   :noindex:

ChapelSerializedBroadcast
=========================
**Usage**

.. code-block:: chapel

   use ChapelSerializedBroadcast;


or

.. code-block:: chapel

   import ChapelSerializedBroadcast;

.. data:: config param chpl__enableSerializedGlobals = true

.. function:: proc chpl_get_global_serialize_table( idx: int) : c_ptr(void)

.. function:: proc chpl__broadcastGlobal(ref localeZeroGlobal: ?T,  id: int)  where chpl__enableSerializedGlobals

.. function:: proc chpl__destroyBroadcastedGlobal(ref localeZeroGlobal,  id: int)  where chpl__enableSerializedGlobals

