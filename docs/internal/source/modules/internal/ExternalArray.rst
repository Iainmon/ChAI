.. default-domain:: chpl

.. module:: ExternalArray
   :noindex:

ExternalArray
=============
**Usage**

.. code-block:: chapel

   use ExternalArray;


or

.. code-block:: chapel

   import ExternalArray;

.. record:: chpl_opaque_array

   .. attribute:: var _pid: int

   .. attribute:: var _instance: c_ptr(void)

   .. attribute:: var _unowned: bool

.. record:: chpl_external_array

   .. attribute:: var elts: c_ptr(void)

   .. attribute:: var num_elts: uint

   .. attribute:: var freer: c_ptr(void)

.. function:: proc chpl_make_external_array( elt_size: uint,  num_elts: uint) : chpl_external_array

.. function:: proc chpl_make_external_array_ptr( elts: c_ptr(void),  num_elts: uint) : chpl_external_array

.. function:: proc chpl_make_external_array_ptr_free( elts: c_ptr(void),  num_elts: uint) : chpl_external_array

.. function:: proc chpl_free_external_array(in x: chpl_external_array) 

.. function:: proc chpl_call_free_func( func: c_ptr(void),  elts: c_ptr(void)) 

.. function:: proc makeArrayFromPtr( value: c_ptr,  num_elts: uint) 

.. function:: proc makeArrayFromPtr( value: c_ptr,  dom: domain) 

.. function:: proc makeArrayFromExternArray( value: chpl_external_array, type eltType) 

.. function:: proc makeArrayFromExternArray( value: chpl_external_array, type eltType,  dom: domain)  where dom.isRectangular()

.. function:: proc makeArrayFromOpaque( value: chpl_opaque_array, type arrType) 

.. function:: proc convertStringOrBytes(ref arr: []) : chpl_external_array where arr.eltType == string || arr.eltType == bytes

.. function:: proc convertToExternalArray(in arr: []) : chpl_external_array where getExternalArrayType(arr) == chpl_external_array

.. function:: proc convertToExternalArray(ref arr: []) : chpl_opaque_array where getExternalArrayType(arr) == chpl_opaque_array

.. function:: proc getExternalArrayType( arg) type

.. function:: proc getExternalArrayType(type arg) type

.. function:: export proc cleanupOpaqueArray(const ref arr: chpl_opaque_array) 

