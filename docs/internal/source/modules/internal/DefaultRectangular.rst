.. default-domain:: chpl

.. module:: DefaultRectangular
   :noindex:

DefaultRectangular
==================
**Usage**

.. code-block:: chapel

   use DefaultRectangular;


or

.. code-block:: chapel

   import DefaultRectangular;

.. data:: config const dataParTasksPerLocale = 0

   .. warning::

      The variable 'dataParTasksPerLocale' is unstable and its interface is subject to change in the future

.. data:: config const dataParIgnoreRunningTasks = false

   .. warning::

      The variable 'dataParIgnoreRunningTasks' is unstable and its interface is subject to change in the future

.. data:: config const dataParMinGranularity: int = 1

   .. warning::

      The variable 'dataParMinGranularity' is unstable and its interface is subject to change in the future

.. data:: config param debugDefaultDist = false

.. data:: config param debugDefaultDistBulkTransfer = false

.. data:: config param debugDataPar = false

.. data:: config param debugDataParNuma = false

.. data:: config param disableArrRealloc = false

.. data:: config param reportInPlaceRealloc = false

.. data:: config param parallelAssignThreshold = 2 * 1024 * 1024

.. data:: config param enableParallelGetsInAssignment = false

.. data:: config param enableParallelPutsInAssignment = false

.. data:: config param defaultDoRADOpt = true

.. data:: config param defaultDisableLazyRADOpt = false

.. data:: config param earlyShiftData = true

.. data:: config param usePollyArrayIndex = false

.. data:: config param defaultRectangularSupportsAutoLocalAccess = true

.. enum:: enum ArrayStorageOrder { RMO, CMO }

   .. enumconstant:: enum constant RMO

   .. enumconstant:: enum constant CMO

.. data:: config param defaultStorageOrder = ArrayStorageOrder.RMO

.. data:: param storageOrder = defaultStorageOrder

.. function:: proc polly_array_index(arguments: int ...) : int

.. class:: DefaultDist : BaseDist

   .. warning::

      DefaultDist is unstable and may change in the future

   .. method:: override proc  dsiNewRectangularDom(param rank: int, type idxType, param strides: strideKind,  inds) 

   .. method:: override proc  dsiNewAssociativeDom(type idxType, param parSafe: bool) 

   .. method:: override proc  dsiNewSparseDom(param rank: int, type idxType,  dom: domain) 

   .. method:: proc  dsiTargetLocales() const ref

   .. method:: proc  dsiIndexToLocale( ind) 

   .. method:: proc  dsiClone() 

   .. method:: proc  dsiAssign( other: this.type) 

   .. method:: proc  dsiEqualDMaps( d: unmanaged(DefaultDist)) param

   .. method:: proc  dsiEqualDMaps( d) param

   .. method:: override proc  trackDomains() param

   .. method:: override proc  dsiTrackDomains() 

   .. method:: override proc  singleton() param

   .. method:: override proc  dsiIsLayout() param

.. data:: var defaultDist = new dmap(new unmanaged DefaultDist())

.. function:: proc chpl_defaultDistInitPrivate() 

.. class:: DefaultRectangularDom : BaseRectangularDom(?)

   .. attribute:: var dist: unmanaged(DefaultDist)

   .. attribute:: var ranges: rank*range(idxType, boundKind.both, strides)

   .. method:: override proc  linksDistribution() param

   .. method:: override proc  dsiLinksDistribution() 

   .. method:: override proc type isDefaultRectangular() param

   .. method:: override proc  isDefaultRectangular() param

   .. method:: proc  init(param rank, type idxType, param strides,  dist) 

   .. method:: proc  chpl_integralIdxType type

   .. method:: override proc  dsiMyDist() 

   .. record:: _serialized_domain

      .. attribute:: param rank

      .. attribute:: type idxType

      .. attribute:: param strides

      .. attribute:: var dims

      .. attribute:: param isDefaultRectangular

   .. method:: proc  chpl__serialize() 

   .. method:: proc type chpl__deserialize( data) 

   .. method:: override proc  dsiDisplayRepresentation() 

   .. method:: proc  dsiGetIndices() 

   .. method:: proc  dsiSetIndices( x) 

   .. method:: proc  dsiAssignDomain( rhs: domain,  lhsPrivate: bool) 

   .. itermethod:: iter  these_help(param d: int) 

   .. itermethod:: iter  these_help(param d: int,  block) 

      
      iter these_help(param d: int) where storageOrder == ArrayStorageOrder.CMO {
        param rd = rank - d + 1;
        if rd == 1 {
          for i in ranges(rd) do
            yield i;
        } else if rd == 2 {
          for i in ranges(rd) do
            for j in these_help(rank-1) do
              yield (j, i);
        } else {
          for i in ranges(rd) do
            for j in these_help(d+1) do
              yield ((...j), i);
        }
      }

   .. itermethod:: iter  these( tasksPerLocale = dataParTasksPerLocale,  ignoreRunning = dataParIgnoreRunningTasks,  minIndicesPerTask = dataParMinGranularity,  offset = createTuple(rank, chpl_integralIdxType, 0: chpl_integralIdxType)) 

      
      iter these_help(param d: int, block) where storageOrder == ArrayStorageOrder.CMO {
        param rd = rank - d + 1;
        if rd == 1 {
          for i in block(rd) do
            yield i;
        } else if rd == 2 {
          for i in block(rd) do
            for j in these_help(block.size, block) do
              yield (j, i);
        } else {
          for i in block(rd) do
            for j in these_help(d+1, block) do
              yield ((...j), i);
        }
      }

   .. itermethod:: iter  these(param tag: iterKind,  tasksPerLocale = dataParTasksPerLocale,  ignoreRunning = dataParIgnoreRunningTasks,  minIndicesPerTask = dataParMinGranularity,  offset = createTuple(rank, chpl_integralIdxType, 0: chpl_integralIdxType))  where tag == iterKind.standalone

   .. itermethod:: iter  these(param tag: iterKind,  tasksPerLocale = dataParTasksPerLocale,  ignoreRunning = dataParIgnoreRunningTasks,  minIndicesPerTask = dataParMinGranularity,  offset = createTuple(rank, chpl_integralIdxType, 0: chpl_integralIdxType))  where tag == iterKind.leader

   .. itermethod:: iter  these(param tag: iterKind,  followThis,  tasksPerLocale = dataParTasksPerLocale,  ignoreRunning = dataParIgnoreRunningTasks,  minIndicesPerTask = dataParMinGranularity,  offset = createTuple(rank, chpl_integralIdxType, 0: chpl_integralIdxType))  where tag == iterKind.follower

   .. method:: proc  dsiMember( ind: rank*idxType) 

   .. method:: proc  dsiIndexOrder( ind: rank*idxType) 

   .. method:: proc  dsiDims() 

   .. method:: proc  dsiDim( d: int) 

   .. method:: proc  dsiDim(param d: int) 

   .. method:: proc  dsiNumIndices 

   .. method:: proc  parSafe param

   .. method:: override proc  dsiLow 

   .. method:: override proc  dsiHigh 

   .. method:: override proc  dsiAlignedLow 

   .. method:: override proc  dsiAlignedHigh 

   .. method:: override proc  dsiStride 

   .. method:: override proc  dsiAlignment 

   .. method:: override proc  dsiFirst 

   .. method:: override proc  dsiLast 

   .. method:: proc  dsiBuildArray(type eltType, param initElts: bool) 

   .. method:: proc  doiTryCreateArray(type eltType)  throws

   .. method:: proc  dsiBuildArrayWith(type eltType,  data: _ddata(eltType),  allocSize: int) 

   .. method:: proc  dsiLocalSlice( ranges) 

   .. method:: proc  dsiTargetLocales() const ref

   .. method:: proc  dsiHasSingleLocalSubdomain() param

   .. method:: proc  dsiLocalSubdomain( loc: locale) 

   .. itermethod:: iter  dsiLocalSubdomains( loc: locale) 

   .. method:: proc  chpl_intToIdx( i) 

.. function:: proc chpl__intToIdx(type idxType,  i: integral, j ...) 

.. function:: proc chpl__intToIdx(type idxType,  i: integral,  j: integral) 

.. function:: proc chpl__intToIdx(type idxType,  i: _tuple) 

.. record:: _remoteAccessData

   .. attribute:: type eltType

   .. attribute:: param rank: int

   .. attribute:: type idxType

   .. attribute:: param strides: strideKind

   .. attribute:: param blkChanged: bool = false

   .. attribute:: var off: rank*idxType

   .. attribute:: var blk: rank*int

   .. attribute:: var str: rank*chpl__signedType(chpl__idxTypeToIntIdxType(idxType))

   .. attribute:: var origin: int

   .. attribute:: var factoredOffs: int

   .. attribute:: var data: _ddata(eltType)

   .. attribute:: var shiftedData: _ddata(eltType)

   .. method:: proc  hasUnitStride() param

   .. method:: proc ref theData ref

   .. method:: proc  getDataElem( i) ref

   .. method:: proc  dataElem( i) ref

   .. method:: proc  shiftedDataElem( i) ref

.. method:: proc  _remoteAccessData.getDataIndex( ind: idxType) 

.. method:: proc  _remoteAccessData.getDataIndex( ind: rank*idxType) 

.. method:: proc ref _remoteAccessData.computeFactoredOffs() 

.. method:: proc ref _remoteAccessData.initShiftedData() 

.. method:: proc  _remoteAccessData.strideAlignUp( lo,  r) 

.. method:: proc  _remoteAccessData.strideAlignDown( hi,  r) 

.. method:: proc ref _remoteAccessData.initDataFrom( other: _remoteAccessData) 

.. method:: proc  _remoteAccessData.toSlice( newDom) 

.. method:: proc  _remoteAccessData.toReindex( newDom) 

.. method:: proc  _remoteAccessData.toRankChange( newDom,  cd,  idx) 

.. class:: LocRADCache

   .. attribute:: type eltType

   .. attribute:: param rank: int

   .. attribute:: type idxType

   .. attribute:: param strides: strideKind

   .. attribute:: var targetLocDom: domain(rank)

   .. attribute:: var RAD: [targetLocDom] _remoteAccessData(eltType, rank, idxType, strides)

   .. attribute:: var RADLocks: [targetLocDom] chpl_LocalSpinlock

   .. method:: proc  init(type eltType, param rank: int, type idxType, param strides: strideKind,  newTargetLocDom: domain(rank)) 

   .. method:: proc  lockRAD( rlocIdx) 

   .. method:: proc  unlockRAD( rlocIdx) 

.. class:: DefaultRectangularArr : BaseRectangularArr(?)

   .. attribute:: type idxSignedType = chpl__signedType(chpl__idxTypeToIntIdxType(idxType))

   .. attribute:: var dom: unmanaged(DefaultRectangularDom(rank = rank, idxType = idxType, strides = strides))

   .. attribute:: var off: rank*idxType

   .. attribute:: var blk: rank*int

   .. attribute:: var sizesPerDim: rank*int

   .. attribute:: var str: rank*idxSignedType

   .. attribute:: var factoredOffs: int

   .. attribute:: var data: _ddata(eltType) = nil

   .. attribute:: var shiftedData: _ddata(eltType)

   .. attribute:: var externFreeFunc: c_ptr(void)

   .. attribute:: var externArr: bool = false

   .. attribute:: var _borrowed: bool = true

   .. attribute:: var callPostAlloc: bool = true

   .. attribute:: var deinitElts: bool = true

   .. method:: proc  init(type eltType, param rank, type idxType, param strides,  dom: unmanaged(DefaultRectangularDom(rank = rank, idxType = idxType, strides = strides)), param initElts = true, param deinitElts = initElts,  data: _ddata(eltType) = nil,  externArr = false,  _borrowed = false,  externFreeFunc: c_ptr(void) = nil) 

   .. method:: proc  chpl_integralIdxType type

   .. method:: override proc  dsiDisplayRepresentation() 

   .. method:: override proc  dsiGetBaseDom() 

   .. method:: override proc  dsiElementInitializationComplete() 

   .. method:: override proc  dsiElementDeinitializationComplete() 

   .. method:: override proc  chpl_unsafeAssignIsClassElementNil( manager,  idx)  where idx.type == rank * idxType

   .. method:: override proc  dsiDestroyArr( deinitElts: bool) 

   .. method:: proc  theData ref

   .. itermethod:: iter  these( tasksPerLocale: int = dataParTasksPerLocale,  ignoreRunning: bool = dataParIgnoreRunningTasks,  minIndicesPerTask: int = dataParMinGranularity) ref

   .. itermethod:: iter  these(param tag: iterKind,  tasksPerLocale = dataParTasksPerLocale,  ignoreRunning = dataParIgnoreRunningTasks,  minIndicesPerTask = dataParMinGranularity) ref where tag == iterKind.standalone

   .. itermethod:: iter  these(param tag: iterKind,  tasksPerLocale = dataParTasksPerLocale,  ignoreRunning = dataParIgnoreRunningTasks,  minIndicesPerTask = dataParMinGranularity)  where tag == iterKind.leader

   .. itermethod:: iter  these(param tag: iterKind,  followThis,  tasksPerLocale = dataParTasksPerLocale,  ignoreRunning = dataParIgnoreRunningTasks,  minIndicesPerTask = dataParMinGranularity) ref where tag == iterKind.follower

   .. method:: proc  computeFactoredOffs() 

   .. method:: proc  initShiftedData() 

   .. method:: proc  setupFieldsAndAllocate(param initElts) 

   .. method:: proc  getDataIndex(ind: idxType ...1, param getShifted = true)  where rank == 1

   .. method:: proc  getDataIndex( ind: rank*idxType, param getShifted = true) 

   .. method:: proc  dsiAccess(ind: idxType ...1) ref where rank == 1

   .. method:: proc  dsiAccess(ind: idxType ...1)  where rank == 1 && shouldReturnRvalueByValue(eltType)

   .. method:: proc  dsiAccess(ind: idxType ...1) const ref where rank == 1

   .. method:: proc  dsiAccess(const in ind: rank*idxType) ref

   .. method:: proc  dsiAccess(const in ind: rank*idxType)  where shouldReturnRvalueByValue(eltType)

   .. method:: proc  dsiAccess(const in ind: rank*idxType) const ref

   .. method:: proc  dsiBoundsCheck( i) 

   .. method:: proc  adjustBlkOffStrForNewDomain( d: unmanaged(DefaultRectangularDom),  alias: unmanaged(DefaultRectangularArr)) 

   .. method:: proc  adjustBlkOffStrForNewDomain( d: unmanaged(DefaultRectangularDom),  alias: unmanaged(DefaultRectangularArr))  where dom.hasUnitStride() && this.hasUnitStride()

   .. method:: override proc  dsiReallocate( bounds: rank*range(idxType, boundKind.both, strides)) 

   .. method:: override proc  dsiPostReallocate() 

   .. method:: proc  dsiLocalSlice( ranges) 

   .. method:: proc  dsiGetRAD() 

   .. method:: proc  dsiTargetLocales() const ref

   .. method:: proc  dsiHasSingleLocalSubdomain() param

   .. method:: proc  dsiLocalSubdomain( loc: locale) 

   .. itermethod:: iter  dsiLocalSubdomains( loc: locale) 

   .. method:: override proc  dsiIteratorYieldsLocalElements() param

.. iterfunction:: iter chpl__serialViewIter1D( arr,  viewRange) ref where chpl__isDROrDRView(arr)

.. iterfunction:: iter chpl__serialViewIter( arr,  viewDom) ref where chpl__isDROrDRView(arr)

.. iterfunction:: iter chpl__serialViewIter( arr,  viewDom) ref

.. iterfunction:: iter chpl__serialViewIterHelper( arr,  viewDom) ref

.. method:: proc  DefaultRectangularDom.dsiSerialReadWrite( f)  throws

.. method:: proc  DefaultRectangularDom.dsiSerialWrite( f)  throws where _supportsSerializers(f) && !isDefaultSerializerType(f.serializerType)

.. method:: proc  DefaultRectangularDom.dsiSerialRead( f)  throws where _supportsSerializers(f) && f.deserializerType != IO.defaultDeserializer

.. method:: proc  DefaultRectangularDom.doiToString() 

.. method:: proc  DefaultRectangularDom.dsiSerialWrite( f)  throws

.. method:: proc  DefaultRectangularDom.dsiSerialRead( f)  throws

.. method:: proc  DefaultRectangularArr.dsiSerialReadWrite( f)  throws

.. method:: override proc  DefaultRectangularDom.dsiSupportsAutoLocalAccess() param

.. function:: proc chpl_serialReadWriteRectangular( f,  arr)  throws

.. function:: proc chpl_serialReadWriteRectangular( f,  arr,  dom)  throws

.. function:: proc _supportsBulkElements( f,  arr) param: bool

.. function:: proc _supportsSerializers( f) param: bool

.. function:: proc chpl_serialReadWriteRectangularHelper( f,  arr,  dom)  throws where _supportsSerializers(f)

.. function:: proc chpl_serialReadWriteRectangularHelper( f,  arr,  dom)  throws

.. method:: proc  DefaultRectangularArr.dsiSerialWrite( f)  throws

.. method:: proc  DefaultRectangularArr.dsiSerialRead( f)  throws

.. method:: proc  DefaultRectangularArr.isDataContiguous( dom: domain) 

.. method:: proc  DefaultRectangularArr.isDataContiguous( dom: range) 

.. method:: proc  DefaultRectangularArr.isDataContiguous( dom) 

.. method:: override proc  DefaultRectangularArr.doiCanBulkTransferRankChange() param

.. method:: proc  DefaultRectangularArr.doiBulkTransferToKnown( srcDom,  destClass: DefaultRectangularArr,  destDom) : bool

.. method:: proc  DefaultRectangularArr.doiBulkTransferFromKnown( destDom,  srcClass: DefaultRectangularArr,  srcDom) : bool

.. method:: override proc  DefaultRectangularArr.isDefaultRectangular() param

.. method:: override proc type DefaultRectangularArr.isDefaultRectangular() param

.. data:: config param debugDRScan = false

.. method:: proc  DefaultRectangularArr.doiScan( op,  dom)  where rank == 1 && chpl__scanStateResTypesMatch(op)

   This computes a 1D scan in parallel on the array, for 1D arrays only 

.. method:: proc  DefaultRectangularArr.doiOptimizedSwap( other: this.type) 

.. method:: proc  DefaultRectangularArr.doiOptimizedSwap( other)  where debugOptimizedSwap

.. method:: proc  DefaultRectangularArr.chpl__preScan( op, ref res: [] ?resType,  dom) 

.. method:: proc  DefaultRectangularArr.chpl__postScan( op, ref res,  numTasks,  rngs,  state) 

