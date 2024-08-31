.. default-domain:: chpl

.. module:: Remote

Remote
======
**Usage**

.. code-block:: chapel

   use Remote;


or

.. code-block:: chapel

   import Remote;

.. class:: _RemoteVarContainer : serializable

   .. attribute:: var containedValue

.. class:: Remote : serializable

   .. attribute:: type eltType

   .. attribute:: var value: owned(_RemoteVarContainer(eltType))

   .. method:: proc ref get() ref

   .. method:: proc deflt ptr ref

   .. method:: proc deflt device deflt: locale

   .. method:: proc deflt init(in value: owned(_RemoteVarContainer(?eltType))) deflt

   .. method:: proc deflt init(deflt value: ?eltType, deflt device: locale = Remote.defaultDevice) deflt where !isSubtype(eltType, Remote(?))

   .. method:: proc deflt init(type eltType, in tr: _thunkRecord, deflt device: locale = Remote.defaultDevice) deflt

   .. method:: proc deflt init(type eltType, deflt device: locale = Remote.defaultDevice) deflt

   .. method:: proc deflt copyContainer(deflt dest: locale = device) deflt: owned(_RemoteVarContainer(eltType))

   .. method:: proc deflt copyTo(deflt dest: locale = device) deflt: owned(Remote(eltType))

   .. method:: proc deflt copy() deflt: owned(Remote(eltType))

   .. method:: proc deflt to(deflt dest: locale) deflt

.. method:: proc ref (owned(Remote(?eltType))).get() ref: owned(Remote(eltType))

.. method:: proc ref (shared(Remote(?eltType))).get() ref: shared(Remote(eltType))

.. method:: proc ref (unmanaged(Remote(?eltType))).get() ref: unmanaged(Remote(eltType))

.. method:: proc type Remote.defaultDevice deflt: locale

.. function:: proc chpl__buildRemoteWrapper(deflt loc: locale, type inType: Remote(?eltType)) deflt

.. function:: proc chpl__buildRemoteWrapper(deflt loc: locale, type inType: owned(Remote(?eltType)), in tr: _thunkRecord) deflt

.. function:: proc chpl__buildRemoteWrapper(deflt loc: locale, type inType: shared(Remote(?eltType)), in tr: _thunkRecord) deflt

