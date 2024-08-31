.. default-domain:: chpl

.. module:: SharedObject
   :noindex:

SharedObject
============
**Usage**

.. code-block:: chapel

   use SharedObject;


or

.. code-block:: chapel

   import SharedObject;

 

.. class:: ReferenceCount

   .. attribute:: var strongCount: atomic(int)

   .. attribute:: var totalCount: atomic(int)

   .. method:: proc  init() 

   .. method:: proc  retain() 

   .. method:: proc  releaseStrong() 

   .. method:: proc  releaseTotal() 

   .. method:: proc  tryRetainWeak(ref expected: int) 

      attempt to atomically increment the strong reference count
      
      - if the current strong-count does not match 'expected', then 'expected'
        is updated to whatever the current value is, and 'false' is returned
      - if they do match, the strong-count is incremented, the total-count is
        incremented, and 'true' is returned.
      
      This method is used to safely upgrade a 'weak' to a 'shared'
      reference. This is done by calling the method in a while-loop that can
      either fail if the expected value drops to zero (i.e., the last 'shared'
      was dropped by someone else during the upgrade attempt), or loop until
      the value can be incremented safely (s.t. there are no conflicts
      between concurrent upgrades)
      

   .. method:: proc  releaseWeak() 

   .. method:: proc  incrementWeak() 

.. record:: _shared : writeSerializable, readDeserializable

   
   :type:`shared` manages the deletion of a class instance in a way
   that supports multiple owners of the class instance.
   
   This is currently implemented with task-safe reference counting.
   

   .. attribute:: type chpl_t

   .. attribute:: var chpl_p: __primitive("to nilable class", chpl_t)

   .. attribute:: var chpl_pn: unmanaged(ReferenceCount?)

.. method:: proc  _shared.init(type chpl_t) 

.. method:: proc  _shared.init( p: borrowed) 

.. method:: proc  _shared.init( p: unmanaged) 

.. method:: proc  _shared.init( p: ?T)  where isClass(T) == false && isSubtype(T, _shared) == false && isIterator(p) == false

.. method:: proc  _shared.init(in take: owned) 

.. method:: proc  _shared.init( _private: bool, type t, ref src: _shared) 

   
   Private move-initializer for use in coercions,
   only makes sense when `src` was already copied in in intent.
   

.. method:: proc  _shared.init( _private: bool, type t,  p,  pn) 

   Private initializer for casts. This one increments the reference
   count if the stored pointer is not nil. 

.. method:: proc  _shared.init( _private: bool,  p: unmanaged,  pn) 

   
   Private initializer for casting from weak to shared.
   assumes the shared reference count in 'pn' has already been incremented
   

.. method:: proc  _shared.init=(in take: owned) 

.. method:: proc  _shared.init=(const ref src: _shared) 

   
   Copy-initializer. Creates a new :type:`shared`
   that refers to the same class instance as `src`.
   These will share responsibility for managing the instance.
   

.. method:: proc  _shared.init=( src: borrowed) 

.. method:: proc  _shared.init=( src: unmanaged) 

.. method:: proc  _shared.init=( src: _nilType) 

.. method:: proc ref _shared.doClear() 

.. method:: proc type _shared.adopt( source) 

.. method:: proc type _shared.adopt(in obj: owned) 

   
   Changes the memory management strategy of the argument from `owned`
   to `shared`, taking over the ownership of the argument.
   The result type preserves nilability of the argument type.
   If the argument is non-nilable, it must be recognized by the compiler
   as an expiring value.
   

.. method:: proc type _shared.adopt(in obj: unmanaged) 

   
   Starts managing the argument class instance `obj`
   using the `shared` memory management strategy.
   The result type preserves nilability of the argument type.
   
   It is an error to directly delete the class instance
   after passing it to `shared.adopt()`.
   

.. method:: proc ref _shared.deinit() 

   
   The deinitializer for :type:`shared` will destroy the class
   instance once there are no longer any copies of this
   :type:`shared` that refer to it.
   

.. method:: proc  _shared.borrow() 

   
   Return the object managed by this :type:`shared` without
   impacting its lifetime at all. It is an error to use the
   value returned by this function after the last :type:`shared`
   goes out of scope or deletes the contained class instance
   for another reason, including calls to
   `=`, or ``shared.retain`` when this is the last :type:`shared`
   referring to the instance.
   In some cases such errors are caught at compile-time.
   

.. method:: proc  _shared.downgrade() 

   .. warning::

      The `weak` type is experimental; expect this method to change in the future.

   Create a :record:`~WeakPointer.weak` reference to this object 

.. function:: operator  = (ref lhs: _shared,  rhs: _shared)  where !(isNonNilableClass(lhs) && isNilableClass(rhs))

   
   Assign one :type:`shared` to another.
   Deletes the object managed by ``lhs`` if there are
   no other :type:`shared` referring to it. On return,
   ``lhs`` will refer to the same object as ``rhs``.
   

.. function:: operator  = (ref lhs: _shared, in rhs: owned) 

.. function:: operator  = (ref lhs: shared,  rhs: _nilType) 

.. function:: operator <=>(ref lhs: _shared, ref rhs: _shared) 

   
   Swap two :type:`shared` objects.
   

.. function:: proc chpl__autoDestroy(ref x: _shared) 

.. method:: proc ref _shared.deserialize( reader, ref deserializer)  throws

.. method:: proc  _shared.serialize( writer, ref serializer)  throws

.. method:: proc  _shared._readWriteHelper( f)  throws

.. function:: operator :(const ref x: _shared, type t: borrowed)  where isSubtype(t, x.chpl_t)

.. function:: operator :(in x: shared(class), type t: shared(class?))  where isSubtype(x.chpl_t, t.chpl_t: class)

.. function:: operator :(in x: shared(class?), type t: shared(class?))  where isSubtype(x.chpl_t, t.chpl_t)

.. function:: operator :(in x: shared(class), type t: shared(class))  where isSubtype(x.chpl_t, t.chpl_t)

.. function:: operator :(in x: shared(class?), type t: shared(class))  throws where isSubtype(x.chpl_t: class, t.chpl_t)

.. function:: operator :(const ref x: shared(class?), type t: shared(class))  throws where isProperSubtype(t.chpl_t, x.chpl_t: class)

.. function:: operator :(const ref x: shared(class), type t: shared(class))  throws where isProperSubtype(t.chpl_t, x.chpl_t)

.. function:: operator :(const ref x: shared(class?), type t: shared(class?))  where isProperSubtype(t.chpl_t, x.chpl_t)

.. function:: operator :(const ref x: shared(class), type t: shared(class?))  where isProperSubtype(t.chpl_t, x.chpl_t: class?)

.. function:: operator :( x: _nilType, type t: _shared) 

.. function:: proc postfix!( x: _shared) 

