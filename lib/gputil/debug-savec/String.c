#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:43 */
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void chpl__init_String(int64_t _ln,
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                              int32_t _fn) {
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (chpl__init_String_p) /* ZLINE: 43 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _exit_chpl__init_String;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  printModuleInit("%*s\n", "String", INT64(6), _ln, _fn);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  refIndentLevel = &moduleInitLevel;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  *(refIndentLevel) += INT64(1);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl__init_String_p = UINT8(true);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__init_ByteBufferHelpers(_ln, _fn);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__init_BytesStringCommon(_ln, _fn);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__init_OS(_ln, _fn);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__init_CString(_ln, _fn);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__init_StringCasts(_ln, _fn);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__init_NVStringFactory(_ln, _fn);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__init_POSIX(_ln, _fn);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  *(refIndentLevel) -= INT64(1);
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _exit_chpl__init_String:;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:79 */
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void chpl__auto_destroy_byteIndex(byteIndex * this24) {
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:81 */
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int64_t * chpl_get_byteIndex__bindex(byteIndex * this24) {
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = &((this24)->_bindex);
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:83 */
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void init94(byteIndex * this24) {
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->_bindex = INT64(0);
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:88 */
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void init_ASSIGN_24(byteIndex * this24,
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                           int64_t i) {
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->_bindex = i;
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string chpl___COLON_41(byteIndex * val,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                              int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                              int32_t _fn) {
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp9;
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl_get_byteIndex__bindex(val);
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl___COLON_48(*(call_tmp8), _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp9;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:101 */
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void chpl__auto_destroy_codepointIndex(codepointIndex * this24) {
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:103 */
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int64_t * chpl_get_codepointIndex__cpindex(codepointIndex * this24) {
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = &((this24)->_cpindex);
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:106 */
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void init95(codepointIndex * this24) {
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->_cpindex = INT64(0);
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:123 */
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static range_byteIndex_both_one chpl_build_bounded_range4(byteIndex * low3,
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                          byteIndex * high2) {
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  range_byteIndex_both_one call_tmp8;
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  range_byteIndex_both_one initTemp;
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  init36(&initTemp, low3, high2);
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = initTemp;
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:128 */
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static range_byteIndex_low_one chpl_build_low_bounded_range2(byteIndex * low3) {
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  range_byteIndex_low_one call_tmp8;
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  range_byteIndex_low_one initTemp;
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  init38(&initTemp, low3);
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = initTemp;
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:133 */
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static range_byteIndex_high_one chpl_build_high_bounded_range(byteIndex * high2) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  range_byteIndex_high_one call_tmp8;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  range_byteIndex_high_one initTemp;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  init39(&initTemp, high2);
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = initTemp;
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:151 */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int64_t chpl__idxToInt2(byteIndex * i) {
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp8;
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl___COLON_42(i);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:156 */
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static byteIndex chpl__intToIdx2(int64_t i) {
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex call_tmp8;
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl___COLON_43(i);
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:186 */
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static byteIndex chpl___PLUS_8(byteIndex * x2,
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                               int64_t y) {
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp8;
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp9;
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex call_tmp10;
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl___COLON_42(x2);
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl___PLUS_3(call_tmp8, y);
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp10 = chpl___COLON_43(call_tmp9);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp10;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 205 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:205 */
#line 205 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static byteIndex chpl___HYPHEN_11(byteIndex * x2,
#line 205 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  int64_t y) {
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp8;
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp9;
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex call_tmp10;
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl___COLON_42(x2);
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl___HYPHEN_3(call_tmp8, y);
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp10 = chpl___COLON_43(call_tmp9);
#line 205 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp10;
#line 205 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:235 */
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static chpl_bool chpl___LESS_5(codepointIndex * x2,
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                               int64_t y) {
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp8;
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp9;
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl___COLON_44(x2);
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl___LESS_3(call_tmp8, y);
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp9;
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:259 */
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static chpl_bool chpl___GREATER__ASSIGN_8(codepointIndex * x2,
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                          int64_t y) {
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp8;
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp9;
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl___COLON_44(x2);
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl___GREATER__ASSIGN_(call_tmp8, y);
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp9;
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:303 */
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static chpl_bool chpl___EQUALS_21(byteIndex * x2,
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  int64_t y) {
#line 304 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp8;
#line 304 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp9;
#line 304 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl___COLON_42(x2);
#line 304 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl___EQUALS_3(call_tmp8, y);
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp9;
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:315 */
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static chpl_bool chpl___EQUALS_22(int64_t x2,
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  codepointIndex * y) {
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp8;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp9;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl___COLON_44(y);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl___EQUALS_3(x2, call_tmp8);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp9;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:352 */
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int64_t validateEncoding(uint8_t * buf,
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                int64_t len,
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                Error * error_out,
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                int64_t _ln,
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                int32_t _fn) {
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t ret;
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t numCodepoints2;
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int32_t call_tmp8;
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp9;
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _owned_DecodeError call_tmp10;
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  DecodeError new_temp = NULL;
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _owned_DecodeError initTemp;
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  Error call_tmp11 = NULL;
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _owned_Error _formal_tmp_in_err;
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  numCodepoints2 = INT64(0);
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl_enc_validate_buf(buf, len, &numCodepoints2);
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_(call_tmp8, ((int32_t)(INT64(0))));
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (call_tmp9) /* ZLINE: 357 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    new_temp = _new14(_ln, _fn);
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    init81(&initTemp, new_temp);
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp10 = initTemp;
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    _formal_tmp_in_err = chpl___COLON_37(&call_tmp10, _ln, _fn);
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp11 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    *(error_out) = call_tmp11;
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _end_validateEncoding;
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 361 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = numCodepoints2;
#line 361 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _end_validateEncoding:;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:379 */
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string createBorrowingBuffer3(string * x2,
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                     int64_t _ln,
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                     int32_t _fn) {
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string ret;
#line 381 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string ret2;
#line 382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 381 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  init96(&ret2, _ln, _fn);
#line 382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl_get_string_cachedNumCodepoints(&ret2);
#line 382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl_get_string_cachedNumCodepoints(x2);
#line 382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl___ASSIGN_3(call_tmp8, *(call_tmp9));
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  initWithBorrowedBuffer(&ret2, x2, _ln, _fn);
#line 384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = ret2;
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:437 */
#line 437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string chpl_createStringWithLiteral(c_string_rehook buffer,
#line 437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                           int64_t offset2,
#line 437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                           c_string_rehook x2,
#line 437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                           int64_t length,
#line 437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                           int64_t numCodepoints2,
#line 437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                           int64_t _ln,
#line 437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                           int32_t _fn) {
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_void call_tmp8 = NULL;
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t call_tmp9 = NULL;
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t buf = NULL;
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t call_tmp10 = NULL;
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_void call_tmp11 = NULL;
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_void call_tmp12 = NULL;
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  uint64_t call_tmp13;
#line 447 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_void call_tmp14 = NULL;
#line 447 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_void call_tmp15 = NULL;
#line 447 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  uint64_t call_tmp16;
#line 449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp17 = NULL;
#line 456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp18;
#line 454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp19;
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl___COLON_(buffer, _ln, _fn);
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl___COLON_58(call_tmp8, _ln, _fn);
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  buf = call_tmp9;
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp10 = chpl___PLUS_11(call_tmp9, offset2);
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl___ASSIGN_74(&buf, call_tmp10);
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp11 = ((c_ptr_void)(buf));
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp12 = chpl___COLON_(x2, _ln, _fn);
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp13 = safeCast5(length, _ln, _fn);
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  memcpy2(call_tmp11, call_tmp12, call_tmp13);
#line 447 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp14 = ((c_ptr_void)(buf));
#line 447 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp15 = chpl___COLON_(x2, _ln, _fn);
#line 447 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp16 = safeCast5(length, _ln, _fn);
#line 447 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  memcpy2(call_tmp14, call_tmp15, call_tmp16);
#line 449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(buf, _ln, _fn);
#line 449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp17 = this21(buf, length);
#line 449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl___ASSIGN_4(call_tmp17, ((uint8_t)(INT64(0))));
#line 456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp18 = chpl___PLUS_7(length);
#line 454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp19 = chpl_createStringWithBorrowedBufferNV(buf, length, call_tmp18, numCodepoints2, _ln, _fn);
#line 437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp19;
#line 437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:553 */
#line 553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string createAdoptingBuffer(c_string_rehook x2,
#line 553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                   int64_t length,
#line 553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                   Error * error_out,
#line 553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                   int64_t _ln,
#line 553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                   int32_t _fn) {
#line 553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string ret;
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp9;
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp10;
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  Error error = NULL;
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl___COLON_55(x2, _ln, _fn);
#line 557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl___PLUS_7(length);
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  error = NULL;
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp10 = createAdoptingBuffer2(call_tmp8, length, call_tmp9, &error, _ln, _fn);
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (error != nil) /* ZLINE: 555 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    *(error_out) = error;
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _endcreateAdoptingBuffer;
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = call_tmp10;
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _endcreateAdoptingBuffer:;
#line 553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:554 */
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int64_t createAdoptingBuffer_default_length(c_string_rehook x2,
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                   Error * error_out,
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                   int64_t _ln,
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                   int32_t _fn) {
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t length;
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  length = strLen(x2, _ln, _fn);
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return length;
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:580 */
#line 580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string createAdoptingBuffer2(uint8_t * x2,
#line 580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                    int64_t length,
#line 580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                    int64_t size5,
#line 580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                    Error * error_out,
#line 580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                    int64_t _ln,
#line 580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                    int32_t _fn) {
#line 580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string ret;
#line 586 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string ret2;
#line 587 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 587 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp9;
#line 587 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  Error error = NULL;
#line 586 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  init96(&ret2, _ln, _fn);
#line 587 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl_get_string_cachedNumCodepoints(&ret2);
#line 587 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  error = NULL;
#line 587 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = validateEncoding(x2, length, &error, _ln, _fn);
#line 587 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (error != nil) /* ZLINE: 587 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 587 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 587 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    *(error_out) = error;
#line 587 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy23(&ret2, _ln, _fn);
#line 587 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _end_createAdoptingBuffer;
#line 587 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 587 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl___ASSIGN_3(call_tmp8, call_tmp9);
#line 588 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  initWithOwnedBuffer(&ret2, x2, length, size5);
#line 589 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = ret2;
#line 589 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _end_createAdoptingBuffer:;
#line 580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 613 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:613 */
#line 613 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string createCopyingBuffer(c_string_rehook x2,
#line 613 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  int64_t length,
#line 613 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  decodePolicy policy,
#line 613 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  Error * error_out,
#line 613 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  int64_t _ln,
#line 613 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  int32_t _fn) {
#line 613 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string ret;
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 619 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp9;
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp10;
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  Error error = NULL;
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl___COLON_55(x2, _ln, _fn);
#line 619 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl___PLUS_7(length);
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  error = NULL;
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp10 = createCopyingBuffer2(call_tmp8, length, call_tmp9, policy, &error, _ln, _fn);
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (error != nil) /* ZLINE: 617 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    *(error_out) = error;
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _endcreateCopyingBuffer;
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = call_tmp10;
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _endcreateCopyingBuffer:;
#line 613 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 613 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 614 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:614 */
#line 614 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int64_t createCopyingBuffer_default_length(c_string_rehook x2,
#line 614 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                  Error * error_out,
#line 614 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                  int64_t _ln,
#line 614 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                  int32_t _fn) {
#line 614 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t length;
#line 614 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  length = strLen(x2, _ln, _fn);
#line 614 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return length;
#line 614 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 648 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:648 */
#line 648 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string createCopyingBuffer2(uint8_t * x2,
#line 648 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                   int64_t length,
#line 648 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                   int64_t size5,
#line 648 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                   decodePolicy policy,
#line 648 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                   Error * error_out,
#line 648 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                   int64_t _ln,
#line 648 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                   int32_t _fn) {
#line 648 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string ret;
#line 658 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp8;
#line 658 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  Error error = NULL;
#line 658 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  error = NULL;
#line 658 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = decodeByteBuffer(x2, length, policy, &error, _ln, _fn);
#line 658 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (error != nil) /* ZLINE: 658 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 658 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 658 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    *(error_out) = error;
#line 658 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _endcreateCopyingBuffer;
#line 658 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 658 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = call_tmp8;
#line 658 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _endcreateCopyingBuffer:;
#line 648 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 648 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:741 */
#line 741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int64_t * chpl_get_string_buffLen(string * this24) {
#line 741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = &((this24)->buffLen);
#line 741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:742 */
#line 742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int64_t * chpl_get_string_buffSize(string * this24) {
#line 742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = &((this24)->buffSize);
#line 742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:743 */
#line 743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int64_t * chpl_get_string_cachedNumCodepoints(string * this24) {
#line 743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = &((this24)->cachedNumCodepoints);
#line 743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 743 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:744 */
#line 744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static c_ptr_uint8_t * chpl_get_string_buff(string * this24) {
#line 744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t call_tmp8 = NULL;
#line 744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = &((this24)->buff);
#line 744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:745 */
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static chpl_bool * chpl_get_string_isOwned(string * this24) {
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = &((this24)->isOwned);
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:746 */
#line 746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static chpl_bool * chpl_get_string_hasEscapes(string * this24) {
#line 746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = &((this24)->hasEscapes);
#line 746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:749 */
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int32_t * chpl_get_string_locale_id(string * this24) {
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int32_t call_tmp8 = NULL;
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = &((this24)->locale_id);
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 752 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:752 */
#line 752 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void init96(string * this24,
#line 752 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                   int64_t _ln,
#line 752 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                   int32_t _fn) {
#line 752 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t init_coerce_tmp = NULL;
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int32_t call_tmp8;
#line 752 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->buffLen = INT64(0);
#line 752 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->buffSize = INT64(0);
#line 752 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->cachedNumCodepoints = INT64(0);
#line 752 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  init_coerce_tmp = ((c_ptr_uint8_t)(nil));
#line 752 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->buff = init_coerce_tmp;
#line 752 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->isOwned = UINT8(true);
#line 752 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->hasEscapes = UINT8(false);
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = get_chpl_nodeID();
#line 752 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->locale_id = call_tmp8;
#line 752 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 752 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:756 */
#line 756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void init_ASSIGN_25(string * this24,
#line 756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                           string * s,
#line 756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                           int64_t _ln,
#line 756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                           int32_t _fn) {
#line 757 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t init_coerce_tmp = NULL;
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int32_t call_tmp8;
#line 757 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->buffLen = INT64(0);
#line 757 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->buffSize = INT64(0);
#line 757 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->cachedNumCodepoints = INT64(0);
#line 757 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  init_coerce_tmp = ((c_ptr_uint8_t)(nil));
#line 757 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->buff = init_coerce_tmp;
#line 757 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->isOwned = UINT8(true);
#line 757 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->hasEscapes = UINT8(false);
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = get_chpl_nodeID();
#line 757 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->locale_id = call_tmp8;
#line 758 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  initWithNewBuffer(this24, s, _ln, _fn);
#line 756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 761 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:761 */
#line 761 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void deinit52(string * this24,
#line 761 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     int64_t _ln,
#line 761 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     int32_t _fn) {
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_chpl_bool T = NULL;
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T2;
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t call_tmp8 = NULL;
#line 767 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int32_t call_tmp9 = NULL;
#line 768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t call_tmp10 = NULL;
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T = chpl_get_string_isOwned(this24);
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (*(T)) /* ZLINE: 765 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp8 = chpl_get_string_buff(this24);
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T2 = chpl___EXCLAMATION__ASSIGN_13(*(call_tmp8), nil);
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  } else /* ZLINE: 765 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T2 = UINT8(false);
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (T2) /* ZLINE: 765 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 767 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp9 = chpl_get_string_locale_id(this24);
#line 767 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_buildLocaleID(*(call_tmp9), c_sublocid_any, _ln, _fn);
#line 768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp10 = chpl_get_string_buff(this24);
#line 768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_here_free(((c_ptr_void)(*(call_tmp10))), _ln, _fn);
#line 768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 761 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 761 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 805 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:805 */
#line 805 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static chpl_bool isASCII(string * this24) {
#line 806 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp8;
#line 806 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp9;
#line 806 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp10;
#line 806 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = numCodepoints(this24);
#line 806 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = numBytes(this24);
#line 806 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp10 = chpl___EQUALS_3(call_tmp8, call_tmp9);
#line 805 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp10;
#line 805 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:809 */
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static range_int64_t_both_one byteIndices(string * this24) {
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp8;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp9;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  range_int64_t_both_one call_tmp10;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = numBytes(this24);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl__nudgeHighBound(call_tmp8);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp10 = chpl_build_bounded_range3(INT64(0), call_tmp9);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp10;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:818 */
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static _tuple_3_int32_t_byteIndex_int64_t _cpIndexLenHelpNoAdjustment(string * this24,
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                                      int64_t * start,
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                                      int64_t _ln,
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                                      int32_t _fn) {
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_3_int32_t_byteIndex_int64_t ret;
#line 825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t coerce_tmp2;
#line 827 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp8;
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp9 = NULL;
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t _this_tmp_ = NULL;
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t coerce_tmp3 = NULL;
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int32_t call_tmp10;
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex call_tmp11;
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_3_int32_t__ref_byteIndex_int64_t call_tmp12;
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_3_int32_t__ref_byteIndex_int64_t copy_ret_tmp;
#line 833 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t call_tmp13 = NULL;
#line 834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp14 = NULL;
#line 833 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_3_syserr_int32_t_int32_t T;
#line 833 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int32_t coerce_tmp4;
#line 833 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int32_t coerce_tmp5;
#line 838 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex call_tmp15;
#line 838 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_3_int32_t__ref_byteIndex_int64_t call_tmp16;
#line 838 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_3_int32_t__ref_byteIndex_int64_t copy_ret_tmp2;
#line 825 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  coerce_tmp2 = *(start);
#line 827 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = isASCII(this24);
#line 827 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (call_tmp8) /* ZLINE: 827 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 827 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 828 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl___PLUS__ASSIGN_(start, INT64(1));
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    _this_tmp_ = chpl_get_string_buff(this24);
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    coerce_tmp3 = *(_this_tmp_);
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp9 = this21(coerce_tmp3, coerce_tmp2);
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp10 = ((int32_t)(*(call_tmp9)));
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp11 = chpl___COLON_43(coerce_tmp2);
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp12 = _build_tuple4(call_tmp10, &call_tmp11, INT64(1));
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    copy_ret_tmp = call_tmp12;
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    ret = chpl__initCopy4(&copy_ret_tmp, UINT8(false));
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy49(&call_tmp12);
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy26(&call_tmp11);
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _end__cpIndexLenHelpNoAdjustment;
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  } else /* ZLINE: 832 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 829 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 833 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp13 = chpl_get_string_buff(this24);
#line 834 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp14 = chpl_get_string_buffLen(this24);
#line 833 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T = decodeHelp(*(call_tmp13), *(call_tmp14), coerce_tmp2, UINT8(true), _ln, _fn);
#line 833 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    coerce_tmp4 = (&T)->x1;
#line 833 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    coerce_tmp5 = (&T)->x2;
#line 837 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl___PLUS__ASSIGN_(start, ((int64_t)(coerce_tmp5)));
#line 838 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp15 = chpl___COLON_43(coerce_tmp2);
#line 838 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp16 = _build_tuple4(coerce_tmp4, &call_tmp15, ((int64_t)(coerce_tmp5)));
#line 838 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    copy_ret_tmp2 = call_tmp16;
#line 838 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    ret = chpl__initCopy4(&copy_ret_tmp2, UINT8(false));
#line 838 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy49(&call_tmp16);
#line 838 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy26(&call_tmp15);
#line 838 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy34(&T);
#line 838 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _end__cpIndexLenHelpNoAdjustment;
#line 838 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 838 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _end__cpIndexLenHelpNoAdjustment:;
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:849 */
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void _cpIndexLen(string * this24,
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                        byteIndex * start,
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                        _ir__cpIndexLen__ref_string * _retArg) {
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (_retArg)->F0_this = this24;
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (_retArg)->F1_start = start;
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:849 */
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static _ic__cpIndexLen__ref_string _getIterator20(_ir__cpIndexLen__ref_string * ir,
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                  int64_t _ln,
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                  int32_t _fn) {
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic__cpIndexLen__ref_string _ic_ = NULL;
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_void cast_tmp = NULL;
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string T = NULL;
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_byteIndex T2 = NULL;
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic__cpIndexLen__ref_string_object), INT16(34), _ln, _fn);
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_ = ((_ic__cpIndexLen__ref_string)(cast_tmp));
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic__cpIndexLen__ref_string;
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (_ic_)->more = INT64(1);
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T = (ir)->F0_this;
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (_ic_)->F0_this = T;
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T2 = (ir)->F1_start;
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (_ic_)->F1_start = T2;
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return _ic_;
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:849 */
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static byteIndex _cpIndexLen_default_start(string * this24) {
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex start;
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  start = chpl___COLON_43(INT64(0));
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return start;
#line 849 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:864 */
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void _indexLen(string * this24,
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                      byteIndex * start,
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                      _ir__indexLen__ref_string * _retArg) {
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (_retArg)->F0_this = this24;
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (_retArg)->F1_start = start;
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:864 */
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static _ic__indexLen__ref_string _getIterator21(_ir__indexLen__ref_string * ir,
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                int64_t _ln,
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                int32_t _fn) {
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic__indexLen__ref_string _ic_ = NULL;
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_void cast_tmp = NULL;
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string T = NULL;
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_byteIndex T2 = NULL;
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic__indexLen__ref_string_object), INT16(33), _ln, _fn);
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_ = ((_ic__indexLen__ref_string)(cast_tmp));
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic__indexLen__ref_string;
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (_ic_)->more = INT64(1);
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T = (ir)->F0_this;
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (_ic_)->F0_this = T;
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T2 = (ir)->F1_start;
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (_ic_)->F1_start = T2;
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return _ic_;
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:864 */
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static byteIndex _indexLen_default_start(string * this24) {
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex start;
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  start = chpl___COLON_43(INT64(0));
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return start;
#line 864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:999 */
#line 999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int64_t doSearchUTF8(string * this24,
#line 999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                            string * pattern,
#line 999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                            range_byteIndex_low_one indices3,
#line 999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                            int64_t _ln,
#line 999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                            int32_t _fn) {
#line 999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t ret;
#line 1002 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t ret2;
#line 1004 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int32_t call_tmp8 = NULL;
#line 1007 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t localRet;
#line 1008 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 1008 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t nLen;
#line 1008 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t coerce_tmp2;
#line 1009 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_2_range_int64_t_both_one_int64_t call_tmp10;
#line 1009 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  Error error = NULL;
#line 1009 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_2_range_int64_t_both_one_int64_t T;
#line 1009 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  range_int64_t_both_one view;
#line 1010 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp11;
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp12;
#line 1048 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp13;
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp14;
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp15;
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string localPattern;
#line 1058 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp16;
#line 1058 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp17;
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  range_int64_t_both_one searchSpace;
#line 1060 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  range_int64_t_low_one call_tmp18;
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_these_range_int64_t_both_one _iterator = NULL;
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  range_int64_t_both_one this25;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp19;
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  range_int64_t_both_one this26;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp20;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp21;
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  range_int64_t_both_one this27;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp22;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end;
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  range_int64_t_both_one this28;
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t i2;
#line 1065 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_chpl_direct_counted_range_iter _iterator2 = NULL;
#line 1065 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir_chpl_direct_counted_range_iter call_tmp23;
#line 1065 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir_chpl_direct_counted_range_iter ret_tmp;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_counted_range_iter_helper _iterator3 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper call_tmp24;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper ret_tmp2;
#line 1065 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t low3;
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp25;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T2;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp26;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp27;
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp28;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator4 = NULL;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp29;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp3;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i3;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low5;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 1066 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp30;
#line 1066 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp31;
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp32 = NULL;
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t _this_tmp_ = NULL;
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t coerce_tmp3 = NULL;
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp33 = NULL;
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t _this_tmp_2 = NULL;
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t coerce_tmp4 = NULL;
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp34;
#line 1069 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp35;
#line 1069 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp36;
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp37;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp38;
#line 1002 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret2 = INT64(-1);
#line 1004 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl_get_string_locale_id(this24);
#line 1004 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_buildLocaleID(*(call_tmp8), c_sublocid_any, _ln, _fn);
#line 1007 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  localRet = INT64(-2);
#line 1008 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl_get_string_buffLen(pattern);
#line 1008 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  coerce_tmp2 = *(call_tmp9);
#line 1008 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  nLen = coerce_tmp2;
#line 1009 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  error = NULL;
#line 1009 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp10 = getView6(this24, indices3, &error, _ln, _fn);
#line 1009 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (error != nil) /* ZLINE: 1009 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1009 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1009 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 1009 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1009 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T = call_tmp10;
#line 1009 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  view = (&T)->x0;
#line 1010 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp11 = size3(view, _ln, _fn);
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp12 = chpl___EQUALS_3(coerce_tmp2, INT64(0));
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (call_tmp12) /* ZLINE: 1037 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl___ASSIGN_3(&localRet, INT64(-1));
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1048 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp13 = chpl___GREATER_(coerce_tmp2, call_tmp11);
#line 1048 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (call_tmp13) /* ZLINE: 1048 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1048 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1049 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl___ASSIGN_3(&localRet, INT64(-1));
#line 1049 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp14 = chpl___EQUALS_3(localRet, INT64(-2));
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (call_tmp14) /* ZLINE: 1052 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl___ASSIGN_3(&localRet, INT64(-1));
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp15 = localize(pattern, _ln, _fn);
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    localPattern = call_tmp15;
#line 1058 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp16 = chpl___HYPHEN_3(call_tmp11, coerce_tmp2);
#line 1058 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp17 = chpl___PLUS_7(call_tmp16);
#line 1060 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp18 = chpl_build_low_bounded_range(INT64(0));
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    searchSpace = chpl___POUND_(call_tmp18, call_tmp17, _ln, _fn);
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy19(call_tmp18);
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    _iterator = _getIterator3(&searchSpace, _ln, _fn);
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(_iterator, _ln, _fn);
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    this25 = (_iterator)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    checkIfIterWillOverflow(this25, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    i = INT64(0);
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(_iterator, _ln, _fn);
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    this26 = (_iterator)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp19 = lowBoundForIter(this26);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp20 = chpl__idxToInt(call_tmp19);
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(_iterator, _ln, _fn);
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    this27 = (_iterator)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp21 = highBoundForIter(this27);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp22 = chpl__idxToInt(call_tmp21);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    end = call_tmp22;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    for (i = call_tmp20; ((i <= end)); i += INT64(1)) {
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      this28 = (_iterator)->F0_this;
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      i2 = chpl_intToIdx3(this28, i);
#line 1065 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl_direct_counted_range_iter(INT64(0), nLen, &ret_tmp);
#line 1065 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp23 = ret_tmp;
#line 1065 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _iterator2 = _getIterator10(&call_tmp23, _ln, _fn);
#line 1065 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 1065 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      low3 = (_iterator2)->F0_low;
#line 1065 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_direct_counted_range_iter_helper(low3, (_iterator2)->F1_count, &ret_tmp2);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp24 = ret_tmp2;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _iterator3 = _getIterator11(&call_tmp24, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp25 = chpl___LESS_3((_iterator3)->F1_count, INT64(0));
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      if (call_tmp25) /* ZLINE: 3252 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        boundsCheckHalt(&_str_literal_883, _ln, _fn);
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      }
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      low4 = (_iterator3)->F0_low;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp26 = chpl___EQUALS_3((_iterator3)->F1_count, INT64(0));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      if (call_tmp26) /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator3, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp27 = chpl___HYPHEN_5(((uint64_t)((_iterator3)->F0_low)));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        T2 = chpl___COLON_6(call_tmp27, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      } else /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator3, _ln, _fn);
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp28 = chpl___HYPHEN_6((_iterator3)->F1_count);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator3, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        T2 = chpl___PLUS_3((_iterator3)->F0_low, call_tmp28);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_direct_param_stride_range_iter(low4, T2, &ret_tmp3);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp29 = ret_tmp3;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _iterator4 = _getIterator13(&call_tmp29, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      i3 = INT64(0);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator4, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator4)->F0_low);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator4, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator4)->F1_high);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator4, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      low5 = (_iterator4)->F0_low;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator4, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_checkIfRangeIterWillOverflow(low5, (_iterator4)->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator4, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      high2 = (_iterator4)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      for (chpl_check_nil(_iterator4, _ln, _fn),i3 = (_iterator4)->F0_low; ((i3 <= high2)); i3 += INT64(1)) {
#line 1066 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp30 = chpl___PLUS_3(i2, i3);
#line 1066 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp31 = orderToIndex(view, call_tmp30, _ln, _fn);
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        _this_tmp_ = chpl_get_string_buff(this24);
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        coerce_tmp3 = *(_this_tmp_);
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp32 = this21(coerce_tmp3, call_tmp31);
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        _this_tmp_2 = chpl_get_string_buff(&localPattern);
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        coerce_tmp4 = *(_this_tmp_2);
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp33 = this21(coerce_tmp4, i3);
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp34 = chpl___EXCLAMATION__ASSIGN_3(*(call_tmp32), *(call_tmp33));
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        if (call_tmp34) /* ZLINE: 1067 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        {
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _freeIterator19(_iterator4, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _freeIterator20(_iterator3, _ln, _fn);
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          goto _breakLabel;
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        }
#line 1069 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp35 = chpl___HYPHEN_6(nLen);
#line 1069 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp36 = chpl___EQUALS_3(i3, call_tmp35);
#line 1069 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        if (call_tmp36) /* ZLINE: 1069 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1069 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        {
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp37 = orderToIndex(view, i2, _ln, _fn);
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl___ASSIGN_3(&localRet, call_tmp37);
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        }
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator19(_iterator4, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator20(_iterator3, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _breakLabel:;
#line 1065 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _freeIterator(_iterator2, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp38 = chpl___EXCLAMATION__ASSIGN_2(localRet, INT64(-1));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      if (call_tmp38) /* ZLINE: 1077 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      {
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        goto _breakLabel2;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      }
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    }
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    _breakLabel2:;
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    _freeIterator17(_iterator, _ln, _fn);
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy59(searchSpace);
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy23(&localPattern, _ln, _fn);
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1081 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl___ASSIGN_3(&ret2, localRet);
#line 1081 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl__autoDestroy59(view);
#line 1081 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl__autoDestroy46(&T);
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = ret2;
#line 999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 999 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1127 */
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int64_t size4(string * this24) {
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp8;
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = numCodepoints(this24);
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1133 */
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static range_int64_t_both_one indices2(string * this24) {
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp8;
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp9;
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  range_int64_t_both_one call_tmp10;
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = size4(this24);
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl__nudgeHighBound(call_tmp8);
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp10 = chpl_build_bounded_range3(INT64(0), call_tmp9);
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp10;
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1138 */
#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int64_t numBytes(string * this24) {
#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t ret;
#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl_get_string_buffLen(this24);
#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = *(call_tmp8);
#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1144 */
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int64_t numCodepoints(string * this24) {
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t ret;
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl_get_string_cachedNumCodepoints(this24);
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = *(call_tmp8);
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1161 */
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string localize(string * this24,
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                       int64_t _ln,
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                       int32_t _fn) {
#line 1163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp8;
#line 1163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = createBorrowingBuffer3(this24, _ln, _fn);
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1326 */
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void incr2(_ic_chpl_bytes__ref_string this24,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                  int64_t _ln,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                  int32_t _fn) {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t T;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T = (this24)->F6_i;
#line 3300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T += INT64(1);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->F6_i = T;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1326 */
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void zip12(_ic_chpl_bytes__ref_string this24,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                  int64_t _ln,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                  int32_t _fn) {
#line 1327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp8;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir_chpl_direct_counted_range_iter call_tmp10;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir_chpl_direct_counted_range_iter ret_tmp;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper call_tmp11;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper ret_tmp2;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t low3;
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp12;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp13;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp14;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp3;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low5;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string T2 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string T3 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_chpl_direct_counted_range_iter T4 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string T5 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_counted_range_iter T6 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_counted_range_iter T7 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_chpl_direct_counted_range_iter_helper T8 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_counted_range_iter_helper T9 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_counted_range_iter_helper T10 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_counted_range_iter_helper T11 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_chpl_direct_param_stride_range_iter T12 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_param_stride_range_iter T13 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_param_stride_range_iter T14 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_param_stride_range_iter T15 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_param_stride_range_iter T16 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_counted_range_iter_helper T17 = NULL;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp15;
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp16;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_counted_range_iter_helper T18 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_counted_range_iter_helper T19 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T2 = (this24)->F0_this;
#line 1327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = localize(T2, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->F1_localThis = call_tmp8;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T3 = &((this24)->F1_localThis);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl_get_string_buffLen(T3);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_direct_counted_range_iter(INT64(0), *(call_tmp9), &ret_tmp);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp10 = ret_tmp;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T4 = _getIterator10(&call_tmp10, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->F2__iterator = T4;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T5 = &((this24)->F1_localThis);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->F3_ref_localThis = T5;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T6 = &((this24)->F2__iterator);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(T6, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  low3 = (*(T6))->F0_low;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T7 = &((this24)->F2__iterator);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(T7, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_counted_range_iter_helper(low3, (*(T7))->F1_count, &ret_tmp2);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = ret_tmp2;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T8 = _getIterator11(&call_tmp11, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->F4__iterator = T8;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T9 = &((this24)->F4__iterator);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(T9, _ln, _fn);
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = chpl___LESS_3((*(T9))->F1_count, INT64(0));
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp12) /* ZLINE: 3252 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    boundsCheckHalt(&_str_literal_883, _ln, _fn);
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T10 = &((this24)->F4__iterator);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(T10, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low4 = (*(T10))->F0_low;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T11 = &((this24)->F4__iterator);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(T11, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp13 = chpl___EQUALS_3((*(T11))->F1_count, INT64(0));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp13) /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T17 = &((this24)->F4__iterator);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(T17, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp15 = chpl___HYPHEN_5(((uint64_t)((*(T17))->F0_low)));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T = chpl___COLON_6(call_tmp15, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T18 = &((this24)->F4__iterator);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(T18, _ln, _fn);
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp16 = chpl___HYPHEN_6((*(T18))->F1_count);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T19 = &((this24)->F4__iterator);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(T19, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T = chpl___PLUS_3((*(T19))->F0_low, call_tmp16);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_param_stride_range_iter(low4, T, &ret_tmp3);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp14 = ret_tmp3;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T12 = _getIterator13(&call_tmp14, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->F5__iterator = T12;
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_range_check_stride2();
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->F6_i = INT64(0);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T13 = &((this24)->F5__iterator);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(T13, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((*(T13))->F0_low);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T14 = &((this24)->F5__iterator);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(T14, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((*(T14))->F1_high);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T15 = &((this24)->F5__iterator);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(T15, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low5 = (*(T15))->F0_low;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T16 = &((this24)->F5__iterator);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(T16, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_checkIfRangeIterWillOverflow(low5, (*(T16))->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1326 */
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void zip22(_ic_chpl_bytes__ref_string this24,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                  int64_t _ln,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                  int32_t _fn) {
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp8 = NULL;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t _this_tmp_ = NULL;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t T;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string T2 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  uint8_t T3;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T = (this24)->F6_i;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T2 = (this24)->F3_ref_localThis;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _this_tmp_ = chpl_get_string_buff(T2);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->F3_ref_localThis = T2;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  coerce_tmp2 = *(_this_tmp_);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = this21(coerce_tmp2, T);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T3 = *(call_tmp8);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->value = T3;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->more = INT64(2);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1326 */
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void zip32(_ic_chpl_bytes__ref_string this24) {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1326 */
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void zip42(_ic_chpl_bytes__ref_string this24,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                  int64_t _ln,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                  int32_t _fn) {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string T = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator19((this24)->F5__iterator, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator20((this24)->F4__iterator, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _freeIterator((this24)->F2__iterator, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T = &((this24)->F1_localThis);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl__autoDestroy23(T, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1326 */
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int64_t hasMore2(_ic_chpl_bytes__ref_string this24,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                        int64_t _ln,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                        int32_t _fn) {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t T;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_param_stride_range_iter T2 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T2 = &((this24)->F5__iterator);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(T2, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  high2 = (*(T2))->F1_high;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T = ((this24)->F6_i <= high2);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return T;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1326 */
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static uint8_t getValue2(_ic_chpl_bytes__ref_string this24,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                         int64_t _ln,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                         int32_t _fn) {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  uint8_t T;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T = (this24)->value;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return T;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1326 */
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void chpl_bytes(string * this24,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                       _ir_chpl_bytes__ref_string * _retArg) {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (_retArg)->F0_this = this24;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1326 */
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void init97(_ic_chpl_bytes__ref_string this24,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                   int64_t _ln,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                   int32_t _fn) {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t T;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_param_stride_range_iter T2 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t T3;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T2 = &((this24)->F5__iterator);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(T2, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = (*(T2))->F0_low;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->F7_low = T;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T3 = (this24)->F7_low;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->F6_i = T3;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1326 */
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void advance2(_ic_chpl_bytes__ref_string this24,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     int64_t _ln,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     int32_t _fn) {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t more;
#line 1327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp8;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string T = NULL;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string T2 = NULL;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir_chpl_direct_counted_range_iter call_tmp10;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir_chpl_direct_counted_range_iter ret_tmp;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_chpl_direct_counted_range_iter T3 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string T4 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper call_tmp11;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper ret_tmp2;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t low3;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_counted_range_iter T5 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_counted_range_iter T6 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_chpl_direct_counted_range_iter_helper T7 = NULL;
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp12;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_counted_range_iter_helper T8 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_counted_range_iter_helper T9 = NULL;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T10;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp13;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_counted_range_iter_helper T11 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_counted_range_iter_helper T12 = NULL;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp14;
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp15;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_counted_range_iter_helper T13 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_counted_range_iter_helper T14 = NULL;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp16;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp3;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_chpl_direct_param_stride_range_iter T15 = NULL;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_param_stride_range_iter T16 = NULL;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_param_stride_range_iter T17 = NULL;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low5;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_param_stride_range_iter T18 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_param_stride_range_iter T19 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t T20;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp17 = NULL;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t _this_tmp_ = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string T21 = NULL;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  uint8_t T22;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string T23 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t T24;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_param_stride_range_iter T25 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t T26;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref__ic_chpl_direct_param_stride_range_iter T27 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t T28;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string T29 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  more = (this24)->more;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (more == INT64(2)) /* ZLINE: 1326 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _jump_2;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (more == INT64(-2)) /* ZLINE: 1326 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _jump_break_2;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T = (this24)->F0_this;
#line 1327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = localize(T, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->F1_localThis = call_tmp8;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T2 = &((this24)->F1_localThis);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl_get_string_buffLen(T2);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_direct_counted_range_iter(INT64(0), *(call_tmp9), &ret_tmp);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp10 = ret_tmp;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T3 = _getIterator10(&call_tmp10, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->F2__iterator = T3;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T4 = &((this24)->F1_localThis);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->F3_ref_localThis = T4;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T5 = &((this24)->F2__iterator);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(T5, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  low3 = (*(T5))->F0_low;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T6 = &((this24)->F2__iterator);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(T6, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_counted_range_iter_helper(low3, (*(T6))->F1_count, &ret_tmp2);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = ret_tmp2;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T7 = _getIterator11(&call_tmp11, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->F4__iterator = T7;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T8 = &((this24)->F4__iterator);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(T8, _ln, _fn);
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = chpl___LESS_3((*(T8))->F1_count, INT64(0));
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp12) /* ZLINE: 3252 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    boundsCheckHalt(&_str_literal_883, _ln, _fn);
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T9 = &((this24)->F4__iterator);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(T9, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low4 = (*(T9))->F0_low;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T11 = &((this24)->F4__iterator);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(T11, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp13 = chpl___EQUALS_3((*(T11))->F1_count, INT64(0));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp13) /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T12 = &((this24)->F4__iterator);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(T12, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp14 = chpl___HYPHEN_5(((uint64_t)((*(T12))->F0_low)));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T10 = chpl___COLON_6(call_tmp14, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T13 = &((this24)->F4__iterator);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(T13, _ln, _fn);
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp15 = chpl___HYPHEN_6((*(T13))->F1_count);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T14 = &((this24)->F4__iterator);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(T14, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T10 = chpl___PLUS_3((*(T14))->F0_low, call_tmp15);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_param_stride_range_iter(low4, T10, &ret_tmp3);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp16 = ret_tmp3;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T15 = _getIterator13(&call_tmp16, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->F5__iterator = T15;
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_range_check_stride2();
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->F6_i = INT64(0);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T16 = &((this24)->F5__iterator);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(T16, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((*(T16))->F0_low);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T17 = &((this24)->F5__iterator);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(T17, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((*(T17))->F1_high);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T18 = &((this24)->F5__iterator);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(T18, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low5 = (*(T18))->F0_low;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T19 = &((this24)->F5__iterator);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(T19, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_checkIfRangeIterWillOverflow(low5, (*(T19))->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (chpl_check_nil(this24, _ln, _fn),T25 = &((this24)->F5__iterator),chpl_check_nil(T25, _ln, _fn),T24 = (*(T25))->F0_low,chpl_check_nil(this24, _ln, _fn),(this24)->F7_low = T24,chpl_check_nil(this24, _ln, _fn),T26 = (this24)->F7_low,chpl_check_nil(this24, _ln, _fn),(this24)->F6_i = T26; (chpl_check_nil(this24, _ln, _fn),T27 = &((this24)->F5__iterator),chpl_check_nil(T27, _ln, _fn),high2 = (*(T27))->F1_high,chpl_check_nil(this24, _ln, _fn),((this24)->F6_i <= high2)); chpl_check_nil(this24, _ln, _fn),T28 = (this24)->F6_i,T28 += INT64(1),chpl_check_nil(this24, _ln, _fn),(this24)->F6_i = T28) {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T20 = (this24)->F6_i;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T21 = (this24)->F3_ref_localThis;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    _this_tmp_ = chpl_get_string_buff(T21);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    (this24)->F3_ref_localThis = T21;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    coerce_tmp2 = *(_this_tmp_);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp17 = this21(coerce_tmp2, T20);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T22 = *(call_tmp17);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    (this24)->value = T22;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    (this24)->more = INT64(2);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _end;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    _jump_break_2:;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    _freeIterator19((this24)->F5__iterator, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    _freeIterator20((this24)->F4__iterator, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    _freeIterator((this24)->F2__iterator, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T23 = &((this24)->F1_localThis);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy23(T23, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _endchpl_bytes;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    _jump_2:;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator19((this24)->F5__iterator, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator20((this24)->F4__iterator, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _freeIterator((this24)->F2__iterator, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T29 = &((this24)->F1_localThis);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl__autoDestroy23(T29, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _endchpl_bytes:;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (this24)->more = INT64(0);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _end:;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1326 */
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static _ic_chpl_bytes__ref_string _getIterator22(_ir_chpl_bytes__ref_string * ir,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                 int64_t _ln,
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                 int32_t _fn) {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_chpl_bytes__ref_string _ic_ = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string T = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic_chpl_bytes__ref_string_object), INT16(32), _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_ = ((_ic_chpl_bytes__ref_string)(cast_tmp));
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic_chpl_bytes__ref_string;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (_ic_)->more = INT64(1);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T = (ir)->F0_this;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (_ic_)->F0_this = T;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return _ic_;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1337 */
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void codepoints(string * this24,
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                       _ir_codepoints__ref_string * _retArg) {
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (_retArg)->F0_this = this24;
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1337 */
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static _ic_codepoints__ref_string _getIterator23(_ir_codepoints__ref_string * ir,
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                 int64_t _ln,
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                 int32_t _fn) {
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_codepoints__ref_string _ic_ = NULL;
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string T = NULL;
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic_codepoints__ref_string_object), INT16(35), _ln, _fn);
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_ = ((_ic_codepoints__ref_string)(cast_tmp));
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic_codepoints__ref_string;
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (_ic_)->more = INT64(1);
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T = (ir)->F0_this;
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  (_ic_)->F0_this = T;
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return _ic_;
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1357 */
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static uint8_t byte(string * this24,
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                    int64_t i,
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                    int64_t _ln,
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                    int32_t _fn) {
#line 1358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T;
#line 1358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T2;
#line 1358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1359 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp9;
#line 1360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t call_tmp10 = NULL;
#line 1360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int32_t call_tmp11 = NULL;
#line 1360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  uint8_t call_tmp12;
#line 1358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  T = chpl___LESS_3(i, INT64(0));
#line 1358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (T) /* ZLINE: 1358 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T2 = UINT8(true);
#line 1358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  } else /* ZLINE: 1358 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp8 = chpl_get_string_buffLen(this24);
#line 1358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T2 = chpl___GREATER__ASSIGN_(i, *(call_tmp8));
#line 1358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (T2) /* ZLINE: 1358 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1359 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp9 = numBytes(this24);
#line 1359 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    halt5(&_str_literal_164, i, &_str_literal_165, call_tmp9, &_str_literal_166, _ln, _fn);
#line 1359 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp10 = chpl_get_string_buff(this24);
#line 1360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp11 = chpl_get_string_locale_id(this24);
#line 1360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp12 = bufferGetByte(*(call_tmp10), i, *(call_tmp11), _ln, _fn);
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp12;
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1458 */
#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string this14(string * this24,
#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     codepointIndex * i,
#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     int64_t _ln,
#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     int32_t _fn) {
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp8;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = item(this24, i, _ln, _fn);
#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1478 */
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string item(string * this24,
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                   codepointIndex * i,
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                   int64_t _ln,
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                   int32_t _fn) {
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string ret;
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp8;
#line 1480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp9;
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp10;
#line 1483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp11;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp12;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp13;
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp14;
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp15;
#line 1486 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t call_tmp16 = NULL;
#line 1486 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp17;
#line 1487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int32_t call_tmp18 = NULL;
#line 1486 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T;
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp19;
#line 1491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t charCount;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic__cpIndexLen__ref_string _iterator = NULL;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir__cpIndexLen__ref_string call_tmp20;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex default_arg_start;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir__cpIndexLen__ref_string ret_tmp;
#line 850 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp21;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string this25 = NULL;
#line 850 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string localThis;
#line 851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp22;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_byteIndex start = NULL;
#line 851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t i2;
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T2;
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp23 = NULL;
#line 853 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_3_int32_t_byteIndex_int64_t call_tmp24;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex _yieldedIndex_x1;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t _yieldedIndex_x2;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex byteIdx;
#line 1493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp25;
#line 1494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t call_tmp26 = NULL;
#line 1494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp27;
#line 1495 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int32_t call_tmp28 = NULL;
#line 1494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T3;
#line 1496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp29;
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp30 = NULL;
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp31;
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp32;
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl___LESS_5(i, INT64(0));
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (call_tmp8) /* ZLINE: 1479 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp9 = chpl___COLON_44(i);
#line 1480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    halt11(&_str_literal_164, call_tmp9, &_str_literal_169, _ln, _fn);
#line 1480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp10 = isEmpty2(this24);
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (call_tmp10) /* ZLINE: 1482 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    ret = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _end_item;
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp11 = isASCII(this24);
#line 1483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (call_tmp11) /* ZLINE: 1483 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp12 = numBytes(this24);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp13 = chpl___GREATER__ASSIGN_8(i, call_tmp12);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    if (call_tmp13) /* ZLINE: 1484 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    {
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp14 = chpl___COLON_44(i);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp15 = size4(this24);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      halt15(&_str_literal_164, call_tmp14, &_str_literal_170, call_tmp15, _ln, _fn);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    }
#line 1486 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp16 = chpl_get_string_buff(this24);
#line 1486 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp17 = chpl___COLON_44(i);
#line 1487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp18 = chpl_get_string_locale_id(this24);
#line 1486 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T = bufferCopy(*(call_tmp16), call_tmp17, INT64(1), *(call_tmp18), _ln, _fn);
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp19 = chpl_createStringWithOwnedBufferNV((&T)->x0, INT64(1), (&T)->x1, INT64(1), _ln, _fn);
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    ret = call_tmp19;
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy6(&T);
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _end_item;
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  } else /* ZLINE: 1490 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    charCount = INT64(0);
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    default_arg_start = _cpIndexLen_default_start(this24);
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    _cpIndexLen(this24, &default_arg_start, &ret_tmp);
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp20 = ret_tmp;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    _iterator = _getIterator20(&call_tmp20, _ln, _fn);
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(_iterator, _ln, _fn);
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    this25 = (_iterator)->F0_this;
#line 850 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp21 = localize(this25, _ln, _fn);
#line 850 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    localThis = call_tmp21;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(_iterator, _ln, _fn);
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    start = (_iterator)->F1_start;
#line 851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp22 = _findStartOfNextCodepointFromByte(&localThis, start, _ln, _fn);
#line 851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    i2 = call_tmp22;
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp23 = chpl_get_string_buffLen(&localThis);
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    T2 = chpl___LESS_3(call_tmp22, *(call_tmp23));
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    while (T2) {
#line 853 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp24 = _cpIndexLenHelpNoAdjustment(&localThis, &i2, _ln, _fn);
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _yieldedIndex_x1 = (&call_tmp24)->x1;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _yieldedIndex_x2 = (&call_tmp24)->x2;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      byteIdx = _yieldedIndex_x1;
#line 1493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp25 = chpl___EQUALS_22(charCount, i);
#line 1493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      if (call_tmp25) /* ZLINE: 1493 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      {
#line 1494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp26 = chpl_get_string_buff(this24);
#line 1494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp27 = chpl___COLON_42(&byteIdx);
#line 1495 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp28 = chpl_get_string_locale_id(this24);
#line 1494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        T3 = bufferCopy(*(call_tmp26), call_tmp27, _yieldedIndex_x2, *(call_tmp28), _ln, _fn);
#line 1496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp29 = chpl_createStringWithOwnedBufferNV((&T3)->x0, _yieldedIndex_x2, (&T3)->x1, INT64(1), _ln, _fn);
#line 1496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        ret = call_tmp29;
#line 1496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl__autoDestroy6(&T3);
#line 1496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl__autoDestroy26(&byteIdx);
#line 853 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl__autoDestroy23(&localThis, _ln, _fn);
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        _freeIterator16(_iterator, _ln, _fn);
#line 1496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl__autoDestroy26(&default_arg_start);
#line 1496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        goto _end_item;
#line 1496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      }
#line 1498 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl___PLUS__ASSIGN_(&charCount, INT64(1));
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl__autoDestroy26(&byteIdx);
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp30 = chpl_get_string_buffLen(&localThis);
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      T2 = chpl___LESS_3(i2, *(call_tmp30));
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    }
#line 853 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy23(&localThis, _ln, _fn);
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    _freeIterator16(_iterator, _ln, _fn);
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy26(&default_arg_start);
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp31 = chpl___COLON_44(i);
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp32 = size4(this24);
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    halt15(&_str_literal_164, call_tmp31, &_str_literal_170, call_tmp32, _ln, _fn);
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _end_item:;
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1512 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1512 */
#line 1512 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string item2(string * this24,
#line 1512 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                    int64_t i,
#line 1512 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                    int64_t _ln,
#line 1512 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                    int32_t _fn) {
#line 1513 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  codepointIndex call_tmp8;
#line 1513 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp9;
#line 1513 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl___COLON_45(i);
#line 1513 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = this14(this24, &call_tmp8, _ln, _fn);
#line 1512 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl__autoDestroy28(&call_tmp8);
#line 1512 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp9;
#line 1512 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1529 */
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string this15(string * this24,
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     range_byteIndex_both_one r,
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     Error * error_out,
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     int64_t _ln,
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     int32_t _fn) {
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string ret;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp8;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  Error error = NULL;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  error = NULL;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = getSlice5(this24, r, &error, _ln, _fn);
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (error != nil) /* ZLINE: 1530 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    *(error_out) = error;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _endthis;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = call_tmp8;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _endthis:;
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1529 */
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string this17(string * this24,
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     range_byteIndex_high_one r,
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     Error * error_out,
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     int64_t _ln,
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     int32_t _fn) {
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string ret;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp8;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  Error error = NULL;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  error = NULL;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = getSlice(this24, r, &error, _ln, _fn);
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (error != nil) /* ZLINE: 1530 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    *(error_out) = error;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _endthis;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = call_tmp8;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _endthis:;
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1529 */
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string this16(string * this24,
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     range_byteIndex_low_one r,
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     Error * error_out,
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     int64_t _ln,
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     int32_t _fn) {
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string ret;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp8;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  Error error = NULL;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  error = NULL;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = getSlice4(this24, r, &error, _ln, _fn);
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (error != nil) /* ZLINE: 1530 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    *(error_out) = error;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _endthis;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = call_tmp8;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _endthis:;
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1534 */
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string this19(string * this24,
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     range_int64_t_both_one r,
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     int64_t _ln,
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     int32_t _fn) {
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp8;
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  Error error = NULL;
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  error = NULL;
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = getSlice2(this24, r, &error, _ln, _fn);
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (error != nil) /* ZLINE: 1536 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1534 */
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string this18(string * this24,
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     range_int64_t_low_one r,
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     int64_t _ln,
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                     int32_t _fn) {
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp8;
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  Error error = NULL;
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  error = NULL;
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = getSlice3(this24, r, &error, _ln, _fn);
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (error != nil) /* ZLINE: 1536 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1543 */
#line 1543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static chpl_bool isEmpty2(string * this24) {
#line 1544 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1544 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp9;
#line 1544 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl_get_string_buffLen(this24);
#line 1544 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl___EQUALS_3(*(call_tmp8), INT64(0));
#line 1543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp9;
#line 1543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1577 */
#line 1577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static byteIndex find(string * this24,
#line 1577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                      string * pattern,
#line 1577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                      range_byteIndex_low_one indices3,
#line 1577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                      int64_t _ln,
#line 1577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                      int32_t _fn) {
#line 1577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex ret;
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp8;
#line 1580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp9;
#line 1580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex call_tmp10;
#line 1582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp11;
#line 1582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex call_tmp12;
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = isASCII(this24);
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (call_tmp8) /* ZLINE: 1579 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp9 = doSearchNoEnc(this24, pattern, indices3, _ln, _fn);
#line 1580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp10 = chpl___COLON_43(call_tmp9);
#line 1580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    ret = call_tmp10;
#line 1580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _end_find;
#line 1580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  } else /* ZLINE: 1579 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1580 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp11 = doSearchUTF8(this24, pattern, indices3, _ln, _fn);
#line 1582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp12 = chpl___COLON_43(call_tmp11);
#line 1582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    ret = call_tmp12;
#line 1582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _end_find;
#line 1582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1582 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _end_find:;
#line 1577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 1577 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1629 */
#line 1629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string replace(string * this24,
#line 1629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                      string * pattern,
#line 1629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                      string * replacement,
#line 1629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                      int64_t count,
#line 1629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                      int64_t _ln,
#line 1629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                      int32_t _fn) {
#line 1631 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp8;
#line 1631 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = doReplace(this24, pattern, replacement, count, _ln, _fn);
#line 1629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 1629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 1723 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:1723 */
#line 1723 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string strip(string * this24,
#line 1723 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                    string * chars,
#line 1723 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                    chpl_bool leading,
#line 1723 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                    chpl_bool trailing,
#line 1723 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                    int64_t _ln,
#line 1723 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                    int32_t _fn) {
#line 1723 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string ret;
#line 1725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp8;
#line 1726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp9;
#line 1728 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp10;
#line 1729 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp11;
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp12;
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string localThis;
#line 1732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string localChars;
#line 1734 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex start;
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp13 = NULL;
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp14;
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex end;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic__cpIndexLen__ref_string _iterator = NULL;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir__cpIndexLen__ref_string call_tmp15;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex default_arg_start;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir__cpIndexLen__ref_string ret_tmp;
#line 850 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp16;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string this25 = NULL;
#line 850 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string localThis2;
#line 851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp17;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_byteIndex start2 = NULL;
#line 851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t i;
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T;
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp18 = NULL;
#line 853 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_3_int32_t_byteIndex_int64_t call_tmp19;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex _yieldedIndex_x1;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int32_t thisChar;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex i2;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t nBytes;
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_codepoints__ref_string _iterator2 = NULL;
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir_codepoints__ref_string call_tmp20;
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir_codepoints__ref_string ret_tmp2;
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp21;
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string this26 = NULL;
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string localThis3;
#line 1339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t i3;
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T2;
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp22 = NULL;
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int32_t yret;
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_3_int32_t_byteIndex_int64_t call_tmp23;
#line 1740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp24;
#line 1741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex call_tmp25;
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp26 = NULL;
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp27 = NULL;
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic__cpIndexLen__ref_string _iterator3 = NULL;
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir__cpIndexLen__ref_string call_tmp28;
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir__cpIndexLen__ref_string ret_tmp3;
#line 850 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp29;
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string this27 = NULL;
#line 850 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string localThis4;
#line 851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp30;
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_byteIndex start3 = NULL;
#line 851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t i4;
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T3;
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp31 = NULL;
#line 853 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_3_int32_t_byteIndex_int64_t call_tmp32;
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex _yieldedIndex_x12;
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int32_t thisChar2;
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex i5;
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t nBytes2;
#line 1756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_codepoints__ref_string _iterator4 = NULL;
#line 1756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir_codepoints__ref_string call_tmp33;
#line 1756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir_codepoints__ref_string ret_tmp4;
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp34;
#line 1756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string this28 = NULL;
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string localThis5;
#line 1339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t i6;
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T4;
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp35 = NULL;
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int32_t yret2;
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_3_int32_t_byteIndex_int64_t call_tmp36;
#line 1757 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp37;
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp38 = NULL;
#line 1762 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex call_tmp39;
#line 1762 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex call_tmp40;
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp41 = NULL;
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  range_byteIndex_both_one call_tmp42;
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp43;
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  Error error = NULL;
#line 1725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = isASCII(this24);
#line 1725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (call_tmp8) /* ZLINE: 1725 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp9 = doStripNoEnc(this24, chars, leading, trailing, _ln, _fn);
#line 1726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    ret = call_tmp9;
#line 1726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _end_strip;
#line 1726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  } else /* ZLINE: 1727 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 1728 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp10 = isEmpty2(this24);
#line 1728 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    if (call_tmp10) /* ZLINE: 1728 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1728 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    {
#line 1728 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      ret = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 1728 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      goto _end_strip;
#line 1728 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    }
#line 1729 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp11 = isEmpty2(chars);
#line 1729 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    if (call_tmp11) /* ZLINE: 1729 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1729 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    {
#line 1729 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      ret = chpl__autoCopy2(this24, UINT8(false), _ln, _fn);
#line 1729 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      goto _end_strip;
#line 1729 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    }
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp12 = localize(this24, _ln, _fn);
#line 1731 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    localThis = call_tmp12;
#line 1732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    localChars = localize(chars, _ln, _fn);
#line 1734 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    init_ASSIGN_24(&start, INT64(0));
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp13 = chpl_get_string_buffLen(&localThis);
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp14 = chpl___HYPHEN_6(*(call_tmp13));
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    init_ASSIGN_24(&end, call_tmp14);
#line 1737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    if (leading) /* ZLINE: 1737 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    {
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      default_arg_start = _cpIndexLen_default_start(&localThis);
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _cpIndexLen(&localThis, &default_arg_start, &ret_tmp);
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp15 = ret_tmp;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _iterator = _getIterator20(&call_tmp15, _ln, _fn);
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      this25 = (_iterator)->F0_this;
#line 850 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp16 = localize(this25, _ln, _fn);
#line 850 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      localThis2 = call_tmp16;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      start2 = (_iterator)->F1_start;
#line 851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp17 = _findStartOfNextCodepointFromByte(&localThis2, start2, _ln, _fn);
#line 851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      i = call_tmp17;
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp18 = chpl_get_string_buffLen(&localThis2);
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      T = chpl___LESS_3(call_tmp17, *(call_tmp18));
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      while (T) {
#line 853 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp19 = _cpIndexLenHelpNoAdjustment(&localThis2, &i, _ln, _fn);
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        _yieldedIndex_x1 = (&call_tmp19)->x1;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        thisChar = (&call_tmp19)->x0;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        i2 = _yieldedIndex_x1;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        nBytes = (&call_tmp19)->x2;
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        codepoints(&localChars, &ret_tmp2);
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp20 = ret_tmp2;
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        _iterator2 = _getIterator23(&call_tmp20, _ln, _fn);
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl_check_nil(_iterator2, _ln, _fn);
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        this26 = (_iterator2)->F0_this;
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp21 = localize(this26, _ln, _fn);
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        localThis3 = call_tmp21;
#line 1339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        i3 = INT64(0);
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp22 = chpl_get_string_buffLen(&localThis3);
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        T2 = chpl___LESS_3(INT64(0), *(call_tmp22));
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        while (T2) {
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp23 = _cpIndexLenHelpNoAdjustment(&localThis3, &i3, _ln, _fn);
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          yret = (&call_tmp23)->x0;
#line 1740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp24 = chpl___EQUALS_2(thisChar, yret);
#line 1740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          if (call_tmp24) /* ZLINE: 1740 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          {
#line 1741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            call_tmp25 = chpl___PLUS_8(&i2, nBytes);
#line 1741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            chpl___ASSIGN_70(&start, &call_tmp25);
#line 1741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            chpl__autoDestroy26(&call_tmp25);
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            chpl__autoDestroy52(&call_tmp23);
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            chpl__autoDestroy23(&localThis3, _ln, _fn);
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            _freeIterator13(_iterator2, _ln, _fn);
#line 1742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            goto _continueLabel;
#line 1742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          }
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl__autoDestroy52(&call_tmp23);
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp26 = chpl_get_string_buffLen(&localThis3);
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T2 = chpl___LESS_3(i3, *(call_tmp26));
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        }
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl__autoDestroy23(&localThis3, _ln, _fn);
#line 1739 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        _freeIterator13(_iterator2, _ln, _fn);
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl__autoDestroy26(&i2);
#line 853 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl__autoDestroy23(&localThis2, _ln, _fn);
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        goto _breakLabel;
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        _continueLabel:;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl__autoDestroy26(&i2);
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp27 = chpl_get_string_buffLen(&localThis2);
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        T = chpl___LESS_3(i, *(call_tmp27));
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      }
#line 853 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl__autoDestroy23(&localThis2, _ln, _fn);
#line 853 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _breakLabel:;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _freeIterator16(_iterator, _ln, _fn);
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl__autoDestroy26(&default_arg_start);
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    }
#line 1749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    if (trailing) /* ZLINE: 1749 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    {
#line 1754 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl___ASSIGN_69(&end, INT64(-1));
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _cpIndexLen(&localThis, &start, &ret_tmp3);
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp28 = ret_tmp3;
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _iterator3 = _getIterator20(&call_tmp28, _ln, _fn);
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      this27 = (_iterator3)->F0_this;
#line 850 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp29 = localize(this27, _ln, _fn);
#line 850 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      localThis4 = call_tmp29;
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      start3 = (_iterator3)->F1_start;
#line 851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp30 = _findStartOfNextCodepointFromByte(&localThis4, start3, _ln, _fn);
#line 851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      i4 = call_tmp30;
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp31 = chpl_get_string_buffLen(&localThis4);
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      T3 = chpl___LESS_3(call_tmp30, *(call_tmp31));
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      while (T3) {
#line 853 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp32 = _cpIndexLenHelpNoAdjustment(&localThis4, &i4, _ln, _fn);
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        _yieldedIndex_x12 = (&call_tmp32)->x1;
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        thisChar2 = (&call_tmp32)->x0;
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        i5 = _yieldedIndex_x12;
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        nBytes2 = (&call_tmp32)->x2;
#line 1756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        codepoints(&localChars, &ret_tmp4);
#line 1756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp33 = ret_tmp4;
#line 1756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        _iterator4 = _getIterator23(&call_tmp33, _ln, _fn);
#line 1756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl_check_nil(_iterator4, _ln, _fn);
#line 1756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        this28 = (_iterator4)->F0_this;
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp34 = localize(this28, _ln, _fn);
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        localThis5 = call_tmp34;
#line 1339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        i6 = INT64(0);
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp35 = chpl_get_string_buffLen(&localThis5);
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        T4 = chpl___LESS_3(INT64(0), *(call_tmp35));
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        while (T4) {
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp36 = _cpIndexLenHelpNoAdjustment(&localThis5, &i6, _ln, _fn);
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          yret2 = (&call_tmp36)->x0;
#line 1757 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp37 = chpl___EQUALS_2(thisChar2, yret2);
#line 1757 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          if (call_tmp37) /* ZLINE: 1757 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1757 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          {
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            chpl__autoDestroy52(&call_tmp36);
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            chpl__autoDestroy23(&localThis5, _ln, _fn);
#line 1756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            _freeIterator13(_iterator4, _ln, _fn);
#line 1758 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            goto _continueLabel2;
#line 1758 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          }
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl__autoDestroy52(&call_tmp36);
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp38 = chpl_get_string_buffLen(&localThis5);
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T4 = chpl___LESS_3(i6, *(call_tmp38));
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        }
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl__autoDestroy23(&localThis5, _ln, _fn);
#line 1756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        _freeIterator13(_iterator4, _ln, _fn);
#line 1762 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp39 = chpl___PLUS_8(&i5, nBytes2);
#line 1762 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp40 = chpl___HYPHEN_11(&call_tmp39, INT64(1));
#line 1762 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl___ASSIGN_70(&end, &call_tmp40);
#line 1762 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl__autoDestroy26(&call_tmp40);
#line 1762 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl__autoDestroy26(&call_tmp39);
#line 1762 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        _continueLabel2:;
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl__autoDestroy26(&i5);
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp41 = chpl_get_string_buffLen(&localThis4);
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        T3 = chpl___LESS_3(i4, *(call_tmp41));
#line 852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      }
#line 853 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl__autoDestroy23(&localThis4, _ln, _fn);
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _freeIterator16(_iterator3, _ln, _fn);
#line 1755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    }
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp42 = chpl_build_bounded_range4(&start, &end);
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    error = NULL;
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp43 = this15(&localThis, call_tmp42, &error, _ln, _fn);
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    if (error != nil) /* ZLINE: 1766 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    {
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl_uncaught_error(error, _ln, _fn);
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    }
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    ret = call_tmp43;
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy55(call_tmp42);
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy26(&end);
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy26(&start);
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy23(&localChars, _ln, _fn);
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__autoDestroy23(&localThis, _ln, _fn);
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _end_strip;
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 1766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _end_strip:;
#line 1723 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 1723 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 2111 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:2111 */
#line 2111 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void chpl___ASSIGN_69(byteIndex * lhs,
#line 2111 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                             int64_t rhs) {
#line 2112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 2112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl_get_byteIndex__bindex(lhs);
#line 2112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl___ASSIGN_3(call_tmp8, rhs);
#line 2111 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 2111 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 2115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:2115 */
#line 2115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void chpl___ASSIGN_70(byteIndex * lhs,
#line 2115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                             byteIndex * rhs) {
#line 2115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  *(lhs) = *(rhs);
#line 2115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 2115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 2136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:2136 */
#line 2136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void chpl___ASSIGN_71(string * lhs,
#line 2136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                             string * rhs,
#line 2136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                             int64_t _ln,
#line 2136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                             int32_t _fn) {
#line 2137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  doAssign(lhs, rhs, _ln, _fn);
#line 2136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 2136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 2146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:2146 */
#line 2146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string chpl___PLUS_9(string * s0,
#line 2146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                            string * s1,
#line 2146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                            int64_t _ln,
#line 2146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                            int32_t _fn) {
#line 2147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string call_tmp8;
#line 2147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = doConcat(s0, s1, _ln, _fn);
#line 2146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 2146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 2265 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:2265 */
#line 2265 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void chpl___PLUS__ASSIGN_3(string * lhs,
#line 2265 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  string * rhs,
#line 2265 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  int64_t _ln,
#line 2265 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  int32_t _fn) {
#line 2266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  doAppend(lhs, rhs, _ln, _fn);
#line 2265 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 2265 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 2316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:2316 */
#line 2316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static chpl_bool chpl___EQUALS_23(string * a,
#line 2316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  string * b,
#line 2316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  int64_t _ln,
#line 2316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  int32_t _fn) {
#line 2331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp8;
#line 2331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = doEq(a, b, _ln, _fn);
#line 2316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 2316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 2335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:2335 */
#line 2335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static chpl_bool chpl___EXCLAMATION__ASSIGN_11(string * a,
#line 2335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                               string * b,
#line 2335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                               int64_t _ln,
#line 2335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                               int32_t _fn) {
#line 2336 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp8;
#line 2336 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp9;
#line 2336 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = doEq(a, b, _ln, _fn);
#line 2336 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl___EXCLAMATION_(call_tmp8);
#line 2335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp9;
#line 2335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 2340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:2340 */
#line 2340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static chpl_bool chpl___LESS_6(string * a,
#line 2340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                               string * b,
#line 2340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                               int64_t _ln,
#line 2340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                               int32_t _fn) {
#line 2341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp8;
#line 2341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = doLessThan(a, b, _ln, _fn);
#line 2340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 2340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 2345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:2345 */
#line 2345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static chpl_bool chpl___GREATER_6(string * a,
#line 2345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  string * b,
#line 2345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  int64_t _ln,
#line 2345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                  int32_t _fn) {
#line 2346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp8;
#line 2346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = doGreaterThan(a, b, _ln, _fn);
#line 2345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return call_tmp8;
#line 2345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 2451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:2451 */
#line 2451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int64_t chpl___COLON_42(byteIndex * cpi) {
#line 2451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t ret;
#line 2452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 2452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl_get_byteIndex__bindex(cpi);
#line 2452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = *(call_tmp8);
#line 2451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 2451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 2457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:2457 */
#line 2457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static byteIndex chpl___COLON_43(int64_t i) {
#line 2457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex ret;
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex cpi;
#line 2459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  init94(&cpi);
#line 2459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl_get_byteIndex__bindex(&cpi);
#line 2459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl___ASSIGN_3(call_tmp8, i);
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = cpi;
#line 2457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 2457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 2465 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:2465 */
#line 2465 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static int64_t chpl___COLON_44(codepointIndex * cpi) {
#line 2465 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t ret;
#line 2466 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 2466 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl_get_codepointIndex__cpindex(cpi);
#line 2466 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = *(call_tmp8);
#line 2465 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 2465 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 2471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:2471 */
#line 2471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static codepointIndex chpl___COLON_45(int64_t i) {
#line 2471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  codepointIndex ret;
#line 2472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  codepointIndex cpi;
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 2472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  init95(&cpi);
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl_get_codepointIndex__cpindex(&cpi);
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl___ASSIGN_3(call_tmp8, i);
#line 2474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = cpi;
#line 2471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 2471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

