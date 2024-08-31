use UnitTest;

use ChAI;

config const testParam: bool = true;

proc myTest(test: borrowed Test) throws {

    writeln(ndarray.arange(1,2,3));
  test.assertTrue(true);


}

UnitTest.main();