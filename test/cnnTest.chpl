use UnitTest;

config const testParam: bool = true;

proc myTest(test: borrowed Test) throws {
  test.assertTrue(false);
}

UnitTest.main();