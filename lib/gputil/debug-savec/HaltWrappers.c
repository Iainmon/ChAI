#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
/* HaltWrappers.chpl:25 */
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
static void chpl__init_HaltWrappers(int64_t _ln,
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
                                    int32_t _fn) {
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  if (chpl__init_HaltWrappers_p) /* ZLINE: 25 /Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl */
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  {
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
    goto _exit_chpl__init_HaltWrappers;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  }
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  printModuleInit("%*s\n", "HaltWrappers", INT64(12), _ln, _fn);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  refIndentLevel = &moduleInitLevel;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  *(refIndentLevel) += INT64(1);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  chpl__init_HaltWrappers_p = UINT8(true);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  {
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  }
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  *(refIndentLevel) -= INT64(1);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  _exit_chpl__init_HaltWrappers:;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  return;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
}

#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
/* HaltWrappers.chpl:66 */
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
static void pureVirtualMethodHalt(int64_t _ln,
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
                                  int32_t _fn) {
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  halt(&_str_literal_15, _ln, _fn);
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  return;
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
}

#line 111 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
/* HaltWrappers.chpl:111 */
#line 111 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
static void nilCheckHalt(string * s,
#line 111 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
                         int64_t _ln,
#line 111 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
                         int32_t _fn) {
#line 112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  halt(s, _ln, _fn);
#line 111 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  return;
#line 111 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
}

#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
/* HaltWrappers.chpl:118 */
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
static void boundsCheckHalt(string * s,
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
                            int64_t _ln,
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
                            int32_t _fn) {
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  halt(s, _ln, _fn);
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  return;
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
}

#line 139 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
/* HaltWrappers.chpl:139 */
#line 139 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
static void safeCastCheckHalt(string * s,
#line 139 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
                              int64_t _ln,
#line 139 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
                              int32_t _fn) {
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  halt(s, _ln, _fn);
#line 139 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
  return;
#line 139 "/Users/iainmoncrief/Desktop/chapel/modules/standard/HaltWrappers.chpl"
}

