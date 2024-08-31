.. default-domain:: chpl

.. module:: Network

Network
=======
**Usage**

.. code-block:: chapel

   use Network;


or

.. code-block:: chapel

   import Network;

.. function:: proc helpFindModuleByName(deflt arg, deflt x: string) deflt: borrowed(Module(?))

.. function:: proc helpFindParamDataByName(deflt arg, deflt x: string) ref: Tensor(?)

.. record:: moduleChildren

   .. attribute:: type eltType = real

   .. attribute:: var childDict: map(string, borrowed(Module(eltType)))

   .. attribute:: var order: list(string)

   .. method:: proc deflt init(type eltType = real) deflt

   .. itermethod:: iter ref these() deflt: borrowed(Module(eltType))

   .. itermethod:: iter ref items() deflt: (string, borrowed(Module(eltType)))

   .. method:: proc ref add(deflt name: string, deflt m: borrowed(Module(eltType))) deflt

   .. method:: proc ref ith(deflt i: int) deflt: borrowed(Module(eltType))

.. method:: proc deflt class.this(deflt fieldName: string) deflt: borrowed(Module(?)) where isSubtype(this.type, Module(?))

.. method:: proc deflt class.this(deflt fieldName: string) ref: Tensor(?) where isSubtype(this.type, Parameter(?))

.. itermethod:: iter deflt class.moduleFieldNames() deflt: string where isSubtype(this.type, Module(?))

.. itermethod:: iter deflt class.moduleFields() deflt: (string, borrowed(Module(?))) where isSubtype(this.type, Module(?))

.. method:: proc deflt class.registerModules() deflt where isSubtype(this.type, Module(?))

.. method:: proc deflt class.postinit() deflt where isSubtype(this.type, Module(?))

.. record:: moduleAttributes : serializable

   .. attribute:: var layerType: string

   .. attribute:: var moduleName: string

   .. attribute:: var attributes: dict(string, string)

   .. method:: proc deflt init(deflt layerType: string, deflt moduleName: string, in attrs: map(string, string, ?)) deflt

   .. method:: proc deflt init(deflt layerType: string, deflt moduleName: string, in attrs: dict(string, ?)) deflt

   .. method:: proc deflt init(deflt layerType: string, deflt moduleName: string, in attrs: map(string, ?valType, ?)) deflt where valType != string

   .. method:: proc deflt init(deflt layerType: string, deflt moduleName: string, in attrs: map(string, ?valType, ?), deflt order: list(string)) deflt

   .. method:: proc deflt init(deflt layerType: string, deflt moduleName: string, attrs ...?n) deflt where attrs(0)(0).type == string

   .. method:: proc deflt init(deflt layerType: string, deflt moduleName: string) deflt

   .. method:: proc deflt getInt(deflt name: string) deflt: int

   .. method:: proc deflt prettyPrint() deflt: string

   .. method:: proc deflt prettyPrintSpec() deflt: string

   .. method:: operator deflt :(deflt ma: moduleAttributes, type T: string) deflt

.. class:: ModuleSpecification : serializable

   .. attribute:: var layerType: string

   .. attribute:: var attributes: map(string, string)

   .. attribute:: var subModules: map(string, owned(ModuleSpecification?))

   .. attribute:: var subModuleOrder: list(string)

.. function:: proc moduleFromSpec(deflt ms_: borrowed(ModuleSpecification?), type dtype = real(32)) deflt: owned(Module(dtype))

.. function:: proc modelFromSpecFile(deflt path: string, type dtype = real(32)) deflt: owned(Module(dtype))

.. function:: proc loadModel(deflt specFile: string, deflt weightsFolder: string, type dtype = real(32)) deflt: owned(Module(dtype))

.. data:: var moduleInstances = 0

.. class:: Module

   .. attribute:: type eltType

   .. attribute:: var subModules: moduleChildren(eltType)

   .. attribute:: var moduleId: int

   .. attribute:: var moduleName: string

   .. attribute:: var ownedModules: list(shared(Module(eltType)))

   .. method:: proc deflt init(type eltType = real) deflt

   .. method:: proc deflt init(type eltType = real, deflt ma: moduleAttributes) deflt

   .. method:: proc deflt setup() deflt

   .. method:: proc deflt this(deflt input: Tensor(eltType)) deflt: Tensor(eltType)

   .. method:: proc deflt getSubModuleName(deflt name: string) deflt: string

   .. method:: proc deflt addModule(deflt name: string, deflt m: borrowed(Module(eltType))) deflt

   .. method:: proc deflt addModule(deflt name: string, deflt m: shared(Module(eltType))) deflt

   .. method:: proc deflt addModule(deflt name: string, in m: owned(Module(eltType))) deflt

   .. method:: proc deflt addParameter(deflt name: string, deflt data: Tensor(eltType)) deflt

   .. method:: proc deflt forward(deflt input: Tensor(eltType)) deflt: Tensor(eltType)

   .. method:: proc deflt par(deflt paramName: string) ref: Tensor(eltType)

   .. method:: proc deflt mod(deflt modName: string) deflt: borrowed(Module(eltType))

   .. itermethod:: iter deflt parameters() deflt: borrowed(Parameter(eltType))

   .. itermethod:: iter deflt moduleNames() deflt: string

   .. itermethod:: iter deflt parameterNames() deflt: string

   .. itermethod:: iter deflt modules() deflt: borrowed(Module(eltType))

   .. itermethod:: iter deflt namedModules() deflt: (string, borrowed(Module(eltType)))

   .. method:: proc deflt loadPyTorchDump(deflt modelPath: string, param debug = false) deflt

   .. method:: proc deflt attributes() deflt: moduleAttributes

   .. method:: proc deflt signature deflt: string

.. class:: Parameter : Module(?)

   .. attribute:: var data: Tensor(eltType)

   .. method:: proc deflt init(deflt data: Tensor(?eltType)) deflt

   .. method:: override proc deflt attributes() deflt: moduleAttributes

.. class:: Sequential : Module(?)

   .. attribute:: var mds: list(shared(Module(eltType)))

   .. method:: proc deflt init(type eltType = real, deflt ms: dict(string, shared(Module(eltType))), param overrideName = false, deflt moduleName: string = "") deflt

   .. method:: proc deflt init(type eltType = real, in ms) deflt

   .. method:: proc deflt init(type eltType = real, deflt order: list(string), in ms: map(string, owned(Module(eltType)?))) deflt

   .. method:: proc deflt init(in ms: owned Module(real)? ...?rank) deflt

   .. method:: override proc deflt forward(deflt input: Tensor(eltType)) deflt: Tensor(eltType)

   .. method:: override proc deflt attributes() deflt: moduleAttributes

.. class:: Linear : Module(?)

   .. attribute:: var m: int

   .. attribute:: var n: m.type

   .. attribute:: var weight: owned(Parameter(eltType))

   .. attribute:: var bias: owned(Parameter(eltType))

   .. method:: proc deflt init(type eltType, deflt m: int, deflt n: int) deflt

   .. method:: override proc deflt setup() deflt

   .. method:: proc deflt init(deflt m: int, deflt n: int) deflt

   .. method:: override proc deflt forward(deflt input: Tensor(eltType)) deflt: Tensor(eltType)

   .. method:: override proc deflt attributes() deflt: moduleAttributes

.. class:: Conv2D : Module(?)

   .. attribute:: var kernelShape: 4*(int)

   .. attribute:: var stride: int

   .. attribute:: var kernel: owned(Parameter(eltType))

   .. attribute:: var bias: owned(Parameter(eltType))

   .. method:: proc deflt init(type eltType = real, deflt channels: int, deflt features: int, deflt kernel: int, deflt stride: int = 1) deflt

   .. method:: proc deflt init(type eltType = real, deflt ma: moduleAttributes) deflt

   .. method:: override proc deflt setup() deflt

   .. method:: proc deflt init(deflt channels: int, deflt features: int, deflt kernel: int, deflt stride: int = 1) deflt

   .. method:: override proc deflt forward(deflt input: Tensor(eltType)) deflt: Tensor(eltType)

   .. method:: override proc deflt attributes() deflt: moduleAttributes

.. class:: MaxPool : Module(?)

   .. attribute:: var poolSize: int

   .. method:: proc deflt init(type eltType = real, deflt poolSize: int) deflt

   .. method:: proc deflt init(deflt poolSize: int) deflt

   .. method:: override proc deflt forward(deflt input: Tensor(eltType)) deflt: Tensor(eltType)

   .. method:: override proc deflt attributes() deflt: moduleAttributes

.. class:: Flatten : Module(?)

   .. method:: proc deflt init(type eltType = real) deflt

   .. method:: override proc deflt forward(deflt input: Tensor(eltType)) deflt: Tensor(eltType)

   .. method:: override proc deflt attributes() deflt: moduleAttributes

.. class:: ReLU : Module(?)

   .. method:: proc deflt init(type eltType = real) deflt

   .. method:: override proc deflt forward(deflt input: Tensor(eltType)) deflt: Tensor(eltType)

   .. method:: override proc deflt attributes() deflt: moduleAttributes

.. class:: Softmax : Module(?)

   .. method:: proc deflt init(type eltType = real) deflt

   .. method:: override proc deflt forward(deflt input: Tensor(eltType)) deflt: Tensor(eltType)

   .. method:: override proc deflt attributes() deflt: moduleAttributes

.. class:: Dropout : Module(?)

   .. method:: proc deflt init(type eltType = real, deflt freq: real = 0.5) deflt

   .. method:: override proc deflt forward(deflt input: Tensor(eltType)) deflt: Tensor(eltType)

   .. method:: override proc deflt attributes() deflt: moduleAttributes

.. function:: proc chain(deflt m: borrowed(Module(?)), modNames: string ...?n, deflt input: Tensor(?eltType)) deflt

.. class:: Net : Module(?)

   .. method:: proc deflt init(type eltType = real) deflt

   .. method:: override proc deflt forward(deflt input: Tensor(eltType)) deflt: Tensor(eltType)

.. function:: proc main() deflt

