.. default-domain:: chpl

.. module:: ChapelStaticVars
   :noindex:

ChapelStaticVars
================
**Usage**

.. code-block:: chapel

   use ChapelStaticVars;


or

.. code-block:: chapel

   import ChapelStaticVars;


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


.. enum:: enum sharingKind { computeOrRetrieve, computePerLocale }

   .. enumconstant:: enum constant computeOrRetrieve

      *
      Default distribution mode. The value is computed on whichever
      locale first calls the function; other locales remotely access
      the value once it's computed.
      

   .. enumconstant:: enum constant computePerLocale

      *
      The variable is computed per-locale; the first call to the function
      on each locale causes it to compute the static variable.
      

.. class:: _staticWrapperContainer

   .. attribute:: var value

.. record:: _staticWrapper

   .. attribute:: type valueType

   .. attribute:: var container: owned(_staticWrapperContainer(valueType)?)

   .. attribute:: var inited: atomic(int)

   .. method:: proc  init(type valueType) 

   .. method:: proc ref setValue(in v: valueType) 

   .. method:: proc ref getValue() ref: valueType

   .. method:: proc ref callerShouldComputeValue() 

   .. method:: proc ref reset() 

.. function:: proc chpl__functionStaticVariableWrapperType(type valueType) type

.. function:: proc chpl__executeStaticWrapperCleanupEverywhere( fn: proc (): void ) 

