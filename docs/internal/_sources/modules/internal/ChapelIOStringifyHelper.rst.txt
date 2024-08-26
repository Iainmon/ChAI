.. default-domain:: chpl

.. module:: ChapelIOStringifyHelper
   :noindex:

ChapelIOStringifyHelper
=======================
**Usage**

.. code-block:: chapel

   use ChapelIOStringifyHelper;


or

.. code-block:: chapel

   import ChapelIOStringifyHelper;

Pull out the portions of stringify that don't rely on IO so that they can
be called without IO and not cause circular dependencies.

.. function:: proc _can_stringify_direct( t) param: bool

.. function:: proc stringify_simple(const args ...?k) : string

