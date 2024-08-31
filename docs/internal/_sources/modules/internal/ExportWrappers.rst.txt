.. default-domain:: chpl

.. module:: ExportWrappers
   :noindex:

ExportWrappers
==============
**Usage**

.. code-block:: chapel

   use ExportWrappers;


or

.. code-block:: chapel

   import ExportWrappers;


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


.. function:: export proc chpl_libraryModuleLevelSetup() : void

.. function:: export proc chpl_libraryModuleLevelCleanup() : void

.. record:: chpl_byte_buffer

   .. attribute:: var isOwned: int(8)

   .. attribute:: var data: c_ptr(c_char)

   .. attribute:: var size: uint(64)

.. function:: proc chpl_byte_buffer_free( cb: chpl_byte_buffer) 

.. type:: type chpl__exportTypeChplByteBuffer = chpl_byte_buffer

.. function:: proc chpl__exportRetStringOrBytes(ref val) : chpl_byte_buffer

.. function:: proc chpl__exportRet(ref val: string, type rt: chpl_byte_buffer) : rt

.. function:: proc chpl__exportRet(ref val: bytes, type rt: chpl_byte_buffer) : rt

.. function:: proc chpl__exportArg( cp: bool,  val: chpl_byte_buffer, type rt: string) : rt

.. function:: proc chpl__exportArg( cp: bool,  val: chpl_byte_buffer, type rt: bytes) : rt

