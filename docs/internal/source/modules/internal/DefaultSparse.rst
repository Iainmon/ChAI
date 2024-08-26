.. default-domain:: chpl

.. module:: DefaultSparse
   :noindex:

DefaultSparse
=============
**Usage**

.. code-block:: chapel

   use DefaultSparse;


or

.. code-block:: chapel

   import DefaultSparse;

.. data:: config param debugDefaultSparse = false

.. data:: config param defaultSparseSupportsAutoLocalAccess = true

.. class:: DefaultSparseDom : BaseSparseDomImpl(?)

   .. attribute:: var dist: unmanaged(DefaultDist)

   .. attribute:: var _nnz = 0

   .. attribute:: var _indices: [nnzDom] index(rank, idxType)

   .. method:: override proc  linksDistribution() param

   .. method:: override proc  dsiLinksDistribution() 

   .. method:: proc  init(param rank, type idxType,  dist: unmanaged(DefaultDist),  parentDom: domain) 

   .. method:: override proc  getNNZ() : int

   .. method:: proc  dsiBuildArray(type eltType, param initElts: bool) 

   .. itermethod:: iter  dsiIndsIterSafeForRemoving() 

   .. itermethod:: iter  these() 

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.standalone

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.leader

   .. itermethod:: iter  these(param tag: iterKind,  followThis: (?, ?, ?))  where tag == iterKind.follower

   .. itermethod:: iter  these(param tag: iterKind,  followThis)  where tag == iterKind.follower

   .. method:: proc  find( ind) 

   .. method:: proc  dsiMember( ind) 

   .. method:: proc  parSafe param

   .. method:: override proc  dsiFirst 

   .. method:: override proc  dsiLast 

   .. method:: proc  add_help( ind) 

   .. method:: proc  rem_help( ind) 

   .. method:: proc  dsiAdd( ind: idxType)  where rank == 1

   .. method:: proc  dsiRemove( ind: idxType)  where rank == 1

   .. method:: proc  dsiAdd( ind: rank*idxType) 

   .. method:: proc  dsiRemove( ind: rank*idxType) 

   .. method:: override proc  bulkAdd_help(ref inds: [?indsDom] index(rank, idxType),  dataSorted = false,  isUnique = false,  addOn = nilLocale) 

   .. method:: override proc  dsiMyDist() : unmanaged(BaseDist)

   .. method:: override proc  dsiClear() 

   .. itermethod:: iter  dimIter(param d,  ind) 

   .. method:: proc  dsiAssignDomain( rhs: domain,  lhsPrivate: bool) 

   .. method:: proc  dsiTargetLocales() const ref

   .. method:: proc  dsiHasSingleLocalSubdomain() param

   .. method:: proc  dsiLocalSubdomain( loc: locale) 

   .. method:: override proc  dsiSupportsAutoLocalAccess() param

.. class:: DefaultSparseArr : BaseSparseArrImpl(?)

   .. method:: proc  init(type eltType, param rank: int, type idxType,  dom, param initElts: bool) 

   .. method:: proc  dsiAccess( ind: rank*idxType) ref

   .. method:: proc  dsiAccess( ind: rank*idxType)  where shouldReturnRvalueByValue(eltType)

   .. method:: proc  dsiAccess( ind: rank*idxType) const ref

   .. itermethod:: iter  these() ref

   .. itermethod:: iter  these(param tag: iterKind) ref where tag == iterKind.standalone

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.leader

   .. itermethod:: iter  these(param tag: iterKind,  followThis: (?, ?, ?)) ref where tag == iterKind.follower

   .. itermethod:: iter  these(param tag: iterKind,  followThis)  where tag == iterKind.follower

   .. method:: proc  dsiTargetLocales() const ref

   .. method:: proc  dsiHasSingleLocalSubdomain() param

   .. method:: proc  dsiLocalSubdomain( loc: locale) 

   .. method:: proc  doiBulkTransferToKnown( srcDom,  destClass: this.type,  destDom) 

   .. method:: proc  doiBulkTransferFromKnown( destDom,  srcClass: this.type,  srcDom) : bool

.. method:: proc  DefaultSparseDom.dsiSerialWrite( f,  printBrackets = true)  throws

.. method:: proc  DefaultSparseArr.dsiSerialWrite( f)  throws

