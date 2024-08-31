.. default-domain:: chpl

.. module:: AtomicsCommon
   :noindex:

AtomicsCommon
=============
**Usage**

.. code-block:: chapel

   use AtomicsCommon;


or

.. code-block:: chapel

   import AtomicsCommon;


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


.. record:: atomic_refcnt

   .. attribute:: var _cnt: chpl__processorAtomicType(int)

   .. method:: proc  init() 

   .. method:: proc  init=( other: atomic_refcnt) 

   .. method:: proc  inc( cnt = 1) 

   .. method:: proc  dec() : int(64)

   .. method:: proc  read() : int(64)

