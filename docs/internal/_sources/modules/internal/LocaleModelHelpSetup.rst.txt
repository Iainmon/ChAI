.. default-domain:: chpl

.. module:: LocaleModelHelpSetup
   :noindex:

LocaleModelHelpSetup
====================
**Usage**

.. code-block:: chapel

   use LocaleModelHelpSetup;


or

.. code-block:: chapel

   import LocaleModelHelpSetup;

.. data:: config param debugLocaleModel = false

.. function:: proc chpl_nodeID : chpl_nodeID_t

.. record:: chpl_root_locale_accum

   .. attribute:: var nPUsPhysAcc: atomic(int)

   .. attribute:: var nPUsPhysAll: atomic(int)

   .. attribute:: var nPUsLogAcc: atomic(int)

   .. attribute:: var nPUsLogAll: atomic(int)

   .. attribute:: var maxTaskPar: atomic(int)

   .. method:: proc  init() 

   .. method:: proc  init=( other: chpl_root_locale_accum) 

   .. method:: proc ref accum( loc: locale) 

   .. method:: proc  setRootLocaleValues( dst: borrowed(RootLocale)) 

.. function:: proc helpSetupRootLocaleFlat( dst: borrowed(RootLocale)) 

.. function:: proc helpSetupRootLocaleNUMA( dst: borrowed(RootLocale)) 

.. function:: proc helpSetupRootLocaleAPU( dst: borrowed(RootLocale)) 

.. function:: proc helpSetupRootLocaleGPU( dst: borrowed(RootLocale)) 

.. function:: proc helpSetupLocaleFlat( dst: borrowed(LocaleModel), out local_name: string) 

.. function:: proc helpSetupLocaleNUMA( dst: borrowed(LocaleModel), out local_name: string,  numSublocales, type NumaDomain) 

.. function:: proc helpSetupLocaleAPU( dst: borrowed(LocaleModel), out local_name: string, out numSublocales, type CPULocale, type GPULocale) 

.. function:: proc helpSetupLocaleGPU( dst: borrowed(LocaleModel), out local_name: string,  numSublocales: int, type GPULocale) 

