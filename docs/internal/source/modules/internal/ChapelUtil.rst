.. default-domain:: chpl

.. module:: ChapelUtil
   :noindex:

ChapelUtil
==========
**Usage**

.. code-block:: chapel

   use ChapelUtil;


or

.. code-block:: chapel

   import ChapelUtil;

.. function:: proc safeAdd( a: ?t,  b: t) 

.. function:: proc safeSub( a: ?t,  b: t) 

.. function:: proc safeMul( a: ?t,  b: t) 

.. function:: proc _command_line_cast(param s: chpl_c_string, type t,  x: c_ptrConst(c_char)) 

.. record:: chpl_main_argument

   .. attribute:: var argc: int(64)

   .. attribute:: var return_value: int(32)

.. function:: proc chpl_convert_args( arg: chpl_main_argument) 

.. function:: proc chpl_get_mli_connection( arg: chpl_main_argument) 

.. function:: proc chpl_rt_preUserCodeHook() 

.. function:: proc chpl_rt_postUserCodeHook() 

.. function:: proc allocate_string_literals_buf( s: int) : c_ptrConst(c_char)

.. function:: proc deallocate_string_literals_buf() : void

.. data:: config param printModuleDeinitOrder = false

.. function:: proc chpl_addModule( moduleName: chpl_c_string,  deinitFun: chpl_c_fn_ptr) 

.. function:: export proc chpl_deinitModules() 

