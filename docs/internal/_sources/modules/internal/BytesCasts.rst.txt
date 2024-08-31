.. default-domain:: chpl

.. module:: BytesCasts
   :noindex:

BytesCasts
==========
**Usage**

.. code-block:: chapel

   use BytesCasts;


or

.. code-block:: chapel

   import BytesCasts;


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


.. function:: operator :( x: bool, type t: bytes) 

.. function:: operator :( x: bytes, type t: bool)  throws

.. function:: operator :( x: integral, type t: bytes) 

.. function:: operator :( x: bytes, type t: integral)  throws

.. function:: proc _real_cast_helper( x: real(64), param isImag: bool) : bytes

.. function:: operator :( x: chpl_anyreal, type t: bytes) 

.. function:: operator :( x: chpl_anyimag, type t: bytes) 

.. function:: operator :( x: bytes, type t: chpl_anyreal)  throws

.. function:: operator :( x: bytes, type t: chpl_anyimag)  throws

.. function:: operator :( x: chpl_anycomplex, type t: bytes) 

.. function:: operator :( x: bytes, type t: chpl_anycomplex)  throws

