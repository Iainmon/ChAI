.. default-domain:: chpl

.. module:: ChapelArray
   :noindex:

ChapelArray
===========
**Usage**

.. code-block:: chapel

   use ChapelArray;


or

.. code-block:: chapel

   import ChapelArray;

.. data:: var numPrivateObjects: chpl__processorAtomicType(int)

.. data:: param nullPid = -1

.. data:: config param debugBulkTransfer = false

.. data:: config param useBulkTransfer = true

.. data:: config param useBulkTransferStride = true

.. data:: config param useBulkPtrTransfer = useBulkTransfer

.. data:: config param disableConstDomainOpt = false

.. data:: config param debugOptimizedSwap = false

.. data:: config param PODValAccess = true

.. data:: config param useBulkTransferDist = false

.. data:: config param arrayAsVecGrowthFactor = 1.5

.. data:: config param debugArrayAsVec = false

.. data:: config param logDistArrEltAccess = false

.. data:: config param logAllArrEltAccess = false

.. function:: proc _isPrivatized( value) param

.. function:: proc _newPrivatizedClass( value) : int

.. function:: proc _freePrivatizedClass( pid: int,  original: RootClass) : void

.. function:: proc _reprivatize( value) : void

.. function:: proc _makeIndexTuple(param rank,  t: _tuple, param concept: string, param expand: bool = false) 

.. function:: proc _makeIndexTuple(param rank,  val: integral, param concept: string, param expand: bool = false) 

.. function:: proc _makeIndexTuple(param rank,  val, param concept: string, param expand: bool = false) 

.. function:: proc _newArray( value) 

.. function:: proc _getDistribution( value) 

.. function:: proc chpl__buildArrayRuntimeType( dom: domain, type eltType) type

.. function:: proc chpl__convertRuntimeTypeToValue( dom: domain, type eltType, param isNoInit: bool,  definedConst: bool) 

.. function:: proc chpl__convertValueToRuntimeType( arr: []) type

.. data:: config param CHPL_WARN_DOMAIN_LITERAL = "unset"

   
   * Support for array literal expressions.
   *
   * Array literals are detected during parsing and converted
   * to a call expr.  Array values pass through the various
   * compilation phases as regular parameters.
   *
   * NOTE:  It would be nice to define a second, less specific, function
   *        to handle the case of multiple types, however this is not
   *        possible atm due to using var args with a query type. 

.. data:: config param arrayLiteralLowBound = defaultLowBound

.. data:: config param capturedIteratorLowBound = defaultLowBound

.. function:: proc chpl__buildArrayExpr(in elems ...?k) 

.. function:: proc chpl_computeUnifiedType( x: _tuple) type

.. function:: proc chpl_computeUnifiedTypeHelp( x: _tuple,  j: int = 0) 

.. function:: proc chpl__buildAssociativeArrayExpr(const elems ...?k) 

.. function:: proc chpl_incRefCountsForDomainsInArrayEltTypes( arr: unmanaged(BaseArr), type eltType) 

.. function:: proc chpl_decRefCountsForDomainsInArrayEltTypes( arr: unmanaged(BaseArr), type eltType) 

.. function:: proc chpl__distributed( d,  dom: domain,  definedConst: bool) 

.. function:: proc chpl__distributed( d,  expr,  definedConst: bool) 

.. function:: proc chpl__isArrayView( arr) param

.. function:: proc chpl__getActualArray( arr) 

.. function:: proc chpl__isDROrDRView( arg) param

.. function:: proc chpl__isDomainView( dom) param

.. function:: proc chpl__getActualDomain( dom) 

.. function:: proc chpl__distributed( d, type domainType,  definedConst: bool) type

.. function:: proc chpl__distributionFromDomainRuntimeType(type rtt) 

.. function:: proc chpl__eltTypeFromArrayRuntimeType(type rtt) type

.. function:: proc chpl__instanceTypeFromArrayRuntimeType(type rtt) type

.. function:: proc chpl__instanceTypeFromDomainRuntimeType(type rtt) type

.. function:: proc chpl__buildIndexType(param rank: int, type idxType) type where rank == 1

.. function:: proc chpl__buildIndexType(param rank: int, type idxType) type where rank > 1

.. function:: proc chpl__buildIndexType(param rank: int) type

.. function:: proc chpl__buildIndexType( d: domain) type

.. function:: proc chpl__checkRetEltTypeMatch( a: [], type b) 

.. function:: proc chpl__checkRetEltTypeMatch( a: _iteratorRecord, type b) 

.. function:: proc chpl__checkOutEltTypeMatch( a: [], type b) 

.. function:: proc chpl__checkOutEltTypeMatch( a: _iteratorRecord, type b) 

.. record:: dmap

   .. warning::

      the type 'dmap' is unstable, instead please use distribution factory functions when available

.. function:: proc chpl__buildDistType(type t) type where isSubtype(_to_borrowed(t), BaseDist)

.. function:: proc chpl__buildDistType(type t: record) type

.. function:: proc chpl__buildDistType(type t) 

.. function:: proc chpl__buildDistValue( x: unmanaged)  where isSubtype(x.borrow().type, BaseDist)

.. function:: proc chpl__buildDistValue(in x: owned)  where isSubtype(x.borrow().type, BaseDist)

.. function:: proc chpl__buildDistValue(const ref x: record) const ref

.. function:: proc chpl__buildDistValue( x) 

.. function:: proc chpl__buildDistDMapValue(const ref x: record) const ref

.. function:: proc chpl__buildDistDMapValue( x: unmanaged)  where isSubtype(x.borrow().type, BaseDist)

.. function:: proc chpl__buildDistDMapValue(in x: owned)  where isSubtype(x.borrow().type, BaseDist)

.. function:: operator ==( d1: _distribution(?),  d2: _distribution(?)) 

.. function:: operator ==( d1: _distribution(?),  d2: record) param

.. function:: operator ==( d1: record,  d2: _distribution(?)) param

.. function:: operator !=( d1: _distribution(?),  d2: _distribution(?)) 

.. function:: operator !=( d1: _distribution(?),  d2: record) param

.. function:: operator !=( d1: record,  d2: _distribution(?)) param

.. function:: proc chpl_defaultComparator() 

.. function:: proc shouldReturnRvalueByValue(type t) param

.. record:: _array : writeSerializable, readDeserializable

   The array type 

   .. attribute:: var _pid: int

   .. attribute:: var _instance

   .. attribute:: var _unowned: bool

   .. method:: proc  chpl__serialize()  where _instance.chpl__rvfMe()

   .. method:: proc type chpl__deserialize( data) 

   .. method:: proc  chpl__promotionType() type

   .. method:: proc  _value 

   .. method:: proc  deinit() 

   .. method:: proc  eltType type

      The type of elements contained in the array 

   .. method:: proc  idxType type

      The type used to represent the array's indices.  For a
      multidimensional array, this is the per-dimension type used. 

   .. method:: proc  fullIdxType type

      The type used to represent the array's indices.  For a
      1-dimensional or associative array, this will be the same as
      :proc:`idxType` above.  For a multidimensional array, it will be
      :proc:`rank` * :proc:`idxType`. 

   .. method:: proc  _dom 

   .. method:: proc  rank param

      The number of dimensions in the array 

   .. method:: proc  strides param

      The strides value of the underlying domain 

   .. method:: proc  hasUnitStride() param

   .. method:: proc  hasPosNegUnitStride() param

   .. method:: proc  indices  where !this.isSparse() && !this.isAssociative()

      
      Return a dense rectangular array's indices as a default domain.
      

   .. itermethod:: iter  indices  where this.isSparse() || this.isAssociative()

      
      Yield an irregular array's indices.
      

   .. method:: proc  checkAccess( indices,  value) 

   .. method:: proc  checkSlice( d: domain,  value) 

   .. method:: proc  checkSlice(ranges ...rank,  value)  where chpl__isTupleOfRanges(ranges)

   .. method:: proc ref this(const i: rank*_value.dom.idxType) ref

   .. method:: proc const this(const i: rank*_value.dom.idxType)  where shouldReturnRvalueByValue(_value.eltType)

   .. method:: proc const this(const i: rank*_value.dom.idxType) const ref

   .. method:: proc ref this(const i: _value.dom.idxType ...rank) ref

   .. method:: proc const this(const i: _value.dom.idxType ...rank)  where shouldReturnRvalueByValue(_value.eltType)

   .. method:: proc const this(const i: _value.dom.idxType ...rank) const ref

   .. method:: proc ref localAccess( i: rank*_value.dom.idxType) ref

   .. method:: proc const localAccess( i: rank*_value.dom.idxType)  where shouldReturnRvalueByValue(_value.eltType)

   .. method:: proc const localAccess( i: rank*_value.dom.idxType) const ref

   .. method:: proc ref localAccess(i: _value.dom.idxType ...rank) ref

   .. method:: proc const localAccess(i: _value.dom.idxType ...rank)  where shouldReturnRvalueByValue(_value.eltType)

   .. method:: proc const localAccess(i: _value.dom.idxType ...rank) const ref

   .. method:: proc  this( d: domain) 

   .. method:: proc  this(ranges ...rank)  where chpl__isTupleOfRanges(ranges)

   .. method:: proc  this(args ...rank)  where _validRankChangeArgs(args, _value.dom.idxType)

   .. method:: proc  dims() 

      
      Return a tuple of ranges describing the bounds of a rectangular domain.
      For a sparse domain, return the bounds of the parent domain.
      

   .. method:: proc  dim( d: int) 

      
      Return a range representing the boundary of this
      domain in a particular dimension.
      

   .. method:: proc  dim(param d: int) 

   .. method:: proc  checkRankChange( args) 

   .. method:: proc  localSlice(r ...rank)  where chpl__isDROrDRView(this) && chpl__isTupleOfRanges(r)

   .. method:: proc  localSlice( d: domain)  where chpl__isDROrDRView(this)

   .. method:: proc  tryCopy()  throws

      .. warning::

         tryCopy() is subject to change in the future.

   .. method:: proc  chpl__localSliceDefaultArithArrHelp( d: domain) 

   .. method:: proc  localSlice(r ...rank)  where chpl__isTupleOfRanges(r) && !chpl__isDROrDRView(this)

   .. method:: proc  localSlice( d: domain) 

   .. itermethod:: iter  these() ref

      Yield the array elements 

   .. itermethod:: iter  these(param tag: iterKind) ref where tag == iterKind.standalone && __primitive("resolves", _value.these(tag = tag))

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.leader

   .. itermethod:: iter  these(param tag: iterKind,  followThis, param fast: bool = false) ref where tag == iterKind.follower

   .. method:: proc  size : int

      Return the number of elements in the array 

   .. method:: proc  sizeAs(type t: integral) : t

      Return the number of elements in the array as the specified type. 

   .. method:: proc  chpl_checkArrArgDoms( formalDom: domain, param runtimeChecks: bool) 

   .. method:: proc  reindex( newDomain: domain)  where this.domain.isRectangular() && newDomain.isRectangular()

      
      Return an array view over a new domain. The new domain must be
      of the same rank and size as the original array's domain.
      
      For example:
      
      .. code-block:: chapel
      
         var A: [1..10] int;
         const D = {6..15};
         ref reA = A.reindex(D);
         reA[6] = 1; // updates A[1]
      

   .. method:: proc  reindex(newDims ...)  where this.domain.isRectangular()

      
      Return an array view over a new domain defined implicitly
      by one or more `newDims`, which must be ranges. The new domain must be
      of the same rank and size as the original array's domain.
      
      For example:
      
      .. code-block:: chapel
      
         var A: [3..4, 5..6] int;
         ref reA = A.reindex(13..14, 15..16);
         reA[13,15] = 1; // updates A[3,5]
      

   .. method:: proc  reindex( d: domain) 

   .. method:: proc  serialize( writer, ref serializer)  throws

   .. method:: proc ref deserialize( reader, ref deserializer)  throws

   .. method:: proc type deserializeFrom( reader, ref deserializer)  throws

   .. method:: proc  IRV  where !this.isSparse()

      Return the Implicitly Represented Value for sparse arrays 

   .. method:: proc  IRV ref where this.isSparse()

   .. method:: proc  displayRepresentation() 

   .. method:: proc  targetLocales() const ref

      
      Return an array of locales over which this array has been distributed.
      

   .. method:: proc  hasSingleLocalSubdomain() param

      .. warning::

         'hasSingleLocalSubdomain' on arrays is unstable and may change in the future

      Return true if the local subdomain can be represented as a single
      domain. Otherwise return false. 

   .. method:: proc  localSubdomain( loc: locale = here) 

      
      Return the subdomain that is local to `loc`.
      
      :arg loc: indicates the locale for which the query should take
                place (defaults to `here`)
      :type loc: locale
      

   .. itermethod:: iter  localSubdomains( loc: locale = here) 

      .. warning::

         'localSubdomains' on arrays is unstable and may change in the future

      
      Yield the subdomains that are local to `loc`.
      
      :arg loc: indicates the locale for which the query should take
                place (defaults to `here`)
      :type loc: locale
      

   .. method:: proc  chpl__isDense1DArray() param

   .. method:: proc  isEmpty() : bool

      Return true if the array has no elements 

   .. method:: proc  last 

      Return the last element in the array. The array must be a
      rectangular 1-D array.
      

   .. method:: proc  first 

      Return the first element in the array. The array must be a
      rectangular 1-D array.
      

   .. method:: proc  find( val: eltType, ref idx: fullIdxType) : bool

      
      
      Search an array for ``val``, returning whether or not it is
      found.  If the value is found, the index storing it is returned
      in ``idx``.  If multiple copies of it are found, the
      lexicographically earliest index will be returned.  If it is not
      found, the resulting value of ``idx`` is unspecified.
      
      

   .. method:: proc  find( val: eltType) : fullIdxType

      
      
      Search a rectangular array with integral indices for ``val``,
      returning the index where it is found.  If the array contains
      multiple copies of ``val``, the lexicographically earliest index
      will be returned.  If ``val`` is not found,
      ``domain.lowBound-1`` will be returned instead.
      
      Note that for arrays with ``idxType=int(?w)`` (signed ``int``
      indices), if the low bound in a dimension is ``min(int(w))``,
      the result will not be well-defined.
      
      

   .. method:: proc  count( val: this.eltType) : int

      Return the number of times ``val`` occurs in the array. 

   .. method:: proc  shape : rank*int where this.isRectangular() || this.isSparse()

      Return a tuple of integers describing the size of each dimension.
      For a sparse array, returns the shape of the parent domain.

   .. method:: proc  shape  where this.isAssociative()

      Associative domains assumed to be 1-D. 

   .. method:: proc  shape 

      Unsupported case 

   .. method:: proc  _scan( op)  where Reflection.canResolveMethod(_value, "doiScan", op, this.domain)

   .. method:: proc  iteratorYieldsLocalElements() param

   .. method:: proc  chpl_isNonDistributedArray() param

   .. method:: proc  isRectangular() param

      Return true if the argument ``a`` is an array with a rectangular
      domain.  Otherwise return false. 

   .. method:: proc  isIrregular() param

      Return true if ``a`` is an array with an irregular domain; e.g. not
      rectangular. Otherwise return false. 

   .. method:: proc  isAssociative() param

      Return true if ``a`` is an array with an associative domain. Otherwise
      return false. 

   .. method:: proc  isSparse() param

      Return true if ``a`` is an array with a sparse domain. Otherwise
      return false. 

.. function:: proc _do_destroy_arr( _unowned: bool,  _instance,  deinitElts = true) 

.. function:: proc _do_destroy_array( array: _array,  deinitElts = true) 

.. function:: proc _deinitElementsIsParallel(type eltType,  size: integral) 

.. function:: proc _deinitElements(ref array: _array) 

.. method:: proc  _array.equals( that: _array) : bool

   .. warning::

      the 'Array.equals()' method is unstable

   Return true if all this array is the same size and shape
   as argument ``that`` and all elements of this array are
   equal to the corresponding element in ``that``. Otherwise
   return false. 

.. function:: operator :(param arg, type t: _array) 

.. function:: operator :( x: [], type t: string) 

   .. warning::

      casting arrays to string is deprecated; please use 'try! "%?".format()' from IO.FormattedIO instead

.. function:: operator :(in x: [] ?et, type t: et)  where t == et

.. function:: operator #( arr: [],  counts: integral) 

.. function:: operator #( arr: [],  counts: _tuple) 

.. function:: operator #( arr: [],  counts) 

.. function:: proc isCollapsedDimension( r: range(?e, ?b, ?s, ?a)) param

.. function:: proc isCollapsedDimension( r) param

.. function:: proc chpl__countRanges( arg) param

.. function:: proc chpl__countRanges( arg, args ...) param

.. function:: proc _validRankChangeArgs( args, type idxType) param

.. function:: operator  = (ref a: _distribution,  b: _distribution) 

   .. warning::

      assignment between distributions is currently unstable due to lack of testing

.. function:: proc chpl__serializeAssignment( a,  b) param

.. function:: proc chpl__compatibleForBulkTransfer( a,  b, param kind: _tElt) param

.. function:: proc chpl__supportedDataTypeForBulkTransfer(type t) param

.. function:: proc chpl__supportedDataTypeForBulkTransfer( x: string) param

.. function:: proc chpl__supportedDataTypeForBulkTransfer( x: bytes) param

.. function:: proc chpl__supportedDataTypeForBulkTransfer( x: sync) param

.. function:: proc chpl__supportedDataTypeForBulkTransfer( x: single) param

.. function:: proc chpl__supportedDataTypeForBulkTransfer( x: domain) param

.. function:: proc chpl__supportedDataTypeForBulkTransfer( x: []) param

.. function:: proc chpl__supportedDataTypeForBulkTransfer( x: _distribution) param

.. function:: proc chpl__supportedDataTypeForBulkTransfer( x: locale) param

.. function:: proc chpl__supportedDataTypeForBulkTransfer( x: chpl_anycomplex) param

.. function:: proc chpl__supportedDataTypeForBulkTransfer( x: borrowed(RootClass)) param

.. function:: proc chpl__supportedDataTypeForBulkTransfer( x) param

.. function:: proc checkArrayShapesUponAssignment( a,  b,  forSwap = false) 

.. function:: operator  = (ref a: [],  b: []) 

.. function:: operator  = (ref a: chpl__protoSlice,  b: chpl__protoSlice) 

.. enum:: enum _tElt { move, initCopy, assign }

   .. enumconstant:: enum constant move

   .. enumconstant:: enum constant initCopy

   .. enumconstant:: enum constant assign

.. function:: proc chpl__uncheckedArrayTransfer(ref a,  b, param kind) 

.. function:: proc chpl__initAfterBulkTransfer(ref a, param kind) 

.. function:: proc chpl__compatibleForWidePtrBulkTransfer( a,  b, param kind = _tElt.assign) param

.. function:: proc chpl__bulkTransferPtrArray(ref a: [],  b: []) 

.. function:: proc chpl__bulkTransferArray(ref a: [?AD],  b: [?BD]) 

.. function:: proc chpl__bulkTransferArray(ref a: chpl__protoSlice,  b: chpl__protoSlice) 

.. function:: proc chpl__bulkTransferArray(ref a: [],  AD, const ref b: [],  BD) 

.. function:: proc chpl__bulkTransferArray( destClass,  destView,  srcClass,  srcView) 

.. function:: proc chpl__transferArray(ref a, const ref b, param kind = _tElt.assign, param alwaysSerialize = false) 

.. function:: proc chpl__transferArray(ref a: [], param b, param kind = _tElt.assign) 

.. function:: operator  = (ref a: [],  b: domain) 

.. function:: operator  = (ref a: [],  b: range(?)) 

.. function:: operator  = (ref a: [],  b: _iteratorRecord) 

.. function:: operator  = (ref a: [],  b: ?t)  where !(isTupleType(t) || isCoercible(t, _desync(a.eltType)))

.. function:: operator  = (ref a: [],  b: _tuple)  where a.isRectangular()

.. function:: proc _desync(type t: _syncvar) type

.. function:: proc _desync(type t: _singlevar) type

.. function:: proc _desync(type t) type where isAtomicType(t)

.. function:: proc _desync(type t: _array) type

   Or, we could explicitly overload for each atomic type since there
      are a fixed number
   proc _desync(type t: atomic int) type {
     return int;
   } 

.. function:: proc _desync(type t) type

.. function:: operator  = (ref a: [],  b: _desync(a.eltType)) 

.. function:: operator  = (ref a: [],  b: _desync(a.eltType))  where isSyncType(a.eltType)

   .. warning::

      Direct assignment to 'sync' variables is deprecated; apply a 'write??()' method to modify one

.. function:: operator  = (ref a: [],  b: _desync(a.eltType))  where isSingleType(a.eltType)

   .. warning::

      Direct assignment to 'single' variables is deprecated; apply '.writeEF()' to modify one

.. function:: operator +=(ref a: [],  b: _desync(a.eltType)) 

.. function:: operator +=(ref a: [],  b: _desync(a.eltType))  where isSyncType(a.eltType)

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator +=(ref a: [],  b: _desync(a.eltType))  where isSingleType(a.eltType)

   .. warning::

      'op=' assignments to 'single' variables are deprecated; add explicit '.read??'/'.writeEF' methods to modify one

.. function:: operator -=(ref a: [],  b: _desync(a.eltType)) 

.. function:: operator -=(ref a: [],  b: _desync(a.eltType))  where isSyncType(a.eltType)

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator -=(ref a: [],  b: _desync(a.eltType))  where isSingleType(a.eltType)

   .. warning::

      'op=' assignments to 'single' variables are deprecated; add explicit '.read??'/'.writeEF' methods to modify one

.. function:: operator *=(ref a: [],  b: _desync(a.eltType)) 

.. function:: operator *=(ref a: [],  b: _desync(a.eltType))  where isSyncType(a.eltType)

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator *=(ref a: [],  b: _desync(a.eltType))  where isSingleType(a.eltType)

   .. warning::

      'op=' assignments to 'single' variables are deprecated; add explicit '.read??'/'.writeEF' methods to modify one

.. function:: operator /=(ref a: [],  b: _desync(a.eltType)) 

.. function:: operator /=(ref a: [],  b: _desync(a.eltType))  where isSyncType(a.eltType)

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator /=(ref a: [],  b: _desync(a.eltType))  where isSingleType(a.eltType)

   .. warning::

      'op=' assignments to 'single' variables are deprecated; add explicit '.read??'/'.writeEF' methods to modify one

.. function:: operator %=(ref a: [],  b: _desync(a.eltType)) 

.. function:: operator %=(ref a: [],  b: _desync(a.eltType))  where isSyncType(a.eltType)

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator %=(ref a: [],  b: _desync(a.eltType))  where isSingleType(a.eltType)

   .. warning::

      'op=' assignments to 'single' variables are deprecated; add explicit '.read??'/'.writeEF' methods to modify one

.. function:: operator **=(ref a: [],  b: _desync(a.eltType)) 

.. function:: operator **=(ref a: [],  b: _desync(a.eltType))  where isSyncType(a.eltType)

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator **=(ref a: [],  b: _desync(a.eltType))  where isSingleType(a.eltType)

   .. warning::

      'op=' assignments to 'single' variables are deprecated; add explicit '.read??'/'.writeEF' methods to modify one

.. function:: operator &=(ref a: [],  b: _desync(a.eltType)) 

.. function:: operator &=(ref a: [],  b: _desync(a.eltType))  where isSyncType(a.eltType)

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator &=(ref a: [],  b: _desync(a.eltType))  where isSingleType(a.eltType)

   .. warning::

      'op=' assignments to 'single' variables are deprecated; add explicit '.read??'/'.writeEF' methods to modify one

.. function:: operator |=(ref a: [],  b: _desync(a.eltType)) 

.. function:: operator |=(ref a: [],  b: _desync(a.eltType))  where isSyncType(a.eltType)

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator |=(ref a: [],  b: _desync(a.eltType))  where isSingleType(a.eltType)

   .. warning::

      'op=' assignments to 'single' variables are deprecated; add explicit '.read??'/'.writeEF' methods to modify one

.. function:: operator ^=(ref a: [],  b: _desync(a.eltType)) 

.. function:: operator ^=(ref a: [],  b: _desync(a.eltType))  where isSyncType(a.eltType)

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator ^=(ref a: [],  b: _desync(a.eltType))  where isSingleType(a.eltType)

   .. warning::

      'op=' assignments to 'single' variables are deprecated; add explicit '.read??'/'.writeEF' methods to modify one

.. function:: operator >>=(ref a: [],  b: _desync(a.eltType)) 

.. function:: operator >>=(ref a: [],  b: _desync(a.eltType))  where isSyncType(a.eltType)

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator >>=(ref a: [],  b: _desync(a.eltType))  where isSingleType(a.eltType)

   .. warning::

      'op=' assignments to 'single' variables are deprecated; add explicit '.read??'/'.writeEF' methods to modify one

.. function:: operator <<=(ref a: [],  b: _desync(a.eltType)) 

.. function:: operator <<=(ref a: [],  b: _desync(a.eltType))  where isSyncType(a.eltType)

   .. warning::

      'op=' assignments to 'sync' variables are deprecated; add explicit '.read??'/'.write??' methods to modify one

.. function:: operator <<=(ref a: [],  b: _desync(a.eltType))  where isSingleType(a.eltType)

   .. warning::

      'op=' assignments to 'single' variables are deprecated; add explicit '.read??'/'.writeEF' methods to modify one

.. function:: operator <=>(ref x: [?xD], ref y: [?yD]) 

.. function:: proc reshape( A: [],  D: domain) 

   Return a copy of the array ``A`` containing the same values but
   in the shape of the domain ``D``. The number of indices in the
   domain must equal the number of elements in the array. The
   elements of ``A`` are copied into the new array using the
   default iteration orders over ``D`` and ``A``.  

.. function:: proc reshape( A: _iteratorRecord,  D: domain) 

.. iterfunction:: iter linearize( Xs) 

.. function:: proc chpl__initCopy(const ref rhs: domain,  definedConst: bool)  where rhs.isRectangular()

.. function:: proc chpl__initCopy(const ref rhs: domain,  definedConst: bool)  where rhs.isAssociative()

.. function:: proc chpl__initCopy(const ref rhs: domain,  definedConst: bool)  where rhs.isSparse()

.. function:: proc chpl__autoCopy(const ref x: domain,  definedConst: bool) 

.. data:: param localizeConstDomains = false

.. data:: param debugLocalizedConstDomains = false

.. function:: proc chpl__initCopy(const ref rhs: [],  definedConst: bool) 

.. function:: proc chpl__autoCopy( x: [],  definedConst: bool) 

.. function:: proc chpl__coerceHelp(type dstType: domain,  definedConst: bool) 

.. function:: proc chpl__coerceCopy(type dstType: _array,  rhs: _array,  definedConst: bool) 

.. function:: proc chpl__coerceMove(type dstType: _array, in rhs: _array,  definedConst: bool) 

.. function:: proc chpl__coerceCopy(type dstType: _array,  rhs: _domain,  definedConst: bool) 

.. function:: proc chpl__coerceMove(type dstType: _array, in rhs: _domain,  definedConst: bool) 

.. function:: proc chpl__coerceCopy(type dstType: _array,  rhs: range(?),  definedConst: bool) 

.. function:: proc chpl__coerceMove(type dstType: _array, in rhs: range(?),  definedConst: bool) 

.. function:: proc chpl__coerceCopy(type dstType: _array,  rhs: _tuple,  definedConst: bool) 

.. function:: proc chpl__coerceMove(type dstType: _array, in rhs: _tuple,  definedConst: bool) 

.. function:: proc chpl__coerceCopy(type dstType: _array,  rhs: desyncEltType(dstType),  definedConst: bool) 

.. function:: proc chpl__coerceMove(type dstType: _array, in rhs: desyncEltType(dstType),  definedConst: bool) 

.. function:: proc chpl__coerceCopy(type dstType: _array,  rhs: _iteratorRecord,  definedConst: bool) 

.. function:: proc chpl__coerceMove(type dstType: _array,  rhs: _iteratorRecord,  definedConst: bool) 

.. function:: proc chpl__coerceCopy(type dstType: _array,  rhs,  definedConst: bool) 

.. function:: proc chpl__coerceMove(type dstType: _array, in rhs,  definedConst: bool) 

.. function:: proc chpl__unref( x: [])  where chpl__isArrayView(x._value)

.. function:: proc chpl__unref( ir: _iteratorRecord) 

.. function:: proc chpl__unref( x: []) 

.. function:: proc chpl__initCopy( ir: _iteratorRecord,  definedConst: bool)  where chpl_iteratorHasDomainShape(ir)

.. function:: proc chpl__initCopy( ir: _iteratorRecord,  definedConst: bool)  where chpl_iteratorHasRangeShape(ir) && !chpl_iteratorFromForExpr(ir)

.. function:: proc chpl__initCopy_shapeHelp( shape: domain,  ir: _iteratorRecord) 

.. function:: proc chpl__throwErrorUnchecked(in e: owned(Error))  throws

.. function:: proc chpl__initCopy( ir: _iteratorRecord,  definedConst: bool) 

.. function:: proc chpl_arrayToPtrErrorHelper(const ref arr: []) 

.. function:: proc chpl_arrayToPtr(ref arr: [], param castToVoidStar: bool = false) 

.. function:: proc chpl_arrayToPtrConst(const ref arr: [], param castToVoidStar: bool = false) 

