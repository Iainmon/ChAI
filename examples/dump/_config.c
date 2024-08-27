#include "error.h"

const int mainHasArgs = 0;
const int mainPreserveDelimiter = 0;
const int warnUnstable = 0;
void CreateConfigVarTable(void) {
  initConfigVarTable();
  installConfigVar("defaultHashTableResizeThreshold", "real(64)", "Built-in", /* private = */ 0, /* deprecated = */ 0, "defaultHashTableResizeThreshold is deprecated"
                   , /* unstable = */ 0, "defaultHashTableResizeThreshold is unstable"
                   );
  installConfigVar("dataParTasksPerLocale", "int(64)", "Built-in", /* private = */ 0, /* deprecated = */ 0, "dataParTasksPerLocale is deprecated"
                   , /* unstable = */ 1, "The variable 'dataParTasksPerLocale' is unstable and its interface is subject to change in the future"
                   );
  installConfigVar("dataParIgnoreRunningTasks", "bool", "Built-in", /* private = */ 0, /* deprecated = */ 0, "dataParIgnoreRunningTasks is deprecated"
                   , /* unstable = */ 1, "The variable 'dataParIgnoreRunningTasks' is unstable and its interface is subject to change in the future"
                   );
  installConfigVar("dataParMinGranularity", "int(64)", "Built-in", /* private = */ 0, /* deprecated = */ 0, "dataParMinGranularity is deprecated"
                   , /* unstable = */ 1, "The variable 'dataParMinGranularity' is unstable and its interface is subject to change in the future"
                   );
  installConfigVar("numLocales", "int(64)", "Built-in", /* private = */ 0, /* deprecated = */ 0, "numLocales is deprecated"
                   , /* unstable = */ 0, "numLocales is unstable"
                   );
  installConfigVar("memTrack", "bool", "Built-in", /* private = */ 0, /* deprecated = */ 0, "memTrack is deprecated"
                   , /* unstable = */ 1, "The variable 'memTrack' is unstable and its interface is subject to change in the future"
                   );
  installConfigVar("memStats", "bool", "Built-in", /* private = */ 0, /* deprecated = */ 0, "memStats is deprecated"
                   , /* unstable = */ 1, "The variable 'memStats' is unstable and its interface is subject to change in the future"
                   );
  installConfigVar("memLeaksByType", "bool", "Built-in", /* private = */ 0, /* deprecated = */ 0, "memLeaksByType is deprecated"
                   , /* unstable = */ 1, "The variable 'memLeaksByType' is unstable and its interface is subject to change in the future"
                   );
  installConfigVar("memLeaks", "bool", "Built-in", /* private = */ 0, /* deprecated = */ 0, "memLeaks is deprecated"
                   , /* unstable = */ 1, "The variable 'memLeaks' is unstable and its interface is subject to change in the future"
                   );
  installConfigVar("memMax", "uint(64)", "Built-in", /* private = */ 0, /* deprecated = */ 0, "memMax is deprecated"
                   , /* unstable = */ 1, "The variable 'memMax' is unstable and its interface is subject to change in the future"
                   );
  installConfigVar("memThreshold", "uint(64)", "Built-in", /* private = */ 0, /* deprecated = */ 0, "memThreshold is deprecated"
                   , /* unstable = */ 1, "The variable 'memThreshold' is unstable and its interface is subject to change in the future"
                   );
  installConfigVar("memLog", "string", "Built-in", /* private = */ 0, /* deprecated = */ 0, "memLog is deprecated"
                   , /* unstable = */ 1, "The variable 'memLog' is unstable and its interface is subject to change in the future"
                   );
  installConfigVar("memLeaksLog", "string", "Built-in", /* private = */ 0, /* deprecated = */ 0, "memLeaksLog is deprecated"
                   , /* unstable = */ 1, "The variable 'memLeaksLog' is unstable and its interface is subject to change in the future"
                   );
  installConfigVar("memLeaksByDesc", "string", "Built-in", /* private = */ 0, /* deprecated = */ 0, "memLeaksByDesc is deprecated"
                   , /* unstable = */ 1, "The variable 'memLeaksByDesc' is unstable and its interface is subject to change in the future"
                   );
  installConfigVar("n", "int(64)", "StaticTensor", /* private = */ 0, /* deprecated = */ 0, "n is deprecated"
                   , /* unstable = */ 0, "n is unstable"
                   );
  installConfigVar("diag", "bool", "StaticTensor", /* private = */ 0, /* deprecated = */ 0, "diag is deprecated"
                   , /* unstable = */ 0, "diag is unstable"
                   );
  installConfigVar("size", "int(64)", "StaticTensor", /* private = */ 0, /* deprecated = */ 0, "size is deprecated"
                   , /* unstable = */ 0, "size is unstable"
                   );
  installConfigVar("debugTomlParser", "bool", "TomlParser", /* private = */ 0, /* deprecated = */ 0, "debugTomlParser is deprecated"
                   , /* unstable = */ 0, "debugTomlParser is unstable"
                   );
  installConfigVar("debugTomlReader", "bool", "TomlReader", /* private = */ 0, /* deprecated = */ 0, "debugTomlReader is deprecated"
                   , /* unstable = */ 0, "debugTomlReader is unstable"
                   );
  installConfigVar("diag", "bool", "MNISTNet", /* private = */ 0, /* deprecated = */ 0, "diag is deprecated"
                   , /* unstable = */ 0, "diag is unstable"
                   );
  installConfigVar("testImgSize", "int(64)", "MNISTNet", /* private = */ 0, /* deprecated = */ 0, "testImgSize is deprecated"
                   , /* unstable = */ 0, "testImgSize is unstable"
                   );
  installConfigVar("imageCount", "int(64)", "MNISTNet", /* private = */ 0, /* deprecated = */ 0, "imageCount is deprecated"
                   , /* unstable = */ 0, "imageCount is unstable"
                   );
  installConfigVar("numTimes", "int(64)", "MNISTNet", /* private = */ 0, /* deprecated = */ 0, "numTimes is deprecated"
                   , /* unstable = */ 0, "numTimes is unstable"
                   );
  installConfigVar("printResults", "bool", "MNISTNet", /* private = */ 0, /* deprecated = */ 0, "printResults is deprecated"
                   , /* unstable = */ 0, "printResults is unstable"
                   );
  installConfigVar("printModuleInitOrder", "bool", "Built-in", /* private = */ 0, /* deprecated = */ 0, "printModuleInitOrder is deprecated"
                   , /* unstable = */ 1, "The variable 'printModuleInitOrder' is unstable and its interface is subject to change in the future"
                   );
}


