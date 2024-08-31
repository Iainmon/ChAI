.. default-domain:: chpl

.. module:: ChapelSyncvar
   :noindex:

ChapelSyncvar
=============
**Usage**

.. code-block:: chapel

   use ChapelSyncvar;


or

.. code-block:: chapel

   import ChapelSyncvar;



.. data:: config param useNativeSyncVar = true

.. function:: proc chpl__readXX( x) 

.. function:: proc chpl__readXX( x)  where isAtomicType(x.type)

.. record:: _syncvar : writeSerializable, readDeserializable

   *********************************** | *************************************
   *                                                                           *
   * The record wrapper to implement sync                                      *
   *                                                                           *
   ************************************* | ***********************************

   .. attribute:: type valType

   .. attribute:: var wrapped: getSyncClassType(valType)

   .. attribute:: var isOwned: bool = true

   .. method:: proc  init(type valType) 

   .. method:: proc  init(type valType, in value: valType) 

   .. method:: proc  init(const ref other: _syncvar) 

   .. method:: proc  init=(const ref other: _syncvar(?)) 

      .. warning::

         Initializing a type-inferred variable from a 'sync' is deprecated; apply a 'read??()' method to the right-hand side

   .. method:: proc  init=(in other: this.type.valType) 

   .. method:: proc  deinit() 

   .. method:: proc  deserialize( reader, ref deserializer)  throws

   .. method:: proc type deserializeFrom( reader, ref deserializer)  throws

   .. method:: proc  serialize( writer, ref serializer)  throws

.. method:: proc  _syncvar.readFE() 

   
   Read a full ``sync`` variable, leaving it empty.
   
   1) Block until the ``sync`` variable is full.
   2) Read the value of the ``sync`` variable and set the variable to empty.
   
   :returns: The value of the ``sync`` variable.
   

.. method:: proc  _syncvar.readFF() 

   Read a full ``sync`` variable, leaving it full.
   
   1) Block until the ``sync`` variable is full.
   2) Read the value of the ``sync`` variable and leave the variable full.
   
   :returns: The value of the ``sync`` variable.
   

.. method:: proc  _syncvar.readXX() 

   .. warning::

      'readXX' is unstable

   Read a ``sync`` variable regardless of its state, leaving its state unchanged.
   
   1) Without blocking, read the value of the ``sync`` variable
   2) Leaving the state unchanged, return a value based on the current state:
   
     * full: return a copy of the stored value.
     * empty: return either a new default-initialized value of the stored type
       or, the last value stored (implementation dependent).
   
   :returns: The value of the ``sync`` variable.
   

.. method:: proc ref _syncvar.writeEF(in val: valType) 

   Write into an empty ``sync`` variable, leaving it full.
   
   1) Block until the ``sync`` variable is empty.
   2) Write the value of the ``sync`` variable and leave the variable full.
   
   :arg val: New value of the ``sync`` variable.
   

.. method:: proc ref _syncvar.writeFF(in val: valType) 

   .. warning::

      'writeFF' is unstable

   Write into a full ``sync`` variable, leaving it full.
   
   1) Block until the ``sync`` variable is full.
   2) Write the value of the ``sync`` variable and leave the variable full.
   
   :arg val: New value of the ``sync`` variable.
   

.. method:: proc ref _syncvar.writeXF(in val: valType) 

   .. warning::

      'writeXF' is unstable

   Write into a ``sync`` variable regardless of its state, leaving it full.
   
   1) Do not block.
   2) Write the value of the ``sync`` variable, leave it's state full.
   
   :arg val: New value of the ``sync`` variable.
   

.. method:: proc ref _syncvar.reset() 

   .. warning::

      'reset' is unstable

   
   Resets the value of this ``sync`` variable to the default value of
   its type. This method is non-blocking and the state of the ``sync``
   variable is set to empty when this method completes.
   

.. method:: proc  _syncvar.isFull 

   .. warning::

      'isFull' is unstable

   
   Determine if the ``sync`` variable is full without blocking.
   Does not alter the state of the ``sync`` variable.
   
   :returns: ``true`` if the state of the ``sync`` variable is full, ``false`` if it's empty.
   

.. function:: operator  = (ref lhs: _syncvar(?t),  rhs: t) 

   .. warning::

      Direct assignment to 'sync' variables is deprecated; apply a 'write??()' method to modify one

.. function:: operator :( from, type t: _syncvar)  where from.type == t.valType

.. function:: operator :( from: _syncvar, type toType: _syncvar) 

   .. warning::

      Casting sync variables is deprecated

.. function:: operator +=(ref lhs: _syncvar(?t),  rhs: t) 

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator -=(ref lhs: _syncvar(?t),  rhs: t) 

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator *=(ref lhs: _syncvar(?t),  rhs: t) 

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator /=(ref lhs: _syncvar(?t),  rhs: t) 

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator %=(ref lhs: _syncvar(?t),  rhs: t) 

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator **=(ref lhs: _syncvar(?t),  rhs: t) 

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator &=(ref lhs: _syncvar(?t),  rhs: t) 

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator |=(ref lhs: _syncvar(?t),  rhs: t) 

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator ^=(ref lhs: _syncvar(?t),  rhs: t) 

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator >>=(ref lhs: _syncvar(?t),  rhs: t) 

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator <<=(ref lhs: _syncvar(?t),  rhs: t) 

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: proc chpl__compilerGeneratedAssignSyncSingle(ref lhs: _syncvar(?), ref rhs: _syncvar(?)) 

.. function:: proc chpl__compilerGeneratedCopySyncSingle(ref sv: _syncvar(?)) 

.. function:: proc chpl__initCopy(ref sv: _syncvar(?t),  definedConst: bool) 

   .. warning::

      Initializing a type-inferred variable from a 'sync' is deprecated; apply a '.read??()' method to the right-hand side

.. function:: proc chpl__autoCopy(const ref rhs: _syncvar,  definedConst: bool) 

.. function:: proc chpl__maybeAutoDestroyed( x: _syncvar(?t)) param

.. function:: proc chpl__autoDestroy( x: _syncvar(?)) 

.. function:: proc chpl__readXX(const ref x: _syncvar(?)) 

.. function:: operator <=>(ref lhs: _syncvar, ref rhs) 

   .. warning::

      Swapping 'sync' variables is deprecated; perform the swap manually using explicit '.read??'/'.write??' methods

.. function:: operator <=>(ref lhs, ref rhs: _syncvar) 

   .. warning::

      Swapping 'sync' variables is deprecated; perform the swap manually using explicit '.read??'/'.write??' methods

.. function:: operator <=>(ref lhs: _syncvar, ref rhs: _syncvar) 

   .. warning::

      Swapping 'sync' variables is deprecated; perform the swap manually using explicit '.read??'/'.write??' methods

.. class:: _synccls

   *********************************** | *************************************
   *                                                                           *
   * Use of a class instance establishes the required identity property.       *
   *                                                                           *
   ************************************* | ***********************************

   .. attribute:: type valType

   .. attribute:: var value: valType

   .. attribute:: var syncAux: chpl_sync_aux_t

   .. method:: proc  init(type valType) 

   .. method:: proc  init(type valType, in value: valType) 

   .. method:: proc  deinit() 

   .. method:: proc  readFE() 

   .. method:: proc const readFF() 

   .. method:: proc const readXX() 

   .. method:: proc  writeEF(in val: valType) 

   .. method:: proc  writeFF(in val: valType) 

   .. method:: proc  writeXF(in val: valType) 

   .. method:: proc  reset() 

   .. method:: proc  isFull 

.. class:: _qthreads_synccls

   .. attribute:: type valType

   .. attribute:: var alignedValue: aligned_t

   .. method:: proc  init(type valType) 

   .. method:: proc  init(type valType, in value: valType) 

   .. method:: proc  deinit() 

   .. method:: proc  readFE() 

   .. method:: proc  readFF() 

   .. method:: proc  readXX() 

   .. method:: proc  writeEF( val: valType) 

   .. method:: proc  writeFF( val: valType) 

   .. method:: proc  writeXF( val: valType) 

   .. method:: proc  reset() 

   .. method:: proc  isFull 

.. record:: _singlevar : writeSerializable, readDeserializable

   *********************************** | *************************************
   *                                                                           *
   * The record wrapper to implement single                                    *
   *                                                                           *
   ************************************* | ***********************************

   .. attribute:: type valType

   .. attribute:: var wrapped: unmanaged(_singlecls(valType))

   .. attribute:: var isOwned: bool = true

   .. method:: proc  init(type valType) 

   .. method:: proc  init(type valType, in value: valType) 

   .. method:: proc  init(const ref other: _singlevar) 

   .. method:: proc  init=(const ref other: _singlevar) 

      .. warning::

         Initializing a type-inferred variable from a 'single' is deprecated; apply a 'read??()' method to the right-hand side

   .. method:: proc  init=(in other: this.type.valType) 

   .. method:: proc  deinit() 

   .. method:: proc  deserialize( reader, ref deserializer)  throws

   .. method:: proc type deserializeFrom( reader, ref deserializer)  throws

   .. method:: proc  serialize( writer, ref serializer)  throws

.. method:: proc  _singlevar.readFF() 

   Read a full ``single`` variable, leaving it full.
   
   1) Block until the ``single`` variable is full.
   2) Read the value of the ``single`` variable and leave the variable full
   
   :returns: The value of the ``single`` variable.
   

.. method:: proc  _singlevar.readXX() 

   Read a ``single`` variable regardless of its state, leaving its state unchanged.
   
   1) Without blocking, read the value of the ``single`` variable.
   2) Leaving the state unchanged, return a value based on the current state:
   
     * full: return a copy of the stored value.
     * empty: return either a new default-initialized value of the stored type
       or, the last value stored (implementation dependent).
   
   :returns: The value of the ``single`` variable.
   

.. method:: proc  _singlevar.writeEF(in val: valType) 

   Write into an empty ``single`` variable, leaving it full.
   
   1) Block until the ``single`` variable is empty.
   2) Write the value of the ``single`` variable and leave the variable full.
   
   :arg val: New value of the single variable.
   

.. method:: proc  _singlevar.isFull 

   
   Determine if the ``single`` variable is full without blocking.
   Does not alter the state of the ``single`` variable.
   
   :returns: ``true`` if the state of the ``single`` variable is full, ``false`` if it's empty.
   

.. function:: operator  = (ref lhs: _singlevar(?t),  rhs: t) 

   .. warning::

      Direct assignment to 'single' variables is deprecated; apply '.writeEF()' to modify one

.. function:: operator :( from, type t: _singlevar)  where from.type == t.valType

.. function:: operator :( from: _singlevar, type toType: _singlevar) 

   .. warning::

      Casting single variables is deprecated

.. function:: proc chpl__compilerGeneratedAssignSyncSingle(ref lhs: _singlevar(?), ref rhs: _singlevar(?)) 

.. function:: proc chpl__compilerGeneratedCopySyncSingle(ref sv: _singlevar(?)) 

.. function:: proc chpl__initCopy(ref sv: _singlevar(?t),  definedConst: bool) 

   .. warning::

      Initializing a type-inferred variable from a 'single' is deprecated; apply '.readFF()' to the right-hand side

.. function:: proc chpl__autoCopy(const ref rhs: _singlevar,  definedConst: bool) 

.. function:: proc chpl__maybeAutoDestroyed( x: _singlevar(?t)) param

.. function:: proc chpl__autoDestroy( x: _singlevar(?)) 

.. function:: proc chpl__readXX(const ref x: _singlevar(?)) 

.. class:: _singlecls

   *********************************** | *************************************
   *                                                                           *
   * Use of a class instance establishes the required identity property.       *
   *                                                                           *
   ************************************* | ***********************************

   .. attribute:: type valType

   .. attribute:: var value: valType

   .. attribute:: var singleAux: chpl_single_aux_t

   .. method:: proc  init(type valType) 

   .. method:: proc  init(type valType, in value: valType) 

   .. method:: proc  deinit() 

   .. method:: proc  readFF() 

   .. method:: proc  readXX() 

   .. method:: proc  writeEF(in val: valType) 

   .. method:: proc  isFull 

