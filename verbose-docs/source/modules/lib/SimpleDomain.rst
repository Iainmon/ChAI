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

.. function:: proc isDomain(deflt d: ?dt) param: bool

.. function:: proc isRegularDomain(deflt d: ?dt) param: bool

.. function:: proc zeroTup(param rank: int) deflt: rank*int

.. function:: proc simpleTupleType(param rank: int, type eltType = int) type

.. type:: type tuple = _tuple(?)

.. method:: proc deflt tuple.first ref

.. method:: proc deflt tuple.last ref

.. method:: proc deflt tuple.eltType type

.. method:: proc deflt tuple.uncons ref: (head.type, tail.type)

.. method:: proc deflt tuple.head ref

.. method:: proc deflt tuple.tail deflt

.. function:: proc isTupleOfOrder(type leafType, param order: int, deflt tup: ?tupType) param: bool

.. function:: proc computeStrides(deflt shape: ?rank*int) deflt: simpleTupleType(rank)

.. function:: proc computeSize(deflt shape: ?rank*int) deflt: int

.. record:: rect : serializable

   .. attribute:: param rank: int

   .. attribute:: var shape: rank*int

   .. attribute:: var offset: rank*int

   .. attribute:: var size: int

   .. attribute:: var strides: rank*int

   .. method:: proc deflt init(const shape: ?rank*int, const offset: rank*int, const size: int, const strides: rank*int = computeStrides(shape)) deflt

   .. method:: proc deflt init(const shape: ?rank*int, const offset: rank*int = zeroTup(rank)) deflt

   .. method:: proc deflt init(const shape: int ...?rnk) deflt

   .. method:: proc deflt init(const ranges: ?rank*range) deflt

   .. method:: proc deflt init(const ranges: range(?) ...?rank) deflt

   .. method:: proc deflt init(const dom: domain(?)) deflt where isDomain(dom) && dom.isRectangular()

   .. method:: proc deflt init(const other: rect(?rank)) deflt

   .. method:: proc deflt init=(const other: rect(?rank)) deflt

   .. method:: proc deflt init=(const shape: ?rank*int) deflt

      
      Copy initializes a ``rect`` of rank ``rank`` from a tuple ``shape`` of ``int``s where ``shape.size == rank``.
      

   .. method:: operator deflt :(const shape: ?rank*int, type toType: rect(rank)) deflt: rect(rank)

   .. method:: proc deflt init=(const shapeOffset: 2*(tuple(?))) deflt where isTupleOfOrder(int, 2, shapeOffset)

   .. method:: operator deflt :(const shapeOffset: 2*(tuple(?)), type toType: rect(?)) deflt where isTupleOfOrder(int, 2, shapeOffset)

   .. method:: proc deflt init=(const ref dom: domain(?)) deflt where isDomain(dom) && dom.isRectangular()

   .. method:: operator deflt :(const ref dom: domain(?), type toType: rect(?)) deflt where isDomain(dom) && dom.isRectangular()

   .. method:: proc deflt low const: rank*int

   .. method:: proc deflt high deflt: rank*int

   .. method:: proc deflt coords const: 2*rank*int

   .. method:: proc deflt shiftedShape deflt: rank*int

   .. method:: proc deflt dims() const: rank*range

   .. method:: proc deflt indexAt(const order: int) deflt: simpleTupleType(rank)

   .. method:: proc deflt atIndex(const idx: int) deflt: int

   .. method:: proc deflt atIndex(const idx: rank*int) deflt: int

   .. itermethod:: iter deflt serialIter() const: simpleTupleType(rank)

   .. itermethod:: iter deflt these() const: simpleTupleType(rank)

   .. itermethod:: iter deflt these(param tag: iterKind) const: simpleTupleType(rank) where tag == iterKind.standalone

   .. itermethod:: iter deflt eachOrder() const: (int, simpleTupleType(rank))

   .. itermethod:: iter deflt eachOrder(param tag: iterKind) const: (int, simpleTupleType(rank)) where tag == iterKind.standalone

   .. method:: proc deflt originate(const origin: rank*int) deflt

   .. method:: proc deflt translate(const change: rank*int) deflt

   .. method:: proc deflt contains(const rct: rect(rank)) deflt: bool

   .. method:: proc deflt contains(const idx: rank*int) deflt: bool

   .. method:: proc deflt toString() deflt

   .. method:: proc deflt serialize(deflt writer: IO.stdout.type, ref serializer) deflt

   .. method:: proc deflt serialize(deflt writer: IO.fileWriter(?), ref serializer) deflt

.. function:: operator  = (ref me: rect(?rank), const other: rect(rank)) deflt

.. function:: operator +(const d: rect(?rank), const offset: rank*int) deflt: rect(rank)

.. function:: operator -(const d: rect(?rank), const offset: rank*int) deflt: rect(rank)

.. function:: operator &(const a: rect(?rank), const b: rect(rank)) deflt: rect(rank)

.. function:: proc computeBlocks(deflt shape: ?rank*int) deflt: rank*int

.. function:: proc wrap(deflt x: int) deflt: 1*(int)

.. function:: proc wrap(deflt tup: ?rank*int) deflt: rank*int

.. function:: proc unwrap(deflt tup: ?rank*int) deflt

.. function:: proc isTupleOfOrder(param order: int, deflt tup: ?tupType) param: bool

