#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
/* Math.chpl:183 */
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
static void chpl__init_Math(int64_t _ln,
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
                            int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  if (chpl__init_Math_p) /* ZLINE: 183 /Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl */
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
    goto _exit_chpl__init_Math;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  }
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  printModuleInit("%*s\n", "Math", INT64(4), _ln, _fn);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  refIndentLevel = &moduleInitLevel;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  *(refIndentLevel) += INT64(1);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  chpl__init_Math_p = UINT8(true);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
    chpl__init_HaltWrappers(_ln, _fn);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
    chpl__init_AutoMath(_ln, _fn);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  }
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  *(refIndentLevel) -= INT64(1);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  _exit_chpl__init_Math:;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  return;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
}

#line 1043 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
/* Math.chpl:1043 */
#line 1043 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
static int64_t _logBasePow2Help(uint64_t val,
#line 1043 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
                                int64_t baseLog2,
#line 1043 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
                                int64_t _ln,
#line 1043 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
                                int32_t _fn) {
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  int64_t lg2;
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  uint64_t call_tmp8;
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  int64_t call_tmp9;
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  int64_t call_tmp10;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  int64_t call_tmp11;
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  lg2 = INT64(0);
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  call_tmp8 = chpl_bitops_clz_64(val);
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  call_tmp9 = chpl___COLON_6(call_tmp8, _ln, _fn);
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  call_tmp10 = chpl___HYPHEN_8(call_tmp9);
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  chpl___ASSIGN_3(&lg2, call_tmp10);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  call_tmp11 = chpl___SLASH_(lg2, baseLog2, _ln, _fn);
#line 1043 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  return call_tmp11;
#line 1043 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
}

#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
/* Math.chpl:1074 */
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
static int64_t chpl_logBasePow2(uint64_t val,
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
                                int64_t baseLog2,
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
                                int64_t _ln,
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
                                int32_t _fn) {
#line 1075 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  int64_t call_tmp8;
#line 1075 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  call_tmp8 = _logBasePow2Help(val, baseLog2, _ln, _fn);
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  return call_tmp8;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
}

#line 1141 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
/* Math.chpl:1141 */
#line 1141 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
static int64_t log22(uint64_t x2,
#line 1141 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
                     int64_t _ln,
#line 1141 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
                     int32_t _fn) {
#line 1142 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  int64_t call_tmp8;
#line 1142 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  call_tmp8 = chpl_logBasePow2(x2, INT64(1), _ln, _fn);
#line 1141 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
  return call_tmp8;
#line 1141 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Math.chpl"
}

