.. default-domain:: chpl

.. module:: ChapelRange
   :noindex:

ChapelRange
===========
**Usage**

.. code-block:: chapel

   use ChapelRange;


or

.. code-block:: chapel

   import ChapelRange;

.. data:: config param debugChapelRange = false

.. data:: config param useOptimizedRangeIterators = true

.. data:: config param newSliceRule = true

   This flag, when set to `true`, used to switch to using the new slicing rule
   and to turn off the deprecation warning for using the old rule.
   Now the new rule is always enabled regardless of this flag's value.
   When slicing with a range with a negative stride, the old rule
   preserves the direction of the original range or domain/array dimension
   whereas the new rule reverses such direction. 

.. data:: config param newRangeLiteralType = false

   Compile with ``-snewRangeLiteralType`` to switch to using the new rule
   for determining the idxType of a range literal with param integral bounds
   and to turn off the deprecation warning for using the old rule.
   
   The new rule defines such idxType to be the type produced by adding
   the two bounds. I.e.,``(low..high).idxType`` is ``(low+high).type``
   when ``low`` and ``high`` are integral params. 

.. enum:: enum boundKind { both, low, high, neither }

   .. enumconstant:: enum constant both

   .. enumconstant:: enum constant low

   .. enumconstant:: enum constant high

   .. enumconstant:: enum constant neither

.. enum:: enum strideKind { one, negOne, positive, negative, any }

   .. enumconstant:: enum constant one

   .. enumconstant:: enum constant negOne

   .. enumconstant:: enum constant positive

   .. enumconstant:: enum constant negative

   .. enumconstant:: enum constant any

.. record:: _range

   .. attribute:: type idxType = int

   .. attribute:: param bounds: boundKind = boundKind.both

   .. attribute:: param strides: strideKind = strideKind.one

   .. attribute:: var _low: chpl__idxTypeToIntIdxType(idxType)

   .. attribute:: var _high: chpl__idxTypeToIntIdxType(idxType)

   .. attribute:: var _stride: if strides.isPosNegOne() then nothing else chpl__rangeStrideType(idxType)

   .. attribute:: var _alignment: if strides.isPosNegOne() then nothing else chpl__rangeStrideType(idxType)

.. method:: proc  range.strType type

   .. warning::

      range.strType is unstable and may be removed or renamed

   Returns the type of the range's stride. 

.. method:: proc  range.chpl__promotionType() type

.. method:: proc  range.chpl_integralIdxType type

   The ``idxType`` as represented by an integer type.  When
   ``idxType`` is an enum type, this evaluates to ``int``.
   Otherwise, it evaluates to ``idxType``.
   
   This is no-doc'd because we currently are hoping it can
   be more of an implementation detail than a user-facing
   feature. 

.. method:: proc  range.init(type idxType,  low: idxType,  high: idxType) 

.. method:: proc  range.init( low: ?t) 

.. method:: proc  range.init( high: ?t) 

.. method:: proc  range.init() 

.. method:: proc  range.init(type idxType, param bounds: boundKind, param strides: strideKind) 

.. method:: proc  range.init(type idxType, param bounds: boundKind, param strides: strideKind, param internal: bool) 

.. method:: proc  range.init(type idxType, param bounds: boundKind, param strides: strideKind,  _low,  _high,  _stride,  _alignment,  _aligned, param normalizeAlignment = true) 

.. method:: proc  range.init(type idxType, param bounds: boundKind, param strides: strideKind,  _low,  _high,  _stride,  alignmentValue) 

.. method:: proc  range.init=( other: range(?i, ?b, ?s)) 

.. method:: proc  range.displayRepresentation( msg: string = "") : void

.. function:: proc chpl_isValidRangeIdxType(type t) param

.. function:: proc chpl_build_bounded_range(param low: integral, param high: integral) 

.. function:: proc chpl_build_bounded_range( low: int(8),  high: int(8)) 

.. function:: proc chpl_build_bounded_range( low: int(16),  high: int(16)) 

.. function:: proc chpl_build_bounded_range( low: int(32),  high: int(32)) 

.. function:: proc chpl_build_bounded_range( low: int(64),  high: int(64)) 

.. function:: proc chpl_build_bounded_range( low: uint(8),  high: uint(8)) 

.. function:: proc chpl_build_bounded_range( low: uint(16),  high: uint(16)) 

.. function:: proc chpl_build_bounded_range( low: uint(32),  high: uint(32)) 

.. function:: proc chpl_build_bounded_range( low: uint(64),  high: uint(64)) 

.. function:: proc chpl_build_bounded_range( low: enum,  high: enum) 

.. function:: proc chpl_build_bounded_range( low: bool,  high: bool) 

.. function:: proc chpl_build_bounded_range( low,  high)  where !(chpl_isValidRangeIdxType(low.type) && chpl_isValidRangeIdxType(high.type))

.. function:: proc chpl__nudgeLowBound( low) 

.. function:: proc chpl__nudgeLowBound(param low) param

.. function:: proc chpl__nudgeHighBound( high) 

.. function:: proc chpl__nudgeHighBound(param high) param

.. function:: proc chpl_build_low_bounded_range( low: integral) 

.. function:: proc chpl_build_low_bounded_range( low: enum) 

.. function:: proc chpl_build_low_bounded_range( low: bool) 

.. function:: proc chpl_build_low_bounded_range( low)  where !chpl_isValidRangeIdxType(low.type)

.. function:: proc chpl_build_high_bounded_range( high: integral) 

.. function:: proc chpl_build_high_bounded_range( high: enum) 

.. function:: proc chpl_build_high_bounded_range( high: bool) 

.. function:: proc chpl_build_high_bounded_range( high)  where !chpl_isValidRangeIdxType(high.type)

.. function:: proc chpl_build_unbounded_range() 

.. method:: proc type range.createWithSingleElement( elm: idxType) 

.. function:: proc chpl_compute_low_param_loop_bound(param low: integral, param high: integral) param

.. function:: proc chpl_compute_high_param_loop_bound(param low: integral, param high: integral) param

.. function:: proc chpl_compute_low_param_loop_bound(param low: enum, param high: low.type) param

.. function:: proc chpl_compute_high_param_loop_bound(param low: enum, param high: low.type) param

.. function:: proc chpl_compute_low_param_loop_bound(param low: bool, param high: bool) param

.. function:: proc chpl_compute_high_param_loop_bound(param low: bool, param high: bool) param

.. function:: proc chpl_compute_low_param_loop_bound(param low, param high) param where !(chpl_isValidRangeIdxType(low.type) && chpl_isValidRangeIdxType(high.type))

.. function:: proc chpl_compute_low_param_loop_bound( low,  high) 

.. function:: proc chpl_compute_count_param_loop(param count: integral) param

.. function:: proc chpl_compute_count_param_loop( count) 

.. function:: proc chpl_low_bound_count_for_param_loop(param high: integral, param count: integral) param

.. function:: proc chpl_low_bound_count_for_param_loop( high,  count) 

.. function:: proc chpl_high_bound_count_for_param_loop(param low: integral, param count: integral) param

.. function:: proc chpl_high_bound_count_for_param_loop( low,  count) 

.. function:: proc chpl_bounded_count_for_param_loop_low(param low: integral, param high: integral, param count: integral) param

.. function:: proc chpl_bounded_count_for_param_loop_low( low,  high,  count) 

.. function:: proc chpl_bounded_count_for_param_loop_high(param low: integral, param high: integral, param count: integral) param

.. function:: proc chpl_bounded_count_for_param_loop_high( low,  high,  count) 

.. method:: proc  range.stride  where !hasParamStride()

   Returns the range's stride. 

.. method:: proc  range.stride param where hasParamStride()

.. method:: proc  range.alignment  where !hasParamAlignment()

   Returns the range's alignment. 

.. method:: proc  range.alignment param where hasParamAlignment()

.. method:: proc  range.isAligned()  where !hasParamAligned()

   Returns ``true`` if the range's alignment is unambiguous,
   ``false`` otherwise. 

.. method:: proc  range.isAligned() param where hasParamAligned()

.. method:: proc  range.hasParamStride() param

.. method:: proc  range.hasParamAlignmentField() param

.. method:: proc  range.hasParamAlignment() param

.. method:: proc  range.hasParamAligned() param

.. method:: proc  range.hasParamStrideAltvalAld() param

.. method:: proc type range.hasParamStrideAltvalAld() param

.. method:: proc  range.hasLowBound() param

   Returns ``true`` if this range's low bound is *not* -:math:`\infty`,
   and ``false`` otherwise. 

.. method:: proc  range.lowBound : idxType

   Returns the range's low bound. If the range does not have a low
   bound (e.g., ``..10``), the behavior is undefined.  See also
   :proc:`range.hasLowBound`. 

.. method:: proc  range.hasUnitStride() param

.. method:: proc  range.hasPosNegUnitStride() param

.. method:: proc  range.hasPositiveStride() param where strides.hasSign()

.. method:: proc  range.hasPositiveStride()  where strides.isAny()

.. method:: proc  range.hasNegativeStride() param where strides.hasSign()

.. method:: proc  range.hasNegativeStride()  where strides.isAny()

.. method:: proc param strideKind.isOne() param

.. method:: proc param strideKind.isNegOne() param

.. method:: proc param strideKind.isPosNegOne() param

.. method:: proc param strideKind.isPositive() param

.. method:: proc param strideKind.isNegative() param

.. method:: proc param strideKind.hasSign() param

.. method:: proc param strideKind.isAny() param

.. method:: proc param strideKind.defaultStride() param

.. function:: proc chpl_strideProduct(param s1: strideKind, param s2: strideKind) param

.. function:: proc chpl_strideProduct( r1: range(?),  r2: range(?)) param

.. function:: proc chpl_strideProduct( r1: range(?), param stride2: integral) param

.. function:: proc chpl_strideUnion(param s1: strideKind, param s2: strideKind) param

.. function:: proc chpl_strideUnion( args: _tuple) param

.. function:: proc chpl_strideUnion( arg, args ...) param

.. function:: proc chpl_strideUnion( arg) param: strideKind

.. function:: proc chpl_strideUnionRC( args: _tuple) param

.. function:: proc chpl_strideUnionRC( arg, args ...) param

.. function:: proc chpl_strideUnionRC( arg) param

.. function:: proc chpl_assignStrideIsSafe(param lhs: strideKind, param rhs: strideKind) param

.. function:: proc chpl_assignStrideIsSafe( lhs: range(?),  rhs: range(?)) param

.. function:: proc chpl_assignStrideIsSafe(param lhs: strideKind, param rhs: strideKind,  rhsStride) param where chpl_assignStrideIsSafe(lhs, rhs) || lhs == strideKind.positive && isUint(rhsStride)

.. function:: proc chpl_assignStrideIsSafe(param lhs: strideKind, param rhs: strideKind,  rhsStride) 

.. function:: proc chpl_assignStrideIsUnsafe(param lhs: strideKind, param rhs: strideKind) param

.. method:: proc ref range.chpl_setFields( low,  high,  stride) 

.. method:: proc ref range.chpl_setFields( low,  high) 

.. method:: proc  range.low : idxType

   Returns the range's aligned low bound. If this bound is
   undefined (e.g., ``..10 by -2``), the behavior is undefined.
   
   Example:
   
   .. code-block:: chapel
   
     var r = 1..10 by -2;
     writeln(r.low);
   
   produces the output
   
   .. code-block:: printoutput
   
     2
   
   

.. method:: proc  range.alignedLowAsInt 

.. method:: proc  range.chpl_alignedLowAsIntForIter 

.. method:: proc  range.hasHighBound() param

   Returns ``true`` if this range's high bound is *not* :math:`\infty`,
   and ``false`` otherwise. 

.. method:: proc  range.highBound : idxType

   Returns the range's high bound. If the range does not have a high
   bound (e.g., ``1..``), the behavior is undefined.  See also
   :proc:`range.hasHighBound`.
   

.. method:: proc  range.high : idxType

   Returns the range's aligned high bound. If the aligned high bound is
   undefined (e.g., ``1.. by 2``), the behavior is undefined.
   
   Example:
   
   .. code-block:: chapel
   
     var r = 1..10 by 2;
     writeln(r.high);
   
   produces the output
   
   .. code-block:: printoutput
   
     9
   

.. method:: proc  range.alignedHighAsInt 

.. method:: proc  range.chpl_alignedHighAsIntForIter 

.. method:: proc  range.chpl_isNaturallyAligned()  where !hasPosNegUnitStride() && bounds != boundKind.neither

.. method:: proc  range.chpl_isNaturallyAligned() param where hasPosNegUnitStride() || bounds == boundKind.neither

.. method:: proc  range.isEmpty() 

   Returns ``true`` if the sequence represented by the range is
   empty and ``false`` otherwise.  If the range is ambiguous, the
   behavior is undefined.
   

.. method:: proc  range.isEmpty()  where isFiniteIdxType(idxType) && this.bounds != boundKind.both

   .. warning::

      range.isEmpty() is unstable for unbounded ranged over an enum or bool

.. method:: proc  range.size : int

   Returns the number of values represented by this range as an integer.
   
   If the size exceeds ``max(int)``, this procedure will halt when
   bounds checks are on and have undefined behavior when they are not.
   
   If the represented sequence is infinite or undefined, an error is
   generated.
   

.. method:: proc  range.sizeAs(type t: integral) : t

   Returns the number of elements in this range as the specified
   integer type.
   
   If the size exceeds the maximal value of that type, this
   procedure will halt when bounds checks are on and have undefined
   behavior when they are not.
   
   If the represented sequence is infinite or undefined, an error is
   generated.
   

.. method:: proc  range.sizeAsHelp(type t: integral,  al = this.alignedLowAsInt,  ah = this.alignedHighAsInt) : t

.. method:: proc  range.chpl_sizeAsForIter(type t: integral) : t

.. method:: proc  range.hasFirst() 

   Returns ``true`` if the range has a first index, ``false`` otherwise. 

.. method:: proc  range.hasFirstForIter() 

.. method:: proc  range.hasFirst() param where hasFirstLastAreParam(this)

.. method:: proc  range.hasFirstForIter() param where hasFirstLastAreParam(this)

.. method:: proc  range.first 

   Returns the first value in the sequence the range represents.  If
   the range has no first index, the behavior is undefined.  See
   also :proc:`range.hasFirst`. 

.. method:: proc  range.firstAsInt 

.. method:: proc  range.chpl_firstAsIntForIter 

.. method:: proc  range.hasLast() 

   Returns ``true`` if the range has a last index, ``false`` otherwise. 

.. method:: proc  range.hasLastForIter() 

.. method:: proc  range.hasLast() param where hasFirstLastAreParam(this)

.. method:: proc  range.hasLastForIter() param where hasFirstLastAreParam(this)

.. method:: proc  range.last 

   Returns the last value in the sequence the range represents.  If
   the range has no last index, the behavior is undefined.  See also
   :proc:`range.hasLast`.
   

.. method:: proc  range.lastAsInt 

.. method:: proc  range.chpl_lastAsIntForIter 

.. function:: proc chpl_idxTypeSizeChange(type t) param

.. method:: proc  range.contains( ind: idxType) 

   Returns ``true`` if the range's represented sequence contains
   ``ind``, ``false`` otherwise.  It is an error to invoke ``contains``
   if the represented sequence is not defined. 

.. method:: proc  range.contains( other: range(?)) 

   Returns ``true`` if the range ``other`` is contained within this one,
   ``false`` otherwise.
   

.. function:: operator ==( r1: range(?),  r2: range(?)) param where r1.bounds != r2.bounds && (!isFiniteIdxType(r1.idxType) || !isFiniteIdxType(r2.idxType))

.. function:: operator ==( r1: range(?),  r2: range(?)) : bool where r1.bounds != r2.bounds && isFiniteIdxType(r1.idxType) && isFiniteIdxType(r2.idxType)

   .. warning::

      == between unbounded and bounded ranges is unstable and its behavior may change in the future

.. function:: operator ==( r1: range(?),  r2: range(?)) : bool where r1.bounds == r2.bounds

.. function:: operator !=( r1: range(?),  r2: range(?)) 

.. function:: operator !=( r1: range(?),  r2: range(?)) : bool where r1.bounds != r2.bounds && isFiniteIdxType(r1.idxType) && isFiniteIdxType(r2.idxType)

   .. warning::

      != between unbounded and bounded ranges is unstable and its behavior may change in the future

.. function:: operator !=( r1: range(?),  r2: range(?)) param where r1.bounds != r2.bounds && (!isFiniteIdxType(r1.idxType) || !isFiniteIdxType(r2.idxType))

.. function:: operator <( r1: range(?),  r2: range(?))  where r1.bounds != boundKind.both || r2.bounds != boundKind.both

.. function:: operator >( r1: range(?),  r2: range(?))  where r1.bounds != boundKind.both || r2.bounds != boundKind.both

.. function:: operator <=( r1: range(?),  r2: range(?))  where r1.bounds != boundKind.both || r2.bounds != boundKind.both

.. function:: operator >=( r1: range(?),  r2: range(?))  where r1.bounds != boundKind.both || r2.bounds != boundKind.both

.. function:: proc chpl_ident( r1: range(?),  r2: range(?))  where r1.idxType == r2.idxType && r1.bounds == r2.bounds && r1.strides == r2.strides

.. function:: proc chpl_ident( r1: range(?),  r2: range(?)) param

.. method:: proc  range.boundingBox() 

.. method:: proc  range.tryCast(type t: range(?))  where chpl_tryCastIsSafe(this, t)

   Casts a range to a new range type. Throws an IllegalArgumentError when
   the original bounds and/or stride do not fit in the new idxType
   or when the original stride is not legal for the new `strides` parameter.
   

.. method:: proc  range.tryCast(type t: range(?))  throws where !chpl_tryCastIsSafe(this, t)

.. function:: operator :( r: range(?), type t: range(?))  where chpl_castIsSafe(r, t)

   Cast a range to a new range type.  The overload below throws when
   the original bounds and/or stride do not fit in the new type or 'strides'.
   TODO: should we allow 't' to be generic?
   

.. function:: operator :( r: range(?), type t: range(?))  throws where !chpl_castIsSafe(r, t)

.. function:: proc chpl_throwingCast(type toType,  from)  throws

   cast 'from' to 'to', throwing an error if it does not fit 

.. function:: proc chpl_throwingCast(type toType,  from)  where chpl_idxCastIsSafe(toType, from.type)

.. method:: proc  range.chpl_checkStrides(type toType) : owned(IllegalArgumentError?)

   Returns 'nil' if 'this.stride' fits into 'toType.strides',
   otherwise returns an IllegalArgumentError. 

.. function:: proc chpl_tryCastIsSafe( r: range(?), type t: range(?)) param

.. function:: proc chpl_castIsSafe( r: range(?), type t: range(?)) param

.. function:: proc chpl_idxCastIsSafe(type to, type from) param

.. function:: proc chpl_idxCastThrows(type to, type from) param

.. method:: proc  range.chpl_boundsCheck( other: range(?e, ?b, ?s))  where b == boundKind.neither

.. method:: proc  range.chpl_boundsCheck( other: range(?e, ?b, ?s)) 

.. method:: proc  range.chpl_boundsCheck( other: idxType) 

.. method:: proc ref range.alignLow() 

   private 

.. method:: proc ref range.alignHigh() 

   private 

.. method:: proc  range.indexOrder( ind: idxType) 

   .. warning::

      range.indexOrder() is unstable and its behavior may change in the future

   
        Returns an integer representing the zero-based ordinal value of
        ``ind`` within the range's sequence of values if it is a member
        of the sequence.  Otherwise, returns -1.  It is an error to
        invoke ``indexOrder`` if the represented sequence is not defined
        or the range does not have a first index.
   
        The following calls show the order of index 4 in each of the given ranges:
   
   .. code-block:: chapel
   
          (0..10).indexOrder(4) == 4
          (1..10).indexOrder(4) == 3
          (3..5).indexOrder(4) == 1
          (0..10 by 2).indexOrder(4) == 2
          (3..5 by 2).indexOrder(4) == -1
      

.. method:: proc  range.orderToIndex( ord: integral) : idxType

   .. warning::

      range.orderToIndex() is unstable and its behavior may change in the future

   Returns the zero-based ``ord``-th element of this range's represented
   sequence. It is an error to invoke ``orderToIndex`` if the range is not
   defined, or if ``ord`` is negative or greater than the range's size.
   The ``orderToIndex`` procedure is the reverse of ``indexOrder``.
   
   Example:
   
   .. code-block:: chapel
   
     0..10.orderToIndex(4) == 4
     1..10.orderToIndex(3) == 4
     3..5.orderToIndex(1)  == 4
     0..10 by 2.orderToIndex(2) == 4
   

.. method:: proc  range.translate( offset: integral) 

   .. warning::

      range.translate() is unstable and its behavior may change in the future

   Returns a range with elements shifted from this range by ``offset``.
   Formally, the range's low bound, high bound, and alignment values
   will be shifted while the stride value will be preserved.  If the
   range's alignment is ambiguous, the behavior is undefined.
   
   Example:
   
   .. code-block:: chapel
   
     0..9.translate(1) == 1..10
     0..9.translate(2) == 2..11
     0..9.translate(-1) == -1..8
     0..9.translate(-2) == -2..7
   

.. method:: proc  range.translate( i) 

.. method:: proc  range.translate( offset: integral)  where chpl__singleValIdxType(idxType)

.. method:: proc  range.expand( offset: integral)  where bounds != boundKind.both

.. method:: proc  range.expand( offset: integral) 

   .. warning::

      range.expand() is unstable and its behavior may change in the future

   Returns a range expanded by ``offset`` elements from each end.  If
   ``offset`` is negative, the range will be contracted.  The stride
   and alignment of the original range are preserved.
   
   Example:
   
   .. code-block:: chapel
   
     0..9.expand(1)  == -1..10
     0..9.expand(2)  == -2..11
     0..9.expand(-1) == 1..8
     0..9.expand(-2) == 2..7
   
   
   Formally, for a range represented by the tuple :math:`(l,h,s,a)`,
   the result is :math:`(l-i,h+i,s,a)`.  If the operand range is
   ambiguously aligned, then so is the resulting range.
   

.. method:: proc  range.expand( offset: integral)  where chpl__singleValIdxType(idxType)

.. method:: proc  range.interior( offset: integral)  where bounds != boundKind.both

.. method:: proc  range.interior( offset: integral) 

   .. warning::

      range.interior() is unstable and its behavior may change in the future

   Returns a range with ``offset`` elements from the interior portion of this
   range. If ``offset`` is positive, take elements from the high end, and if
   ``offset`` is negative, take elements from the low end.
   
   Example:
   
   .. code-block:: chapel
   
     0..9.interior(1)  == 9..9
     0..9.interior(2)  == 8..9
     0..9.interior(-1) == 0..0
     0..9.interior(-2) == 0..1
   
   Formally, given a range denoted by the tuple :math:`(l,h,s,a)`,
   
   -  if :math:`i < 0`, the result is :math:`(l,l-(i-1),s,a)`,
   
   -  if :math:`i > 0`, the result is :math:`(h-(i-1),h,s,a)`, and
   
   -  if :math:`i = 0`, the result is :math:`(l,h,s,a)`.
   
   This differs from the behavior of the count operator, in that
   ``interior()`` preserves the alignment, and it uses the low and
   high bounds rather than ``first`` and ``last`` to establish the
   bounds of the resulting range. If the operand range is
   ambiguously aligned, then so is the resulting range.
   

.. method:: proc  range.exterior( offset: integral)  where bounds != boundKind.both

.. method:: proc  range.exterior( offset: integral) 

   .. warning::

      range.exterior() is unstable and its behavior may change in the future

   Returns a range with ``offset`` elements from the exterior portion of this
   range. If ``offset`` is positive, take elements from the high end, and if
   ``offset`` is negative, take elements from the low end.
   
   Example:
   
   .. code-block:: chapel
   
     0..9.exterior(1)  = 10..10
     0..9.exterior(2)  = 10..11
     0..9.exterior(-1) = -1..-1
     0..9.exterior(-2) = -2..-1
   
   Formally, given a range denoted by the tuple :math:`(l,h,s,a)`,
   
   -  if :math:`i < 0`, the result is :math:`(l+i,l-1,s,a)`,
   
   -  if :math:`i > 0`, the result is :math:`(h+1,h+i,s,a)`, and
   
   -  if :math:`i = 0`, the result is :math:`(l,h,s,a)`.
   
   If the operand range is ambiguously aligned, then so is the resulting
   range.
   

.. method:: proc  range.exterior( offset: integral)  where chpl__singleValIdxType(idxType)

.. function:: operator  = (ref r1: range(?),  r2: range(?)) 

.. function:: operator +( r1: range(?),  r2: range(?)) 

.. function:: operator -( r1: range(?),  r2: range(?)) 

.. function:: operator +( r: range(?e, ?b, ?s),  i: integral) 

   .. warning::

      '+' on ranges is unstable and may change in the future

.. function:: operator +=(ref r: range(?e, ?b, ?s),  offset: integral) 

   .. warning::

      '+=' on ranges is unstable and may change in the future

.. function:: operator +( i: integral,  r: range(?e, ?b, ?s)) 

   .. warning::

      '+' on ranges is unstable and may change in the future

.. function:: operator -( r: range(?e, ?b, ?s),  i: integral) 

   .. warning::

      '-' on ranges is unstable and may change in the future

.. function:: operator -=(ref r: range(?e, ?b, ?s),  offset: integral) 

   .. warning::

      '-=' on ranges is unstable and may change in the future

.. function:: proc chpl_check_step_integral( step) 

.. function:: proc chpl_need_to_check_step( step, type strType) param

.. function:: proc chpl_range_check_stride( step, type idxType) 

.. function:: proc chpl_range_check_stride(param step, type idxType) 

.. function:: proc chpl_by_help( r: range(?i, ?b, ?s),  step, param newStrides) 

.. function:: operator by( r: range(?),  step) 

.. function:: operator by( r: range(?), param step) 

.. function:: operator by( r,  step) 

.. function:: operator align( r: range(?i, ?b, ?s),  algn: i) 

.. function:: operator align( r: range(?i, ?b, ?s),  algn) 

.. function:: operator align( r,  algn) 

.. method:: proc  range.offset(in offset: integral) 

   .. warning::

      range.offset() is unstable and its behavior may change in the future

   Returns a range whose alignment is this range's first index plus ``offset``.
   If the range has no first index, a runtime error is generated.
   

.. method:: proc const range.this( other: range(?)) 

.. function:: proc chpl_count_help( r: range(?),  i)  where r.bounds == boundKind.neither

.. function:: proc chpl_count_help( r,  count: integral) 

.. function:: operator #( r: range(?),  count: bool) 

.. function:: operator #( r: range(?),  count: integral) 

.. function:: operator #( r: range(?i),  count) 

.. function:: operator #( r,  count) 

.. function:: proc chpl_checkIfRangeIterWillOverflow(type idxType,  low,  high,  stride,  first = low,  last = high,  shouldHalt = true) 

.. method:: proc  range.checkIfIterWillOverflow( shouldHalt = true) 

.. iterfunction:: iter chpl_direct_range_iter(param low: integral, param high: integral) 

.. iterfunction:: iter chpl_direct_range_iter( low: int(8),  high: int(8)) 

.. iterfunction:: iter chpl_direct_range_iter( low: int(16),  high: int(16)) 

.. iterfunction:: iter chpl_direct_range_iter( low: int(32),  high: int(32)) 

.. iterfunction:: iter chpl_direct_range_iter( low: int(64),  high: int(64)) 

.. iterfunction:: iter chpl_direct_range_iter( low: uint(8),  high: uint(8)) 

.. iterfunction:: iter chpl_direct_range_iter( low: uint(16),  high: uint(16)) 

.. iterfunction:: iter chpl_direct_range_iter( low: uint(32),  high: uint(32)) 

.. iterfunction:: iter chpl_direct_range_iter( low: uint(64),  high: uint(64)) 

.. iterfunction:: iter chpl_direct_range_iter( low: enum,  high: enum) 

.. iterfunction:: iter chpl_direct_range_iter( low: bool,  high: bool) 

.. iterfunction:: iter chpl_direct_range_iter( low,  high)  where !(chpl_isValidRangeIdxType(low.type) && chpl_isValidRangeIdxType(high.type))

.. iterfunction:: iter chpl_direct_strided_range_iter(param low: integral, param high: integral,  stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: int(8),  high: int(8),  stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: int(16),  high: int(16),  stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: int(32),  high: int(32),  stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: int(64),  high: int(64),  stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: uint(8),  high: uint(8),  stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: uint(16),  high: uint(16),  stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: uint(32),  high: uint(32),  stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: uint(64),  high: uint(64),  stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: enum,  high: enum,  stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: bool,  high: bool,  stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter(param low: integral, param high: integral, param stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: int(8),  high: int(8), param stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: int(16),  high: int(16), param stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: int(32),  high: int(32), param stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: int(64),  high: int(64), param stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: uint(8),  high: uint(8), param stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: uint(16),  high: uint(16), param stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: uint(32),  high: uint(32), param stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: uint(64),  high: uint(64), param stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: enum,  high: enum, param stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: bool,  high: bool, param stride: integral) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: int(8),  high: int(8),  stride: uint(?w2)) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: int(16),  high: int(16),  stride: uint(?w2)) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: int(32),  high: int(32),  stride: uint(?w2)) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: int(64),  high: int(64),  stride: uint(?w2)) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: uint(8),  high: uint(8),  stride: uint(?w2)) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: uint(16),  high: uint(16),  stride: uint(?w2)) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: uint(32),  high: uint(32),  stride: uint(?w2)) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: uint(64),  high: uint(64),  stride: uint(?w2)) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: int(8),  high: int(8),  stride) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: int(16),  high: int(16),  stride) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: int(32),  high: int(32),  stride) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: int(64),  high: int(64),  stride) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: uint(8),  high: uint(8),  stride) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: uint(16),  high: uint(16),  stride) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: uint(32),  high: uint(32),  stride) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low: uint(64),  high: uint(64),  stride) 

.. iterfunction:: iter chpl_direct_strided_range_iter( low,  high,  stride)  where !(chpl_isValidRangeIdxType(low.type) && chpl_isValidRangeIdxType(high.type))

.. iterfunction:: iter chpl_direct_counted_range_iter( low: int(?w),  count) 

.. iterfunction:: iter chpl_direct_counted_range_iter( low: uint(?w),  count) 

.. iterfunction:: iter chpl_direct_counted_range_iter( low: enum,  count: integral) 

.. iterfunction:: iter chpl_direct_counted_range_iter( low: bool,  count: integral) 

.. iterfunction:: iter chpl_direct_counted_range_iter( low,  count)  where !(chpl_isValidRangeIdxType(low.type) && chpl_isValidRangeIdxType(count.type))

.. iterfunction:: iter chpl_direct_counted_range_iter_helper( low,  count) 

.. iterfunction:: iter chpl_direct_pos_stride_range_iter( low: ?t,  high,  stride) 

.. iterfunction:: iter chpl_direct_param_stride_range_iter( low: ?t,  high, param stride) 

.. itermethod:: iter  range.these() : nothing where !hasLowBoundForIter(this) && !hasHighBoundForIter(this)

.. itermethod:: iter  range.these()  where hasLowBoundForIter(this) && !hasHighBoundForIter(this)

.. itermethod:: iter  range.these()  where !hasLowBoundForIter(this) && hasHighBoundForIter(this)

.. itermethod:: iter  range.these()  where hasLowBoundForIter(this) && hasHighBoundForIter(this) && !hasPosNegUnitStride()

.. itermethod:: iter  range.these()  where hasLowBoundForIter(this) && hasHighBoundForIter(this) && hasPosNegUnitStride()

.. itermethod:: iter  range.generalIterator() 

.. itermethod:: iter  range.these(param tag: iterKind)  where tag == iterKind.standalone && !localeModelPartitionsIterationOnSublocales

.. itermethod:: iter  range.these(param tag: iterKind)  where tag == iterKind.leader

.. itermethod:: iter  range.these(param tag: iterKind,  followThis)  where tag == iterKind.follower

.. function:: operator :( x: range(?), type t: string) 

.. method:: proc  range.chpl__unTranslate( i) 

.. function:: proc chpl__mod( dividend: integral,  modulus: integral)  where numBits(dividend.type) >= numBits(modulus.type)

.. function:: proc chpl__mod( dividend: integral,  modulus: integral)  where numBits(dividend.type) < numBits(modulus.type) && isInt(modulus)

.. function:: proc chpl__diffMod( minuend: integral,  subtrahend: integral,  modulus: integral) : minuend.type where minuend.type == subtrahend.type

.. function:: proc chpl__diffMod( minuend: integral,  subtrahend: integral,  modulus: integral) 

.. function:: proc chpl__add( a: ?t,  b: t, type resultType) 

.. function:: proc chpl__addRangeStrides( start,  stride,  count) : start.type

.. function:: proc chpl__extendedEuclidHelper( u,  v) 

.. function:: proc chpl__extendedEuclid( u: int(32),  v: int(32)) 

.. function:: proc chpl__extendedEuclid( u: int(64),  v: int(64)) 

.. function:: proc chpl__idxTypeToIntIdxType(type idxType) type

.. method:: proc  range.chpl_intToIdx( i) 

.. function:: proc chpl__intToIdx(type idxType: integral,  i: integral) 

.. function:: proc chpl__intToIdx(type idxType: integral, param i: integral) param

.. function:: proc chpl__intToIdx(type idxType: enum,  i: integral) 

.. function:: proc chpl__intToIdx(type idxType: enum, param i: integral) param

.. function:: proc chpl__intToIdx(type idxType,  i: integral)  where isBoolType(idxType)

.. function:: proc chpl__intToIdx(type idxType, param i: integral) param where isBoolType(idxType)

.. function:: proc chpl__intToIdx(type idxType,  i: nothing) 

.. function:: proc chpl__idxToInt( i: integral) 

.. function:: proc chpl__idxToInt(param i: integral) param

.. function:: proc chpl__idxToInt( i: enum) 

.. function:: proc chpl__idxToInt(param i: enum) param

.. function:: proc chpl__idxToInt( i: bool) 

.. function:: proc chpl__idxToInt(param i: bool) param

.. function:: proc chpl__singleValIdxType(type t) param

