.. default-domain:: chpl

.. module:: ChapelRemoteVars
   :noindex:

ChapelRemoteVars
================
**Usage**

.. code-block:: chapel

   use ChapelRemoteVars;


or

.. code-block:: chapel

   import ChapelRemoteVars;


* Copyright 2024 Hewlett Packard Enterprise Development LP
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


.. class:: _remoteVarContainer

   .. attribute:: var containedValue

.. record:: _remoteVarWrapper

   .. attribute:: type eltType

   .. attribute:: var tmp: owned(_remoteVarContainer(eltType))

   .. method:: proc  init(in tmp: owned(_remoteVarContainer(?eltType))) 

   .. method:: proc ref get() ref

.. function:: proc __defaultValueForType(type inType) 

.. function:: proc chpl__buildRemoteWrapper(const ref loc) 

   .. warning::

      remote variables are unstable

.. function:: proc chpl__buildRemoteWrapper(const ref loc, type inType) 

   .. warning::

      remote variables are unstable

.. function:: proc chpl__buildRemoteWrapper(const ref loc, in tr: _thunkRecord) 

   .. warning::

      remote variables are unstable

.. function:: proc chpl__buildRemoteWrapper(const ref loc, type inType, in tr: _thunkRecord) 

   .. warning::

      remote variables are unstable

