.. default-domain:: chpl

.. module:: ChapelHashtable
   :noindex:

ChapelHashtable
===============
**Usage**

.. code-block:: chapel

   use ChapelHashtable;


or

.. code-block:: chapel

   import ChapelHashtable;

.. enum:: enum chpl__hash_status { empty = 0, full, deleted }

   .. enumconstant:: enum constant empty = 0

   .. enumconstant:: enum constant full

   .. enumconstant:: enum constant deleted

.. record:: chpl_TableEntry

   .. attribute:: var status: chpl__hash_status = chpl__hash_status.empty

   .. attribute:: var key

   .. attribute:: var val

   .. method:: proc  isFull() 

.. iterfunction:: iter _allSlots( size: int) 

.. class:: chpl__rehashHelpers

   .. method:: proc  startRehash( newSize: int) 

   .. method:: proc  moveElementDuringRehash( oldSlot: int,  newSlot: int) 

   .. method:: proc  finishRehash( oldSize: int) 

.. record:: chpl__hashtable

   .. attribute:: type keyType

   .. attribute:: type valType

   .. attribute:: var tableNumFullSlots: int

   .. attribute:: var tableNumDeletedSlots: int

   .. attribute:: var tableSize: int

   .. attribute:: var table: _ddata(chpl_TableEntry(keyType, valType))

   .. attribute:: var rehashHelpers: owned(chpl__rehashHelpers?)

   .. attribute:: var postponeResize: bool

   .. attribute:: const resizeThreshold: real

   .. attribute:: const startingSize: int

   .. method:: proc  init(type keyType, type valType,  resizeThreshold = defaultHashTableResizeThreshold,  initialCapacity = 16, in rehashHelpers: owned(chpl__rehashHelpers?) = nil) 

   .. method:: proc  deinit() 

   .. method:: proc  isSlotFull( slot: int) : bool

   .. itermethod:: iter  allSlots() 

   .. itermethod:: iter  allSlots(param tag: iterKind)  where tag == iterKind.standalone

   .. itermethod:: iter  allSlots(param tag: iterKind)  where tag == iterKind.leader

   .. itermethod:: iter  allSlots( followThis, param tag: iterKind)  where tag == iterKind.follower

   .. method:: proc  keysMatch( key1: ?t,  key2: t) 

   .. method:: proc  _findSlot( key: keyType) : (bool, int)

   .. itermethod:: iter  _lookForSlots( key: keyType,  numSlots = tableSize) 

   .. method:: proc ref findAvailableSlot( key: keyType) : (bool, int)

   .. method:: proc ref fillSlot(ref tableEntry: chpl_TableEntry(keyType, valType), in key: keyType, in val: valType) 

   .. method:: proc ref fillSlot( slotNum: int, in key: keyType, in val: valType) 

   .. method:: proc  findFullSlot( key: keyType) : (bool, int)

   .. method:: proc ref clearSlot(ref tableEntry: chpl_TableEntry(keyType, valType), out key: keyType, out val: valType) 

   .. method:: proc ref clearSlot( slotNum: int, out key: keyType, out val: valType) 

   .. method:: proc ref maybeShrinkAfterRemove() 

   .. method:: proc  _findPowerOf2( numKeys: int) 

   .. method:: proc  allocateData( size: int, type tableEltType) 

   .. method:: proc  allocateTable( size: int) 

   .. method:: proc ref rehash( newSize: int) 

   .. method:: proc ref requestCapacity( numKeys: int) 

   .. method:: proc ref resize( grow: bool) 

