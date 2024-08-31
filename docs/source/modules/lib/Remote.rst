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

   .. method:: proc ptr ref

   .. method:: proc device: locale

   .. method:: proc init(in value: owned(_RemoteVarContainer(?eltType)))

   .. method:: proc init(value: ?eltType, device: locale = Remote.defaultDevice) where !isSubtype(eltType, Remote(?))

   .. method:: proc init(type eltType, in tr: _thunkRecord, device: locale = Remote.defaultDevice)

   .. method:: proc init(type eltType, device: locale = Remote.defaultDevice)

   .. method:: proc copyContainer(dest: locale = device): owned(_RemoteVarContainer(eltType))

   .. method:: proc copyTo(dest: locale = device): owned(Remote(eltType))

   .. method:: proc copy(): owned(Remote(eltType))

   .. method:: proc to(dest: locale)

.. method:: proc ref (owned(Remote(?eltType))).get() ref: owned(Remote(eltType))

.. method:: proc ref (shared(Remote(?eltType))).get() ref: shared(Remote(eltType))

.. method:: proc ref (unmanaged(Remote(?eltType))).get() ref: unmanaged(Remote(eltType))

.. method:: proc type Remote.defaultDevice: locale

.. function:: proc chpl__buildRemoteWrapper(loc: locale, type inType: Remote(?eltType))

.. function:: proc chpl__buildRemoteWrapper(loc: locale, type inType: owned(Remote(?eltType)), in tr: _thunkRecord)

.. function:: proc chpl__buildRemoteWrapper(loc: locale, type inType: shared(Remote(?eltType)), in tr: _thunkRecord)

