.. default-domain:: chpl

.. module:: Utilities

Utilities
=========
**Usage**

.. code-block:: chapel

   use Utilities;


or

.. code-block:: chapel

   import Utilities;

**Submodules**

.. toctree::
   :maxdepth: 1
   :glob:

   Utilities/*

.. data:: config param loopGpuSupport = CHPL_LOCALE_MODEL == "gpu"

.. function:: proc targetGpu() param: bool

.. data:: param debugPrint = false

.. function:: proc err(args ...?n) deflt

.. function:: proc debugWrite(args ...?n) deflt

.. iterfunction:: iter cartesian(deflt X, deflt Y) deflt

.. iterfunction:: iter cartesian(param tag: iterKind, deflt X, deflt Y) deflt where tag == iterKind.standalone

.. iterfunction:: iter flatIter(deflt D: domain(?)) deflt

.. iterfunction:: iter flatIter(param tag: iterKind, deflt D: domain(?)) deflt where tag == iterKind.standalone

.. function:: proc normalizeArray(deflt arr: []) deflt

.. function:: proc normalizeArray(deflt unknown: ?t) deflt where !isArrayType(t)

.. function:: proc normalizeDomain(deflt dom: domain(?)) deflt: domain(dom.rank, int)

.. function:: proc emptyDomain(param rank: int) deflt: domain(rank, int)

.. function:: proc domainFromShape(shape: int ...?rank) deflt: domain(rank, int)

.. function:: proc rangeFromBound(deflt high: int) deflt: range

.. function:: proc rangeFromBound(deflt low: int, deflt high: int) deflt: range

.. function:: proc rangeFromStart(deflt start: int, deflt count: int) deflt

.. function:: proc rangesFromBounds(bounds: 2*int ...?rank) deflt: rank*range

.. function:: proc rangesFromShape(shape: int ...?rank) deflt: rank*range

.. function:: proc nbase(deflt bounds: ?rank*int, deflt n: int) deflt: rank*int

.. function:: proc nbase(deflt bounds: int, deflt n: int) deflt: 1*(int)

.. function:: proc indexInShape(deflt shape: ?rank*int, in n: int) deflt: rank*int

.. function:: proc indexAtHelperProd(deflt n: int, deflt prod: int, shape: int ...?rank) deflt: rank*int where rank > 1

.. function:: proc indexAtHelperMultiples(deflt n: int, divs: int ...?rank) deflt: rank*int

.. function:: proc indexAt(deflt n: int, deflt shape: int) deflt

.. function:: proc indexAt(deflt n: int, shape: int ...?rank) deflt: rank*int where rank > 1

.. iterfunction:: iter fastEach(shape: int ...?rank) deflt: rank*int

.. function:: proc argsort(tup: int ...?rank) deflt

