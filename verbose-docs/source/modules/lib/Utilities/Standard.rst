.. default-domain:: chpl

.. module:: Standard

Standard
========
**Usage**

.. code-block:: chapel

   use Utilities.Standard;


or

.. code-block:: chapel

   import Utilities.Standard;

.. method:: proc deflt _tuple.imageType(deflt f) type

.. method:: proc deflt _tuple.eltType type where isHomogeneousTuple(this)

.. method:: proc deflt _tuple.map(deflt f) deflt: this.size*this.imageType(f) where isHomogeneousTuple(this)

.. method:: proc deflt _tuple.slice(param low: int, param high: int) deflt: (high-low)*this.eltType where isHomogeneousTuple(this) && low < high && 0 <= low && high <= this.size

.. method:: proc deflt _tuple.removeIdx(param idx: int) deflt: (this.size-1)*this.eltType

.. method:: proc deflt _tuple.untuplify() deflt

.. method:: proc deflt _tuple.slice(param start: int, param stop: int, param idx: int = start) param

.. method:: proc deflt _tuple.insertIdx(param idx: int, deflt x: this.eltType) deflt: (this.size+1)*this.eltType

.. method:: proc deflt _tuple.indexAt(deflt n: int) deflt: this.size*int where isHomogeneousTuple(this) && this(0).type == int

.. itermethod:: iter deflt _tuple.each(deflt n: int) deflt: this.size*int where isHomogeneousTuple(this) && this(0).type == int

.. itermethod:: iter deflt _domain.each deflt

   inline proc _domain.simple() const : rect(rank) do
       return new rect(this);
   
   inline iter _domain.every() {
       const simple = this.simple();
       foreach idx in simple do yield idx;
   }
   inline iter _domain.every(param tag: iterKind) 
           where tag == iterKind.standalone {
       const simple = this.simple();
       foreach idx in simple do yield idx;
   }
   
   inline iter _domain.everyZip() {
       const simple = this.simple();
       foreach idx in simple.eachOrder() do yield idx;
   }
   inline iter _domain.everyZip(param tag: iterKind) 
           where tag == iterKind.standalone {
       const simple = this.simple();
       foreach idx in simple.eachOrder() do yield idx;
   }

.. itermethod:: iter deflt _domain.every() deflt where rank == 1

.. itermethod:: iter deflt _domain.every(param tag: iterKind) deflt where tag == iterKind.standalone && rank == 1

.. itermethod:: iter deflt _domain.every() deflt where rank > 1

.. itermethod:: iter deflt _domain.every(param tag: iterKind) deflt where tag == iterKind.standalone && rank > 1

.. itermethod:: iter deflt _domain.everyZip() deflt

.. itermethod:: iter deflt _domain.everyZip(param tag: iterKind) deflt where tag == iterKind.standalone

.. itermethod:: iter deflt _domain.everyZip(param tag: iterKind) deflt where tag == iterKind.leader

.. itermethod:: iter deflt _domain.everyZip(param tag: iterKind, deflt followThis) deflt where tag == iterKind.follower

.. method:: proc deflt _domain.indexAt(deflt n: int) deflt where rank == 1

.. method:: proc deflt _domain.indexAt(deflt n: int) deflt where rank > 1

.. method:: proc deflt _domain.fastShape deflt

.. method:: proc deflt _domain.fastNormalDims deflt

.. method:: proc deflt _domain.myShape deflt

.. method:: proc deflt _domain.normalize deflt where this.isRectangular()

.. method:: proc deflt _domain.isNormal deflt: bool where this.isRectangular()

.. method:: proc param string.this(param start: int, param stop: int) param

.. method:: proc param string.slice(param start: int, param stop: int, param idx: int = start) param

.. method:: proc param string.take(param count: int) param

.. method:: proc param string.drop(param count: int) param

.. method:: proc param string.countOccurrences(param c: string, param idx: int = 0) param

.. method:: proc param string.takeUntil(param del: string, param idx: int = 0, param keepDel: bool = false) param

