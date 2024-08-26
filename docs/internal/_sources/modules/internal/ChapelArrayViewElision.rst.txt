.. default-domain:: chpl

.. module:: ChapelArrayViewElision
   :noindex:

ChapelArrayViewElision
======================
**Usage**

.. code-block:: chapel

   use ChapelArrayViewElision;


or

.. code-block:: chapel

   import ChapelArrayViewElision;


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


.. function:: proc chpl__createProtoSlice(ref Arr, slicingExprs ...)  where chpl__createProtoSliceArgCheck(Arr, slicingExprs)

.. function:: proc chpl__createConstProtoSlice(const ref Arr, slicingExprs ...)  where chpl__createProtoSliceArgCheck(Arr, slicingExprs)

.. function:: proc chpl__createProtoSlice( x, slicingExprs ...) 

.. function:: proc chpl__createConstProtoSlice( x, slicingExprs ...) 

.. function:: proc chpl__ave_exprCanBeProtoSlice( base, idxExprs ...) param: bool

.. function:: proc chpl__ave_protoSlicesSupportAssignment( a: chpl__protoSlice,  b: chpl__protoSlice) param: bool

.. record:: chpl__protoSlice

   .. attribute:: param rank

   .. attribute:: param isConst

   .. attribute:: var ptrToArr

   .. attribute:: type slicingExprType

   .. attribute:: var ranges

   .. attribute:: param isRankChange = false

   .. method:: proc  init() 

   .. method:: proc  init(param isConst,  ptrToArr,  slicingExprs) 

   .. method:: proc  init=( other: chpl__protoSlice) 

   .. method:: proc  domOrRange  where rank == 1

   .. method:: proc  domOrRange  where rank > 1

   .. method:: proc  dims() 

   .. method:: proc  rank param

   .. method:: proc  eltType type

   .. method:: proc  _value 

   .. method:: proc  sizeAs(type t)  where rank == 1

   .. method:: proc  sizeAs(type t) 

   .. method:: proc  isRectangular() param

   .. itermethod:: iter  these() ref where !isConst

   .. itermethod:: iter  these() const ref where isConst

   .. itermethod:: iter  these(param tag: iterKind)  where tag == iterKind.leader

   .. itermethod:: iter  these(param tag: iterKind,  followThis) ref where tag == iterKind.follower && !isConst

   .. itermethod:: iter  these(param tag: iterKind,  followThis) const ref where tag == iterKind.follower && isConst

.. function:: operator ==(const ref lhs: chpl__protoSlice(?), const ref rhs: chpl__protoSlice(?)) 

.. function:: operator :(ref a: chpl__protoSlice, type b: chpl__protoSlice) 

.. function:: proc isProtoSlice( a) param

