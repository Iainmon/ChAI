.. default-domain:: chpl

.. module:: ChapelIteratorSupport
   :noindex:

ChapelIteratorSupport
=====================
**Usage**

.. code-block:: chapel

   use ChapelIteratorSupport;


or

.. code-block:: chapel

   import ChapelIteratorSupport;


Data parallel constructs (such as ``forall`` loops) are implicitly
vectorizable. If the ``--vectorize`` compiler flag is thrown the Chapel
compiler will emit vectorization hints to the backend compiler, though the
effects will vary based on the target compiler.

In order to allow users to explicitly request vectorization, this prototype
vectorizing iterator is being provided. Loops that invoke this iterator will
be marked with vectorization hints, provided the ``--vectorize`` flag is
thrown.

This iterator is currently available for all Chapel programs and does not
require a ``use`` statement to make it available. In future releases it will
be moved to a standard module and will likely require a ``use`` statement to
make it available.


.. function:: proc iteratorIndex( ic: _iteratorClass) 

.. function:: proc iteratorIndex( t: _tuple) 

.. function:: proc iteratorIndexType( x) type

.. function:: proc iteratorIndexTypeZip(xs ...) type

.. function:: proc iteratorToArrayElementType(type t: _iteratorRecord) type

.. function:: proc thunkToReturnType(type t: _thunkRecord) type

.. function:: proc chpl_elemTypeForReducingIterables( x) type

.. function:: proc chpl_buildStandInRTT(type domType: domain) type

.. function:: proc chpl_buildStandInRTT(type arrType: []) type

.. function:: proc chpl_buildStandInRTT(type irType: _iteratorRecord) type

.. function:: proc chpl_buildStandInRTT(type nonRTtype) type

.. function:: proc chpl_buildStandInRTT( domInst) type where isSubtype(domInst.type, unmanaged(DefaultRectangularDom))

.. function:: proc chpl_buildStandInRTT( domInst) type

.. iterfunction:: iter chpl_trivialLeader() 

.. function:: proc chpl_computeIteratorShape( arg: []) 

.. function:: proc chpl_computeIteratorShape( arg: domain) 

.. function:: proc chpl_computeIteratorShape( arg: range(?)) 

.. function:: proc chpl_computeIteratorShape( arg: _iteratorRecord) 

.. function:: proc chpl_computeIteratorShape( arg) 

.. function:: proc chpl_iteratorHasShape( ir: _iteratorRecord) param

.. function:: proc chpl_iteratorHasDomainShape( ir: _iteratorRecord) param

.. function:: proc chpl_iteratorHasRangeShape( ir: _iteratorRecord) param

.. function:: proc chpl_iteratorShapeStaticTypeOrNothing(type ir: _iteratorRecord) type

.. function:: proc chpl_iteratorFromForExpr( ir: _iteratorRecord) param

.. function:: proc chpl_iteratorFromForExpr( arg) param

.. function:: proc chpl_iteratorFromForeachExpr( ir: _iteratorRecord) param

.. function:: proc chpl_iteratorFromForeachExpr( arg) param

.. function:: operator  = (ref ic: _iteratorRecord,  xs) 

.. function:: operator  = (ref ic: _iteratorRecord,  x: iteratorIndexType(ic)) 

.. function:: proc _getIterator(const ref x) 

.. function:: proc _getIterator(type t) 

.. function:: proc _getIteratorZip( x) 

.. function:: proc _getIteratorZip(type t) 

.. function:: proc _getIteratorZip( x: _tuple) 

.. function:: proc _getIteratorZip(type t: _tuple) 

.. function:: proc _freeIterator( ic: _iteratorClass) 

.. function:: proc _freeIterator( x: _tuple) 

.. function:: proc _toLeader(const ir: _iteratorRecord)  where __primitive("has leader", ir)

.. function:: proc _toLeader(const x)  where !isSubtype(x.type, _iteratorRecord) && __primitive("has leader", x.these())

.. function:: proc _toLeaderZip( x)  where !isTuple(x) && Reflection.canResolve("_toLeader", x)

.. function:: proc _toLeaderZip( x: _tuple)  where Reflection.canResolve("_toLeader", x(0))

.. function:: proc _toStandalone( iterator: _iteratorClass) 

.. function:: proc _toStandalone( ir: _iteratorRecord) 

.. function:: proc _toStandalone( x) 

.. function:: proc _toLeader( ir: _iteratorRecord, args ...) 

.. function:: proc _toLeader( x, args ...) 

.. function:: proc _toLeaderZip( x, args ...) 

.. function:: proc _toLeaderZip( x: _tuple, args ...) 

.. function:: proc _toStandalone( iterator: _iteratorClass, args ...) 

.. function:: proc _toStandalone( ir: _iteratorRecord, args ...) 

.. function:: proc _toStandalone( x, args ...) 

.. function:: proc chpl__canHaveFastFollowers( x) param

.. function:: proc chpl__canLeadFastFollowers( x) param

.. function:: proc chpl__staticFastFollowCheck( x) param

.. function:: proc chpl__staticFastFollowCheck( x,  lead) param

.. function:: proc chpl__dynamicFastFollowCheck( x) 

.. function:: proc chpl__dynamicFastFollowCheck( x,  lead) 

.. function:: proc _toFollower( iterator: _iteratorClass,  leaderIndex) 

.. function:: proc _toFollower( ir: _iteratorRecord,  leaderIndex) 

.. function:: proc _toFollower(const ref x,  leaderIndex) 

.. function:: proc _toFollowerZip( x,  leaderIndex) 

.. function:: proc _toFollowerZip( x: _tuple,  leaderIndex) 

.. function:: proc _toFollowerZipInternal( x: _tuple,  leaderIndex, param dim: int) 

.. function:: proc _toFastFollower( iterator: _iteratorClass,  leaderIndex,  fast: bool) 

.. function:: proc _toFastFollower( ir: _iteratorRecord,  leaderIndex,  fast: bool) 

.. function:: proc _toFastFollower( x,  leaderIndex) 

.. function:: proc singleValIter( iterables: _tuple) param

.. function:: proc singleRefIter( iterables: _tuple) param

