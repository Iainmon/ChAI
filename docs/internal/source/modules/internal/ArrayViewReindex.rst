.. default-domain:: chpl

.. module:: ArrayViewReindex
   :noindex:

ArrayViewReindex
================
**Usage**

.. code-block:: chapel

   use ArrayViewReindex;


or

.. code-block:: chapel

   import ArrayViewReindex;

.. class:: ArrayViewReindexDist : BaseDist

   .. attribute:: const downDistPid: int

   .. attribute:: const downDistInst

   .. attribute:: const updom

   .. attribute:: const downdomPid

   .. attribute:: const downdomInst

   .. method:: proc  downDist 

   .. method:: override proc  dsiNewRectangularDom(param rank, type idxType, param strides,  inds) 

   .. method:: proc  dsiClone() 

   .. method:: override proc  dsiSupportsPrivatization() param

   .. method:: proc  dsiGetPrivatizeData() 

   .. method:: proc  dsiPrivatize( privatizeData) 

   .. method:: override proc  dsiDestroyDist() 

   .. method:: override proc  dsiIsLayout() param

.. class:: ArrayViewReindexDom : BaseRectangularDom(?)

   .. attribute:: var updomInst: unmanaged(DefaultRectangularDom(rank, idxType, strides)?)

   .. attribute:: var downdomPid

   .. attribute:: var downdomInst

   .. attribute:: const distPid

   .. attribute:: const distInst

   .. attribute:: var ownsDownDomInst = false

   .. method:: proc  dist 

   .. method:: proc  updom : updomInst!.type

   .. method:: proc  downdomtype(param rank: int, type idxType, param strides: bool) type

   .. method:: proc  downdom : downdomInst.type

   .. method:: proc  dsiBuildArray(type eltType, param initElts: bool) 

   .. method:: proc  dsiSetIndices( inds) 

   .. itermethod:: iter  these() 

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.standalone && chpl__isDROrDRView(downdom) && __primitive("resolves", updom.these(tag))

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.standalone && !chpl__isDROrDRView(downdom) && __primitive("resolves", downdom.these(tag))

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.leader

   .. itermethod:: iter  these(param tag: iterKind,  followThis)  where tag == iterKind.follower

   .. method:: proc  chpl_reindexConvertLoDTupleToHiD( tup) 

   .. method:: proc  chpl_reindexConvertHiDTupleToLoD( tup) 

   .. method:: proc  downIdxToUpIdx( downIdx: integral) 

   .. method:: proc  downIdxToUpIdx( i) 

   .. method:: override proc  dsiMyDist() 

   .. method:: proc  dsiTargetLocales() const ref

   .. method:: proc  dsiHasSingleLocalSubdomain() param

   .. method:: proc  dsiLocalSubdomain( loc: locale) 

   .. method:: proc  dsiAssignDomain( rhs: domain,  lhsPrivate: bool) 

   .. method:: override proc  isReindexDomainView() param

   .. method:: proc  _getActualDomain() 

   .. method:: override proc  dsiDestroyDom() 

   .. method:: proc  parSafe param

   .. method:: override proc  dsiLow 

   .. method:: override proc  dsiHigh 

   .. method:: override proc  dsiStride 

   .. method:: override proc  dsiAlignment 

   .. method:: override proc  dsiFirst 

   .. method:: override proc  dsiLast 

   .. method:: override proc  dsiAlignedLow 

   .. method:: override proc  dsiAlignedHigh 

   .. method:: override proc  dsiIndexOrder( i) 

   .. method:: override proc  dsiCreateIndexBuffer( size) 

   .. method:: override proc  dsiSupportsPrivatization() param

   .. method:: proc  dsiGetPrivatizeData() 

   .. method:: proc  dsiPrivatize( privatizeData) 

   .. method:: proc  dsiGetReprivatizeData() 

   .. method:: proc  dsiReprivatize( other,  reprivatizeData) 

.. class:: ArrayViewReindexArr : AbsBaseArr(?)

   .. attribute:: const _DomPid

   .. attribute:: const dom

   .. attribute:: const _ArrPid

   .. attribute:: const _ArrInstance

   .. attribute:: const indexCache

   .. attribute:: param ownsArrInstance

   .. method:: proc  init(type eltType, const _DomPid, const dom, const _ArrPid, const _ArrInstance, param ownsArrInstance: bool) 

   .. method:: proc  downdom : arr.dom.type

   .. method:: proc  idxType type

   .. method:: proc  rank param

   .. method:: override proc  isReindexArrayView() param

   .. itermethod:: iter  these() ref

   .. itermethod:: iter  these(param tag: iterKind) ref where tag == iterKind.standalone && !localeModelHasSublocales && __primitive("resolves", privDom.these(tag))

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.leader

   .. itermethod:: iter  these(param tag: iterKind,  followThis) ref where tag == iterKind.follower

   .. method:: proc  dsiSerialWrite( f)  throws

   .. method:: proc  dsiSerialRead( f)  throws

   .. method:: override proc  dsiDisplayRepresentation() 

   .. method:: proc  dsiAccess(i: idxType ...rank) ref

   .. method:: proc  dsiAccess(i: idxType ...rank)  where shouldReturnRvalueByValue(eltType)

   .. method:: proc  dsiAccess(i: idxType ...rank) const ref

   .. method:: proc  dsiAccess( i) ref

   .. method:: proc  dsiAccess( i)  where shouldReturnRvalueByValue(eltType)

   .. method:: proc  dsiAccess( i) const ref

   .. method:: proc  dsiLocalAccess( i) ref

   .. method:: proc  dsiLocalAccess( i)  where shouldReturnRvalueByValue(eltType)

   .. method:: proc  dsiLocalAccess( i) const ref

   .. method:: proc  dsiBoundsCheck( i) 

   .. method:: proc  dsiHasSingleLocalSubdomain() param

   .. method:: proc  dsiLocalSubdomain( loc: locale) 

   .. method:: override proc  dsiSupportsPrivatization() param

   .. method:: proc  dsiGetPrivatizeData() 

   .. method:: proc  dsiPrivatize( privatizeData) 

   .. method:: proc  shouldUseIndexCache() param

   .. method:: proc  buildIndexCache() 

   .. method:: proc  privDom : dom.type

   .. method:: proc  arr 

   .. method:: override proc  dsiGetBaseDom() 

   .. method:: proc  _getActualArray() 

   .. method:: proc  _containsRCRE() param

   .. method:: proc  _getRCREView() 

   .. method:: override proc  dsiElementInitializationComplete() 

   .. method:: override proc  dsiDestroyArr( deinitElts: bool) 

   .. method:: override proc  doiCanBulkTransferRankChange() param

   .. method:: proc  doiBulkTransferFromKnown( destDom,  srcClass,  srcDom) : bool

   .. method:: proc  doiBulkTransferToKnown( srcDom,  destClass,  destDom) : bool

.. function:: proc chpl_reindexConvertIdxDim( i,  updom,  downdom,  dim: int) 

.. function:: proc chpl_reindexConvertIdx( i: integral,  updom,  downdom) 

.. function:: proc chpl_reindexConvertIdx( i,  updom,  downdom) 

.. function:: proc chpl_reindexConvertDom( dims,  updom,  downdom) 

.. function:: proc chpl_reindexConvertDomMaybeSlice( dims,  updom,  downdom) 

