.. default-domain:: chpl

.. module:: MemConsistency
   :noindex:

MemConsistency
==============
**Usage**

.. code-block:: chapel

   use MemConsistency;


or

.. code-block:: chapel

   import MemConsistency;


* Copyright 2020-2024 Hewlett Packard Enterprise Development LP
* Copyright 2004-2019 Cray Inc.
* Other additional copyright holders may be indicated within.
*
* The entirety of this work is licensed under the Apache License,
* Version 2.0 (the "License"); you may not use this file except
* in compliance with the License.
*
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.


.. type:: type memory_order

.. function:: proc _defaultOf(type t: memory_order) 

.. method:: operator  memory_order.==( a: memory_order,  b: memory_order) : bool

.. method:: operator  memory_order.!=( a: memory_order,  b: memory_order) : bool

.. method:: operator  memory_order. = (ref lhs: memory_order,  rhs: memory_order) 

.. method:: proc  memory_order.serialize( writer, ref serializer)  throws

.. data:: const memory_order_relaxed: memory_order

.. data:: const memory_order_consume: memory_order

.. data:: const memory_order_acquire: memory_order

.. data:: const memory_order_release: memory_order

.. data:: const memory_order_acq_rel: memory_order

.. data:: const memory_order_seq_cst: memory_order

.. enum:: enum memoryOrder { seqCst, acqRel, release, acquire, relaxed }

   .. enumconstant:: enum constant seqCst

   .. enumconstant:: enum constant acqRel

   .. enumconstant:: enum constant release

   .. enumconstant:: enum constant acquire

   .. enumconstant:: enum constant relaxed

.. function:: proc readableOrder(param order: memoryOrder) param

.. function:: proc c_memory_order(param order: memoryOrder) 

.. function:: proc chpl_rmem_consist_release() 

.. function:: proc chpl_rmem_consist_acquire() 

.. function:: proc chpl_rmem_consist_maybe_release( order: memory_order) 

.. function:: proc chpl_rmem_consist_maybe_release(param order: memoryOrder) 

.. function:: proc chpl_rmem_consist_maybe_acquire( order: memory_order) 

.. function:: proc chpl_rmem_consist_maybe_acquire(param order: memoryOrder) 

.. function:: proc chpl_rmem_consist_fence( order: memory_order) 

.. function:: proc chpl_rmem_consist_fence(param order: memoryOrder) 

