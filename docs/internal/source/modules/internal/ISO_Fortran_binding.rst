.. default-domain:: chpl

.. module:: ISO_Fortran_binding
   :noindex:

ISO_Fortran_binding
===================
**Usage**

.. code-block:: chapel

   use ISO_Fortran_binding;


or

.. code-block:: chapel

   import ISO_Fortran_binding;

.. data:: const CFI_attribute_pointer: int

.. data:: const CFI_attribute_allocatable: int

.. data:: const CFI_attribute_other: int

.. data:: const CFI__max_attribute: int

.. data:: const CFI_type_int8_t: int

.. data:: const CFI_type_int16_t: int

.. data:: const CFI_type_int32_t: int

.. data:: const CFI_type_int64_t: int

.. data:: const CFI_type_signed_char: int

.. data:: const CFI_type_short: int

.. data:: const CFI_type_int: int

.. data:: const CFI_type_long: int

.. data:: const CFI_type_long_long: int

.. data:: const CFI_type_size_t: int

.. data:: const CFI_type_int_least8_t: int

.. data:: const CFI_type_int_least16_t: int

.. data:: const CFI_type_int_least32_t: int

.. data:: const CFI_type_int_least64_t: int

.. data:: const CFI_type_int_fast8_t: int

.. data:: const CFI_type_int_fast16_t: int

.. data:: const CFI_type_int_fast32_t: int

.. data:: const CFI_type_int_fast64_t: int

.. data:: const CFI_type_intmax_t: int

.. data:: const CFI_type_intptr_t: int

.. data:: const CFI_type_ptrdiff_t: int

.. data:: const CFI_type_float: int

.. data:: const CFI_type_double: int

.. data:: const CFI_type_long_double: int

.. data:: const CFI_type_double_Complex: int

.. data:: const CFI_type_long_double_Complex: int

.. data:: const CFI_type_Bool: int

.. data:: const CFI_type_char: int

.. data:: const CFI_type_cptr: int

.. data:: const CFI_type_struct: int

.. data:: const CFI_type_other: int

.. data:: const CFI__max_type: int

.. data:: const CFI_SUCCESS: int

.. data:: const CFI_ERROR_BASE_ADDR_NULL: int

.. data:: const CFI_ERROR_BASE_ADDR_NOT_NULL: int

.. data:: const CFI_INVALID_ELEM_LEN: int

.. data:: const CFI_INVALID_RANK: int

.. data:: const CFI_INVALID_TYPE: int

.. data:: const CFI_INVALID_ATTRIBUTE: int

.. data:: const CFI_INVALID_EXTENT: int

.. data:: const CFI_INVALID_DESCRIPTOR: int

.. data:: const CFI_ERROR_MEM_ALLOCATION: int

.. data:: const CFI_ERROR_OUT_OF_BOUNDS: int

.. data:: const CFI_MAX_RANK: int

.. data:: const CFI_VERSION: int

.. data:: const CFI__VERSION_0001: int

.. function:: proc CFI_address(ref dv: CFI_cdesc_t,  subscripts: c_ptr(CFI_index_t)) 

.. function:: proc for_CFI_address(ref dv: CFI_cdesc_t,  subscripts: c_ptr(CFI_index_t)) : c_ptr(void)

.. function:: proc CFI_allocate(ref dv: CFI_cdesc_t,  lower_bounds: c_ptr(CFI_index_t),  upper_bounds: c_ptr(CFI_index_t),  elem_len: c_size_t) : c_int

.. function:: proc for_CFI_allocate(ref dv: CFI_cdesc_t,  lower_bounds: c_ptr(CFI_index_t),  upper_bounds: c_ptr(CFI_index_t),  elem_len: c_size_t) : c_int

.. function:: proc CFI_deallocate(ref dv: CFI_cdesc_t) : c_int

.. function:: proc for_CFI_deallocate(ref dv: CFI_cdesc_t) : c_int

.. function:: proc CFI_establish(ref dv: CFI_cdesc_t,  base_addr: c_ptr(void),  attribute: CFI_attribute_t,  type_arg: CFI_type_t,  elem_len: c_size_t,  rank: CFI_rank_t,  extents: c_ptr(CFI_index_t)) : c_int

.. function:: proc for_CFI_establish(ref dv: CFI_cdesc_t,  base_addr: c_ptr(void),  attribute: CFI_attribute_t,  type_arg: CFI_type_t,  elem_len: c_size_t,  rank: CFI_rank_t,  extents: c_ptr(CFI_index_t),  version: c_int) : c_int

.. function:: proc CFI_is_contiguous(ref dv: CFI_cdesc_t) : c_int

.. function:: proc for_CFI_is_contiguous(ref dv: CFI_cdesc_t) : c_int

.. function:: proc CFI_section(ref result: CFI_cdesc_t, ref source: CFI_cdesc_t,  lower_bounds: c_ptr(CFI_index_t),  upper_bounds: c_ptr(CFI_index_t),  strides: c_ptr(CFI_index_t)) : c_int

.. function:: proc for_CFI_section(ref result: CFI_cdesc_t, ref source: CFI_cdesc_t,  lower_bounds: c_ptr(CFI_index_t),  upper_bounds: c_ptr(CFI_index_t),  strides: c_ptr(CFI_index_t)) : c_int

.. function:: proc CFI_select_part(ref result: CFI_cdesc_t, ref source: CFI_cdesc_t,  displacement: c_size_t,  elem_len: c_size_t) : c_int

.. function:: proc for_CFI_select_part(ref result: CFI_cdesc_t, ref source: CFI_cdesc_t,  displacement: c_size_t,  elem_len: c_size_t) : c_int

.. function:: proc CFI_setpointer(ref result: CFI_cdesc_t, ref source: CFI_cdesc_t,  lower_bounds: c_ptr(CFI_index_t)) : c_int

.. function:: proc for_CFI_setpointer(ref result: CFI_cdesc_t, ref source: CFI_cdesc_t,  lower_bounds: c_ptr(CFI_index_t)) : c_int

.. type:: type CFI_attribute_t = c_ptrdiff

.. record:: CFI_cdesc_t

   .. attribute:: var base_addr: c_ptr(void)

   .. attribute:: var elem_len: c_size_t

   .. attribute:: var version: c_int

   .. attribute:: var attribute: CFI_attribute_t

   .. attribute:: var rank: CFI_rank_t

   .. attribute:: var ctype: CFI_type_t

   .. attribute:: var dim: c_ptr(CFI_dim_t)

.. record:: CFI_dim_t

   
   extern record CFI_CDESC_T {
     param r: int;
     var base_addr: c_ptr(void);
     var elem_len: c_size_t;
     var version: c_int;
     var attribute: CFI_attribute_t;
     var rank: CFI_rank_t;
     //var type: CFI_type_t;
     var dim: [0..#r] CFI_dim_t;
   }

   .. attribute:: var extent: CFI_index_t

   .. attribute:: var sm: CFI_index_t

   .. attribute:: var lower_bound: CFI_index_t

.. type:: type CFI_index_t = c_ptrdiff

.. type:: type CFI_rank_t = c_ptrdiff

.. type:: type CFI_type_t = c_ptrdiff

.. function:: proc makeArrayFromFortranArray(ref FA: CFI_cdesc_t, type eltType, param rank = 1) 

