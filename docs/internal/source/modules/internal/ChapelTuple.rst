.. default-domain:: chpl

.. module:: ChapelTuple
   :noindex:

ChapelTuple
===========
**Usage**

.. code-block:: chapel

   use ChapelTuple;


or

.. code-block:: chapel

   import ChapelTuple;



.. record:: _tuple

   .. attribute:: param size: int

.. function:: proc chpl__init_tuple(param size: int) 

.. function:: proc _build_tuple(type t ...) type

.. function:: proc _build_tuple(x ...) 

.. function:: proc _build_tuple_noref(type t ...) type

.. function:: proc _build_tuple_always_allow_ref(x ...) 

.. function:: proc chpl__unref(type t) type

.. function:: operator *(param p: int, type t) type

.. function:: operator *(param p: uint, type t) type

.. function:: operator *(param p: bool, type t) type

.. function:: operator *( p: bool, type t) type

.. function:: proc _build_star_tuple_noref(param p: int, type t) type

.. function:: operator *(type t, param p: int) 

.. function:: operator *( p: integral, type t) type

.. function:: proc chpl__tuplify( x) 

.. function:: proc _check_tuple_var_decl(const ref x: _tuple, param p) param

.. function:: proc _check_tuple_var_decl(const ref x, param p) param

.. function:: operator  = (ref x: _tuple,  y: _tuple)  where x.size == y.size

.. method:: proc  _tuple.this( i: integral) ref

.. method:: proc  _tuple.this( i: bool) ref

.. data:: config param CHPL_WARN_TUPLE_ITERATION = "unset"

.. itermethod:: iter ref _tuple.these() ref

.. itermethod:: iter  _tuple.these(param tag: iterKind)  where tag == iterKind.leader

.. itermethod:: iter ref _tuple.these(param tag: iterKind,  followThis: _tuple) ref where tag == iterKind.follower

.. method:: proc  _tuple.indices 

.. function:: operator :( x: (?, ?), type t: complex(64)) 

   
   Cast from a generic two-tuple to a ``complex(64)``
   

.. function:: operator :( x: (?, ?), type t: complex(128)) 

   
   Cast from a generic two-tuple to a ``complex(128)``
   

.. function:: operator :( x: _tuple, type t: _tuple) 

.. function:: proc chpl__tupleRest( t: _tuple) 

.. function:: operator +( a: _tuple) 

.. function:: operator -( a: _tuple) 

.. function:: operator ~( a: _tuple) 

.. function:: operator !( a: _tuple) 

.. function:: proc max(type t) : t where isTupleType(t)

   
   Returns a tuple of type t with each component set to ``max``
   of the type in the corresponding component of the argument.
   

.. function:: proc min(type t) : t where isTupleType(t)

   
   Returns a tuple of type t with each component set to ``min``
   of the type in the corresponding component of the argument.
   

.. function:: proc chpl_TwoHomogTuples( t1,  t2) param

.. function:: operator +( a: _tuple,  b: _tuple)  where chpl_TwoHomogTuples(a, b)

.. function:: operator +( a: _tuple,  b: _tuple) 

.. function:: operator -( a: _tuple,  b: _tuple)  where chpl_TwoHomogTuples(a, b)

.. function:: operator -( a: _tuple,  b: _tuple) 

.. function:: operator *( a: _tuple,  b: _tuple)  where chpl_TwoHomogTuples(a, b)

.. function:: operator *( a: _tuple,  b: _tuple) 

.. function:: operator /( a: _tuple,  b: _tuple)  where chpl_TwoHomogTuples(a, b)

.. function:: operator /( a: _tuple,  b: _tuple) 

.. function:: operator %( a: _tuple,  b: _tuple)  where chpl_TwoHomogTuples(a, b)

.. function:: operator %( a: _tuple,  b: _tuple) 

.. function:: operator **( a: _tuple,  b: _tuple)  where chpl_TwoHomogTuples(a, b)

.. function:: operator **( a: _tuple,  b: _tuple) 

.. function:: operator &( a: _tuple,  b: _tuple)  where chpl_TwoHomogTuples(a, b)

.. function:: operator &( a: _tuple,  b: _tuple) 

.. function:: operator |( a: _tuple,  b: _tuple)  where chpl_TwoHomogTuples(a, b)

.. function:: operator |( a: _tuple,  b: _tuple) 

.. function:: operator ^( a: _tuple,  b: _tuple)  where chpl_TwoHomogTuples(a, b)

.. function:: operator ^( a: _tuple,  b: _tuple) 

.. function:: operator <<( a: _tuple,  b: _tuple)  where chpl_TwoHomogTuples(a, b)

.. function:: operator <<( a: _tuple,  b: _tuple) 

.. function:: operator >>( a: _tuple,  b: _tuple)  where chpl_TwoHomogTuples(a, b)

.. function:: operator >>( a: _tuple,  b: _tuple) 

.. function:: operator >( a: _tuple,  b: _tuple) 

.. function:: operator >=( a: _tuple,  b: _tuple) 

.. function:: operator <( a: _tuple,  b: _tuple) 

.. function:: operator <=( a: _tuple,  b: _tuple) 

.. function:: operator ==( a: _tuple,  b: _tuple) 

.. function:: operator !=( a: _tuple,  b: _tuple) 

.. function:: operator +( x: _tuple,  y: x(0).type)  where isHomogeneousTuple(x)

.. function:: operator +( x: ?t,  y: _tuple)  where isHomogeneousTuple(y) && isCoercible(t, y(0).type)

.. function:: operator -( x: _tuple,  y: x(0).type)  where isHomogeneousTuple(x)

.. function:: operator -( x: ?t,  y: _tuple)  where isHomogeneousTuple(y) && isCoercible(t, y(0).type)

.. function:: operator *( x: _tuple,  y: x(0).type)  where isHomogeneousTuple(x)

.. function:: operator *( x: ?t,  y: _tuple)  where isHomogeneousTuple(y) && isCoercible(t, y(0).type)

.. function:: operator /( x: _tuple,  y: x(0).type)  where isHomogeneousTuple(x)

.. function:: operator /( x: ?t,  y: _tuple)  where isHomogeneousTuple(y) && isCoercible(t, y(0).type)

.. function:: operator %( x: _tuple,  y: x(0).type)  where isHomogeneousTuple(x)

.. function:: operator %( x: ?t,  y: _tuple)  where isHomogeneousTuple(y) && isCoercible(t, y(0).type)

.. function:: operator **( x: _tuple,  y: x(0).type)  where isHomogeneousTuple(x)

.. function:: operator **( x: ?t,  y: _tuple)  where isHomogeneousTuple(y) && isCoercible(t, y(0).type)

.. function:: operator &( x: _tuple,  y: x(0).type)  where isHomogeneousTuple(x)

.. function:: operator &( x: ?t,  y: _tuple)  where isHomogeneousTuple(y) && isCoercible(t, y(0).type)

.. function:: operator |( x: _tuple,  y: x(0).type)  where isHomogeneousTuple(x)

.. function:: operator |( x: ?t,  y: _tuple)  where isHomogeneousTuple(y) && isCoercible(t, y(0).type)

.. function:: operator ^( x: _tuple,  y: x(0).type)  where isHomogeneousTuple(x)

.. function:: operator ^( x: ?t,  y: _tuple)  where isHomogeneousTuple(y) && isCoercible(t, y(0).type)

.. function:: operator <<( x: _tuple,  y: x(0).type)  where isHomogeneousTuple(x)

.. function:: operator <<( x: ?t,  y: _tuple)  where isHomogeneousTuple(y) && isCoercible(t, y(0).type)

.. function:: operator >>( x: _tuple,  y: x(0).type)  where isHomogeneousTuple(x)

.. function:: operator >>( x: ?t,  y: _tuple)  where isHomogeneousTuple(y) && isCoercible(t, y(0).type)

