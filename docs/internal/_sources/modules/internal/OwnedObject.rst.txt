.. default-domain:: chpl

.. module:: OwnedObject
   :noindex:

OwnedObject
===========
**Usage**

.. code-block:: chapel

   use OwnedObject;


or

.. code-block:: chapel

   import OwnedObject;

 

.. record:: _owned : writeSerializable, readDeserializable

   
   :type:`owned` manages the deletion of a class instance assuming
   that this :type:`owned` is the only thing responsible for
   managing the lifetime of the class instance.
   

   .. attribute:: type chpl_t

   .. attribute:: var chpl_p: __primitive("to nilable class", chpl_t)

.. method:: proc  _owned.init(type chpl_t) 

.. method:: proc  _owned.init( p: borrowed) 

.. method:: proc  _owned.init( p: unmanaged) 

.. method:: proc  _owned.init( p: ?T)  where isClass(T) == false && isSubtype(T, _owned) == false && isIterator(p) == false

.. method:: proc  _owned.init=(ref src: _owned) 

   
   Copy-initializer. Creates a new :type:`owned` that takes over ownership
   from `src`. `src` will refer to `nil` after this call.
   

.. method:: proc  _owned.init=( src: shared) 

.. method:: proc  _owned.init=( src: borrowed) 

.. method:: proc  _owned.init=( src: unmanaged) 

.. method:: proc  _owned.init=( src: _nilType) 

.. method:: proc  _owned.init(ref src: _owned) 

.. method:: proc type _owned.adopt( source) 

.. method:: proc type _owned.adopt(in obj: unmanaged) 

   
   Starts managing the argument class instance `obj`
   using the `owned` memory management strategy.
   The result type preserves nilability of the argument type.
   
   It is an error to directly delete the class instance
   after passing it to `owned.adopt()`.
   

.. method:: proc type _owned.release( source) 

.. method:: proc type _owned.release(ref obj: owned) 

   
   Empty `obj` so that it manages `nil` and
   return the instance previously managed by this owned object.
   
   If the argument is `nil` it returns `nil`.
   

.. method:: proc  _owned.deinit() 

   
   The deinitializer for :type:`owned` will destroy the class
   instance it manages when the :type:`owned` goes out of scope.
   

.. method:: proc  _owned.borrow() 

   
   Return the object managed by this :type:`owned` without impacting its
   lifetime at all. It is an error to use the value returned by this function
   after the :type:`owned` goes out of scope or deletes the contained class
   instance for another reason, such as with `=` or :proc:`owned.adopt`. In some
   cases such errors are caught at compile-time.
   

.. function:: operator  = (ref lhs: _owned, ref rhs: _owned)  where !(isNonNilableClass(lhs) && isNilableClass(rhs))

   
   Assignment between two :type:`owned` transfers ownership of the object
   managed by ``rhs`` to ``lhs``. This is done by setting ``rhs`` to `nil` and
   then setting ``lhs`` to point to the object that ``rhs`` managed before,
   if any. After that, it deletes the object previously managed by ``lhs``,
   if any.
   

.. function:: operator  = (ref lhs: _owned,  rhs: _nilType) 

.. function:: operator <=>(ref lhs: _owned, ref rhs: lhs.type) 

   
   Swap two :type:`owned` objects.
   

.. function:: proc chpl__initCopy(ref src: _owned,  definedConst: bool) 

.. function:: proc chpl__autoCopy(ref src: _owned,  definedConst: bool) 

.. function:: proc chpl__autoDestroy(ref x: _owned) 

.. method:: proc  _owned.serialize( writer, ref serializer)  throws

.. method:: proc  _owned._readWriteHelper( f)  throws

.. method:: proc  _owned.deserialize( reader, ref deserializer)  throws

.. function:: operator :(in x: owned(class), type t: owned(class?))  where isSubtype(x.chpl_t, _to_nonnil(t.chpl_t))

.. function:: operator :(in x: owned(class?), type t: owned(class?))  where isSubtype(x.chpl_t, t.chpl_t)

.. function:: operator :(in x: owned(class), type t: owned(class))  where isSubtype(x.chpl_t, t.chpl_t)

.. function:: operator :(in x: owned(class?), type t: owned(class))  throws where isSubtype(_to_nonnil(x.chpl_t), t.chpl_t)

.. function:: operator :(ref x: owned(class?), type t: owned(class))  throws where isProperSubtype(t.chpl_t, _to_nonnil(x.chpl_t))

.. function:: operator :(ref x: owned(class), type t: owned(class))  throws where isProperSubtype(t.chpl_t, x.chpl_t)

.. function:: operator :(ref x: owned(class?), type t: owned(class?))  where isProperSubtype(t.chpl_t, x.chpl_t)

.. function:: operator :(ref x: owned(class), type t: owned(class?))  where isProperSubtype(_to_nonnil(t.chpl_t), x.chpl_t)

.. function:: operator :( x: _nilType, type t: _owned) 

.. function:: proc postfix!(const ref x: _owned) 

