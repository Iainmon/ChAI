.. default-domain:: chpl

.. module:: ChapelLocale
   :noindex:

ChapelLocale
============
**Usage**

.. code-block:: chapel

   use ChapelLocale;


or

.. code-block:: chapel

   import ChapelLocale;



 

.. type:: type chpl_nodeID_t = int(32)

.. type:: type chpl_sublocID_t = int(32)

.. data:: const c_sublocid_none: chpl_sublocID_t

.. data:: const c_sublocid_any: chpl_sublocID_t

.. data:: const c_sublocid_all: chpl_sublocID_t

.. function:: proc chpl_isActualSublocID( subloc: chpl_sublocID_t) 

.. enum:: enum localeKind { regular, any, nilLocale, dummy, default }

   
   regular: Has a concrete BaseLocale instance
   any: Placeholder to represent the notion of "anywhere"
   nilLocale: The _instance is set to nil. Used during setup. Also, as a
              sentinel value in locale tree operations
   dummy: Used during initialization for `here` before it is properly setup
   default: Used to store the default locale instance. Initially set to nil,
            then "fixed" by LocalesArray to Locales[0]
   

   .. enumconstant:: enum constant regular

   .. enumconstant:: enum constant any

   .. enumconstant:: enum constant nilLocale

   .. enumconstant:: enum constant dummy

   .. enumconstant:: enum constant default

.. data:: const nilLocale = new locale(localeKind.nilLocale)

.. data:: var defaultLocale = new locale(localeKind.default)

.. data:: var dummyLocale = new locale(localeKind.dummy)

.. record:: _locale

   .. attribute:: var _instance: unmanaged(BaseLocale?)

   .. method:: proc  _value 

   .. method:: proc  init() 

   .. method:: proc  init( _instance: BaseLocale) 

   .. method:: proc  init(param kind) 

   .. method:: proc  init=( other: locale) 

   .. method:: proc  deinit() 

   .. method:: proc  localeid 

   .. method:: proc  chpl_id() 

   .. method:: proc  chpl_localeid() 

   .. method:: proc  chpl_name() 

   .. method:: proc  _getChildCount() 

.. function:: proc here 

.. method:: proc  locale.hostname : string

   
   Get the hostname of this locale.
   
   :returns: the hostname of the compute node associated with the locale
   :rtype: string
   

.. method:: proc  locale.name : string

   
     Get the name of this locale.
   
     In general, this method returns the same string as :proc:`locale.hostname`;
     however, it can differ when the program is executed in an oversubscribed manner.
   
   .. note::
   
     The locale's `id` (from :proc:`locale.id`) will be appended to the `hostname`
     when launching in an oversubscribed manner with `CHPL_COMM=gasnet` and one of
     the following configurations:
   
     - `CHPL_COMM_SUBSTRATE=udp` & `GASNET_SPAWNFN=L`
     - `CHPL_COMM_SUBSTRATE=smp`
   
     More information about these environment variables can be found here: :ref:`readme-multilocale`
   
   :returns: the name of this locale
   :rtype: string
   

.. method:: proc  locale.id : int

   
   Get the unique integer identifier for this locale.
   
   :returns: index of this locale in the range ``0..numLocales-1``
   :rtype: int
   
   

.. method:: proc  locale.maxTaskPar : int

   
   Get the maximum task concurrency that one can expect to
   achieve on this locale.
   
   :returns: the maximum number of tasks that can run in parallel
     on this locale
   :rtype: int
   
   Note that the value is an estimate by the runtime tasking layer.
   Typically it is the number of physical processor cores available
   to the program.  Executing a data-parallel construct with more
   tasks this that is unlikely to improve performance.
   

.. method:: proc  locale.numPUs( logical: bool = false,  accessible: bool = true) : int

   .. warning::

      'locale.numPUs' is unstable

   
   Get the number of processing units available on this locale.
   
   A *processing unit* or *PU* is an instance of the processor
   architecture, basically the thing that executes instructions.
   :proc:`locale.numPUs` tells how many of these are present on this
   locale.  It can count either physical PUs (commonly known as
   *cores*) or hardware threads such as hyperthreads and the like.
   It can also either take into account any OS limits on which PUs
   the program has access to or do its best to ignore such limits.
   By default it returns the number of accessible physical cores.
   
   :arg logical: Count logical PUs (hyperthreads and the like),
                 or physical ones (cores)?  Defaults to `false`,
                 for cores.
   :type logical: `bool`
   :arg accessible: Count only PUs that can be reached, or all of
                    them?  Defaults to `true`, for accessible PUs.
   :type accessible: `bool`
   :returns: number of PUs
   :rtype: `int`
   
   Note that there are several things that can cause the OS to limit
   the processor resources available to a Chapel program.  On plain
   Linux systems using the ``taskset(1)`` command will do it.  On
   Cray systems the ``CHPL_LAUNCHER_CORES_PER_LOCALE`` environment
   variable may do it, indirectly via the system job launcher.
   Also on Cray systems, using a system job launcher (``aprun`` or
   ``slurm``) to run a Chapel program manually may do it, as can
   running programs within Cray batch jobs that have been set up
   with limited processor resources.
   

.. method:: proc  locale.runningTasks() : int

   
   Get the number of tasks running on this locale.
   
   This method is intended to guide task creation during a parallel
   section. If the number of running tasks is greater than or equal
   to the locale's maximum task parallelism (queried via :proc:`locale.maxTaskPar`),
   then creating more tasks is unlikely to decrease walltime.
   
   :returns: the number of tasks that have begun executing, but have not yet finished
   :rtype: `int`
   

.. method:: operator  locale. = (ref l1: locale, const ref l2: locale) 

.. class:: BaseLocale : writeSerializable

   
   ``locale`` is the abstract class from which the various
   implementations inherit.  It specifies the required interface
   and implements part of it, but requires the rest to be provided
   by the corresponding concrete classes.
   

   .. method:: proc  init() 

   .. method:: proc  init( parent: locale) 

   .. attribute:: const parent: locale = nilLocale

   .. attribute:: var nPUsLogAcc: int

   .. attribute:: var nPUsLogAll: int

   .. attribute:: var nPUsPhysAcc: int

   .. attribute:: var nPUsPhysAll: int

   .. method:: proc  numPUs( logical: bool = false,  accessible: bool = true) 

   .. attribute:: var maxTaskPar: int

   .. method:: proc  id : int

   .. method:: proc  localeid : chpl_localeID_t

   .. method:: proc  hostname : string

   .. method:: override proc  serialize( writer, ref serializer)  throws

   .. method:: proc  name 

   .. attribute:: var runningTaskCounter: chpl__processorAtomicType(int)

   .. method:: proc  runningTaskCntSet( val: int) 

   .. method:: proc  runningTaskCntAdd( val: int) 

   .. method:: proc  runningTaskCntSub( val: int) 

   .. method:: proc  runningTaskCnt() 

   .. method:: proc  chpl_id() : int

   .. method:: proc  chpl_localeid() : chpl_localeID_t

   .. method:: proc  chpl_name() : string

   .. method:: proc  _getChildCount() : int

   .. method:: proc  addChild( loc: locale) 

   .. method:: proc  _getChild( idx: int) : locale

   .. method:: proc  gpus const ref

   .. method:: proc  gpusImpl() const ref

   .. method:: proc  isGpu() : bool

.. class:: DummyLocale : BaseLocale

   This class is used during initialization and is returned when
   'here' is used before the locale hierarchy is initialized.  This is due to
   the fact that "here" is used for memory and task control in setting up the
   architecture itself.  DummyLocale provides system-default tasking and
   memory management.
   

   .. method:: proc  init() 

   .. method:: override proc  chpl_id() : int

   .. method:: override proc  chpl_localeid() : chpl_localeID_t

   .. method:: override proc  chpl_name() : string

   .. method:: override proc  _getChildCount() : int

   .. method:: override proc  _getChild( idx: int) : locale

   .. method:: override proc  addChild( loc: locale) 

.. function:: proc chpl_getSingletonLocaleArray( arg: locale) const ref

.. class:: AbstractLocaleModel : BaseLocale

   .. attribute:: var chpl_singletonThisLocaleArray: [0..0] locale

   .. method:: proc  init( parent_loc: locale) 

   .. method:: proc  init() 

.. data:: var rootLocale = nilLocale

.. data:: config param replicateRootLocale = true

.. data:: var origRootLocale = nilLocale

.. class:: AbstractRootLocale : BaseLocale

   .. method:: proc  init() 

   .. method:: proc  init( parent_loc: locale) 

   .. method:: proc  getDefaultLocaleSpace() const ref: chpl_emptyLocaleSpace.type

   .. method:: proc  getDefaultLocaleArray() const ref: chpl_emptyLocales.type

   .. method:: proc  localeIDtoLocale( id: chpl_localeID_t) : locale

   .. itermethod:: iter  chpl_initOnLocales() 

   .. itermethod:: iter  chpl_initOnLocales(param tag: iterKind)  where tag == iterKind.standalone

.. function:: proc chpl_init_rootLocale() 

.. function:: proc chpl_rootLocaleInitPrivate( locIdx) 

.. function:: proc chpl_defaultLocaleInitPrivate() 

.. function:: proc chpl_singletonCurrentLocaleInitPrivateSublocs( arg: locale) 

.. function:: proc chpl_singletonCurrentLocaleInitPrivate( locIdx) 

.. function:: proc chpl_task_getRequestedSubloc() : chpl_sublocID_t

.. function:: export proc chpl_getLocaleID(ref localeID: chpl_localeID_t) 

.. function:: proc here_id 

.. function:: proc chpl_localeID_to_locale( id: chpl_localeID_t) : locale

.. function:: export proc chpl_taskRunningCntInc() 

.. function:: export proc chpl_taskRunningCntDec() 

.. function:: export proc chpl_taskRunningCntReset() 

.. function:: proc deinit() 

