.. default-domain:: chpl

.. module:: LocaleModelHelpMem
   :noindex:

LocaleModelHelpMem
==================
**Usage**

.. code-block:: chapel

   use LocaleModelHelpMem;


or

.. code-block:: chapel

   import LocaleModelHelpMem;

.. function:: proc chpl_here_alloc( size: int(64),  md: chpl_mem_descInt_t) : c_ptr(void)

.. function:: proc chpl_here_alloc( size: integral,  md: chpl_mem_descInt_t) : c_ptr(void)

.. function:: proc chpl_here_aligned_alloc( alignment: integral,  size: integral,  md: chpl_mem_descInt_t) : c_ptr(void)

.. function:: proc chpl_here_calloc( size: integral,  number: integral,  md: chpl_mem_descInt_t) : c_ptr(void)

.. function:: proc chpl_here_realloc( ptr: c_ptr(void),  size: integral,  md: chpl_mem_descInt_t) : c_ptr(void)

.. function:: proc chpl_here_good_alloc_size( min_size: integral) : min_size.type

.. function:: proc chpl_here_free( ptr: c_ptr(void)) : void

