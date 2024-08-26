.. default-domain:: chpl

.. module:: ChapelTaskDataHelp
   :noindex:

ChapelTaskDataHelp
==================
**Usage**

.. code-block:: chapel

   use ChapelTaskDataHelp;


or

.. code-block:: chapel

   import ChapelTaskDataHelp;

.. type:: type chpl_task_infoChapel_t

.. function:: proc chpl_task_getInfoChapel() : c_ptr(chpl_task_infoChapel_t)

.. function:: proc chpl_task_getInfoChapelInBundle( args: chpl_task_bundle_p) : c_ptr(chpl_task_infoChapel_t)

.. function:: proc chpl_task_data_setup( args: chpl_task_bundle_p,  infoChapel: c_ptr(chpl_task_infoChapel_t)) 

.. function:: proc chpl_save_task_error( e: _EndCountBase,  err: unmanaged(Error?)) 

.. function:: proc chpl_save_task_error_owned( e: _EndCountBase, in err: owned(Error?)) 

