.. default-domain:: chpl

.. module:: ByteBufferHelpers
   :noindex:

ByteBufferHelpers
=================
**Usage**

.. code-block:: chapel

   use ByteBufferHelpers;


or

.. code-block:: chapel

   import ByteBufferHelpers;


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


.. type:: type byteType = uint(8)

.. type:: type bufferType = c_ptr(byteType)

.. type:: type locIdType = chpl_nodeID.type

.. data:: config param chpl_stringGrowthFactor = 1.5

.. function:: proc chpl_string_comm_get( dest: bufferType,  src_loc_id: int(64),  src_addr: bufferType,  len: integral) 

.. function:: proc bufferAlloc( requestedSize) : (bufferType, int)

.. function:: proc bufferRealloc( buf: bufferType,  requestedSize: int) 

.. function:: proc bufferEnsureSize( buf: bufferType,  currentSize: int,  requestedSize: int) 

.. function:: proc bufferCopyRemote( src_loc_id: int(64),  src_addr: bufferType,  len: int) : bufferType

.. function:: proc bufferCopyLocal( src_addr: bufferType,  len: int) 

.. function:: proc bufferFree( buf: bufferType) 

.. function:: proc bufferCopy( buf: bufferType,  off: int,  len: int,  loc: locIdType) 

.. function:: proc bufferMemcpy( dst: bufferType,  src_loc: int(64),  src: bufferType,  len: int,  dst_off: int = 0,  src_off: int = 0) 

.. function:: proc bufferMemcpyLocal( dst: bufferType,  src: bufferType,  len: int,  dst_off: int = 0,  src_off: int = 0) 

.. function:: proc bufferMemmoveLocal( dst: bufferType,  src,  len: int,  dst_off: int = 0,  src_off: int = 0) 

.. function:: proc bufferGetByte( buf: bufferType,  off: int,  loc: locIdType) 

.. function:: proc bufferEquals( buf1: bufferType,  off1: int,  loc1: locIdType,  buf2: bufferType,  off2: int,  loc2: locIdType,  len: int) 

.. function:: proc bufferEqualsLocal( buf1: bufferType,  off1: int,  buf2: bufferType,  off2: int,  len: int) 

.. function:: proc _strcmp( buf1: bufferType,  len1: int,  loc1: locIdType,  buf2: bufferType,  len2: int,  loc2: locIdType) 

