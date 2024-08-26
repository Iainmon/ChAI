.. default-domain:: chpl

.. module:: LocaleModelHelpRuntime
   :noindex:

LocaleModelHelpRuntime
======================
**Usage**

.. code-block:: chapel

   use LocaleModelHelpRuntime;


or

.. code-block:: chapel

   import LocaleModelHelpRuntime;

.. record:: chpl_localeID_t

.. record:: chpl_comm_on_bundle_t

.. record:: chpl_task_bundle_t

.. type:: type chpl_comm_on_bundle_p

.. type:: type chpl_task_bundle_p

.. function:: proc chpl_comm_on_bundle_task_bundle( bundle: chpl_comm_on_bundle_p) : chpl_task_bundle_p

.. function:: proc chpl_rt_buildLocaleID( node: chpl_nodeID_t,  subloc: chpl_sublocID_t) : chpl_localeID_t

.. function:: proc chpl_rt_nodeFromLocaleID(in loc: chpl_localeID_t) : chpl_nodeID_t

.. function:: proc chpl_rt_sublocFromLocaleID(in loc: chpl_localeID_t) : chpl_sublocID_t

.. function:: proc chpl_buildLocaleID( node: chpl_nodeID_t,  subloc: chpl_sublocID_t) 

.. function:: proc chpl_nodeFromLocaleID(in loc: chpl_localeID_t) 

.. function:: proc chpl_sublocFromLocaleID(in loc: chpl_localeID_t) 

.. function:: proc chpl_comm_execute_on( loc_id: int,  subloc_id: int,  fn: int,  args: chpl_comm_on_bundle_p,  arg_size: c_size_t) 

.. function:: proc chpl_comm_execute_on_fast( loc_id: int,  subloc_id: int,  fn: int,  args: chpl_comm_on_bundle_p,  args_size: c_size_t) 

.. function:: proc chpl_comm_execute_on_nb( loc_id: int,  subloc_id: int,  fn: int,  args: chpl_comm_on_bundle_p,  args_size: c_size_t) 

.. function:: proc chpl_comm_taskCallFTable( fn: int,  args: chpl_comm_on_bundle_p,  args_size: c_size_t,  subloc_id: int) : void

.. function:: proc chpl_ftable_call( fn: int,  args: chpl_comm_on_bundle_p) : void

.. function:: proc chpl_ftable_call( fn: int,  args: chpl_task_bundle_p) : void

.. function:: proc chpl_task_addTask( fn: int,  args: chpl_task_bundle_p,  args_size: c_size_t,  subloc_id: int) 

.. function:: proc chpl_task_yield() 

   .. warning::

      'chpl_task_yield' is deprecated, please use 'currentTask.yieldExecution' instead

.. function:: proc chpl_taskAddBegin( subloc_id: int,  fn: int,  args: chpl_task_bundle_p,  args_size: c_size_t) 

.. function:: proc chpl_taskAddCoStmt( subloc_id: int,  fn: int,  args: chpl_task_bundle_p,  args_size: c_size_t) 

.. function:: proc chpl__initCopy( initial: chpl_localeID_t,  definedConst: bool) : chpl_localeID_t

