.. default-domain:: chpl

.. module:: ChapelBase
   :noindex:

ChapelBase
==========
**Usage**

.. code-block:: chapel

   use ChapelBase;


or

.. code-block:: chapel

   import ChapelBase;

**Submodules**

.. toctree::
   :maxdepth: 1
   :glob:

   ChapelBase/*

.. type:: type c_string = chpl_c_string

   .. warning::

      the type 'c_string' is deprecated; please 'use CTypes' and replace 'c_string' with 'c_ptrConst(c_char)'

.. type:: type c_fn_ptr = chpl_c_fn_ptr

   .. warning::

      'c_fn_ptr' is unstable, and may be replaced by first-class procedure functionality

.. method:: operator  c_fn_ptr. = (ref a: c_fn_ptr,  b: c_fn_ptr) 

   .. warning::

      = is unstable

.. method:: proc  c_fn_ptr.this() 

   .. warning::

      this is unstable

.. method:: proc  c_fn_ptr.this(args ...) 

   .. warning::

      this is unstable

.. data:: var rootLocaleInitialized: bool = false

.. data:: config param enablePostfixBangChecks = false

.. function:: proc chpl_config_has_value( name: c_ptrConst(c_char),  module_name: c_ptrConst(c_char)) : bool

.. function:: proc chpl_config_get_value( name: c_ptrConst(c_char),  module_name: c_ptrConst(c_char)) : c_ptrConst(c_char)

.. data:: config param defaultLowBound = 0

.. data:: config param chpl_stringMinAllocSize = 0

.. data:: config param warnMaximalRange = false

.. data:: var chpl_unstableInternalSymbolForTesting: int

   .. warning::

      chpl_unstableInternalSymbolForTesting is unstable

.. data:: config param assocParSafeDefault = false

   Compile with ``-sassocParSafeDefault=true`` to use ``parSafe=true``
   by default for associative domains and arrays.
   Compiling with an explicit ``-sassocParSafeDefault[=false]`` will
   turn off the par safe warning, just like ``-snoParSafeWarning``

.. data:: config param noParSafeWarning = false

   Compile with ``-snoParSafeWarning`` to suppress the warning
   about a missing explicit ``parSafe`` parameter and
   about the default parSafe mode for associative domains
   and arrays changing from ``true`` to ``false``. 

.. class:: _object

.. class:: object

   .. warning::

      the 'object' abstract root class has been deprecated; please use 'RootClass' instead

.. enum:: enum iterKind { leader, follower, standalone }

   .. enumconstant:: enum constant leader

   .. enumconstant:: enum constant follower

   .. enumconstant:: enum constant standalone

.. data:: config param fcfsUsePointerImplementation = false

.. function:: operator  = (ref a: bool,  b: bool) 

.. function:: operator  = (ref a: int(8),  b: int(8)) 

.. function:: operator  = (ref a: int(16),  b: int(16)) 

.. function:: operator  = (ref a: int(32),  b: int(32)) 

.. function:: operator  = (ref a: int(64),  b: int(64)) 

.. function:: operator  = (ref a: uint(8),  b: uint(8)) 

.. function:: operator  = (ref a: uint(16),  b: uint(16)) 

.. function:: operator  = (ref a: uint(32),  b: uint(32)) 

.. function:: operator  = (ref a: uint(64),  b: uint(64)) 

.. function:: operator  = (ref a: real(32),  b: real(32)) 

.. function:: operator  = (ref a: real(64),  b: real(64)) 

.. function:: operator  = (ref a: imag(32),  b: imag(32)) 

.. function:: operator  = (ref a: imag(64),  b: imag(64)) 

.. function:: operator  = (ref a: complex(64),  b: complex(64)) 

.. function:: operator  = (ref a: complex(128),  b: complex(128)) 

.. function:: operator  = (ref a: opaque,  b: opaque) 

.. function:: operator  = (ref a: enum,  b: enum)  where a.type == b.type

.. function:: operator  = (ref a: borrowed(class),  b: a.type)  where isSubtype(b.type, a.type)

.. function:: operator  = (ref a: borrowed(class?),  b: a.type)  where isSubtype(b.type, a.type)

.. function:: operator  = (ref a: unmanaged(class),  b: a.type)  where isSubtype(b.type, a.type)

.. function:: operator  = (ref a: unmanaged(class?),  b: a.type)  where isSubtype(b.type, a.type)

.. function:: operator  = (ref a: nothing,  b: ?t)  where t != nothing

.. function:: operator  = (ref a: ?t,  b: nothing)  where t != nothing

.. function:: operator  = (ref a: nothing,  b: nothing) param

.. function:: operator ==( a: _nilType,  b: _nilType) param

.. function:: operator ==( a: bool,  b: bool) 

.. function:: operator ==( a: int(8),  b: int(8)) 

.. function:: operator ==( a: int(16),  b: int(16)) 

.. function:: operator ==( a: int(32),  b: int(32)) 

.. function:: operator ==( a: int(64),  b: int(64)) 

.. function:: operator ==( a: uint(8),  b: uint(8)) 

.. function:: operator ==( a: uint(16),  b: uint(16)) 

.. function:: operator ==( a: uint(32),  b: uint(32)) 

.. function:: operator ==( a: uint(64),  b: uint(64)) 

.. function:: operator ==( a: real(32),  b: real(32)) 

.. function:: operator ==( a: real(64),  b: real(64)) 

.. function:: operator ==( a: imag(32),  b: imag(32)) 

.. function:: operator ==( a: imag(64),  b: imag(64)) 

.. function:: operator ==( a: complex(64),  b: complex(64)) 

.. function:: operator ==( a: complex(128),  b: complex(128)) 

.. function:: operator ==( a: borrowed(RootClass?),  b: borrowed(RootClass?)) 

.. function:: operator ==( a: borrowed(RootClass?),  b: _nilType) 

.. function:: operator ==( a: _nilType,  b: borrowed(RootClass?)) 

.. function:: operator ==( a: enum,  b: enum)  where a.type == b.type

.. function:: operator ==( a: enum,  b: enum)  where a.type != b.type

.. function:: operator !=( a: _nilType,  b: _nilType) param

.. function:: operator !=( a: bool,  b: bool) 

.. function:: operator !=( a: int(8),  b: int(8)) 

.. function:: operator !=( a: int(16),  b: int(16)) 

.. function:: operator !=( a: int(32),  b: int(32)) 

.. function:: operator !=( a: int(64),  b: int(64)) 

.. function:: operator !=( a: uint(8),  b: uint(8)) 

.. function:: operator !=( a: uint(16),  b: uint(16)) 

.. function:: operator !=( a: uint(32),  b: uint(32)) 

.. function:: operator !=( a: uint(64),  b: uint(64)) 

.. function:: operator !=( a: real(32),  b: real(32)) 

.. function:: operator !=( a: real(64),  b: real(64)) 

.. function:: operator !=( a: imag(32),  b: imag(32)) 

.. function:: operator !=( a: imag(64),  b: imag(64)) 

.. function:: operator !=( a: complex(64),  b: complex(64)) 

.. function:: operator !=( a: complex(128),  b: complex(128)) 

.. function:: operator !=( a: borrowed(RootClass?),  b: borrowed(RootClass?)) 

.. function:: operator !=( a: borrowed(RootClass?),  b: _nilType) 

.. function:: operator !=( a: _nilType,  b: borrowed(RootClass?)) 

.. function:: operator !=( a: enum,  b: enum)  where a.type == b.type

.. function:: operator !=( a: enum,  b: enum)  where a.type != b.type

.. function:: operator ==(param a: bool, param b: bool) param

.. function:: operator ==(param a: int(8), param b: int(8)) param

.. function:: operator ==(param a: int(16), param b: int(16)) param

.. function:: operator ==(param a: int(32), param b: int(32)) param

.. function:: operator ==(param a: int(64), param b: int(64)) param

.. function:: operator ==(param a: uint(8), param b: uint(8)) param

.. function:: operator ==(param a: uint(16), param b: uint(16)) param

.. function:: operator ==(param a: uint(32), param b: uint(32)) param

.. function:: operator ==(param a: uint(64), param b: uint(64)) param

.. function:: operator ==(param a: enum, param b: enum) param where a.type == b.type

.. function:: operator ==(param a: real(32), param b: real(32)) param

.. function:: operator ==(param a: real(64), param b: real(64)) param

.. function:: operator ==(param a: imag(32), param b: imag(32)) param

.. function:: operator ==(param a: imag(64), param b: imag(64)) param

.. function:: operator ==(param a: complex(64), param b: complex(64)) param

.. function:: operator ==(param a: complex(128), param b: complex(128)) param

.. function:: operator ==( a: nothing,  b: nothing) param

.. function:: operator !=(param a: bool, param b: bool) param

.. function:: operator !=(param a: int(8), param b: int(8)) param

.. function:: operator !=(param a: int(16), param b: int(16)) param

.. function:: operator !=(param a: int(32), param b: int(32)) param

.. function:: operator !=(param a: int(64), param b: int(64)) param

.. function:: operator !=(param a: uint(8), param b: uint(8)) param

.. function:: operator !=(param a: uint(16), param b: uint(16)) param

.. function:: operator !=(param a: uint(32), param b: uint(32)) param

.. function:: operator !=(param a: uint(64), param b: uint(64)) param

.. function:: operator !=(param a: enum, param b: enum) param where a.type == b.type

.. function:: operator !=(param a: real(32), param b: real(32)) param

.. function:: operator !=(param a: real(64), param b: real(64)) param

.. function:: operator !=(param a: imag(32), param b: imag(32)) param

.. function:: operator !=(param a: imag(64), param b: imag(64)) param

.. function:: operator !=(param a: complex(64), param b: complex(64)) param

.. function:: operator !=(param a: complex(128), param b: complex(128)) param

.. function:: operator !=( a: nothing,  b: nothing) param

.. function:: operator <=( a: int(8),  b: int(8)) 

.. function:: operator <=( a: int(16),  b: int(16)) 

.. function:: operator <=( a: int(32),  b: int(32)) 

.. function:: operator <=( a: int(64),  b: int(64)) 

.. function:: operator <=( a: uint(8),  b: uint(8)) 

.. function:: operator <=( a: uint(16),  b: uint(16)) 

.. function:: operator <=( a: uint(32),  b: uint(32)) 

.. function:: operator <=( a: uint(64),  b: uint(64)) 

.. function:: operator <=( a: real(32),  b: real(32)) 

.. function:: operator <=( a: real(64),  b: real(64)) 

.. function:: operator <=( a: enum,  b: enum)  where a.type == b.type

.. function:: operator <=( a: enum,  b: enum)  where a.type != b.type

.. function:: operator >=( a: int(8),  b: int(8)) 

.. function:: operator >=( a: int(16),  b: int(16)) 

.. function:: operator >=( a: int(32),  b: int(32)) 

.. function:: operator >=( a: int(64),  b: int(64)) 

.. function:: operator >=( a: uint(8),  b: uint(8)) 

.. function:: operator >=( a: uint(16),  b: uint(16)) 

.. function:: operator >=( a: uint(32),  b: uint(32)) 

.. function:: operator >=( a: uint(64),  b: uint(64)) 

.. function:: operator >=( a: real(32),  b: real(32)) 

.. function:: operator >=( a: real(64),  b: real(64)) 

.. function:: operator >=( a: enum,  b: enum)  where a.type == b.type

.. function:: operator >=( a: enum,  b: enum)  where a.type != b.type

.. function:: operator <( a: integral,  b: integral) 

.. function:: operator <( a: integral, param b: integral) param where isUint(a) && __primitive("<=", b, 0)

.. function:: operator <(param a: integral,  b: integral) param where isUint(b) && __primitive("<", a, 0)

.. function:: operator <(param a: integral, param b: integral) param

.. function:: operator <( a: bool,  b: bool) 

.. function:: operator <( a: bool,  b: integral) 

.. function:: operator <( a: integral,  b: bool) 

.. function:: operator <(param a: bool, param b: bool) param

.. function:: operator <( a: real(32),  b: real(32)) 

.. function:: operator <( a: real(64),  b: real(64)) 

.. function:: operator <( a: enum,  b: enum)  where a.type == b.type

.. function:: operator <( a: enum,  b: enum)  where a.type != b.type

.. function:: operator >( a: int(8),  b: int(8)) 

.. function:: operator >( a: int(16),  b: int(16)) 

.. function:: operator >( a: int(32),  b: int(32)) 

.. function:: operator >( a: int(64),  b: int(64)) 

.. function:: operator >( a: uint(8),  b: uint(8)) 

.. function:: operator >( a: uint(16),  b: uint(16)) 

.. function:: operator >( a: uint(32),  b: uint(32)) 

.. function:: operator >( a: uint(64),  b: uint(64)) 

.. function:: operator >( a: real(32),  b: real(32)) 

.. function:: operator >( a: real(64),  b: real(64)) 

.. function:: operator >( a: enum,  b: enum)  where a.type == b.type

.. function:: operator >( a: enum,  b: enum)  where a.type != b.type

.. function:: operator <=(param a: int(8), param b: int(8)) param

.. function:: operator <=(param a: int(16), param b: int(16)) param

.. function:: operator <=(param a: int(32), param b: int(32)) param

.. function:: operator <=(param a: int(64), param b: int(64)) param

.. function:: operator <=(param a: uint(8), param b: uint(8)) param

.. function:: operator <=(param a: uint(16), param b: uint(16)) param

.. function:: operator <=(param a: uint(32), param b: uint(32)) param

.. function:: operator <=(param a: uint(64), param b: uint(64)) param

.. function:: operator <=(param a: enum, param b: enum) param where a.type == b.type

.. function:: operator <=(param a: real(32), param b: real(32)) param

.. function:: operator <=(param a: real(64), param b: real(64)) param

.. function:: operator >=(param a: int(8), param b: int(8)) param

.. function:: operator >=(param a: int(16), param b: int(16)) param

.. function:: operator >=(param a: int(32), param b: int(32)) param

.. function:: operator >=(param a: int(64), param b: int(64)) param

.. function:: operator >=(param a: uint(8), param b: uint(8)) param

.. function:: operator >=(param a: uint(16), param b: uint(16)) param

.. function:: operator >=(param a: uint(32), param b: uint(32)) param

.. function:: operator >=(param a: uint(64), param b: uint(64)) param

.. function:: operator >=(param a: enum, param b: enum) param where a.type == b.type

.. function:: operator >=(param a: real(32), param b: real(32)) param

.. function:: operator >=(param a: real(64), param b: real(64)) param

.. function:: operator <(param a: enum, param b: enum) param where a.type == b.type

.. function:: operator <(param a: real(32), param b: real(32)) param

.. function:: operator <(param a: real(64), param b: real(64)) param

.. function:: operator >(param a: int(8), param b: int(8)) param

.. function:: operator >(param a: int(16), param b: int(16)) param

.. function:: operator >(param a: int(32), param b: int(32)) param

.. function:: operator >(param a: int(64), param b: int(64)) param

.. function:: operator >(param a: uint(8), param b: uint(8)) param

.. function:: operator >(param a: uint(16), param b: uint(16)) param

.. function:: operator >(param a: uint(32), param b: uint(32)) param

.. function:: operator >(param a: uint(64), param b: uint(64)) param

.. function:: operator >(param a: enum, param b: enum) param where a.type == b.type

.. function:: operator >(param a: real(32), param b: real(32)) param

.. function:: operator >(param a: real(64), param b: real(64)) param

.. function:: operator +( a: int(?w)) 

.. function:: operator +( a: uint(?w)) 

.. function:: operator +( a: real(?w)) 

.. function:: operator +( a: imag(?w)) 

.. function:: operator +( a: complex(?w)) 

.. function:: operator -( a: int(?w)) 

.. function:: operator -( a: uint(?w)) 

.. function:: operator -( a: real(?w)) 

.. function:: operator -( a: imag(?w)) 

.. function:: operator -( a: complex(?w)) 

.. function:: operator +(param a: int(?w)) param

.. function:: operator +(param a: uint(?w)) param

.. function:: operator +(param a: real(?w)) param

.. function:: operator +(param a: imag(?w)) param

.. function:: operator +(param a: complex(?w)) param

.. function:: operator -(param a: int(?w)) param

.. function:: operator -(param a: uint(?w)) param

.. function:: operator -(param a: real(?w)) param

.. function:: operator -(param a: imag(?w)) param

.. function:: operator -(param a: complex(?w)) param

.. function:: operator +( a: int(8),  b: int(8)) 

.. function:: operator +( a: int(16),  b: int(16)) 

.. function:: operator +( a: int(32),  b: int(32)) 

.. function:: operator +( a: int(64),  b: int(64)) 

.. function:: operator +( a: uint(8),  b: uint(8)) 

.. function:: operator +( a: uint(16),  b: uint(16)) 

.. function:: operator +( a: uint(32),  b: uint(32)) 

.. function:: operator +( a: uint(64),  b: uint(64)) 

.. function:: operator +( a: real(32),  b: real(32)) 

.. function:: operator +( a: real(64),  b: real(64)) 

.. function:: operator +( a: imag(32),  b: imag(32)) 

.. function:: operator +( a: imag(64),  b: imag(64)) 

.. function:: operator +( a: complex(64),  b: complex(64)) 

.. function:: operator +( a: complex(128),  b: complex(128)) 

.. function:: operator +( a: real(32),  b: imag(32)) 

.. function:: operator +( a: real(64),  b: imag(64)) 

.. function:: operator +( a: imag(32),  b: real(32)) 

.. function:: operator +( a: imag(64),  b: real(64)) 

.. function:: operator +( a: real(32),  b: complex(64)) 

.. function:: operator +( a: real(64),  b: complex(128)) 

.. function:: operator +( a: complex(64),  b: real(32)) 

.. function:: operator +( a: complex(128),  b: real(64)) 

.. function:: operator +( a: imag(32),  b: complex(64)) 

.. function:: operator +( a: imag(64),  b: complex(128)) 

.. function:: operator +( a: complex(64),  b: imag(32)) 

.. function:: operator +( a: complex(128),  b: imag(64)) 

.. function:: operator -( a: int(8),  b: int(8)) 

.. function:: operator -( a: int(16),  b: int(16)) 

.. function:: operator -( a: int(32),  b: int(32)) 

.. function:: operator -( a: int(64),  b: int(64)) 

.. function:: operator -( a: uint(8),  b: uint(8)) 

.. function:: operator -( a: uint(16),  b: uint(16)) 

.. function:: operator -( a: uint(32),  b: uint(32)) 

.. function:: operator -( a: uint(64),  b: uint(64)) 

.. function:: operator -( a: real(32),  b: real(32)) 

.. function:: operator -( a: real(64),  b: real(64)) 

.. function:: operator -( a: imag(32),  b: imag(32)) 

.. function:: operator -( a: imag(64),  b: imag(64)) 

.. function:: operator -( a: complex(64),  b: complex(64)) 

.. function:: operator -( a: complex(128),  b: complex(128)) 

.. function:: operator -( a: real(32),  b: imag(32)) 

.. function:: operator -( a: real(64),  b: imag(64)) 

.. function:: operator -( a: imag(32),  b: real(32)) 

.. function:: operator -( a: imag(64),  b: real(64)) 

.. function:: operator -( a: real(32),  b: complex(64)) 

.. function:: operator -( a: real(64),  b: complex(128)) 

.. function:: operator -( a: complex(64),  b: real(32)) 

.. function:: operator -( a: complex(128),  b: real(64)) 

.. function:: operator -( a: imag(32),  b: complex(64)) 

.. function:: operator -( a: imag(64),  b: complex(128)) 

.. function:: operator -( a: complex(64),  b: imag(32)) 

.. function:: operator -( a: complex(128),  b: imag(64)) 

.. function:: operator +(param a: int(8), param b: int(8)) param

.. function:: operator +(param a: int(16), param b: int(16)) param

.. function:: operator +(param a: int(32), param b: int(32)) param

.. function:: operator +(param a: int(64), param b: int(64)) param

.. function:: operator +(param a: uint(8), param b: uint(8)) param

.. function:: operator +(param a: uint(16), param b: uint(16)) param

.. function:: operator +(param a: uint(32), param b: uint(32)) param

.. function:: operator +(param a: uint(64), param b: uint(64)) param

.. function:: operator +(param a: real(32), param b: real(32)) param

.. function:: operator +(param a: real(64), param b: real(64)) param

.. function:: operator +(param a: imag(32), param b: imag(32)) param

.. function:: operator +(param a: imag(64), param b: imag(64)) param

.. function:: operator +(param a: complex(64), param b: complex(64)) param

.. function:: operator +(param a: complex(128), param b: complex(128)) param

.. function:: operator +(param a: real(32), param b: imag(32)) param

.. function:: operator +(param a: real(64), param b: imag(64)) param

.. function:: operator +(param a: imag(32), param b: real(32)) param

.. function:: operator +(param a: imag(64), param b: real(64)) param

.. function:: operator -(param a: int(8), param b: int(8)) param

   inline operator +(param a: real(?w), param b: complex(w*2)) param do return
   __primitive("+", a, b);

.. function:: operator -(param a: int(16), param b: int(16)) param

.. function:: operator -(param a: int(32), param b: int(32)) param

.. function:: operator -(param a: int(64), param b: int(64)) param

.. function:: operator -(param a: uint(8), param b: uint(8)) param

.. function:: operator -(param a: uint(16), param b: uint(16)) param

.. function:: operator -(param a: uint(32), param b: uint(32)) param

.. function:: operator -(param a: uint(64), param b: uint(64)) param

.. function:: operator -(param a: real(32), param b: real(32)) param

.. function:: operator -(param a: real(64), param b: real(64)) param

.. function:: operator -(param a: imag(32), param b: imag(32)) param

.. function:: operator -(param a: imag(64), param b: imag(64)) param

.. function:: operator -(param a: complex(64), param b: complex(64)) param

.. function:: operator -(param a: complex(128), param b: complex(128)) param

.. function:: operator -(param a: real(32), param b: imag(32)) param

.. function:: operator -(param a: real(64), param b: imag(64)) param

.. function:: operator -(param a: imag(32), param b: real(32)) param

.. function:: operator -(param a: imag(64), param b: real(64)) param

.. function:: operator *( a: int(8),  b: int(8)) 

.. function:: operator *( a: int(16),  b: int(16)) 

.. function:: operator *( a: int(32),  b: int(32)) 

.. function:: operator *( a: int(64),  b: int(64)) 

.. function:: operator *( a: uint(8),  b: uint(8)) 

.. function:: operator *( a: uint(16),  b: uint(16)) 

.. function:: operator *( a: uint(32),  b: uint(32)) 

.. function:: operator *( a: uint(64),  b: uint(64)) 

.. function:: operator *( a: real(32),  b: real(32)) 

.. function:: operator *( a: real(64),  b: real(64)) 

.. function:: operator *( a: imag(32),  b: imag(32)) 

.. function:: operator *( a: imag(64),  b: imag(64)) 

.. function:: operator *( a: complex(64),  b: complex(64)) 

.. function:: operator *( a: complex(128),  b: complex(128)) 

.. function:: operator *( a: real(32),  b: imag(32)) 

.. function:: operator *( a: real(64),  b: imag(64)) 

.. function:: operator *( a: imag(32),  b: real(32)) 

.. function:: operator *( a: imag(64),  b: real(64)) 

.. function:: operator *( a: real(32),  b: complex(64)) 

.. function:: operator *( a: real(64),  b: complex(128)) 

.. function:: operator *( a: complex(64),  b: real(32)) 

.. function:: operator *( a: complex(128),  b: real(64)) 

.. function:: operator *( a: imag(32),  b: complex(64)) 

.. function:: operator *( a: imag(64),  b: complex(128)) 

.. function:: operator *( a: complex(64),  b: imag(32)) 

.. function:: operator *( a: complex(128),  b: imag(64)) 

.. function:: operator /( a: int(8),  b: int(8)) 

.. function:: operator /( a: int(16),  b: int(16)) 

.. function:: operator /( a: int(32),  b: int(32)) 

.. function:: operator /( a: int(64),  b: int(64)) 

.. function:: operator /( a: uint(8),  b: uint(8)) 

.. function:: operator /( a: uint(16),  b: uint(16)) 

.. function:: operator /( a: uint(32),  b: uint(32)) 

.. function:: operator /( a: uint(64),  b: uint(64)) 

.. function:: operator /( a: real(32),  b: real(32)) 

.. function:: operator /( a: real(64),  b: real(64)) 

.. function:: operator /( a: imag(32),  b: imag(32)) 

.. function:: operator /( a: imag(64),  b: imag(64)) 

.. function:: operator /( a: complex(64),  b: complex(64)) 

.. function:: operator /( a: complex(128),  b: complex(128)) 

.. function:: operator /( a: real(32),  b: imag(32)) 

.. function:: operator /( a: real(64),  b: imag(64)) 

.. function:: operator /( a: imag(32),  b: real(32)) 

.. function:: operator /( a: imag(64),  b: real(64)) 

.. function:: operator /( a: real(32),  b: complex(64)) 

.. function:: operator /( a: real(64),  b: complex(128)) 

.. function:: operator /( a: complex(64),  b: real(32)) 

.. function:: operator /( a: complex(128),  b: real(64)) 

.. function:: operator /( a: imag(32),  b: complex(64)) 

.. function:: operator /( a: imag(64),  b: complex(128)) 

.. function:: operator /( a: complex(64),  b: imag(32)) 

.. function:: operator /( a: complex(128),  b: imag(64)) 

.. function:: operator *(param a: int(8), param b: int(8)) param

.. function:: operator *(param a: int(16), param b: int(16)) param

.. function:: operator *(param a: int(32), param b: int(32)) param

.. function:: operator *(param a: int(64), param b: int(64)) param

.. function:: operator *(param a: uint(8), param b: uint(8)) param

.. function:: operator *(param a: uint(16), param b: uint(16)) param

.. function:: operator *(param a: uint(32), param b: uint(32)) param

.. function:: operator *(param a: uint(64), param b: uint(64)) param

.. function:: operator *(param a: real(32), param b: real(32)) param

.. function:: operator *(param a: real(64), param b: real(64)) param

.. function:: operator *(param a: imag(32), param b: imag(32)) param

.. function:: operator *(param a: imag(64), param b: imag(64)) param

.. function:: operator *(param a: real(32), param b: imag(32)) param

.. function:: operator *(param a: real(64), param b: imag(64)) param

.. function:: operator *(param a: imag(32), param b: real(32)) param

.. function:: operator *(param a: imag(64), param b: real(64)) param

.. function:: operator /(param a: int(8), param b: int(8)) param

.. function:: operator /(param a: int(16), param b: int(16)) param

.. function:: operator /(param a: int(32), param b: int(32)) param

.. function:: operator /(param a: int(64), param b: int(64)) param

.. function:: operator /(param a: uint(8), param b: uint(8)) param

.. function:: operator /(param a: uint(16), param b: uint(16)) param

.. function:: operator /(param a: uint(32), param b: uint(32)) param

.. function:: operator /(param a: uint(64), param b: uint(64)) param

.. function:: operator /(param a: real(32), param b: real(32)) param

.. function:: operator /(param a: real(64), param b: real(64)) param

.. function:: operator /(param a: imag(32), param b: imag(32)) param

.. function:: operator /(param a: imag(64), param b: imag(64)) param

.. function:: operator /(param a: real(32), param b: imag(32)) param

.. function:: operator /(param a: real(64), param b: imag(64)) param

.. function:: operator /(param a: imag(32), param b: real(32)) param

.. function:: operator /(param a: imag(64), param b: real(64)) param

.. function:: operator %( a: int(8),  b: int(8)) 

.. function:: operator %( a: int(16),  b: int(16)) 

.. function:: operator %( a: int(32),  b: int(32)) 

.. function:: operator %( a: int(64),  b: int(64)) 

.. function:: operator %( a: uint(8),  b: uint(8)) 

.. function:: operator %( a: uint(16),  b: uint(16)) 

.. function:: operator %( a: uint(32),  b: uint(32)) 

.. function:: operator %( a: uint(64),  b: uint(64)) 

.. function:: operator %(param a: int(8), param b: int(8)) param

.. function:: operator %(param a: int(16), param b: int(16)) param

.. function:: operator %(param a: int(32), param b: int(32)) param

.. function:: operator %(param a: int(64), param b: int(64)) param

.. function:: operator %(param a: uint(8), param b: uint(8)) param

.. function:: operator %(param a: uint(16), param b: uint(16)) param

.. function:: operator %(param a: uint(32), param b: uint(32)) param

.. function:: operator %(param a: uint(64), param b: uint(64)) param

.. function:: proc _intExpHelp( a: integral,  b)  where a.type == b.type

.. function:: operator **( a: int(8),  b: int(8)) 

.. function:: operator **( a: int(16),  b: int(16)) 

.. function:: operator **( a: int(32),  b: int(32)) 

.. function:: operator **( a: int(64),  b: int(64)) 

.. function:: operator **( a: uint(8),  b: uint(8)) 

.. function:: operator **( a: uint(16),  b: uint(16)) 

.. function:: operator **( a: uint(32),  b: uint(32)) 

.. function:: operator **( a: uint(64),  b: uint(64)) 

.. function:: operator **( a: real(32),  b: real(32)) 

.. function:: operator **( a: real(64),  b: real(64)) 

.. function:: operator **( a: complex(64),  b: complex(64)) 

.. function:: operator **( a: complex(128),  b: complex(128)) 

.. function:: operator **(param a: int(8), param b: int(8)) param

.. function:: operator **(param a: int(16), param b: int(16)) param

.. function:: operator **(param a: int(32), param b: int(32)) param

.. function:: operator **(param a: int(64), param b: int(64)) param

.. function:: operator **(param a: uint(8), param b: uint(8)) param

.. function:: operator **(param a: uint(16), param b: uint(16)) param

.. function:: operator **(param a: uint(32), param b: uint(32)) param

.. function:: operator **(param a: uint(64), param b: uint(64)) param

.. function:: proc _expHelp( a, param b: integral) 

.. function:: proc _expBaseHelp(param a: int,  b)  where _basePowerTwo(a)

.. function:: proc _canOptimizeExp(param b: integral) param

.. function:: proc _basePowerTwo(param a: integral) param

.. function:: operator **( a: int(?w), param b: integral)  where _canOptimizeExp(b)

.. function:: operator **( a: uint(?w), param b: integral)  where _canOptimizeExp(b)

.. function:: operator **( a: real(?w), param b: integral)  where _canOptimizeExp(b)

.. function:: operator **(param a: integral,  b: int)  where _basePowerTwo(a)

.. function:: operator !( a: bool) 

.. function:: operator !( a: int(?w)) 

.. function:: operator !( a: uint(?w)) 

.. function:: proc isTrue( a: bool) 

.. function:: proc isTrue(param a: bool) param

.. function:: proc isTrue( a: integral) 

.. function:: operator !(param a: bool) param

.. function:: operator !(param a: int(?w)) param

.. function:: operator !(param a: uint(?w)) param

.. function:: operator ~( a: int(?w)) 

.. function:: operator ~( a: uint(?w)) 

.. function:: operator ~( a: bool) 

.. function:: operator &( a: bool,  b: bool) 

.. function:: operator &( a: int(8),  b: int(8)) 

.. function:: operator &( a: int(16),  b: int(16)) 

.. function:: operator &( a: int(32),  b: int(32)) 

.. function:: operator &( a: int(64),  b: int(64)) 

.. function:: operator &( a: uint(8),  b: uint(8)) 

.. function:: operator &( a: uint(16),  b: uint(16)) 

.. function:: operator &( a: uint(32),  b: uint(32)) 

.. function:: operator &( a: uint(64),  b: uint(64)) 

.. function:: operator &( a: uint(8),  b: int(8)) 

.. function:: operator &( a: uint(16),  b: int(16)) 

.. function:: operator &( a: uint(32),  b: int(32)) 

.. function:: operator &( a: uint(64),  b: int(64)) 

.. function:: operator &( a: int(8),  b: uint(8)) 

.. function:: operator &( a: int(16),  b: uint(16)) 

.. function:: operator &( a: int(32),  b: uint(32)) 

.. function:: operator &( a: int(64),  b: uint(64)) 

.. function:: operator |( a: bool,  b: bool) 

.. function:: operator |( a: int(8),  b: int(8)) 

.. function:: operator |( a: int(16),  b: int(16)) 

.. function:: operator |( a: int(32),  b: int(32)) 

.. function:: operator |( a: int(64),  b: int(64)) 

.. function:: operator |( a: uint(8),  b: uint(8)) 

.. function:: operator |( a: uint(16),  b: uint(16)) 

.. function:: operator |( a: uint(32),  b: uint(32)) 

.. function:: operator |( a: uint(64),  b: uint(64)) 

.. function:: operator |( a: uint(8),  b: int(8)) 

.. function:: operator |( a: uint(16),  b: int(16)) 

.. function:: operator |( a: uint(32),  b: int(32)) 

.. function:: operator |( a: uint(64),  b: int(64)) 

.. function:: operator |( a: int(8),  b: uint(8)) 

.. function:: operator |( a: int(16),  b: uint(16)) 

.. function:: operator |( a: int(32),  b: uint(32)) 

.. function:: operator |( a: int(64),  b: uint(64)) 

.. function:: operator ^( a: bool,  b: bool) 

.. function:: operator ^( a: int(8),  b: int(8)) 

.. function:: operator ^( a: int(16),  b: int(16)) 

.. function:: operator ^( a: int(32),  b: int(32)) 

.. function:: operator ^( a: int(64),  b: int(64)) 

.. function:: operator ^( a: uint(8),  b: uint(8)) 

.. function:: operator ^( a: uint(16),  b: uint(16)) 

.. function:: operator ^( a: uint(32),  b: uint(32)) 

.. function:: operator ^( a: uint(64),  b: uint(64)) 

.. function:: operator ^( a: uint(8),  b: int(8)) 

.. function:: operator ^( a: uint(16),  b: int(16)) 

.. function:: operator ^( a: uint(32),  b: int(32)) 

.. function:: operator ^( a: uint(64),  b: int(64)) 

.. function:: operator ^( a: int(8),  b: uint(8)) 

.. function:: operator ^( a: int(16),  b: uint(16)) 

.. function:: operator ^( a: int(32),  b: uint(32)) 

.. function:: operator ^( a: int(64),  b: uint(64)) 

.. function:: operator ~(param a: bool) 

.. function:: operator ~(param a: int(?w)) param

.. function:: operator ~(param a: uint(?w)) param

.. function:: operator &(param a: bool, param b: bool) param

.. function:: operator &(param a: int(8), param b: int(8)) param

.. function:: operator &(param a: int(16), param b: int(16)) param

.. function:: operator &(param a: int(32), param b: int(32)) param

.. function:: operator &(param a: int(64), param b: int(64)) param

.. function:: operator &(param a: uint(8), param b: uint(8)) param

.. function:: operator &(param a: uint(16), param b: uint(16)) param

.. function:: operator &(param a: uint(32), param b: uint(32)) param

.. function:: operator &(param a: uint(64), param b: uint(64)) param

.. function:: operator &(param a: uint(8), param b: int(8)) param

.. function:: operator &(param a: uint(16), param b: int(16)) param

.. function:: operator &(param a: uint(32), param b: int(32)) param

.. function:: operator &(param a: uint(64), param b: int(64)) param

.. function:: operator &(param a: int(8), param b: uint(8)) param

.. function:: operator &(param a: int(16), param b: uint(16)) param

.. function:: operator &(param a: int(32), param b: uint(32)) param

.. function:: operator &(param a: int(64), param b: uint(64)) param

.. function:: operator |(param a: bool, param b: bool) param

.. function:: operator |(param a: int(8), param b: int(8)) param

.. function:: operator |(param a: int(16), param b: int(16)) param

.. function:: operator |(param a: int(32), param b: int(32)) param

.. function:: operator |(param a: int(64), param b: int(64)) param

.. function:: operator |(param a: uint(8), param b: uint(8)) param

.. function:: operator |(param a: uint(16), param b: uint(16)) param

.. function:: operator |(param a: uint(32), param b: uint(32)) param

.. function:: operator |(param a: uint(64), param b: uint(64)) param

.. function:: operator |(param a: uint(8), param b: int(8)) param

.. function:: operator |(param a: uint(16), param b: int(16)) param

.. function:: operator |(param a: uint(32), param b: int(32)) param

.. function:: operator |(param a: uint(64), param b: int(64)) param

.. function:: operator |(param a: int(8), param b: uint(8)) param

.. function:: operator |(param a: int(16), param b: uint(16)) param

.. function:: operator |(param a: int(32), param b: uint(32)) param

.. function:: operator |(param a: int(64), param b: uint(64)) param

.. function:: operator ^(param a: bool, param b: bool) param

.. function:: operator ^(param a: int(8), param b: int(8)) param

.. function:: operator ^(param a: int(16), param b: int(16)) param

.. function:: operator ^(param a: int(32), param b: int(32)) param

.. function:: operator ^(param a: int(64), param b: int(64)) param

.. function:: operator ^(param a: uint(8), param b: uint(8)) param

.. function:: operator ^(param a: uint(16), param b: uint(16)) param

.. function:: operator ^(param a: uint(32), param b: uint(32)) param

.. function:: operator ^(param a: uint(64), param b: uint(64)) param

.. function:: operator ^(param a: uint(8), param b: int(8)) param

.. function:: operator ^(param a: uint(16), param b: int(16)) param

.. function:: operator ^(param a: uint(32), param b: int(32)) param

.. function:: operator ^(param a: uint(64), param b: int(64)) param

.. function:: operator ^(param a: int(8), param b: uint(8)) param

.. function:: operator ^(param a: int(16), param b: uint(16)) param

.. function:: operator ^(param a: int(32), param b: uint(32)) param

.. function:: operator ^(param a: int(64), param b: uint(64)) param

.. function:: proc bitshiftChecks( a,  b: integral) 

.. function:: proc bitshiftChecks(param a, param b: integral) 

.. function:: operator <<( a: int(?w),  b: integral) 

.. function:: operator <<( a: uint(?w),  b: integral) 

.. function:: operator >>( a: int(?w),  b: integral) 

.. function:: operator >>( a: uint(?w),  b: integral) 

.. function:: operator <<(param a: int(?w), param b: integral) param

.. function:: operator <<(param a: uint(?w), param b: integral) param

.. function:: operator >>(param a: int(?w), param b: integral) param

.. function:: operator >>(param a: uint(?w), param b: integral) param

.. function:: proc postfix!( x: unmanaged(class)) 

.. function:: proc postfix!( x: borrowed(class)) 

.. function:: proc postfix!( x: unmanaged(class?)) 

.. function:: proc postfix!( x: borrowed(class?)) 

.. function:: proc postfix!( x) 

.. function:: proc chpl_statementLevelSymbol( a) 

.. function:: proc chpl_statementLevelSymbol( a: sync) 

.. function:: proc chpl_statementLevelSymbol( a: single) 

.. function:: proc chpl_statementLevelSymbol( ir: _iteratorRecord) 

.. function:: proc _cond_test(param x: ?t) param: bool

.. function:: proc _cond_test( x: ?t) : bool

.. function:: proc _cond_invalid( x: borrowed(RootClass?)) param

.. function:: proc _cond_invalid( x: bool) param

.. function:: proc _cond_invalid( x: int) param

.. function:: proc _cond_invalid( x: uint) param

.. function:: proc _cond_invalid( x) param

.. function:: proc isNonnegative( i: int(?)) 

.. function:: proc isNonnegative( i: uint(?)) param

.. function:: proc isNonnegative(param i) param

.. method:: proc ref chpl_anycomplex.re ref

.. method:: proc param chpl_anycomplex.re param

.. method:: proc  chpl_anycomplex.re 

.. method:: proc ref chpl_anycomplex.im ref

.. method:: proc param chpl_anycomplex.im param

.. method:: proc  chpl_anycomplex.im 

.. function:: proc _i2r( a: imag(?w)) 

.. function:: proc _r2i( a: real(?w)) 

.. enum:: enum ArrayInit { heuristicInit, noInit, serialInit, parallelInit, gpuInit }

   .. enumconstant:: enum constant heuristicInit

   .. enumconstant:: enum constant noInit

   .. enumconstant:: enum constant serialInit

   .. enumconstant:: enum constant parallelInit

   .. enumconstant:: enum constant gpuInit

.. data:: config param chpl_defaultArrayInitMethod = ArrayInit.heuristicInit

.. data:: config param chpl_defaultGpuArrayInitMethod = if CHPL_GPU_MEM_STRATEGY == "array_on_device" then ArrayInit.gpuInit else chpl_defaultArrayInitMethod

.. data:: config param chpl_arrayInitMethodRuntimeSelectable = false

.. function:: proc chpl_setArrayInitMethod( initMethod: ArrayInit) 

.. function:: proc chpl_getArrayInitMethod() 

.. function:: proc chpl_shouldDoGpuInit() : bool

.. function:: proc init_elts_method( s, type t) 

.. function:: proc init_elts( x,  s, type t,  lo = 0: s.type) : void

.. type:: type chpl_mem_descInt_t = int(16)

.. enum:: enum chpl_ddataResizePolicy { normalInit, skipInit, skipInitButClearMem }

   .. enumconstant:: enum constant normalInit

   .. enumconstant:: enum constant skipInit

   .. enumconstant:: enum constant skipInitButClearMem

.. class:: _ddata

   .. attribute:: type eltType

   .. method:: proc  this( i: integral) ref

.. function:: proc chpl_isDdata(type t: _ddata) param

.. function:: proc chpl_isDdata(type t) param

.. function:: operator  = (ref a: _ddata(?t),  b: _ddata(t)) 

.. function:: proc _ddata_shift(type eltType,  data: _ddata(eltType),  shift: integral) 

.. function:: proc _ddata_sizeof_element(type t: _ddata) : c_size_t

.. function:: proc _ddata_sizeof_element( x: _ddata) : c_size_t

.. function:: proc _ddata_allocate_noinit(type eltType,  size: integral, out callPostAlloc: bool,  subloc = c_sublocid_none,  haltOnOom: bool = true) 

.. function:: proc _try_ddata_allocate(type eltType,  size: integral,  subloc = c_sublocid_none)  throws

.. function:: proc _ddata_allocate_noinit_gpu_shared(type eltType,  size: integral, out callPostAlloc: bool,  subloc = c_sublocid_none) 

.. function:: proc _ddata_allocate_postalloc( data: _ddata,  size: integral) 

.. function:: proc _ddata_allocate(type eltType,  size: integral,  subloc = c_sublocid_none) 

.. function:: proc _ddata_supports_reallocate( oldDdata, type eltType,  oldSize: integral,  newSize: integral) 

.. function:: proc _ddata_fill( ddata, type eltType,  lo: integral,  hi: integral,  fill: int(8) = 0) 

.. function:: proc _ddata_reallocate( oldDdata, type eltType,  oldSize: integral,  newSize: integral,  subloc = c_sublocid_none,  policy = chpl_ddataResizePolicy.normalInit) 

.. function:: proc _ddata_free( data: _ddata,  size: integral) 

.. function:: operator ==( a: _ddata,  b: _ddata)  where _to_borrowed(a.eltType) == _to_borrowed(b.eltType)

.. function:: operator ==( a: _ddata,  b: _nilType) 

.. function:: operator ==( a: _nilType,  b: _ddata) 

.. function:: operator !=( a: _ddata,  b: _ddata)  where a.eltType == b.eltType

.. function:: operator !=( a: _ddata,  b: _nilType) 

.. function:: operator !=( a: _nilType,  b: _ddata) 

.. function:: proc _cond_test( x: _ddata) 

.. class:: _ref

   .. attribute:: var _val

.. function:: proc chpl_rt_reset_task_spawn() 

.. function:: proc chpl_resetTaskSpawn( numTasks) 

.. data:: config param useAtomicTaskCnt = defaultAtomicTaskCount()

.. function:: proc defaultAtomicTaskCount() param

.. data:: config param commDiagsTrackEndCounts = false

.. record:: endCountDiagsManager : contextManager

   .. attribute:: var taskInfo: c_ptr(chpl_task_infoChapel_t)

   .. attribute:: var prevDiagsDisabledVal: bool

   .. method:: proc ref enterContext() 

   .. method:: proc  exitContext(in unused: owned(Error?)) 

.. class:: _EndCountBase

   .. attribute:: var errors: chpl_TaskErrors

.. class:: _EndCount : _EndCountBase

   .. attribute:: type iType

   .. attribute:: type taskType

   .. attribute:: var i: iType

   .. attribute:: var taskCnt: taskType

   .. method:: proc  init(type iType, type taskType) 

   .. method:: proc  add( value: int, param order: memoryOrder) 

   .. method:: proc  sub( value: int, param order: memoryOrder) 

   .. method:: proc  waitFor( value: int, param order: memoryOrder) 

.. function:: proc _endCountAlloc(param forceLocalTypes: bool) 

.. type:: type _remoteEndCountType = _endCountAlloc(false).type

.. function:: proc _endCountFree( e: _EndCount) 

.. function:: proc _upEndCount( e: _EndCount, param countRunningTasks = true) 

.. function:: proc _upEndCount( e: _EndCount, param countRunningTasks = true,  numTasks) 

.. function:: proc chpl_comm_unordered_task_fence() : void

.. function:: proc chpl_comm_task_create() 

.. function:: proc chpl_comm_task_end() : void

.. function:: proc chpl_after_forall_fence() 

.. function:: proc _downEndCount( e: _EndCount,  err: unmanaged(Error?)) 

.. function:: proc _waitEndCount( e: _EndCount, param countRunningTasks = true)  throws

.. function:: proc _waitEndCount( e: _EndCount, param countRunningTasks = true,  numTasks)  throws

.. function:: proc _upDynamicEndCount(param countRunningTasks = true) 

.. function:: proc _downDynamicEndCount( err: unmanaged(Error?)) 

.. function:: proc chpl_waitDynamicEndCount(param countRunningTasks = true)  throws

.. method:: proc param (real(64)).transmute(type t) param: t

   .. warning::

      This routine may change names / signatures

.. method:: proc param (real(32)).transmute(type t) param: t

   .. warning::

      This routine may change names / signatures

.. method:: proc  (real(?w)).transmute(type t) : t

   .. warning::

      This routine may change names / signatures

.. method:: proc param (uint(64)).transmute(type t) param: t

   .. warning::

      This routine may change names / signatures

.. method:: proc param (uint(32)).transmute(type t) param: t

   .. warning::

      This routine may change names / signatures

.. method:: proc  (uint(?w)).transmute(type t) : t

   .. warning::

      This routine may change names / signatures

.. function:: proc chpl_typeSupportsPrimitiveCast(type t) param

.. function:: operator :( x: bool, type t: integral) 

.. function:: operator :( x: bool, type t: chpl_anyreal) 

.. function:: operator :( x: integral, type t: bool) 

.. function:: operator :( x: integral, type t: integral) 

.. function:: operator :( x: integral, type t: chpl_anyreal) 

.. function:: operator :( x: chpl_anyreal, type t: bool) 

.. function:: operator :( x: chpl_anyreal, type t: integral) 

.. function:: operator :( x: chpl_anyreal, type t: chpl_anyreal) 

.. function:: proc chpl_checkCastAbstractEnumError(type enumType, type dstType) param

.. function:: operator :( x: enum, type t: bool)  throws

   .. warning::

      enum-to-bool casts are likely to be deprecated in the future

.. function:: operator :( x: enum, type t: enum)  where x.type == t

.. function:: operator :( x: enum, type t: chpl_anyreal)  throws

   .. warning::

      enum-to-float casts are likely to be deprecated in the future

.. function:: operator :( x: _nilType, type t: unmanaged(class)) 

.. function:: operator :( x: _nilType, type t: borrowed(class)) 

.. function:: proc chpl_castUnmanagedError(param typeStr: string) param

.. function:: operator :( x: owned(class), type t: unmanaged(class)) 

.. function:: operator :( x: owned(class?), type t: unmanaged(class)) 

.. function:: operator :( x: owned(class), type t: unmanaged(class?)) 

.. function:: operator :( x: owned(class?), type t: unmanaged(class?)) 

.. function:: operator :( x: shared(class), type t: unmanaged(class)) 

.. function:: operator :( x: shared(class?), type t: unmanaged(class)) 

.. function:: operator :( x: shared(class), type t: unmanaged(class?)) 

.. function:: operator :( x: shared(class?), type t: unmanaged(class?)) 

.. function:: operator :( x: borrowed(class?), type t: unmanaged(class?))  where isSubtype(_to_unmanaged(x.type), t)

.. function:: operator :( x: borrowed(class), type t: unmanaged(class?))  where isSubtype(_to_nonnil(_to_unmanaged(x.type)), t)

.. function:: operator :( x: borrowed(class), type t: unmanaged(class))  where isSubtype(_to_unmanaged(x.type), t)

.. function:: operator :( x: unmanaged(class?), type t: borrowed(class))  throws where isSubtype(_to_nonnil(x.type), t)

.. function:: operator :( x: borrowed(class?), type t: borrowed(class))  throws where isSubtype(_to_nonnil(x.type), t)

.. function:: operator :( x: borrowed(class?), type t: unmanaged(class))  throws where isSubtype(_to_nonnil(_to_unmanaged(x.type)), t)

.. function:: operator :( x: borrowed(class?), type t: borrowed(class))  throws where isProperSubtype(t, _to_nonnil(x.type))

.. function:: operator :( x: borrowed(class?), type t: borrowed(class?))  where isProperSubtype(t, x.type)

.. function:: operator :( x: borrowed(class?), type t: unmanaged(class))  throws where isProperSubtype(t, _to_nonnil(_to_unmanaged(x.type)))

.. function:: operator :( x: borrowed(class?), type t: unmanaged(class?))  where isProperSubtype(t, _to_unmanaged(x.type))

.. function:: operator :( x: borrowed(class), type t: unmanaged(class?))  where isProperSubtype(_to_nonnil(_to_borrowed(t)), x.type)

.. function:: operator :( x: bool, type t: chpl_anycomplex) 

.. function:: operator :( x: integral, type t: chpl_anycomplex) 

.. function:: operator :( x: chpl_anyreal, type t: chpl_anycomplex) 

.. function:: operator :( x: chpl_anyimag, type t: chpl_anycomplex) 

.. function:: operator :( x: chpl_anycomplex, type t: chpl_anycomplex) 

.. function:: operator :( x: enum, type t: chpl_anycomplex)  throws

   .. warning::

      enum-to-float casts are likely to be deprecated in the future

.. function:: operator :( x: bool, type t: chpl_anyimag) 

.. function:: operator :( x: integral, type t: chpl_anyimag) 

.. function:: operator :( x: chpl_anyreal, type t: chpl_anyimag) 

.. function:: operator :( x: chpl_anyimag, type t: chpl_anyimag) 

.. function:: operator :( x: chpl_anycomplex, type t: chpl_anyimag) 

.. function:: operator :( x: enum, type t: chpl_anyimag)  throws

   .. warning::

      enum-to-float casts are likely to be deprecated in the future

.. function:: operator :( x: chpl_anycomplex, type t: chpl_anyreal) 

.. function:: operator :( x: chpl_anycomplex, type t: integral) 

.. function:: operator :( x: chpl_anyimag, type t: chpl_anyreal) 

.. function:: operator :( x: chpl_anyimag, type t: integral) 

.. function:: operator :( x: chpl_anyimag, type t: bool) 

.. function:: proc chpl__initCopy(type t,  definedConst: bool) type

.. function:: proc chpl__initCopy( x: _tuple,  definedConst: bool) 

.. function:: proc chpl__initCopy(const x,  definedConst: bool) 

.. function:: proc chpl__autoCopy( x: _tuple,  definedConst: bool) 

.. function:: proc chpl__unref( x: _tuple) 

.. function:: proc chpl__autoCopy( ir: _iteratorRecord,  definedConst: bool) 

.. function:: proc chpl__autoCopy(const x,  definedConst: bool) 

.. function:: proc chpl__autoDestroy( x: borrowed(RootClass)) 

.. function:: proc chpl__autoDestroy(type t) 

.. function:: proc chpl__autoDestroy( x) 

.. function:: proc chpl__autoDestroy( ir: _iteratorRecord) 

.. function:: proc chpl__autoDestroy( x: _distribution) 

.. function:: proc chpl__autoDestroy( x: domain) 

.. function:: proc chpl__autoDestroy( x: []) 

.. function:: proc chpl__delete(const arg) 

.. function:: proc chpl__delete(const arr: []) 

.. function:: proc chpl__delete( arg, const args ...) 

.. function:: proc func() type

   .. warning::

      The 'func' procedure type constructor is deprecated, please use 'proc' syntax instead

.. function:: proc func(type rettype) type

   .. warning::

      The 'func' procedure type constructor is deprecated, please use 'proc' syntax instead

.. function:: proc func(type t ...?n, type rettype) type

   .. warning::

      The 'func' procedure type constructor is deprecated, please use 'proc' syntax instead

.. function:: proc isIterator( ic: _iteratorClass) param

.. function:: proc isIterator( ir: _iteratorRecord) param

.. function:: proc isIterator( not_an_iterator) param

.. function:: operator +=(ref lhs: int(8),  rhs: int(8)) 

   op= operators
      

.. function:: operator +=(ref lhs: int(16),  rhs: int(16)) 

.. function:: operator +=(ref lhs: int(32),  rhs: int(32)) 

.. function:: operator +=(ref lhs: int(64),  rhs: int(64)) 

.. function:: operator +=(ref lhs: uint(8),  rhs: uint(8)) 

.. function:: operator +=(ref lhs: uint(16),  rhs: uint(16)) 

.. function:: operator +=(ref lhs: uint(32),  rhs: uint(32)) 

.. function:: operator +=(ref lhs: uint(64),  rhs: uint(64)) 

.. function:: operator +=(ref lhs: real(32),  rhs: real(32)) 

.. function:: operator +=(ref lhs: real(64),  rhs: real(64)) 

.. function:: operator +=(ref lhs: imag(32),  rhs: imag(32)) 

.. function:: operator +=(ref lhs: imag(64),  rhs: imag(64)) 

.. function:: operator +=(ref lhs: complex(64),  rhs: complex(64)) 

.. function:: operator +=(ref lhs: complex(128),  rhs: complex(128)) 

.. function:: operator +=(ref lhs,  rhs)  where !(isNumericType(lhs.type) && isNumericType(rhs.type))

.. function:: operator -=(ref lhs: int(8),  rhs: int(8)) 

.. function:: operator -=(ref lhs: int(16),  rhs: int(16)) 

.. function:: operator -=(ref lhs: int(32),  rhs: int(32)) 

.. function:: operator -=(ref lhs: int(64),  rhs: int(64)) 

.. function:: operator -=(ref lhs: uint(8),  rhs: uint(8)) 

.. function:: operator -=(ref lhs: uint(16),  rhs: uint(16)) 

.. function:: operator -=(ref lhs: uint(32),  rhs: uint(32)) 

.. function:: operator -=(ref lhs: uint(64),  rhs: uint(64)) 

.. function:: operator -=(ref lhs: real(32),  rhs: real(32)) 

.. function:: operator -=(ref lhs: real(64),  rhs: real(64)) 

.. function:: operator -=(ref lhs: imag(32),  rhs: imag(32)) 

.. function:: operator -=(ref lhs: imag(64),  rhs: imag(64)) 

.. function:: operator -=(ref lhs: complex(64),  rhs: complex(64)) 

.. function:: operator -=(ref lhs: complex(128),  rhs: complex(128)) 

.. function:: operator -=(ref lhs,  rhs)  where !(isNumericType(lhs.type) && isNumericType(rhs.type))

.. function:: operator *=(ref lhs: int(8),  rhs: int(8)) 

.. function:: operator *=(ref lhs: int(16),  rhs: int(16)) 

.. function:: operator *=(ref lhs: int(32),  rhs: int(32)) 

.. function:: operator *=(ref lhs: int(64),  rhs: int(64)) 

.. function:: operator *=(ref lhs: uint(8),  rhs: uint(8)) 

.. function:: operator *=(ref lhs: uint(16),  rhs: uint(16)) 

.. function:: operator *=(ref lhs: uint(32),  rhs: uint(32)) 

.. function:: operator *=(ref lhs: uint(64),  rhs: uint(64)) 

.. function:: operator *=(ref lhs: real(32),  rhs: real(32)) 

.. function:: operator *=(ref lhs: real(64),  rhs: real(64)) 

.. function:: operator *=(ref lhs,  rhs)  where !(isIntegralOrRealType(lhs.type) && isIntegralOrRealType(rhs.type))

.. function:: operator /=(ref lhs: int(8),  rhs: int(8)) 

.. function:: operator /=(ref lhs: int(16),  rhs: int(16)) 

.. function:: operator /=(ref lhs: int(32),  rhs: int(32)) 

.. function:: operator /=(ref lhs: int(64),  rhs: int(64)) 

.. function:: operator /=(ref lhs: uint(8),  rhs: uint(8)) 

.. function:: operator /=(ref lhs: uint(16),  rhs: uint(16)) 

.. function:: operator /=(ref lhs: uint(32),  rhs: uint(32)) 

.. function:: operator /=(ref lhs: uint(64),  rhs: uint(64)) 

.. function:: operator /=(ref lhs: real(32),  rhs: real(32)) 

.. function:: operator /=(ref lhs: real(64),  rhs: real(64)) 

.. function:: operator /=(ref lhs,  rhs)  where !(isIntegralOrRealType(lhs.type) && isIntegralOrRealType(rhs.type))

.. function:: operator %=(ref lhs: int(8),  rhs: int(8)) 

.. function:: operator %=(ref lhs: int(16),  rhs: int(16)) 

.. function:: operator %=(ref lhs: int(32),  rhs: int(32)) 

.. function:: operator %=(ref lhs: int(64),  rhs: int(64)) 

.. function:: operator %=(ref lhs: uint(8),  rhs: uint(8)) 

.. function:: operator %=(ref lhs: uint(16),  rhs: uint(16)) 

.. function:: operator %=(ref lhs: uint(32),  rhs: uint(32)) 

.. function:: operator %=(ref lhs: uint(64),  rhs: uint(64)) 

.. function:: operator %=(ref lhs,  rhs)  where !(isIntegralOrRealType(lhs.type) && isIntegralOrRealType(rhs.type))

.. function:: operator **=(ref lhs,  rhs) 

.. function:: operator &=(ref lhs: int(8),  rhs: int(8)) 

.. function:: operator &=(ref lhs: int(16),  rhs: int(16)) 

.. function:: operator &=(ref lhs: int(32),  rhs: int(32)) 

.. function:: operator &=(ref lhs: int(64),  rhs: int(64)) 

.. function:: operator &=(ref lhs: uint(8),  rhs: uint(8)) 

.. function:: operator &=(ref lhs: uint(16),  rhs: uint(16)) 

.. function:: operator &=(ref lhs: uint(32),  rhs: uint(32)) 

.. function:: operator &=(ref lhs: uint(64),  rhs: uint(64)) 

.. function:: operator &=(ref lhs,  rhs)  where !(isNumericType(lhs.type) && isNumericType(rhs.type))

.. function:: operator |=(ref lhs: int(8),  rhs: int(8)) 

.. function:: operator |=(ref lhs: int(16),  rhs: int(16)) 

.. function:: operator |=(ref lhs: int(32),  rhs: int(32)) 

.. function:: operator |=(ref lhs: int(64),  rhs: int(64)) 

.. function:: operator |=(ref lhs: uint(8),  rhs: uint(8)) 

.. function:: operator |=(ref lhs: uint(16),  rhs: uint(16)) 

.. function:: operator |=(ref lhs: uint(32),  rhs: uint(32)) 

.. function:: operator |=(ref lhs: uint(64),  rhs: uint(64)) 

.. function:: operator |=(ref lhs,  rhs)  where !(isNumericType(lhs.type) && isNumericType(rhs.type))

.. function:: operator ^=(ref lhs: int(8),  rhs: int(8)) 

.. function:: operator ^=(ref lhs: int(16),  rhs: int(16)) 

.. function:: operator ^=(ref lhs: int(32),  rhs: int(32)) 

.. function:: operator ^=(ref lhs: int(64),  rhs: int(64)) 

.. function:: operator ^=(ref lhs: uint(8),  rhs: uint(8)) 

.. function:: operator ^=(ref lhs: uint(16),  rhs: uint(16)) 

.. function:: operator ^=(ref lhs: uint(32),  rhs: uint(32)) 

.. function:: operator ^=(ref lhs: uint(64),  rhs: uint(64)) 

.. function:: operator ^=(ref lhs,  rhs)  where !(isNumericType(lhs.type) && isNumericType(rhs.type))

.. function:: operator >>=(ref lhs: int(?w),  rhs: integral) 

.. function:: operator >>=(ref lhs: uint(?w),  rhs: integral) 

.. function:: operator >>=(ref lhs,  rhs)  where !(isNumericType(lhs.type) && isNumericType(rhs.type))

.. function:: operator <<=(ref lhs: int(?w),  rhs: integral) 

.. function:: operator <<=(ref lhs: uint(?w),  rhs: integral) 

.. function:: operator <<=(ref lhs,  rhs)  where !(isNumericType(lhs.type) && isNumericType(rhs.type))

.. function:: operator <=>(ref lhs, ref rhs) 

   swap operator 

.. function:: operator +( a: uint(64), param b: uint(64)) 

.. function:: operator +(param a: uint(64),  b: uint(64)) 

.. function:: operator +( a: int(64), param b: int(64)) 

.. function:: operator +(param a: int(64),  b: int(64)) 

.. function:: operator -( a: uint(64), param b: uint(64)) 

.. function:: operator -(param a: uint(64),  b: uint(64)) 

.. function:: operator -( a: int(64), param b: int(64)) 

.. function:: operator -(param a: int(64),  b: int(64)) 

.. function:: operator *( a: uint(64), param b: uint(64)) 

.. function:: operator *(param a: uint(64),  b: uint(64)) 

.. function:: operator *( a: int(64), param b: int(64)) 

.. function:: operator *(param a: int(64),  b: int(64)) 

.. function:: operator /( a: int(64), param b: int(64)) 

.. function:: operator /( a: uint(64), param b: uint(64)) 

.. function:: operator /(param a: uint(64),  b: uint(64)) 

.. function:: operator /(param a: int(64),  b: int(64)) 

.. function:: operator **( a: uint(64), param b: uint(64)) 

.. function:: operator **(param a: uint(64),  b: uint(64)) 

.. function:: operator **( a: int(64), param b: int(64)) 

.. function:: operator **(param a: int(64),  b: int(64)) 

.. function:: operator %( a: uint(64), param b: uint(64)) 

.. function:: operator %(param a: uint(64),  b: uint(64)) 

.. function:: operator %( a: int(64), param b: int(64)) 

.. function:: operator %(param a: int(64),  b: int(64)) 

.. function:: operator ==( a: uint(8),  b: int(8)) 

.. function:: operator ==( a: uint(16),  b: int(16)) 

.. function:: operator ==( a: uint(32),  b: int(32)) 

.. function:: operator ==( a: uint(64),  b: int(64)) 

.. function:: operator ==( a: int(8),  b: uint(8)) 

.. function:: operator ==( a: int(16),  b: uint(16)) 

.. function:: operator ==( a: int(32),  b: uint(32)) 

.. function:: operator ==( a: int(64),  b: uint(64)) 

.. function:: operator !=( a: uint(8),  b: int(8)) 

.. function:: operator !=( a: uint(16),  b: int(16)) 

.. function:: operator !=( a: uint(32),  b: int(32)) 

.. function:: operator !=( a: uint(64),  b: int(64)) 

.. function:: operator !=( a: int(8),  b: uint(8)) 

.. function:: operator !=( a: int(16),  b: uint(16)) 

.. function:: operator !=( a: int(32),  b: uint(32)) 

.. function:: operator !=( a: int(64),  b: uint(64)) 

.. function:: operator >( a: uint(8),  b: int(8)) 

.. function:: operator >( a: uint(16),  b: int(16)) 

.. function:: operator >( a: uint(32),  b: int(32)) 

.. function:: operator >( a: uint(64),  b: int(64)) 

.. function:: operator >( a: int(8),  b: uint(8)) 

.. function:: operator >( a: int(16),  b: uint(16)) 

.. function:: operator >( a: int(32),  b: uint(32)) 

.. function:: operator >( a: int(64),  b: uint(64)) 

.. function:: operator >(param a: uint(8),  b: uint(8)) 

.. function:: operator >(param a: uint(16),  b: uint(16)) 

.. function:: operator >(param a: uint(32),  b: uint(32)) 

.. function:: operator >(param a: uint(64),  b: uint(64)) 

.. function:: operator >(param a: int(8),  b: int(8)) 

.. function:: operator >(param a: int(16),  b: int(16)) 

.. function:: operator >(param a: int(32),  b: int(32)) 

.. function:: operator >(param a: int(64),  b: int(64)) 

.. function:: operator >=( a: uint(8),  b: int(8)) 

.. function:: operator >=( a: uint(16),  b: int(16)) 

.. function:: operator >=( a: uint(32),  b: int(32)) 

.. function:: operator >=( a: uint(64),  b: int(64)) 

.. function:: operator >=( a: int(8),  b: uint(8)) 

.. function:: operator >=( a: int(16),  b: uint(16)) 

.. function:: operator >=( a: int(32),  b: uint(32)) 

.. function:: operator >=( a: int(64),  b: uint(64)) 

.. function:: operator >=( a: uint(8), param b: uint(8)) 

.. function:: operator >=( a: uint(16), param b: uint(16)) 

.. function:: operator >=( a: uint(32), param b: uint(32)) 

.. function:: operator >=( a: uint(64), param b: uint(64)) 

.. function:: operator >=( a: int(8), param b: int(8)) 

.. function:: operator >=( a: int(16), param b: int(16)) 

.. function:: operator >=( a: int(32), param b: int(32)) 

.. function:: operator >=( a: int(64), param b: int(64)) 

.. function:: operator <=( a: uint(8),  b: int(8)) 

.. function:: operator <=( a: uint(16),  b: int(16)) 

.. function:: operator <=( a: uint(32),  b: int(32)) 

.. function:: operator <=( a: uint(64),  b: int(64)) 

.. function:: operator <=( a: int(8),  b: uint(8)) 

.. function:: operator <=( a: int(16),  b: uint(16)) 

.. function:: operator <=( a: int(32),  b: uint(32)) 

.. function:: operator <=( a: int(64),  b: uint(64)) 

.. function:: operator <=(param a: uint(8),  b: uint(8)) 

.. function:: operator <=(param a: uint(16),  b: uint(16)) 

.. function:: operator <=(param a: uint(32),  b: uint(32)) 

.. function:: operator <=(param a: uint(64),  b: uint(64)) 

.. function:: operator <=(param a: int(8),  b: int(8)) 

.. function:: operator <=(param a: int(16),  b: int(16)) 

.. function:: operator <=(param a: int(32),  b: int(32)) 

.. function:: operator <=(param a: int(64),  b: int(64)) 

.. function:: proc isGenericType(type t) param

.. function:: proc isNilableClassType(type t) param

.. function:: proc isNonNilableClassType(type t) param

.. function:: proc isBorrowedOrUnmanagedClassType(type t: unmanaged) param

.. function:: proc isBorrowedOrUnmanagedClassType(type t: borrowed) param

.. function:: proc isBorrowedOrUnmanagedClassType(type t) param

.. data:: const QIO_STYLE_ELEMENT_STRING: int

.. data:: const QIO_STYLE_ELEMENT_COMPLEX: int

.. data:: const QIO_STYLE_ELEMENT_ARRAY: int

.. data:: const QIO_STYLE_ELEMENT_AGGREGATE: int

.. data:: const QIO_STYLE_ELEMENT_TUPLE: int

.. data:: const QIO_STYLE_ELEMENT_BYTE_ORDER: int

.. data:: const QIO_STYLE_ELEMENT_IS_NATIVE_BYTE_ORDER: int

.. data:: const QIO_STYLE_ELEMENT_SKIP_UNKNOWN_FIELDS: int

.. data:: const QIO_ARRAY_FORMAT_SPACE: int

.. data:: const QIO_ARRAY_FORMAT_CHPL: int

.. data:: const QIO_ARRAY_FORMAT_JSON: int

.. data:: const QIO_AGGREGATE_FORMAT_BRACES: int

.. data:: const QIO_AGGREGATE_FORMAT_CHPL: int

.. data:: const QIO_AGGREGATE_FORMAT_JSON: int

.. data:: const QIO_TUPLE_FORMAT_CHPL: int

.. data:: const QIO_TUPLE_FORMAT_SPACE: int

.. data:: const QIO_TUPLE_FORMAT_JSON: int

.. class:: chpl_ModuleDeinit : writeSerializable

   .. attribute:: const moduleName: c_ptrConst(c_char)

   .. attribute:: const deinitFun: chpl_c_fn_ptr

   .. attribute:: const prevModule: unmanaged(chpl_ModuleDeinit?)

   .. method:: override proc  serialize( writer, ref serializer)  throws

.. data:: var chpl_moduleDeinitFuns = nil: unmanaged(chpl_ModuleDeinit?)

.. function:: proc chpl_checkLegalTypeFieldAccessor( thisArg, type fieldType, param fieldName) type

.. function:: proc chpl_checkLegalTypeFieldAccessor(type thisArg, type fieldType, param fieldName) type

.. function:: proc _to_unmanaged(type t) type

.. function:: proc _to_unmanaged( arg) 

.. function:: proc _to_borrowed(type t) type

.. function:: proc _to_borrowed( arg) 

.. function:: proc _to_nonnil(type t) type

.. function:: proc _to_nonnil( arg) 

.. function:: proc _to_nilable(type t) type

.. function:: proc _to_nilable( arg) 

.. function:: proc chpl_checkBorrowIfVar( arg, param isWhile) 

.. function:: proc chpl_checkBorrowIfVar(type arg, param isWhile) 

.. function:: proc _removed_cast(in x) 

.. function:: proc chpl_supportsBoundedCoforall( iterable, param zippered) param

.. function:: proc chpl_boundedCoforallSize( iterable, param zippered) 

.. function:: proc chpl_field_neq( a: [] ?t,  b: [] t) 

   The following chpl_field_*() overloads support compiler-generated
   comparison operators for records with array fields 

.. function:: proc chpl_field_neq( a,  b)  where !isArrayType(a.type)

.. function:: proc chpl_field_lt( a: [] ?t,  b: [] t) 

.. function:: proc chpl_field_lt( a,  b)  where !isArrayType(a.type)

.. function:: proc chpl_field_gt( a: [] ?t,  b: [] t) 

.. function:: proc chpl_field_gt( a,  b)  where !isArrayType(a.type)

.. function:: proc chpl__bothLocal(const ref a, const ref b) 

