.. default-domain:: chpl

.. module:: ChapelDistribution
   :noindex:

ChapelDistribution
==================
**Usage**

.. code-block:: chapel

   use ChapelDistribution;


or

.. code-block:: chapel

   import ChapelDistribution;


* Copyright 2020-2024 Hewlett Packard Enterprise Development LP
* Copyright 2004-2019 Cray Inc.
* Other additional copyright holders may be indicated within.
*
* The entirety of this work is licensed under the Apache License,
* Version 2.0 (the "License"); you may not use this file except
* in compliance with the License.
*
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.


.. record:: _distribution : writeSerializable, readDeserializable

   .. attribute:: var _pid: int

   .. attribute:: var _instance

   .. attribute:: var _unowned: bool

   .. method:: proc  init( _pid: int,  _instance,  _unowned: bool) 

   .. method:: proc  init( value) 

   .. method:: proc  init=(const ref other: _distribution) 

   .. method:: proc  _value 

   .. method:: proc  _do_destroy() 

   .. method:: proc  deinit() 

   .. method:: proc  clone() 

   .. method:: proc  newRectangularDom(param rank: int, type idxType, param strides: strideKind,  ranges: rank*range(idxType, boundKind.both, strides),  definedConst: bool = false) 

   .. method:: proc  newRectangularDom(param rank: int, type idxType, param strides: strideKind,  definedConst: bool = false) 

   .. method:: proc  newAssociativeDom(type idxType, param parSafe: bool = true) 

   .. method:: proc  newSparseDom(param rank: int, type idxType,  dom: domain) 

   .. method:: proc  idxToLocale( ind) 

   .. method:: proc ref deserialize( reader, ref deserializer)  throws

   .. method:: proc type deserializeFrom( reader, ref deserializer)  throws

   .. method:: proc  serialize( writer, ref serializer)  throws

   .. method:: proc  displayRepresentation() 

   .. method:: proc  targetLocales() const ref

      
      Return an array of locales over which this distribution was declared.
      

.. class:: BaseDist

   .. attribute:: var _doms_containing_dist: int

   .. attribute:: var _domsLock: chpl_LocalSpinlock

   .. attribute:: var _free_when_no_doms: bool

   .. attribute:: var pid: int = nullPid

   .. method:: proc  deinit() 

   .. method:: proc  remove() : unmanaged(BaseDist?)

   .. method:: proc  remove_dom( x: unmanaged(BaseDom)) : bool

   .. method:: proc  add_dom( x: unmanaged(BaseDom)) 

   .. method:: proc  dsiDisplayRepresentation() 

   .. method:: proc  dsiNewRectangularDom(param rank: int, type idxType, param strides: strideKind,  inds) 

   .. method:: proc  dsiNewAssociativeDom(type idxType, param parSafe: bool) 

   .. method:: proc  dsiNewSparseDom(param rank: int, type idxType,  dom: domain) 

   .. method:: proc  dsiSupportsPrivatization() param

   .. method:: proc  dsiRequiresPrivatization() param

   .. method:: proc  dsiDestroyDist() 

   .. method:: proc  trackDomains() param

   .. method:: proc  dsiTrackDomains() 

   .. method:: proc  singleton() param

   .. method:: proc  dsiIsLayout() param

.. class:: BaseDom

   .. attribute:: var _arrs_head: unmanaged(BaseArr?)

   .. attribute:: var _arrs_containing_dom: int

   .. attribute:: var _arrsLock: chpl_LocalSpinlock

   .. attribute:: var _free_when_no_arrs: bool

   .. attribute:: var pid: int = nullPid

   .. attribute:: var definedConst: bool

   .. method:: proc  init() 

   .. method:: proc  deinit() 

   .. itermethod:: iter  _arrs : unmanaged(BaseArr)

   .. method:: proc  dsiMyDist() : unmanaged(BaseDist)

   .. method:: proc  dnsError(param op: string) 

   .. method:: proc  dsiLow 

   .. method:: proc  dsiHigh 

   .. method:: proc  dsiAlignedLow 

   .. method:: proc  dsiAlignedHigh 

   .. method:: proc  dsiFirst 

   .. method:: proc  dsiLast 

   .. method:: proc  dsiStride 

   .. method:: proc  dsiAlignment 

   .. method:: proc  dsiIndexOrder( i) 

   .. method:: proc  dsiCreateIndexBuffer( size) 

   .. method:: proc  trackArrays() 

   .. method:: proc  remove() : (unmanaged(BaseDom?), unmanaged(BaseDist?))

   .. method:: proc  remove_arr( x: unmanaged(BaseArr), param rmFromList = true) : bool

   .. method:: proc  add_arr( x: unmanaged(BaseArr), param locking = true, param addToList = true) 

   .. method:: proc  remove_containing_arr( x: unmanaged(BaseArr)) 

   .. method:: proc  add_containing_arr( x: unmanaged(BaseArr)) 

   .. method:: proc  dsiSupportsPrivatization() param

   .. method:: proc  dsiRequiresPrivatization() param

   .. method:: proc  linksDistribution() param

   .. method:: proc  dsiLinksDistribution() 

   .. method:: proc  dsiDestroyDom() 

   .. method:: proc  dsiDisplayRepresentation() 

   .. method:: proc  dsiSupportsAutoLocalAccess() param

   .. method:: proc  dsiSupportsOffsetAutoLocalAccess() param

   .. method:: proc  dsiAutoLocalAccessOffsetCheck( offsets) 

   .. method:: proc  dsiIteratorYieldsLocalElements() param

   .. method:: proc  isRectangular() param

   .. method:: proc  isAssociative() param

   .. method:: proc  isSparse() param

   .. method:: proc type isDefaultRectangular() param

   .. method:: proc  isDefaultRectangular() param

   .. method:: proc  isSliceDomainView() param

   .. method:: proc  isRankChangeDomainView() param

   .. method:: proc  isReindexDomainView() param

.. class:: BaseRectangularDom : BaseDom

   .. attribute:: param rank: int

   .. attribute:: type idxType

   .. attribute:: param strides: strideKind

   .. method:: proc  hasUnitStride() param

   .. method:: proc  hasPosNegUnitStride() param

   .. method:: override proc  isRectangular() param

   .. method:: proc  getBaseArrType() type

   .. method:: proc  deinit() 

   .. method:: proc  dsiAdd(in x) 

   .. method:: proc  dsiRemove( x) 

.. class:: BaseSparseDomImpl : BaseSparseDom(?)

   .. attribute:: var nnzDom = {1..0}

   .. method:: proc  deinit() 

   .. method:: override proc  dsiBulkAdd( inds: [] index(rank, idxType),  dataSorted = false,  isUnique = false,  addOn = nilLocale) 

   .. method:: override proc  dsiBulkAddNoPreserveInds(ref inds: [] index(rank, idxType),  dataSorted = false,  isUnique = false,  addOn = nilLocale) 

   .. method:: proc  bulkAdd_help(ref inds: [?indsDom] index(rank, idxType),  dataSorted = false,  isUnique = false,  addOn = nilLocale) : int

   .. method:: proc  _grow( size: int,  factor = arrayAsVecGrowthFactor) 

      Grow domain if necessary 

   .. method:: proc  _shrink( size: int,  factor = arrayAsVecGrowthFactor) 

      Shrink domain if necessary 

   .. method:: proc  _bulkGrow() 

   .. method:: proc  _countDuplicates( arr)  where isArray(arr)

   .. method:: proc  bulkAdd_prepareInds(ref inds,  dataSorted,  isUnique,  cmp) 

   .. method:: proc  __getActualInsertPts( d,  inds,  isUnique) 

   .. method:: proc  dsiClear() 

.. record:: SparseIndexBuffer

   .. attribute:: param rank: int

   .. attribute:: var obj: borrowed(BaseSparseDom(?))

   .. attribute:: type idxType = if rank == 1 then int else rank * int

   .. attribute:: var bufDom = domain(1)

   .. attribute:: var buf: [bufDom] idxType

   .. attribute:: var cur = 0

   .. method:: proc  init( size, param rank: int,  obj) 

   .. method:: proc ref deinit() 

   .. method:: proc ref add( idx: idxType) 

   .. method:: proc ref commit() 

.. class:: BaseSparseDom : BaseDom

   .. attribute:: param rank: int

   .. attribute:: type idxType

   .. attribute:: var parentDom

   .. method:: override proc  isSparse() param

      var nnz = 0; //: int;

   .. method:: proc  getNNZ() : int

   .. method:: proc  deinit() 

   .. method:: proc  dsiClear() 

   .. method:: proc  dsiBulkAdd( inds: [] index(rank, idxType),  dataSorted = false,  isUnique = false,  addOn = nilLocale) : int

   .. method:: proc  dsiBulkAddNoPreserveInds(ref inds: [] index(rank, idxType),  dataSorted = false,  isUnique = false,  addOn = nilLocale) : int

   .. method:: proc  boundsCheck( ind: index(rank, idxType)) : void

   .. method:: proc  canDoDirectAssignment( rhs: domain) 

   .. method:: proc  dsiDim( d: int) 

   .. method:: proc  dsiDims() 

   .. method:: proc  dsiNumIndices 

   .. method:: proc  dsiSize 

   .. method:: override proc  dsiLow 

   .. method:: override proc  dsiHigh 

   .. method:: override proc  dsiStride 

   .. method:: override proc  dsiAlignment 

   .. method:: override proc  dsiFirst : rank*idxType

   .. method:: override proc  dsiLast : rank*idxType

   .. method:: override proc  dsiAlignedLow 

   .. method:: override proc  dsiAlignedHigh 

   .. method:: override proc  dsiCreateIndexBuffer( size) 

.. class:: BaseAssociativeDom : BaseDom

   .. method:: override proc  isAssociative() param

   .. method:: proc  deinit() 

   .. method:: proc  dsiClear() 

   .. method:: proc  dsiAdd(in idx) 

   .. method:: proc  rank param

.. class:: BaseArr

   .. attribute:: var prev: unmanaged(BaseArr?)

   .. attribute:: var next: unmanaged(BaseArr?)

   .. attribute:: var pid: int = nullPid

   .. attribute:: var _decEltRefCounts: bool = false

   .. attribute:: var _resizePolicy = chpl_ddataResizePolicy.normalInit

   .. method:: proc  chpl__rvfMe() param

   .. method:: proc  isSliceArrayView() param

   .. method:: proc  isRankChangeArrayView() param

   .. method:: proc  isReindexArrayView() param

   .. method:: proc  deinit() 

   .. method:: proc  dsiStaticFastFollowCheck(type leadType) param

   .. method:: proc  dsiGetBaseDom() : unmanaged(BaseDom)

   .. method:: proc  remove(param rmFromList: bool) 

   .. method:: proc  chpl_setResizePolicy( policy: chpl_ddataResizePolicy) 

   .. method:: proc  chpl_isElementTypeDefaultInitializable() : bool

   .. method:: proc  chpl_isElementTypeNonNilableClass() : bool

   .. method:: proc  chpl_unsafeAssignIsClassElementNil( manager,  idx) : bool

   .. method:: proc  chpl_unsafeAssignHaltUninitializedElement( idx) 

   .. method:: proc  dsiElementInitializationComplete() 

   .. method:: proc  dsiElementDeinitializationComplete() 

   .. method:: proc  dsiDestroyArr( deinitElts: bool) 

   .. method:: proc  dsiReallocate( d: domain) 

   .. method:: proc  dsiPostReallocate() 

   .. method:: proc  _purge( ind: int) 

   .. method:: proc  _resize( length: int,  old_map) 

   .. method:: proc  sparseShiftArray( shiftrange,  initrange) 

   .. method:: proc  sparseShiftArrayBack( shiftrange) 

   .. method:: proc  sparseBulkShiftArray( shiftMap,  oldnnz) 

   .. method:: proc  _defaultInitSlot( slot: int) 

   .. method:: proc  _deinitSlot( slot: int) 

   .. method:: proc  _startRehash( newSize: int) 

   .. method:: proc  _finishRehash( oldSize: int) 

   .. method:: proc  _moveElementDuringRehash( oldslot: int,  newslot: int) 

   .. method:: proc  dsiDisplayRepresentation() 

   .. method:: proc  dsiSupportsAlignedFollower() param

   .. method:: proc  dsiSupportsPrivatization() param

   .. method:: proc  dsiRequiresPrivatization() param

   .. method:: proc type isDefaultRectangular() param

   .. method:: proc  isDefaultRectangular() param

   .. method:: proc  doiCanBulkTransferRankChange() param

   .. method:: proc  decEltCountsIfNeeded() 

   .. method:: proc  dsiIteratorYieldsLocalElements() param

.. class:: AbsBaseArr : BaseArr

   This subclass is created to allow eltType to be defined in one place
   instead of every subclass of BaseArr.  It can't be put on BaseArr due to
   BaseDom relying on BaseArr not being generic (it creates a list of BaseArrs
   that it refers to and lists can't contain multiple instantiations of a
   generic).
   

   .. attribute:: type eltType

   .. method:: override proc  decEltCountsIfNeeded() 

.. class:: BaseArrOverRectangularDom : BaseArr

   BaseArrOverRectangularDom has this signature so that dsiReallocate
   can be overridden with the right tuple size.
   
   Note that eltType is not included here. eltType could be included
   in a base class, but here we're looking for a way to narrow
   overloaded functions to only those working with a particular
   kind of bounding box. So if eltType is included, we should make
   another base class.
   

   .. attribute:: param rank: int

   .. attribute:: type idxType

   .. attribute:: param strides: strideKind

   .. method:: proc  hasUnitStride() param

   .. method:: proc  hasPosNegUnitStride() param

   .. method:: proc  dsiReallocate( bounds: rank*range(idxType, boundKind.both, strides)) 

   .. method:: override proc  dsiPostReallocate() 

   .. method:: proc  deinit() 

.. class:: BaseRectangularArr : BaseArrOverRectangularDom(?)

   .. attribute:: type eltType

      rank, idxType, strides are from BaseArrOverRectangularDom 

   .. method:: proc  deinit() 

   .. method:: override proc  chpl_isElementTypeDefaultInitializable() : bool

   .. method:: override proc  chpl_isElementTypeNonNilableClass() : bool

   .. method:: override proc  chpl_unsafeAssignHaltUninitializedElement( idx) 

   .. method:: override proc  decEltCountsIfNeeded() 

.. class:: BaseSparseArr : AbsBaseArr(?)

   
   * BaseSparseArr is very basic/generic so that we have some flexibility in
   * implementing sparse array classes.
   

   .. attribute:: param rank: int

   .. attribute:: type idxType

   .. attribute:: var dom

   .. method:: override proc  dsiGetBaseDom() 

      : DefaultSparseDom(?); 

   .. method:: proc  deinit() 

.. class:: BaseSparseArrImpl : BaseSparseArr(?)

   
   * All the common helpers/methods in implementations of internal sparse arrays
   * go here.
   

   .. attribute:: var data: [dom.nnzDom] eltType

   .. method:: proc  init(type eltType, param rank: int, type idxType,  dom, param initElts: bool) 

   .. method:: proc  deinit() 

   .. method:: override proc  dsiElementInitializationComplete() 

   .. method:: override proc  dsiElementDeinitializationComplete() 

   .. method:: override proc  dsiDestroyArr( deinitElts: bool) 

   .. attribute:: var irv: eltType

   .. method:: proc  IRV ref

   .. method:: override proc  sparseBulkShiftArray( shiftMap,  oldnnz) 

   .. method:: override proc  sparseShiftArray( shiftrange,  initrange) 

   .. method:: override proc  sparseShiftArrayBack( shiftrange) 

.. function:: proc _delete_dist( dist: unmanaged(BaseDist),  privatized: bool) 

.. function:: proc _delete_dom( dom,  privatized: bool) 

.. function:: proc _delete_arr( arr: unmanaged(BaseArr), param privatized: bool,  deinitElts = true) 

.. function:: proc chpl_assignDomainWithGetSetIndices( lhs: ?t,  rhs: domain)  where isSubtype(_to_borrowed(t), BaseRectangularDom)

.. function:: proc chpl_assignDomainWithIndsIterSafeForRemoving( lhs: ?t,  rhs: domain)  where isSubtype(_to_borrowed(t), BaseSparseDom) || isSubtype(_to_borrowed(t), BaseAssociativeDom)

