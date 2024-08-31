.. default-domain:: chpl

.. module:: Atomics
   :noindex:

Atomics
=======
**Usage**

.. code-block:: chapel

   use Atomics;


or

.. code-block:: chapel

   import Atomics;



For example, the following code declares an atomic variable ``x`` that
stores an ``int``:

.. code-block:: chapel

      var x: atomic int;

Such an atomic variable that is declared without an initialization expression
will store the default value of the contained type (i.e. ``0`` or ``false``).

Atomic variables can also be declared with an initial value:

.. code-block:: chapel

      var y: atomic int = 1;

Similarly, a temporary ``atomic`` value can be created by casting to atomic:

.. code-block:: chapel

      var one: int = 1;
      ... one : atomic int... // creates an `atomic int` initialized with 1

Assignment is supported between atomic variables as well:

.. code-block:: chapel

      var x: atomic int = 1;
      var y: atomic int = 2;

      x = y; // equivalent to x.write(y.read())

Chapel currently supports atomic operations for bools, all supported sizes of
signed and unsigned integers, as well as all supported sizes of reals.  Note
that not all operations are supported for all atomic types. The supported types
are listed for each operation.

  *Rationale*.

  The choice of supported atomic variable types as well as the atomic
  operations was strongly influenced by the C11 standard.

Most atomic methods accept an optional argument named ``order`` of type
``memoryOrder``. The ``order`` argument is used to specify the ordering
constraints of atomic operations. The supported memoryOrder values are:

 * memoryOrder.relaxed
 * memoryOrder.acquire
 * memoryOrder.release
 * memoryOrder.acqRel
 * memoryOrder.seqCst


See also :ref:`Chapter-Memory_Consistency_Model` and in particular
:ref:`non_sc_atomics` for more information on the meaning of these memory
orders.

Unless specified, the default for the memoryOrder parameter is
memoryOrder.seqCst.

   *Implementors’ note*.

   Not all architectures or implementations may support all memoryOrder
   values. In these cases, the implementation should default to a more
   conservative ordering than specified.


.. function:: proc chpl_atomic_thread_fence( order: memory_order) 

.. function:: proc atomic_fence( order: memory_order = memory_order_seq_cst) 

.. function:: proc atomicFence(param order: memoryOrder = memoryOrder.seqCst) 

   An atomic fence that establishes an ordering of non-atomic and relaxed
   atomic operations. 

.. function:: proc chpl__processorAtomicType(type valType) type

.. function:: proc chpl__atomicType(type valType) type

.. function:: proc chpl_comm_ensure_progress() : void

.. record:: AtomicBool : writeSerializable

   .. method:: proc type valType type

   .. method:: proc  valType type

   .. attribute:: var _v: externT(bool)

   .. method:: proc ref init_helper( val: bool) 

   .. method:: proc  init() 

   .. method:: proc  init=( other: AtomicBool) 

   .. method:: proc  init=( other: bool) 

   .. method:: proc ref deinit() 

   .. method:: proc const read(param order: memoryOrder = memoryOrder.seqCst) : bool

      
      Returns the stored value.
      

   .. method:: proc ref write( val: bool, param order: memoryOrder = memoryOrder.seqCst) : void

      
      Stores `val` as the new value.
      

   .. method:: proc ref exchange( val: bool, param order: memoryOrder = memoryOrder.seqCst) : bool

      
      Stores `val` as the new value and returns the original value.
      

   .. method:: proc ref compareExchange(ref expected: bool,  desired: bool, param order: memoryOrder = memoryOrder.seqCst) : bool

      
      Stores `desired` as the new value, if and only if the original value is
      equal to `expected`. Returns `true` if `desired` was stored, otherwise
      updates `expected` to the original value.
      

   .. method:: proc ref compareExchange(ref expected: bool,  desired: bool, param success: memoryOrder, param failure: memoryOrder) : bool

   .. method:: proc ref compareExchangeWeak(ref expected: bool,  desired: bool, param order: memoryOrder = memoryOrder.seqCst) : bool

      
      Similar to :proc:`compareExchange`, except that this function may
      return `false` even if the original value was equal to `expected`. This
      may happen if the value could not be updated atomically.
      
      This weak version is allowed to spuriously fail, but when
      compareExchange is already in a loop, it can offer better
      performance on some platforms.
      

   .. method:: proc ref compareExchangeWeak(ref expected: bool,  desired: bool, param success: memoryOrder, param failure: memoryOrder) 

   .. method:: proc ref compareAndSwap( expected: bool,  desired: bool, param order: memoryOrder = memoryOrder.seqCst) : bool

      .. warning::

         'compareAndSwap' is unstable

      
      Stores `desired` as the new value, if and only if the original value is
      equal to `expected`. Returns `true` if `desired` was stored.
      

   .. method:: proc ref testAndSet(param order: memoryOrder = memoryOrder.seqCst) : bool

      
      Stores `true` as the new value and returns the old value.
      

   .. method:: proc ref clear(param order: memoryOrder = memoryOrder.seqCst) : void

      
      Stores `false` as the new value.
      

   .. method:: proc const waitFor( val: bool, param order: memoryOrder = memoryOrder.seqCst) : void

      
      Waits until the stored value is equal to `val`. The implementation may
      yield the running task while waiting.
      

   .. method:: proc const serialize( writer, ref serializer)  throws

.. function:: operator :( rhs: bool, type t: AtomicBool) 

.. record:: AtomicT : writeSerializable

   .. attribute:: type valType

   .. attribute:: var _v: externT(valType)

   .. method:: proc ref init_helper( val: valType) 

   .. method:: proc  init(type valType) 

   .. method:: proc  init=(const ref other: this.type) 

   .. method:: proc  init=( other: this.type.valType) 

   .. method:: proc ref deinit() 

   .. method:: proc const read(param order: memoryOrder = memoryOrder.seqCst) : valType

      
      Returns the stored value.
      

   .. method:: proc ref write( val: valType, param order: memoryOrder = memoryOrder.seqCst) : void

      
      Stores `val` as the new value.
      

   .. method:: proc ref exchange( val: valType, param order: memoryOrder = memoryOrder.seqCst) : valType

      
      Stores `val` as the new value and returns the original value.
      

   .. method:: proc ref compareExchange(ref expected: valType,  desired: valType, param order: memoryOrder = memoryOrder.seqCst) : bool

      
      Stores `desired` as the new value, if and only if the original value is
      equal to `expected`. Returns `true` if `desired` was stored, otherwise
      updates `expected` to the original value.
      

   .. method:: proc ref compareExchange(ref expected: valType,  desired: valType, param success: memoryOrder, param failure: memoryOrder) : bool

   .. method:: proc ref compareExchangeWeak(ref expected: valType,  desired: valType, param order: memoryOrder = memoryOrder.seqCst) : bool

      
      Similar to :proc:`compareExchange`, except that this function may
      return `false` even if the original value was equal to `expected`. This
      may happen if the value could not be updated atomically.
      
      This weak version is allowed to spuriously fail, but when
      compareExchange is already in a loop, it can offer better
      performance on some platforms.
      

   .. method:: proc ref compareExchangeWeak(ref expected: valType,  desired: valType, param success: memoryOrder, param failure: memoryOrder) : bool

   .. method:: proc ref compareAndSwap( expected: valType,  desired: valType, param order: memoryOrder = memoryOrder.seqCst) : bool

      .. warning::

         'compareAndSwap' is unstable

      
      Stores `desired` as the new value, if and only if the original value is
      equal to `expected`. Returns `true` if `desired` was stored.
      

   .. method:: proc ref fetchAdd( val: valType, param order: memoryOrder = memoryOrder.seqCst) : valType

      
      :returns: The original value.
      
      Adds `val` to the original value and stores the result. Defined for
      integer and real atomic types.
      

   .. method:: proc ref add( val: valType, param order: memoryOrder = memoryOrder.seqCst) : void

      
      Adds `val` to the original value and stores the result. Defined for
      integer and real atomic types.
      

   .. method:: proc ref fetchSub( val: valType, param order: memoryOrder = memoryOrder.seqCst) : valType

      
      :returns: The original value.
      
      Subtracts `val` from the original value and stores the result. Defined
      for integer and real atomic types.
      

   .. method:: proc ref sub( val: valType, param order: memoryOrder = memoryOrder.seqCst) : void

      
      Subtracts `val` from the original value and stores the result. Defined
      for integer and real atomic types.
      

   .. method:: proc ref fetchOr( val: valType, param order: memoryOrder = memoryOrder.seqCst) : valType

      
      :returns: The original value.
      
      Applies the ``|`` operator to `val` and the original value, then stores
      the result.
      
      Only defined for integer atomic types.
      

   .. method:: proc ref or( val: valType, param order: memoryOrder = memoryOrder.seqCst) : void

      
      Applies the ``|`` operator to `val` and the original value, then stores
      the result.
      
      Only defined for integer atomic types.
      

   .. method:: proc ref fetchAnd( val: valType, param order: memoryOrder = memoryOrder.seqCst) : valType

      
      :returns: The original value.
      
      Applies the ``&`` operator to `val` and the original value, then stores
      the result.
      
      Only defined for integer atomic types.
      

   .. method:: proc ref and( val: valType, param order: memoryOrder = memoryOrder.seqCst) : void

      
      Applies the ``&`` operator to `val` and the original value, then stores
      the result.
      
      Only defined for integer atomic types.
      

   .. method:: proc ref fetchXor( val: valType, param order: memoryOrder = memoryOrder.seqCst) : valType

      
      :returns: The original value.
      
      Applies the ``^`` operator to `val` and the original value, then stores
      the result.
      
      Only defined for integer atomic types.
      

   .. method:: proc ref xor( val: valType, param order: memoryOrder = memoryOrder.seqCst) : void

      
      Applies the ``^`` operator to `val` and the original value, then stores
      the result.
      
      Only defined for integer atomic types.
      

   .. method:: proc const waitFor( val: valType, param order: memoryOrder = memoryOrder.seqCst) : void

      
      Waits until the stored value is equal to `val`. The implementation may
      yield the running task while waiting.
      

   .. method:: proc const serialize( writer, ref serializer)  throws

.. function:: operator :( rhs, type t: AtomicT)  where rhs.type == t.valType

.. method:: operator  AtomicBool. = (ref a: AtomicBool, const ref b: AtomicBool) 

   Equivalent to ``a.write(b.read())`` 

.. method:: operator  AtomicBool. = (ref a: AtomicBool,  b) 

.. method:: operator  AtomicT. = (ref a: AtomicT, const ref b: AtomicT) 

   Equivalent to ``a.write(b.read())`` 

.. method:: operator  AtomicT. = (ref a: AtomicT,  b) 

.. method:: operator  AtomicT.+( a: AtomicT,  b) 

.. method:: operator  AtomicT.-( a: AtomicT,  b) 

.. method:: operator  AtomicT.*( a: AtomicT,  b) 

.. method:: operator  AtomicT./( a: AtomicT,  b) 

.. method:: operator  AtomicT.%( a: AtomicT,  b) 

