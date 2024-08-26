.. default-domain:: chpl

.. module:: ChapelTaskData
   :noindex:

ChapelTaskData
==============
**Usage**

.. code-block:: chapel

   use ChapelTaskData;


or

.. code-block:: chapel

   import ChapelTaskData;

.. function:: proc chpl_task_data_setDynamicEndCount( tls: c_ptr(chpl_task_infoChapel_t),  end: _remoteEndCountType) 

.. function:: proc chpl_task_data_getDynamicEndCount( tls: c_ptr(chpl_task_infoChapel_t)) 

.. function:: proc chpl_task_data_setSerial( tls: c_ptr(chpl_task_infoChapel_t),  makeSerial: bool) : void

.. function:: proc chpl_task_data_getSerial( tls: c_ptr(chpl_task_infoChapel_t)) : bool

.. function:: proc chpl_task_data_setNextCoStmtSerial( tls: c_ptr(chpl_task_infoChapel_t),  makeSerial: bool) : void

.. function:: proc chpl_task_data_getNextCoStmtSerial( tls: c_ptr(chpl_task_infoChapel_t)) : bool

.. function:: proc chpl_task_data_setCommDiagsTemporarilyDisabled( tls: c_ptr(chpl_task_infoChapel_t),  disabled: bool) : bool

.. function:: proc chpl_task_data_getCommDiagsTemporarilyDisabled( tls: c_ptr(chpl_task_infoChapel_t)) : bool

.. function:: proc chpl_task_setDynamicEndCount( end: _remoteEndCountType) 

.. function:: proc chpl_task_getDynamicEndCount() : _remoteEndCountType

.. function:: export proc chpl_task_setSerial( makeSerial: bool) : void

.. function:: export proc chpl_task_getSerial() : bool

.. function:: export proc chpl_task_setCommDiagsTemporarilyDisabled( disabled: bool) : bool

.. function:: export proc chpl_task_getCommDiagsTemporarilyDisabled() : bool

