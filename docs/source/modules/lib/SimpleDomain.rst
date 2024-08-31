.. default-domain:: chpl

.. module:: SimpleDomain

SimpleDomain
============
**Usage**

.. code-block:: chapel

   use SimpleDomain;


or

.. code-block:: chapel

   import SimpleDomain;

.. function:: proc isDomain(d: ?dt) param: bool

.. function:: proc isRegularDomain(d: ?dt) param: bool

.. function:: proc zeroTup(param rank: int): rank*int

.. function:: proc simpleTupleType(param rank: int, type eltType = int) type

.. type:: type tuple = _tuple(?)

.. method:: proc tuple.first ref

.. method:: proc tuple.last ref

.. method:: proc tuple.eltType type

.. method:: proc tuple.uncons ref: (head.type, tail.type)

.. method:: proc tuple.head ref

.. method:: proc tuple.tail

.. function:: proc isTupleOfOrder(type leafType, param order: int, tup: ?tupType) param: bool

.. function:: proc computeStrides(shape: ?rank*int): simpleTupleType(rank)

.. function:: proc computeSize(shape: ?rank*int): int

.. function:: proc computeAtIndex(const idx: int): int

.. function:: proc computeAtIndex(const shape: ?rank*int, const idx: rank*int): int

.. record:: rect : serializable

   .. attribute:: param rank: int

   .. attribute:: var shape: rank*int

   .. attribute:: var offset: rank*int

   .. attribute:: var size: int

   .. attribute:: var strides: rank*int

   .. method:: proc init(const shape: ?rank*int, const offset: rank*int, const size: int, const strides: rank*int = computeStrides(shape))

   .. method:: proc init(const shape: ?rank*int, const offset: rank*int = zeroTup(rank))

   .. method:: proc init(const shape: int ...?rnk)

   .. method:: proc init(const ranges: ?rank*range)

   .. method:: proc init(const ranges: range(?) ...?rank)

   .. method:: proc init(const dom: domain(?)) where isDomain(dom) && dom.isRectangular()

   .. method:: proc init(const other: rect(?rank))

   .. method:: proc init=(const other: rect(?rank))

   .. method:: proc init=(const shape: ?rank*int)

      
      Copy initializes a ``rect`` of rank ``rank`` from a tuple ``shape`` of ``int``s where ``shape.size == rank``.
      

   .. method:: operator :(const shape: ?rank*int, type toType: rect(rank)): rect(rank)

   .. method:: proc init=(const shapeOffset: 2*(tuple(?))) where isTupleOfOrder(int, 2, shapeOffset)

   .. method:: operator :(const shapeOffset: 2*(tuple(?)), type toType: rect(?)) where isTupleOfOrder(int, 2, shapeOffset)

   .. method:: proc init=(const ref dom: domain(?)) where isDomain(dom) && dom.isRectangular()

   .. method:: operator :(const ref dom: domain(?), type toType: rect(?)) where isDomain(dom) && dom.isRectangular()

   .. method:: proc low: rank*int

   .. method:: proc high: rank*int

   .. method:: proc coords: 2*rank*int

   .. method:: proc shiftedShape: rank*int

   .. method:: proc dims(): rank*range

   .. method:: proc indexAt(const order: int): simpleTupleType(rank)

   .. method:: proc atIndex(const idx: int): int

   .. method:: proc atIndex(const idx: rank*int): int

   .. itermethod:: iter serialIter(): simpleTupleType(rank)

   .. itermethod:: iter these(): simpleTupleType(rank)

   .. itermethod:: iter these(param tag: iterKind): simpleTupleType(rank) where tag == iterKind.standalone

   .. itermethod:: iter eachOrder(): (int, simpleTupleType(rank))

   .. itermethod:: iter eachOrder(param tag: iterKind): (int, simpleTupleType(rank)) where tag == iterKind.standalone

   .. method:: proc originate(const origin: rank*int)

   .. method:: proc translate(const change: rank*int)

   .. method:: proc contains(const rct: rect(rank)): bool

   .. method:: proc contains(const idx: rank*int): bool

   .. method:: proc toString()

   .. method:: proc serialize(writer: IO.stdout.type, ref serializer)

   .. method:: proc serialize(writer: IO.fileWriter(?), ref serializer)

.. function:: operator  = (ref me: rect(?rank), const other: rect(rank))

.. function:: operator +(const d: rect(?rank), const offset: rank*int): rect(rank)

.. function:: operator -(const d: rect(?rank), const offset: rank*int): rect(rank)

.. function:: operator &(const a: rect(?rank), const b: rect(rank)): rect(rank)

.. function:: proc computeBlocks(shape: ?rank*int): rank*int

.. function:: proc wrap(x: int): 1*(int)

.. function:: proc wrap(tup: ?rank*int): rank*int

.. function:: proc unwrap(tup: ?rank*int)

.. function:: proc isTupleOfOrder(param order: int, tup: ?tupType) param: bool

