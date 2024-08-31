.. default-domain:: chpl

.. module:: ArrayViewRankChange
   :noindex:

ArrayViewRankChange
===================
**Usage**

.. code-block:: chapel

   use ArrayViewRankChange;


or

.. code-block:: chapel

   import ArrayViewRankChange;

.. class:: ArrayViewRankChangeDist : BaseDist

   .. attribute:: var downDistPid: int

   .. attribute:: var downDistInst

   .. attribute:: const collapsedDim

   .. attribute:: const idx

   .. method:: proc  downDist 

   .. method:: override proc  dsiNewRectangularDom(param rank, type idxType, param strides,  inds) 

   .. method:: proc  dsiClone() 

   .. method:: override proc  dsiSupportsPrivatization() param

   .. method:: proc  dsiGetPrivatizeData() 

   .. method:: proc  dsiPrivatize( privatizeData) 

   .. method:: override proc  dsiDestroyDist() 

   .. method:: override proc  dsiIsLayout() param

   .. method:: proc  dsiEqualDMaps( that: ArrayViewRankChangeDist(?)) 

.. class:: ArrayViewRankChangeDom : BaseRectangularDom(?)

   .. attribute:: var upDomInst: unmanaged(DefaultRectangularDom(rank, idxType, strides)?)

   .. attribute:: const collapsedDim

   .. attribute:: const idx

   .. attribute:: const distPid

   .. attribute:: const distInst

   .. method:: proc  dist 

   .. attribute:: var downDomPid: int

   .. attribute:: var downDomInst: downDomType(collapsedDim.size, idxType, strides, distInst)?

   .. method:: proc  downrank param

   .. method:: proc  upDom : upDomInst!.type

   .. method:: proc  downDom : downDomInst!.type

   .. method:: proc  dsiBuildArray(type eltType, param initElts: bool) 

   .. method:: proc  dsiSetIndices( inds) 

   .. method:: proc  dsiAssignDomain( rhs: domain,  lhsPrivate: bool) 

   .. itermethod:: iter  these() 

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.standalone && !localeModelHasSublocales && chpl__isDROrDRView(downDom) && __primitive("resolves", upDom.these(tag))

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.standalone && !localeModelHasSublocales && !chpl__isDROrDRView(downDom) && __primitive("resolves", downDom.these(tag))

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.leader

   .. itermethod:: iter  these(param tag: iterKind,  followThis)  where tag == iterKind.follower

   .. method:: proc  chpl_rankChangeConvertLoDTupleToHiD( tup) 

   .. method:: proc  chpl_rankChangeConvertHiDTupleToLoD( tup) 

   .. method:: proc  downIdxToUpIdx( downIdx) 

   .. method:: proc  dsiSerialWrite( f)  throws

   .. method:: override proc  dsiMyDist() 

   .. method:: proc  dsiTargetLocales() const ref

   .. method:: proc  dsiHasSingleLocalSubdomain() param

   .. method:: proc  dsiLocalSubdomain( loc: locale) 

   .. method:: override proc  isRankChangeDomainView() param

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

   .. method:: override proc  dsiSupportsAutoLocalAccess() param

.. class:: ArrayViewRankChangeArr : AbsBaseArr(?)

   .. attribute:: const _DomPid

   .. attribute:: const dom

   .. attribute:: const _ArrPid

   .. attribute:: const _ArrInstance

   .. attribute:: const collapsedDim

   .. attribute:: const idx

   .. attribute:: const indexCache

   .. attribute:: param ownsArrInstance

   .. method:: proc  init(type eltType, const _DomPid, const dom, const _ArrPid, const _ArrInstance, const collapsedDim, const idx, param ownsArrInstance: bool) 

   .. method:: proc  idxType type

   .. method:: proc  rank param

   .. method:: override proc  isRankChangeArrayView() param

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

   .. method:: proc  doiBulkTransferFromKnown( destDom,  srcClass,  srcDom) : bool where this.arr.doiCanBulkTransferRankChange()

   .. method:: proc  doiBulkTransferToKnown( srcDom,  destClass,  destDom) : bool where this.arr.doiCanBulkTransferRankChange()

.. function:: proc chpl_rankChangeConvertIdx( i: integral,  collapsedDim,  idx) 

.. function:: proc chpl_rankChangeConvertIdx( i,  collapsedDim,  idx) 

.. function:: proc chpl_rankChangeConvertIdxHiDToLoD( i,  collapsedDim,  idx, param rank) 

.. function:: proc chpl_rankChangeConvertDownToUp( dims, param uprank,  collapsedDim) 

.. function:: proc chpl_rankChangeConvertDom( dims, param uprank,  collapsedDim,  idx) 

