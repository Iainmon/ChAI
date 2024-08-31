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

.. method:: proc _tuple.imageType(f) type

.. method:: proc _tuple.eltType type where isHomogeneousTuple(this)

.. method:: proc _tuple.map(f): this.size*this.imageType(f) where isHomogeneousTuple(this)

.. method:: proc _tuple.slice(param low: int, param high: int): (high-low)*this.eltType where isHomogeneousTuple(this) && low < high && 0 <= low && high <= this.size

.. method:: proc _tuple.removeIdx(param idx: int): (this.size-1)*this.eltType

.. method:: proc _tuple.untuplify()

.. method:: proc _tuple.slice(param start: int, param stop: int, param idx: int = start) param

.. method:: proc _tuple.insertIdx(param idx: int, x: this.eltType): (this.size+1)*this.eltType

.. method:: proc _tuple.indexAt(n: int): this.size*int where isHomogeneousTuple(this) && this(0).type == int

.. itermethod:: iter _tuple.each(n: int): this.size*int where isHomogeneousTuple(this) && this(0).type == int

.. itermethod:: iter _domain.each

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

.. itermethod:: iter _domain.every() where rank == 1

.. itermethod:: iter _domain.every(param tag: iterKind) where tag == iterKind.standalone && rank == 1

.. itermethod:: iter _domain.every() where rank > 1

.. itermethod:: iter _domain.every(param tag: iterKind) where tag == iterKind.standalone && rank > 1

.. itermethod:: iter _domain.everyZip()

.. itermethod:: iter _domain.everyZip(param tag: iterKind) where tag == iterKind.standalone

.. method:: proc _domain.indexAt(n: int) where rank == 1

   
   inline iter _domain.everyZip(param tag: iterKind) where tag == iterKind.leader {
       const shape = this.fastShape;
       if CHPL_LOCALE_MODEL != "gpu" {
           if rank == 1 {
               forall i in 0..<shape do yield (i,i);
           } else {
               var blks: rank * int;
               for param j in 0..<rank {
                   param i = rank - j - 1;
                   if i == rank - 1 then
                       blks(i) = 1;
                   else
                       blks(i) = shape(i) * blks(i + 1);
               }
               // forall idx in this {
               //     var i: int;
               //     for param k in 0..<rank do
               //         i += idx(k) * blks(k);
               //     yield (i,idx);
               // }
               forall followThis in _value.these(tag) do yield followThis;
           }
       } else {
           if rank == 1 {
               if loopGpuSupport {
                   @assertOnGpu
                   forall i in 0..<shape do 
                       yield (i,i);
               } else {
                   forall i in 0..<shape do
                       yield (i,i);
               }
           } else {
               var prod = 1;
               var divs: rank * int;
               for param j in 0..<rank {
                   param i = rank - j - 1;
                   divs(i) = prod;
                   prod *= shape(i);
               }
               if loopGpuSupport {
                   @assertOnGpu
                   forall i in 0..<prod {
                       yield (i,indexAtHelperMultiples(i,(...divs))); // orderToIndex(i); // indexAtHelperMultiples(i,(...divs));
                   }
               } else {
                   forall i in 0..<prod {
                       yield (i,indexAtHelperMultiples(i,(...divs))); // orderToIndex(i); // indexAtHelperMultiples(i,(...divs));
                   }
               }
           }
       }
   }
   inline iter _domain.everyZip(param tag: iterKind,followThis) where tag == iterKind.follower {
       const shape = this.fastShape;
       if CHPL_LOCALE_MODEL != "gpu" {
           if rank == 1 {
               forall i in 0..<shape do yield (i,i);
           } else {
               var strides: rank * int;
               var prod = 1;
               for param j in 0..<rank {
                   param i = rank - j - 1;
                   strides(i) = prod;
                   prod *= shape(i);
               }
               forall idx in this {
                   var i: int;
                   for param k in 0..<rank do
                       i += idx(k) * strides(k);
                   yield (i,idx);
               }
           }
       } else {
           if rank == 1 {
               if loopGpuSupport {
                   @assertOnGpu
                   forall i in 0..<shape do 
                       yield (i,i);
               } else {
                   forall i in 0..<shape do
                       yield (i,i);
               }
           } else {
               var prod = 1;
               var divs: rank * int;
               for param j in 0..<rank {
                   param i = rank - j - 1;
                   divs(i) = prod;
                   prod *= shape(i);
               }
               if loopGpuSupport {
                   @assertOnGpu
                   forall i in 0..<prod {
                       yield (i,indexAtHelperMultiples(i,(...divs))); // orderToIndex(i); // indexAtHelperMultiples(i,(...divs));
                   }
               } else {
                   forall i in 0..<prod {
                       yield (i,indexAtHelperMultiples(i,(...divs))); // orderToIndex(i); // indexAtHelperMultiples(i,(...divs));
                   }
               }
           }
       }
   }

.. method:: proc _domain.indexAt(n: int) where rank > 1

.. method:: proc _domain.fastShape

.. method:: proc _domain.fastNormalDims

.. method:: proc _domain.myShape

.. method:: proc _domain.normalize where this.isRectangular()

.. method:: proc _domain.isNormal: bool where this.isRectangular()

.. method:: proc param string.this(param start: int, param stop: int) param

.. method:: proc param string.slice(param start: int, param stop: int, param idx: int = start) param

.. method:: proc param string.take(param count: int) param

.. method:: proc param string.drop(param count: int) param

.. method:: proc param string.countOccurrences(param c: string, param idx: int = 0) param

.. method:: proc param string.takeUntil(param del: string, param idx: int = 0, param keepDel: bool = false) param

