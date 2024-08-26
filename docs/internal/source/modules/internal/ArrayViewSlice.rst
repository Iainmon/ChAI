.. default-domain:: chpl

.. module:: ArrayViewSlice
   :noindex:

ArrayViewSlice
==============
**Usage**

.. code-block:: chapel

   use ArrayViewSlice;


or

.. code-block:: chapel

   import ArrayViewSlice;

.. data:: param chpl_debugSerializeSlice = false

.. data:: param chpl_serializeSlices = false

.. class:: ArrayViewSliceArr : AbsBaseArr(?)

   .. attribute:: const _DomPid

   .. attribute:: var dom

   .. attribute:: const _ArrPid

   .. attribute:: const _ArrInstance

   .. attribute:: const indexCache

   .. method:: proc  init(type eltType, const _DomPid, const dom, const _ArrPid, const _ArrInstance) 

   .. method:: proc  chpl__rvfMe() param

   .. method:: proc  chpl__serialize()  where chpl__rvfMe()

   .. method:: proc type chpl__deserialize( data) 

   .. method:: proc  idxType type

   .. method:: proc  rank param

   .. method:: override proc  isSliceArrayView() param

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

   .. method:: proc  dsiBoundsCheck( i) 

   .. method:: proc  dsiHasSingleLocalSubdomain() param

   .. method:: proc  dsiLocalSubdomain( loc: locale) 

   .. itermethod:: iter  dsiLocalSubdomains( loc: locale) 

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

