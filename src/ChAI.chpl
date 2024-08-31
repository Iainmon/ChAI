/* Documentation for gputil */
module ChAI {
  public import NDArray;
  public import Network;
  public import Tensor;

  public import NDArray;
  public import StaticTensor;
  public import DynamicTensor;
  public import Utilities.Types;
  public import Utilities as util;
  public import Utilities.Standard;

  public import Remote;

  // Expose common types:
  public use NDArray;

  proc main() {
    writeln(Tensor.Tensor.arange(3,5));


    writeln("New mason package: ChAI");
  }
}
