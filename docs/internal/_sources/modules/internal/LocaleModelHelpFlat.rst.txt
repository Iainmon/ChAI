.. default-domain:: chpl

.. module:: LocaleModelHelpFlat
   :noindex:

LocaleModelHelpFlat
===================
**Usage**

.. code-block:: chapel

   use LocaleModelHelpFlat;


or

.. code-block:: chapel

   import LocaleModelHelpFlat;


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


.. data:: param localeModelHasSublocales = false

.. data:: param localeModelPartitionsIterationOnSublocales = false

.. function:: export proc chpl_doDirectExecuteOn(in loc: chpl_localeID_t) : bool

.. function:: export proc chpl_executeOn(in loc: chpl_localeID_t,  fn: int,  args: chpl_comm_on_bundle_p,  args_size: c_size_t) 

.. function:: export proc chpl_executeOnFast(in loc: chpl_localeID_t,  fn: int,  args: chpl_comm_on_bundle_p,  args_size: c_size_t) 

.. function:: export proc chpl_executeOnNB(in loc: chpl_localeID_t,  fn: int,  args: chpl_comm_on_bundle_p,  args_size: c_size_t) 

