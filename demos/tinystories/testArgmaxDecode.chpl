use ChAI;
use NDArray;

proc main() {
  var chapArray: [0..2] real(32) = [1.0, 7.0, 3.0]; // Expected argmax index: 1

  var myNdArray = new ndarray(chapArray);

  var argmaxIndex = myNdArray.argmaxDecode();

  writeln("Chapel array: ", chapArray);
  writeln("Argmax index: ", argmaxIndex); // Should print 1 for the example above

  var chapArray2: [0..3] real(32) = [10.0, 5.0, 20.0, 15.0]; // Expected argmax index: 2
  var myNdArray2 = new ndarray(chapArray2);
  var argmaxIndex2 = myNdArray2.argmaxDecode();
  writeln("Chapel array 2: ", chapArray2);
  writeln("Argmax index 2: ", argmaxIndex2); // Should print 2

  if Bridge.acceleratorAvailable() then
    writeln("Accelerator (CUDA/MPS) is available!");
  else
    writeln("Accelerator not available, running on CPU.");

  Bridge.debugCpuOnlyMode(true);
  writeln("Debug CPU only mode is ON. Accelerator available: ", Bridge.acceleratorAvailable());
  Bridge.debugCpuOnlyMode(false);
  writeln("Debug CPU only mode is OFF. Accelerator available: ", Bridge.acceleratorAvailable());

}