.. default-domain:: chpl

.. module:: DefaultAssociative
   :noindex:

DefaultAssociative
==================
**Usage**

.. code-block:: chapel

   use DefaultAssociative;


or

.. code-block:: chapel

   import DefaultAssociative;

.. data:: config param debugDefaultAssoc = false

.. data:: config param debugAssocDataPar = false

.. data:: config param defaultAssociativeSupportsAutoLocalAccess = true

.. class:: DefaultAssociativeDomRehashHelper : chpl__rehashHelpers

   .. attribute:: var dom: unmanaged(DefaultAssociativeDom(?))

   .. method:: override proc  startRehash( newSize: int) 

   .. method:: override proc  moveElementDuringRehash( oldSlot: int,  newSlot: int) 

   .. method:: override proc  finishRehash( oldSize: int) 

.. class:: DefaultAssociativeDom : BaseAssociativeDom

   .. attribute:: type idxType

   .. attribute:: param parSafe: bool

   .. attribute:: var dist: unmanaged(DefaultDist)

   .. attribute:: var numEntries: chpl__processorAtomicType(int)

   .. attribute:: var tableLock: if parSafe then chpl_LocalSpinlock else nothing

   .. attribute:: var table: chpl__hashtable(idxType, nothing)

   .. method:: proc  lockTable() 

   .. method:: proc  unlockTable() 

   .. method:: override proc  linksDistribution() param

   .. method:: override proc  dsiLinksDistribution() 

   .. method:: proc  init(type idxType, param parSafe: bool,  dist: unmanaged(DefaultDist)) 

   .. method:: proc  deinit() 

   .. method:: proc  dsiBuildArray(type eltType, param initElts: bool) 

   .. method:: proc  dsiSerialWrite( f)  throws where _usingSerializers(f) && !_isDefaultDeser(f)

   .. method:: proc  dsiSerialRead( f)  throws where _usingSerializers(f) && !_isDefaultDeser(f)

   .. method:: proc  dsiSerialWrite( f)  throws

   .. method:: proc  dsiSerialRead( f)  throws

   .. method:: proc  dsiAssignDomain( rhs: domain,  lhsPrivate: bool) 

   .. method:: proc  dsiNumIndices 

   .. itermethod:: iter  dsiIndsIterSafeForRemoving() 

   .. method:: proc  _isSlotFull( slot: int) : bool

   .. itermethod:: iter  these() 

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.standalone

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.leader

   .. itermethod:: iter  these(param tag: iterKind,  followThis)  where tag == iterKind.follower

   .. method:: override proc  dsiMyDist() : unmanaged(BaseDist)

   .. method:: override proc  dsiClear() 

   .. method:: proc  dsiMember( idx: idxType) : bool

   .. method:: override proc  dsiAdd(in idx) 

   .. method:: proc  _add(in idx: idxType) 

   .. method:: proc  dsiRemove( idx: idxType) 

   .. method:: proc  dsiRequestCapacity( numKeys: int) 

   .. itermethod:: iter  dsiSorted( comparator) 

   .. itermethod:: iter  _fullSlots() 

   .. method:: proc  dsiTargetLocales() const ref

   .. method:: proc  dsiHasSingleLocalSubdomain() param

   .. method:: proc  dsiLocalSubdomain( loc: locale) 

   .. method:: override proc  dsiSupportsAutoLocalAccess() param

.. class:: DefaultAssociativeArr : AbsBaseArr(?)

   .. attribute:: type idxType

   .. attribute:: param parSafeDom: bool

   .. attribute:: var dom: unmanaged(DefaultAssociativeDom(idxType, parSafe = parSafeDom))

   .. attribute:: var dataSize: int

   .. attribute:: var data: _ddata(eltType)

   .. attribute:: var tmpData: _ddata(eltType)

   .. attribute:: var eltsNeedDeinit = true

   .. method:: proc  init(type eltType, type idxType, param parSafeDom,  dom: unmanaged(DefaultAssociativeDom(idxType, parSafe = parSafeDom)), param initElts) 

   .. method:: proc  deinit() 

   .. method:: proc  rank param

   .. method:: override proc  dsiGetBaseDom() 

   .. method:: proc  dsiAccess( idx: idxType) ref

   .. method:: proc  dsiAccess( idx: 1*(idxType)) ref

   .. method:: proc  dsiAccess( idx: idxType)  where shouldReturnRvalueByValue(eltType)

   .. method:: proc  dsiAccess( idx: 1*(idxType)) ref where shouldReturnRvalueByValue(eltType)

   .. method:: proc  dsiAccess( idx: idxType) const ref

   .. method:: proc  dsiAccess( idx: 1*(idxType)) const ref

   .. method:: proc  dsiLocalAccess( i) ref

   .. method:: proc  dsiLocalAccess( i)  where shouldReturnRvalueByValue(eltType)

   .. method:: proc  dsiLocalAccess( i) const ref

   .. itermethod:: iter  these() ref

   .. itermethod:: iter  these(param tag: iterKind) ref where tag == iterKind.standalone

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.leader

   .. itermethod:: iter  these(param tag: iterKind,  followThis) ref where tag == iterKind.follower

   .. method:: proc  dsiSerialReadWrite( f, in printBraces = true, inout first = true)  throws where _usingSerializers(f) && !_isDefaultDeser(f)

   .. method:: proc  dsiSerialReadWrite( f, in printBraces = true, inout first = true)  throws where _isDefaultDeser(f)

   .. method:: proc  dsiSerialReadWrite( f, in printBraces = true, inout first = true)  throws

   .. method:: proc  readChapelStyleAssocArray( f)  throws

   .. method:: proc  dsiSerialWrite( f)  throws

   .. method:: proc  dsiSerialRead( f)  throws

   .. itermethod:: iter  dsiSorted( comparator) 

   .. method:: proc  _doDefaultInitSlot( slot: int,  inAdd: bool) 

   .. method:: override proc  _defaultInitSlot( slot: int) 

   .. method:: override proc  _deinitSlot( slot: int) 

   .. method:: proc  _elementNeedsDeinit() param

   .. method:: proc  _deinitElement(ref elt: eltType) 

   .. method:: override proc  _startRehash( newSize: int) 

   .. method:: override proc  _finishRehash( oldSize: int) 

   .. method:: override proc  _moveElementDuringRehash( oldslot: int,  newslot: int) 

   .. method:: proc  dsiTargetLocales() const ref

   .. method:: proc  dsiHasSingleLocalSubdomain() param

   .. method:: proc  dsiLocalSubdomain( loc: locale) 

   .. method:: override proc  dsiElementInitializationComplete() 

   .. method:: override proc  dsiElementDeinitializationComplete() 

   .. method:: override proc  dsiDestroyArr( deinitElts: bool) 

.. function:: proc chpl_serialReadWriteAssociativeHelper( f,  arr,  dom)  throws where _usingSerializers(f) && !_isDefaultDeser(f)

.. function:: proc chpl_serialReadWriteAssociativeHelper( f,  arr,  dom)  throws

