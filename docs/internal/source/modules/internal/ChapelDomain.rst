.. default-domain:: chpl

.. module:: ChapelDomain
   :noindex:

ChapelDomain
============
**Usage**

.. code-block:: chapel

   use ChapelDomain;


or

.. code-block:: chapel

   import ChapelDomain;

.. data:: config const defaultHashTableResizeThreshold = 0.5

   
   Fractional value that specifies how full this domain can be
   before requesting additional memory. The default value of
   0.5 means that the map will not resize until the map is more
   than 50% full. The acceptable values for this argument are
   between 0 and 1, exclusive, meaning (0,1). A lower
   `defaultHashTableResizeThreshold` value can potentially
   improve indexing performance, since the table will likely
   have fewer collisions, while a higher value can help save
   memory.
   Note that this value also impacts all of Chapel's hash-based
   data structures, such as `set` and `map`.
   

.. data:: config param noNegativeStrideWarnings = false

   Compile with ``-snoNegativeStrideWarnings``
   to suppress the warning about arrays and slices with negative strides. 

.. function:: proc _getDomain( value) 

.. function:: proc tupleOfRangesSlice( base,  slice)  where chpl__isTupleOfRanges(base) && chpl__isTupleOfRanges(slice)

.. function:: proc chpl__buildDomainRuntimeType( dist, param rank: int, type idxType = int, param strides: strideKind = strideKind.one) type

.. function:: proc chpl__buildDomainRuntimeType( dist, type idxType, param parSafe: bool = assocParSafeDefault) type

.. function:: proc chpl__buildSparseDomainRuntimeType( dist,  parentDom: domain) type

.. function:: proc chpl__buildSparseDomainRuntimeTypeForParentDomain( parentDom) type

.. function:: proc chpl__buildSparseDomainRuntimeTypeForParentDomain(type parentDom) 

.. function:: proc chpl__convertRuntimeTypeToValue( dist, param rank: int, type idxType = int, param strides: strideKind, param isNoInit: bool,  definedConst: bool) 

.. function:: proc chpl__convertRuntimeTypeToValue( dist, type idxType, param parSafe: bool, param isNoInit: bool,  definedConst: bool) 

.. function:: proc chpl__convertRuntimeTypeToValue( dist,  parentDom: domain, param isNoInit: bool,  definedConst: bool) 

.. function:: proc chpl__convertValueToRuntimeType( dom: domain) type where isSubtype(dom._value.type, BaseRectangularDom)

.. function:: proc chpl__convertValueToRuntimeType( dom: domain) type where isSubtype(dom._value.type, BaseAssociativeDom)

.. function:: proc chpl__convertValueToRuntimeType( dom: domain) type where isSubtype(dom._value.type, BaseSparseDom)

.. function:: proc chpl__convertValueToRuntimeType( dom: domain) type

.. function:: proc chpl__buildSubDomainType( dom: domain) type

.. function:: proc chpl__isTupleOfRanges( tup) param

.. function:: proc chpl__buildDomainExpr(ranges ...,  definedConst)  where chpl__isTupleOfRanges(ranges)

.. function:: proc chpl__buildDomainExpr(const keys ...,  definedConst) 

.. function:: proc chpl__ensureDomainExpr(const ref x: domain) const ref

.. function:: proc chpl__ensureDomainExpr(x ...) 

.. function:: proc chpl__ensureDomainExpr(type t) 

.. function:: proc chpl__isRectangularDomType(type domainType) param

.. function:: proc chpl__isSparseDomType(type domainType) param

.. function:: proc chpl__parentDomainFromDomainRuntimeType(type domainType) 

.. function:: proc chpl__domainFromArrayRuntimeType(type rtt) 

.. function:: proc chpl_isAssociativeDomClass( dc: BaseAssociativeDom) param

.. function:: proc chpl_isAssociativeDomClass( dc) param

.. function:: proc chpl__checkDomainsMatch( a: [],  b) 

.. function:: proc chpl__checkDomainsMatch( a: _iteratorRecord,  b) 

.. function:: proc chpl_countDomHelp( dom,  counts) 

.. function:: operator #( dom: domain,  counts: integral) 

.. function:: operator #( dom: domain,  counts: _tuple) 

.. function:: operator #( dom: domain,  counts) 

.. function:: operator +( d: domain,  i: ?t)  where d.isRectangular() && noRDadds(t)

.. function:: operator +( i: ?t,  d: domain)  where d.isRectangular() && noRDadds(t)

.. function:: operator -( d: domain,  i: ?t)  where d.isRectangular() && noRDadds(t)

.. function:: operator +(in d: domain,  i: index(d))  where d.isIrregular()

   .. warning::

      '+' on domains is unstable and may change in the future

.. function:: operator +( i, in d: domain)  where isSubtype(i.type, index(d)) && d.isIrregular()

   .. warning::

      '+' on domains is unstable and may change in the future

.. function:: operator +(in d1: domain,  d2: domain)  where d1.type == d2.type && d1.isIrregular() && d2.isIrregular()

   .. warning::

      '+' on domains is unstable and may change in the future

.. function:: operator +( d1: domain,  d2: domain) 

.. function:: operator +=(ref D: domain,  idx) 

   .. warning::

      '+=' on domains is unstable and may change in the future

.. function:: operator +=(ref D: domain, param idx) 

   .. warning::

      '+=' on domains is unstable and may change in the future

.. function:: operator -(in d: domain,  i: index(d))  where d.isIrregular()

   .. warning::

      '-' on domains is unstable and may change in the future

.. function:: operator -(in d1: domain,  d2: domain)  where d1.type == d2.type && d1.isSparse()

.. function:: operator -( d1: domain,  d2: domain) 

.. function:: operator -=(ref D: domain,  idx) 

   .. warning::

      '-=' on domains is unstable and may change in the future

.. function:: operator -=(ref D: domain, param idx) 

   .. warning::

      '-=' on domains is unstable and may change in the future

.. function:: operator ==( d1: domain,  d2: domain)  where d1.isRectangular() && d2.isRectangular()

.. function:: operator !=( d1: domain,  d2: domain)  where d1.isRectangular() && d2.isRectangular()

.. function:: operator ==( d1: domain,  d2: domain)  where d1.isAssociative() && d2.isAssociative()

.. function:: operator !=( d1: domain,  d2: domain)  where d1.isAssociative() && d2.isAssociative()

.. function:: operator ==( d1: domain,  d2: domain)  where d1.isSparse() && d2.isSparse()

.. function:: operator !=( d1: domain,  d2: domain)  where d1.isSparse() && d2.isSparse()

.. function:: operator ==( d1: domain,  d2: domain) 

.. function:: operator !=( d1: domain,  d2: domain) 

.. function:: proc chpl_sameDomainKind( d1: domain,  d2: domain) param

.. function:: operator -( a: domain,  b: domain)  where a.type == b.type && a.isAssociative()

   .. warning::

      '-' on domains is unstable and may change in the future

.. function:: operator -=(ref a: domain,  b: domain)  where a.type == b.type && a.isAssociative()

   .. warning::

      '-=' on domains is unstable and may change in the future

   
   We remove elements in the RHS domain from those in the LHS domain only if
   they exist. If an element in the RHS is not present in the LHS, no error
   occurs.
   

.. function:: operator |( a: domain,  b: domain)  where a.type == b.type && a.isAssociative()

   .. warning::

      '|' on domains is unstable and may change in the future

.. function:: operator |=(ref a: domain,  b: domain)  where a.type == b.type && a.isAssociative()

   .. warning::

      '|=' on domains is unstable and may change in the future

.. function:: operator |=( a: domain,  b: domain)  where a.isRectangular()

.. function:: operator +=(ref a: domain,  b: domain)  where a.type == b.type && a.isAssociative()

   .. warning::

      '+=' on domains is unstable and may change in the future

.. function:: operator &( a: domain,  b: domain)  where a.type == b.type && a.isAssociative()

   .. warning::

      '&' on domains is unstable and may change in the future

   
   We remove elements in the RHS domain from those in the LHS domain only if
   they exist. If an element in the RHS is not present in the LHS, no error
   occurs.
   

.. function:: operator &=(ref a: domain,  b: domain)  where a.type == b.type && a.isAssociative()

   .. warning::

      '&=' on domains is unstable and may change in the future

.. function:: operator &=( a: domain,  b: domain)  where a.isRectangular()

.. function:: operator ^( a: domain,  b: domain)  where a.type == b.type && a.isAssociative()

   .. warning::

      '^' on domains is unstable and may change in the future

.. function:: operator ^=(ref a: domain,  b: domain)  where a.type == b.type && a.isAssociative()

   .. warning::

      '^=' on domains is unstable and may change in the future

   
   We remove elements in the RHS domain from those in the LHS domain only if
   they exist. If an element in the RHS is not present in the LHS, it is
   added to the LHS.
   

.. function:: operator ^=( a: domain,  b: domain)  where a.isRectangular()

.. function:: operator +=(ref sd: domain,  inds: [] index(sd))  where sd.isSparse()

.. function:: operator +=(ref sd: domain,  d: domain)  where sd.isSparse() && d.rank == sd.rank && sd.idxType == d.idxType

.. function:: operator -=(ref sd: domain,  inds: [] index(sd))  where sd.isSparse()

.. function:: operator -=(ref sd: domain,  d: domain)  where sd.isSparse() && d.rank == sd.rank && sd.idxType == d.idxType

.. function:: operator  = (ref a: domain,  b: domain) 

.. function:: proc chpl__checkTupIrregDomAssign(const ref d, const ref idx, param msg) 

.. function:: proc chpl__isLegalRectTupDomAssign( d,  t) param

.. function:: operator  = (ref a: domain,  b: _tuple) 

.. function:: operator  = (ref d: domain,  r: range(?)) 

.. function:: operator  = (ref a: domain,  b) 

.. function:: operator by( a: domain,  b) 

.. function:: operator by( a: domain, param b: integral) 

.. function:: operator align( a: domain,  b) 

.. function:: proc chpl_domainDistIsLayout( d: domain) param

.. function:: proc chpl__coerceCopy(type dstType: _domain,  rhs: _domain,  definedConst: bool) 

.. function:: proc chpl__coerceMove(type dstType: _domain, in rhs: _domain,  definedConst: bool) 

.. function:: proc chpl__coerceCopy(type dstType: _domain,  rhs: _tuple,  definedConst: bool) 

.. function:: proc chpl__coerceMove(type dstType: _domain, in rhs: _tuple,  definedConst: bool) 

.. function:: proc chpl__coerceCopy(type dstType: _domain,  rhs: range(?),  definedConst: bool) 

.. function:: proc chpl__coerceMove(type dstType: _domain, in rhs: range(?),  definedConst: bool) 

.. function:: proc chpl__coerceCopy(type dstType: _domain,  rhs: _iteratorRecord,  definedConst: bool) 

.. function:: proc chpl__coerceMove(type dstType: _domain,  rhs: _iteratorRecord,  definedConst: bool) 

.. function:: proc chpl__coerceCopy(type dstType: _domain,  rhs,  definedConst: bool) 

.. function:: proc chpl__coerceMove(type dstType: _domain, in rhs,  definedConst: bool) 

.. record:: _domain : writeSerializable, readDeserializable

   The domain type. 

   .. attribute:: var _pid: int

   .. attribute:: var _instance

   .. attribute:: var _unowned: bool

   .. method:: proc  chpl__promotionType() type

   .. method:: proc  init( _pid: int,  _instance,  _unowned: bool) 

   .. method:: proc  init( value) 

   .. method:: proc  init( d, param rank: int, type idxType = int, param strides = strideKind.one,  definedConst: bool = false) 

   .. method:: proc  init( d, param rank: int, type idxType = int, param strides = strideKind.one,  ranges: rank*range(idxType, boundKind.both, strides),  definedConst: bool = false) 

   .. method:: proc  init( d, type idxType, param parSafe: bool = true,  definedConst: bool = false) 

   .. method:: proc  init( d,  dom: domain,  definedConst: bool = false) 

   .. method:: proc  init=(const ref other: domain)  where other.isRectangular()

   .. method:: proc  init=(const ref other: domain) 

   .. method:: proc  _value 

   .. method:: proc  chpl__serialize()  where this._value.isDefaultRectangular()

   .. method:: proc type chpl__deserialize( data) 

   .. method:: proc  _do_destroy() 

   .. method:: proc  deinit() 

   .. method:: proc  distribution 

      Returns the domain map that implements this domain. 

   .. method:: proc  dist 

      Prevent users from accessing internal datatypes unintentionally. It
      used to be a public method deprecated in favor of domain.distribution. 

   .. method:: proc  rank param

      Returns the number of dimensions in this domain. 

   .. method:: proc  idxType type

      Returns the type used to represent the indices of this domain.
      For a multidimensional domain, this represents the
      per-dimension index type. 

   .. method:: proc  fullIdxType type

      Returns the full type used to represent the indices of this
      domain.  For a 1D or associative domain, this is the same
      as :proc:`idxType` above.  For a multidimensional domain, it
      is :proc:`rank` * :proc:`idxType`. 

   .. method:: proc  chpl_integralIdxType type

   .. method:: proc  strides param where this.isRectangular()

      Returns the 'strides' parameter of the domain. 

   .. method:: proc  strides param where this.isSparse()

   .. method:: proc  strides param where this.isAssociative()

   .. method:: proc  hasUnitStride() param

   .. method:: proc  hasPosNegUnitStride() param

   .. method:: proc  stride 

      Returns the stride of the indices in this domain. 

   .. method:: proc  stride param where rank == 1 && (isRectangular() || isSparse()) && strides.isPosNegOne()

   .. method:: proc  alignment 

      Returns the alignment of the indices in this domain. 

   .. method:: proc  alignment param where rank == 1 && (isRectangular() || isSparse()) && strides.isPosNegOne()

   .. method:: proc  targetLocales() const ref

      Returns an array of locales over which this domain
      has been distributed.  

   .. itermethod:: iter  these() 

      Yield the domain indices 

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.standalone && __primitive("resolves", _value.these(tag = tag))

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.leader

   .. itermethod:: iter  these(param tag: iterKind,  followThis, param fast: bool = false)  where tag == iterKind.follower

   .. method:: proc  this( d: domain) 

   .. method:: proc  this(ranges ...rank)  where chpl__isTupleOfRanges(ranges)

   .. method:: proc  this(args ...rank)  where _validRankChangeArgs(args, _value.idxType)

   .. method:: proc  this(i: integral ...rank) 

   .. method:: proc  this(args ...?numArgs) 

   .. method:: proc  isEmpty() : bool

      Returns true if the domain has no indices. 

   .. method:: proc  size : int

      Returns the number of indices in this domain as an ``int``. 

   .. method:: proc  sizeAs(type t: integral) : t

      Returns the number of indices in this domain as the specified type. 

   .. method:: proc  dims() 

      
      Returns a tuple of ranges describing the bounds of a rectangular domain.
      For a sparse domain, returns the bounds of the parent domain.
      

   .. method:: proc  dim( d: int) 

      
      Returns a range representing the boundary of this
      domain in a particular dimension.
      

   .. method:: proc  dim(param d: int) 

   .. itermethod:: iter  dimIter(param d,  ind) 

   .. method:: proc  shape : rank*int where this.isRectangular() || this.isSparse()

      Returns a tuple of ``int`` values representing the size of each
      dimension.
      
      For a sparse domain, this returns the shape of the parent domain.
      

   .. method:: proc  chpl_shapeAs(type t: integral) 

   .. method:: proc  shape  where this.isAssociative()

      Associative domains assumed to be 1-D. 

   .. method:: proc  shape 

      Unsupported case 

   .. method:: proc  indices 

      This error overload is here because without it, the domain's
      indices tend to be promoted across the `.indices` calls of
      their idxType which can be very confusing. 

   .. method:: proc  boundingBox()  where this.isRectangular()

   .. method:: proc  low 

      Returns the lowest index represented by a rectangular domain. 

   .. method:: proc  low  where this.isAssociative()

   .. method:: proc  high 

      Returns the highest index represented by a rectangular domain. 

   .. method:: proc  high  where this.isAssociative()

   .. method:: proc  lowBound 

      Returns the domain's 'pure' low bound.  For example, given the
      domain ``{1..10 by -2}``, ``.lowBound`` would return 1, whereas
      ``.low`` would return 2 since it's the lowest index represented
      by the domain.  This routine is only supported on rectangular
      domains. 

   .. method:: proc  highBound 

      Returns the domain's 'pure' high bound.  For example, given the
      domain ``{1..10 by 2}``, ``.highBound`` would return 10,
      whereas ``.high`` would return 9 since it's the highest index
      represented by the domain.  This routine is only supported on
      rectangular domains. 

   .. method:: proc  first 

      Returns the first index in this domain. 

   .. method:: proc  last 

      Returns the last index in this domain. 

   .. method:: proc  chpl_checkEltType(type eltType) 

   .. method:: proc  chpl_checkNegativeStride() 

   .. method:: proc  buildArray(type eltType, param initElts: bool) 

   .. method:: proc  tryCreateArray(type eltType)  throws

      .. warning::

         tryCreateArray() is subject to change in the future.

      
      Invoking this method will attempt to create and return an array
      declared over the domain instance. If there is not enough memory
      to satisfy the allocation, an error will be thrown, allowing
      the program to continue if handled, as opposed to halting and
      thus stopping program execution.
      
      This method will be most reliable in configurations that use a
      fixed heap (e.g., when using ``CHPL_GASNET_SEGMENT=large``), but
      can be called in all configurations. In the case of a dynamic
      heap, it is possible that overcommit will cause the array
      allocation to succeed, even if there is not enough physical
      memory to satisfy the allocation, which will then fail with a bus
      error when attempting to access the array.
      
      This method can be called on all domains that implement a
      'doiTryCreateArray' method.
      
      Throws an `ArrayOomError` when out of memory allocating elements.
      

   .. method:: proc  tryCreateArray(type eltType,  initExpr: ?t)  throws where isSubtype(t, _iteratorRecord) || isCoercible(t, eltType)

      .. warning::

         tryCreateArray() is subject to change in the future.

   .. method:: proc  tryCreateArray(type eltType,  initExpr: [?dom] ?arrayEltType)  throws where this.rank == dom.rank && isCoercible(arrayEltType, eltType)

      .. warning::

         tryCreateArray() is subject to change in the future.

   .. method:: proc  buildArrayWith(type eltType,  data: _ddata(eltType),  allocSize: int) 

   .. record:: unsafeAssignManager : contextManager

      
      An instance of this type is a context manager that can be used in
      manage statements to resize arrays of non-default-initializable
      element types after resizing their underlying domain.
      
      Using an instance of this type in a manage statement will cause a
      domain assignment to occur before executing the statement body. The
      left-hand-side of the assignment is the receiver domain that had
      ``unsafeAssign()`` called on it, while the right-hand-side is the
      `dom` formal of the same call.
      
      If the assignment adds new indices to the assigned domain, then
      corresponding elements are added to arrays declared over it.
      If an array's element type is non-default-initializable, then any
      newly added elements remain uninitialized.
      
      The ``initialize()`` method can be used within the manage statement
      body to initialize new elements of non-default-initializable arrays
      declared over the assigned domain.
      
      The new elements of default-initializable arrays over the assigned
      domain will be default-initialized. They can be set to desired
      values as usual, for example using an assignment operator.
      

      .. attribute:: var _lhsInstance

      .. attribute:: var _lhsPid: int

      .. attribute:: var _rhsInstance

      .. attribute:: var _rhsPid: int

      .. attribute:: var _oldLhsDomainCopy: domain(?)

      .. attribute:: param _checks: bool

      .. attribute:: var _isActiveManager: bool

      .. itermethod:: iter  _arraysOverLhsDom() 

      .. method:: proc  postinit() 

      .. method:: proc  checks param

      
      Returns ``true`` if this manager has runtime safety checks enabled.
      

      .. method:: proc type isClassReferenceNil(const ref x) 

      .. method:: proc  isClassReferenceNil(const ref x) 

      .. method:: proc  _checkThatArrayShapeIsSupported( arr) param

      .. method:: proc  _checkThatIndexMatchesArrayShape( arr,  idx) param

      .. method:: proc  _isBaseArrClassElementNil( baseArr: BaseArr,  idx) 

      .. method:: proc  isElementInitialized( arr: [?d],  idx) 

      
      Returns ``true`` if the value at a given index in an array has
      been initialized.
      

      .. method:: proc  _checkIfAllElementsAreInitialized( baseArr) 

      .. method:: proc ref _ensureNoLongerManagingThis() 

      .. method:: proc ref deinit() 

      .. method:: proc  _isArrayOwnedByLhsDomain( arr) 

      .. method:: proc  _moveInitializeElement(ref arr,  idx, in value) 

      .. method:: proc  _checkNoChecksWhenNonDefaultInitializableEltType( arr) 

      .. method:: proc  initialize(ref arr: [?d],  idx, in value: arr.eltType) 

      
      Initializes a newly added array element at an index with a new value.
      
      If `checks` is ``true`` and the array element at `idx` has already
      been initialized, this method will halt. If `checks` is ``false``,
      then calling this method on an already initialized element will
      result in undefined behavior.
      
      It is an error if `idx` is not a valid index in `arr`.
      

      .. method:: proc ref enterContext() ref

      .. method:: proc ref exitContext(in err: owned(Error?))  throws

      .. itermethod:: iter  newIndices() 

      
      Iterates over any new indices that will be added to this domain as a
      result of unsafe assignment.
      

   .. method:: proc ref unsafeAssign(const ref dom: domain, param checks: bool = false) 

      
      Returns an instance of :type:`unsafeAssignManager`.
      
      The returned context manager can be used in a manage statement to
      assign the indices of `dom` into the receiver domain. Within the body
      of the manage statement, the manager can initialize elements of
      non-default-initializable arrays declared over the receiver domain.
      
      If `checks` is ``true``, this method will guarantee that:
      
        - Newly added elements of any non-default-initializable arrays
          declared over the receiver domain have been initialized by the
          end of the manage statement
        - Newly added elements are only initialized once
      
      These guarantees hold only for initialization done through calls to
      the ``initialize()`` method on the context manager. Performing
      any other operation on a newly added array element causes undefined
      behavior until after ``initialize()`` has been called.
      
      For example:
      
      .. code-block:: chapel
      
        var D = {0..0};
        var A: [D] shared C = [new shared C(0)];
        manage D.unsafeAssign({0..1}, checks=true) as mgr {
          // 'D' has a new index '1', so 'A' has a new element at '1',
          // which we need to initialize:
          mgr.initialize(A, 1, new shared C(1));
        }
      
      .. note::
      
        Checks are not currently supported for arrays of
        non-default-initializable element types other than arrays of
        non-nilable classes.
      
      :arg dom: The domain to assign to the receiver
      :arg checks: If this manager should provide runtime safety checks
      
      :returns: A :type:`unsafeAssignManager` for use in manage statements
      

   .. method:: proc ref clear()  where this.isRectangular()

      Removes all indices from this domain, leaving it empty. 

   .. method:: proc ref clear() 

      Removes all indices from this domain, leaving it empty. 

   .. method:: proc ref remove( idx) 

      Removes index ``idx`` from this domain. 

   .. method:: proc ref add(in idx) 

      Adds index ``idx`` to this domain. This method is also available
      as the ``+=`` operator.
      Returns the number of indices that were added.
      
      The domain must be irregular.
      

   .. method:: proc ref bulkAdd( inds: [] _value.idxType,  dataSorted = false,  isUnique = false,  addOn = nilLocale)  where this.isSparse() && _value.rank == 1

      .. warning::

         bulkAdd() is subject to change in the future.

   .. method:: proc ref bulkAddNoPreserveInds(ref inds: [] _value.idxType,  dataSorted = false,  isUnique = false,  addOn = nilLocale)  where this.isSparse() && _value.rank == 1

      .. warning::

         bulkAddNoPreserveInds() is subject to change in the future.

   .. method:: proc  createIndexBuffer( size: int) 

      .. warning::

         createIndexBuffer() is subject to change in the future.

      
      Creates an index buffer which can be used for faster index addition.
      
      For example, instead of:
      
        .. code-block:: chapel
      
           var spsDom: sparse subdomain(parentDom);
           for i in someIndexIterator() do
             spsDom += i;
      
      You can use `SparseIndexBuffer` for better performance:
      
        .. code-block:: chapel
      
           var spsDom: sparse subdomain(parentDom);
           var idxBuf = spsDom.createIndexBuffer(size=N);
           for i in someIndexIterator() do
             idxBuf.add(i);
           idxBuf.commit();
      
      The above snippet will create a buffer of size N indices, and will
      automatically commit indices to the sparse domain as the buffer fills up.
      Indices are also committed when the buffer goes out of scope.
      
      :arg size: Size of the buffer in number of indices.
      :type size: int
      

   .. method:: proc ref bulkAdd( inds: [] (_value.rank*_value.idxType),  dataSorted = false,  isUnique = false,  addOn = nilLocale)  where this.isSparse() && _value.rank > 1

      .. warning::

         bulkAdd() is subject to change in the future.

      
      Adds indices in ``inds`` to this domain in bulk.
      
      For sparse domains, an operation equivalent to this method is available
      with the ``+=`` operator, where the right-hand-side is an array. However,
      in that case, default values will be used for the flags ``dataSorted`` and
      ``isUnique``. This method is available because in
      some cases, expensive operations can be avoided by setting those flags.
      To do so, ``bulkAdd`` must be called explicitly (instead of ``+=``).
      
      .. note::
      
        Right now, this method and the corresponding ``+=`` operator are
        only available for sparse domains. In the future, we expect that
        these methods will be available for all irregular domains.
      
      .. note::
      
        ``nilLocale`` is a sentinel value to denote that the locale where this
        addition should occur is unknown. We expect this to change in the
        future.
      
      .. note::
      
        This method may make a copy of ``inds`` if the data is not sorted to
        preserve the indices used. If the data is already sorted, it is
        possible to avoid this extra copy by using :proc:`bulkAddNoPreserveInds`,
        which does not copy the indices and may modify ``inds`` in place.
      
      :arg inds: Indices to be added. ``inds`` must be an array of
                 ``rank*idxType``, except for 1-D domains, where it must be
                 an array of ``idxType``.
      
      :arg dataSorted: ``true`` if data in ``inds`` is sorted.
      :type dataSorted: bool
      
      :arg isUnique: ``true`` if data in ``inds`` has no duplicates.
      :type isUnique: bool
      
      :arg addOn: The locale where the indices should be added. Default value
                  is ``nil`` which indicates that locale is unknown or there
                  are more than one.
      :type addOn: locale
      
      :returns: Number of indices added to the domain
      :rtype: int
      

   .. method:: proc ref bulkAddNoPreserveInds(ref inds: [] (_value.rank*_value.idxType),  dataSorted = false,  isUnique = false,  addOn = nilLocale)  where this.isSparse() && _value.rank > 1

      .. warning::

         bulkAddNoPreserveInds() is subject to change in the future.

      
      Adds indices in ``inds`` to this domain in bulk.
      
      This is nearly identical to :proc:`bulkAdd`. :proc:`bulkAdd` may
      make a copy of ``inds`` if the data is unsorted, whereas this method will
      modify ``inds`` in place.
      
      .. note::
      
        Right now, this method is only available for sparse domains.
        In the future, we expect that this method will be available for all
        irregular domains.
      
      .. note::
      
        ``nilLocale`` is a sentinel value to denote that the locale where this
        addition should occur is unknown. We expect this to change in the
        future.
      
      :arg inds: Indices to be added. ``inds`` must be an array of
                 ``rank*idxType``, except for 1-D domains, where it must be
                 an array of ``idxType``.
      
      :arg dataSorted: ``true`` if data in ``inds`` is sorted.
      :type dataSorted: bool
      
      :arg isUnique: ``true`` if data in ``inds`` has no duplicates.
      :type isUnique: bool
      
      :arg addOn: The locale where the indices should be added. Default value
                  is ``nil`` which indicates that locale is unknown or there
                  are more than one.
      :type addOn: locale
      
      :returns: Number of indices added to the domain
      :rtype: int
      

   .. method:: proc  bulkAdd(args ...) 

   .. method:: proc  bulkAddNoPreserveInds(args ...) 

   .. method:: proc ref requestCapacity( capacity) 

      Requests space for a particular number of values in an
      domain.
      
      Currently only applies to associative domains.
      

   .. method:: proc  contains(const idx: rank*_value.idxType) 

   .. method:: proc  contains(const idx: _value.idxType ...rank) 

      Returns true if this domain contains ``idx``. Otherwise returns false.
      For sparse domains, only indices with a value are considered
      to be contained in the domain.
      

   .. method:: proc  contains( other: domain) 

      Returns true if this domain contains all the indices in the domain
      ``other``. 

   .. method:: proc  indexOrder( i) 

   .. method:: proc  orderToIndex( order: int)  where this.isRectangular() && isNumericType(this.idxType)

      .. warning::

         domain.orderToIndex() is unstable and its behavior may change in the future

      
      Returns the `ith` index in the domain counting from 0.
      For example, ``{2..10 by 2}.orderToIndex(2)`` would return ``6``.
      
      The order of a multidimensional domain follows its serial iterator.
      For example, ``{1..3, 1..2}.orderToIndex(3)`` would return ``(2, 2)``.
      
      .. note::
      
        Right now, this method supports only dense rectangular domains with
        numeric indices
      
      :arg order: Order for which the corresponding index in the domain
                  has to be found.
      
      :returns: Domain index for a given order in the domain.
      

   .. method:: proc  orderToIndex( order) 

   .. method:: proc  checkOrderBounds( order: int) 

   .. method:: proc  position( i) 

   .. method:: proc  expand( off: rank*integral)  where !this.isRectangular()

   .. method:: proc  expand(off: integral ...rank) 

      .. warning::

         domain.expand() is unstable and its behavior may change in the future

   .. method:: proc  expand( off: rank*integral) 

      .. warning::

         domain.expand() is unstable and its behavior may change in the future

      Returns a new domain that is the current domain expanded by
      ``off(d)`` in dimension ``d`` if ``off(d)`` is positive or
      contracted by ``off(d)`` in dimension ``d`` if ``off(d)``
      is negative.
      
      See :proc:`ChapelRange.range.expand` for further information about what
      it means to expand a range.
      
      

   .. method:: proc  expand( off: integral)  where rank > 1

      .. warning::

         domain.expand() is unstable and its behavior may change in the future

      Returns a new domain that is the current domain expanded by
      ``off`` in all dimensions if ``off`` is positive or contracted
      by ``off`` in all dimensions if ``off`` is negative.
      
      See :proc:`ChapelRange.range.expand` for further information about what
      it means to expand a range.
      

   .. method:: proc  exterior( off: rank*integral)  where !this.isRectangular()

   .. method:: proc  exterior(off: integral ...rank) 

      .. warning::

         domain.exterior() is unstable and its behavior may change in the future

   .. method:: proc  exterior( off: rank*integral) 

      .. warning::

         domain.exterior() is unstable and its behavior may change in the future

      Returns a new domain that is the exterior portion of the
      current domain with ``off(d)`` indices for each dimension ``d``.
      If ``off(d)`` is negative, compute the exterior from the low
      bound of the dimension; if positive, compute the exterior
      from the high bound.
      
      See :proc:`ChapelRange.range.exterior` for further information about what
      it means to compute the exterior of a range.
      
      

   .. method:: proc  exterior( off: integral)  where rank != 1

      .. warning::

         domain.exterior() is unstable and its behavior may change in the future

      Returns a new domain that is the exterior portion of the
      current domain with ``off`` indices for each dimension.
      If ``off`` is negative, compute the exterior from the low
      bound of the dimension; if positive, compute the exterior
      from the high bound.
      
      See :proc:`ChapelRange.range.exterior` for further information about what
      it means to compute the exterior of a range.
      
      

   .. method:: proc  interior( off: rank*integral)  where !this.isRectangular()

   .. method:: proc  interior(off: integral ...rank) 

      .. warning::

         domain.interior() is unstable and its behavior may change in the future

   .. method:: proc  interior( off: rank*integral) 

      .. warning::

         domain.interior() is unstable and its behavior may change in the future

      Returns a new domain that is the interior portion of the
      current domain with ``off(d)`` indices for each dimension
      ``d``. If ``off(d)`` is negative, compute the interior from
      the low bound of the dimension; if positive, compute the
      interior from the high bound.
      
      See :proc:`ChapelRange.range.interior` for further information about what
      it means to compute the exterior of a range.
      
      

   .. method:: proc  interior( off: integral)  where rank != 1

      .. warning::

         domain.interior() is unstable and its behavior may change in the future

      Returns a new domain that is the interior portion of the
      current domain with ``off`` indices for each dimension.
      If ``off`` is negative, compute the interior from the low
      bound of the dimension; if positive, compute the interior
      from the high bound.
      
      See :proc:`ChapelRange.range.interior` for further information about what
      it means to compute the exterior of a range.
      
      

   .. method:: proc  translate( off: rank*integral)  where !this.isRectangular()

   .. method:: proc  translate(off: integral ...rank) 

      .. warning::

         domain.translate() is unstable and its behavior may change in the future

   .. method:: proc  translate( off: rank*integral) 

      .. warning::

         domain.translate() is unstable and its behavior may change in the future

      Returns a new domain that is the current domain translated by
      ``off(d)`` in each dimension ``d``.
      
      See :proc:`ChapelRange.range.translate` for further information about
      what it means to translate a range.
      
      

   .. method:: proc  translate( off: integral)  where rank != 1

      .. warning::

         domain.translate() is unstable and its behavior may change in the future

      Returns a new domain that is the current domain translated by
      ``off`` in each dimension.
      
      See :proc:`ChapelRange.range.translate()` for further information about
      what it means to translate a range.
      
      

   .. method:: proc  chpl__unTranslate(off: integral ...rank) 

   .. method:: proc  chpl__unTranslate( off: rank*chpl_integralIdxType) 

   .. method:: proc ref setIndices( x) 

   .. method:: proc  getIndices() 

   .. method:: proc  serialize( writer, ref serializer)  throws

   .. method:: proc ref deserialize( reader, ref deserializer)  throws

   .. method:: proc type deserializeFrom( reader, ref deserializer)  throws

   .. method:: proc  localSlice(r ...rank)  where chpl__isTupleOfRanges(r) && _value.isDefaultRectangular()

   .. method:: proc  localSlice(r ...rank)  where chpl__isTupleOfRanges(r) && !_value.isDefaultRectangular()

      
      Returns a local view of the sub-domain (slice) defined by the provided
      range(s), halting if the slice contains elements that are not local.
      

   .. method:: proc  localSlice( d: domain) 

      
      Returns a local view of the sub-domain (slice) defined by the provided
      domain, halting if the slice contains elements that are not local.
      

   .. itermethod:: iter  sorted( comparator: ?t = chpl_defaultComparator()) 

      Yields the domain indices in sorted order. 

   .. method:: proc  displayRepresentation() 

   .. method:: proc  defaultSparseDist 

   .. method:: proc  hasSingleLocalSubdomain() param

      .. warning::

         'hasSingleLocalSubdomain' on domains is unstable and may change in the future

      Returns true if the local subdomain can be represented as a single
      domain. Otherwise returns false. 

   .. method:: proc  localSubdomain( loc: locale = here) 

      
      Returns the subdomain that is local to `loc`.
      
      :arg loc: indicates the locale for which the query should take
                place (defaults to `here`)
      :type loc: locale
      

   .. itermethod:: iter  localSubdomains( loc: locale = here) 

      .. warning::

         'localSubdomains' on domains is unstable and may change in the future

      
      Yields the subdomains that are local to `loc`.
      
      :arg loc: indicates the locale for which the query should take
                place (defaults to `here`)
      :type loc: locale
      

   .. method:: proc  supportsAutoLocalAccess() param

   .. method:: proc  supportsOffsetAutoLocalAccess() param

   .. method:: proc  autoLocalAccessOffsetCheck( offsets) 

   .. method:: proc  iteratorYieldsLocalElements() param

   .. method:: proc  tryCast(type t: domain)  where chpl__isRectangularDomType(t) && this.isRectangular() && this.chpl_domainTryCastIsSafe(t)

      Casts a rectangular domain to a new rectangular domain type.
      Throws an IllegalArgumentError when the original bounds and/or stride(s)
      do not fit in the new idxType or when the original stride(s)
      are not legal for the new `strides` parameter.
      

   .. method:: proc  tryCast(type t: domain)  throws

   .. method:: proc  chpl_domainTryCastHelper(type t: _domain)  throws

   .. method:: proc  chpl_domainTryCastIsSafe(type t: domain) param

   .. method:: operator  :( d: _domain, type t: _domain)  where chpl__isRectangularDomType(t) && d.isRectangular() && d.chpl_domainCastIsSafe(t)

      Casts a rectangular domain to a new rectangular domain type.
      The overload below throws when the original bounds and/or stride
      do not fit in the new type or 'strides'.
      TODO: should we allow 't' to be generic?
      

   .. method:: operator  :( d: _domain, type t: domain)  throws

   .. method:: proc  chpl_domainCastHelper(type t: _domain)  throws

   .. method:: proc  chpl_domainCastIsSafe(type t: domain) param

   .. method:: operator  :( val: _domain, type t: string) 

   .. method:: proc  isRectangular() param

      Returns true if this domain is a rectangular.
      Otherwise returns false.  

   .. method:: proc  isIrregular() param

      Returns true if ``d`` is an irregular domain; e.g. is not rectangular.
      Otherwise returns false. 

   .. method:: proc  isAssociative() param

      Returns true if ``d`` is an associative domain.
      Otherwise returns false. 

   .. method:: proc  isSparse() param

      Returns true if ``d`` is a sparse domain. Otherwise returns false. 

.. function:: proc makeRectangularDomain( low: ?t1,  high: ?t2, param inclusive: bool = true)  where chpl_isValidRangeIdxType(t1) && chpl_isValidRangeIdxType(t2)

   .. warning::

      makeRectangularDomain() is subject to change in the future.

   Creates a rectangular domain with bounds defined by the scalar values `low`
   and `high`. If `inclusive` is true, the domain includes the `high` value.
   Otherwise, the domain excludes the `high` value.
   

.. function:: proc makeRectangularDomain( low: ?t1,  high: ?t2, param inclusive: bool = true)  where isTuple(low) && isTuple(high) && isHomogeneousTuple(low) && isHomogeneousTuple(high) && low.size == high.size && (isCoercible(low(0).type, high(0).type) || isCoercible(high(0).type, low(0).type))

   .. warning::

      makeRectangularDomain() is subject to change in the future.

   Creates a multidimensional rectangular domain with bounds defined by the
   pairwise elements of `low` and `high`. If `inclusive` is true, the domain
   includes the `high` values. Otherwise, the domain excludes the `high`
   values. For example, `makeRectangularDomain((1, 2), (10,11))` is
   equivalent to `{1..10, 2..11}`.
   

.. function:: proc makeRectangularDomain( low: ?t1,  high: ?t2, param inclusive: bool = true)  where isTuple(low) != isTuple(high)

   .. warning::

      makeRectangularDomain() is subject to change in the future.

   Creates a rectangular domain with bounds defined by one tuple and one
   scalar value. The scalar argument is used in each dimension of the domain,
   while the 'n'-th tuple element is used to define the 'n'-th dimension of
   the domain. If `inclusive` is true, the domain includes the `high` value.
   Otherwise, the domain excludes the `high` value. For example,
   `makeRectangularDomain((1, 2), 10)` is equivalent to `{1..10, 2..10}`
   and `makeRectangularDomain(1, (10, 11), inclusive=false)` is equivalent
   to `{1..<10, 1..<11}`.
   

.. function:: proc makeRectangularDomain( low: ?t1,  high: ?t2, param inclusive: bool = true)  where isTuple(low) && isTuple(high)

