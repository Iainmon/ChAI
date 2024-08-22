#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
/* ChapelIOStringifyHelper.chpl:24 */
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
static void chpl__init_ChapelIOStringifyHelper(int64_t _ln,
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                               int32_t _fn) {
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  if (chpl__init_ChapelIOStringifyHelper_p) /* ZLINE: 24 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl */
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  {
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
    goto _exit_chpl__init_ChapelIOStringifyHelper;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  }
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  printModuleInit("%*s\n", "ChapelIOStringifyHelper", INT64(23), _ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  refIndentLevel = &moduleInitLevel;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  *(refIndentLevel) += INT64(1);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__init_ChapelIOStringifyHelper_p = UINT8(true);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  {
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
    chpl__init_BytesStringCommon(_ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  }
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  *(refIndentLevel) -= INT64(1);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _exit_chpl__init_ChapelIOStringifyHelper:;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  return;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
}

#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
/* ChapelIOStringifyHelper.chpl:70 */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
static string stringify_simple13(string * _e0_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 int64_t _e1_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 string * _e2_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 int64_t _ln,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 int32_t _fn) {
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_3__ref_string_int64_t__ref_string args;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_3__ref_string_int64_t__ref_string ret_tmp;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string ret;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string str;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp8 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp9;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp10 = NULL;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__init_tuple8(_e0_args, _e1_args, _e2_args, &ret_tmp);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  args = ret_tmp;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  str = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp8 = (&args)->x0;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp8, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp9 = chpl___COLON_48((&args)->x1, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp10 = (&args)->x2;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp10, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  ret = str;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy14(&args);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  return ret;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
}

#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
/* ChapelIOStringifyHelper.chpl:70 */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
static string stringify_simple5(c_string_rehook _e0_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int64_t _ln,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int32_t _fn) {
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_1_star_c_ptrConst_int8_t args;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_1_star_c_ptrConst_int8_t ret_tmp;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string ret;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string str;
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  Error error = NULL;
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp8;
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  c_ptrConst_int8_t coerce_tmp2 = NULL;
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  int64_t default_arg_length;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__init_tuple13(_e0_args, &ret_tmp, _ln, _fn);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  *(args + INT64(0)) = *(ret_tmp + INT64(0));
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  str = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  error = NULL;
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  coerce_tmp2 = *(args + INT64(0));
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  default_arg_length = createCopyingBuffer_default_length(coerce_tmp2, &error, _ln, _fn);
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  if (error != nil) /* ZLINE: 84 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl */
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  {
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
    goto handler;
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  }
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp8 = createCopyingBuffer(coerce_tmp2, default_arg_length, decodePolicy_replace, &error, _ln, _fn);
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  if (error != nil) /* ZLINE: 84 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl */
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  {
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
    goto handler;
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  }
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp8, _ln, _fn);
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  handler:;
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  if (error != nil) /* ZLINE: 83 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl */
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  {
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  }
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  ret = str;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy33(&args);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  return ret;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
}

#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
/* ChapelIOStringifyHelper.chpl:70 */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
static string stringify_simple11(string * _e0_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 int64_t _e1_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 string * _e2_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 int64_t _e3_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 string * _e4_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 int64_t _ln,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 int32_t _fn) {
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string args;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string ret_tmp;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string ret;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string str;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp8 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp9;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp10 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp11;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp12 = NULL;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__init_tuple20(_e0_args, _e1_args, _e2_args, _e3_args, _e4_args, &ret_tmp);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  args = ret_tmp;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  str = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp8 = (&args)->x0;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp8, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp9 = chpl___COLON_48((&args)->x1, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp10 = (&args)->x2;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp10, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp11 = chpl___COLON_48((&args)->x3, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp11, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp12 = (&args)->x4;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp12, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  ret = str;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy29(&args);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  return ret;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
}

#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
/* ChapelIOStringifyHelper.chpl:70 */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
static string stringify_simple10(string * _e0_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 string * _e1_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 int64_t _e2_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 string * _e3_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 range_int64_t_both_one _e4_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 int64_t _ln,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 int32_t _fn) {
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one args;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one ret_tmp;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string ret;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string str;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp8 = NULL;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp9 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp10;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp11 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp12;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  range_int64_t_both_one coerce_tmp2;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__init_tuple18(_e0_args, _e1_args, _e2_args, _e3_args, _e4_args, &ret_tmp);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  args = ret_tmp;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  str = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp8 = (&args)->x0;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp8, _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp9 = (&args)->x1;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp10 = chpl___COLON_48((&args)->x2, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp10, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp10, _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp11 = (&args)->x3;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp11, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  coerce_tmp2 = (&args)->x4;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp12 = chpl___COLON_27(coerce_tmp2, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp12, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy59(coerce_tmp2);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  ret = str;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy35(&args);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  return ret;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
}

#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
/* ChapelIOStringifyHelper.chpl:70 */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
static string stringify_simple(string * _e0_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                               range_int64_t_both_one _e1_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                               string * _e2_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                               int64_t _e3_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                               int64_t _ln,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                               int32_t _fn) {
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t args;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t ret_tmp;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string ret;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string str;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp8 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp9;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  range_int64_t_both_one coerce_tmp2;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp10 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp11;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__init_tuple22(_e0_args, _e1_args, _e2_args, _e3_args, &ret_tmp);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  args = ret_tmp;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  str = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp8 = (&args)->x0;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp8, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  coerce_tmp2 = (&args)->x1;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp9 = chpl___COLON_27(coerce_tmp2, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy59(coerce_tmp2);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp10 = (&args)->x2;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp10, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp11 = chpl___COLON_48((&args)->x3, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp11, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  ret = str;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy32(&args);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  return ret;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
}

#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
/* ChapelIOStringifyHelper.chpl:70 */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
static string stringify_simple2(string * _e0_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                range_byteIndex_both_one _e1_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                string * _e2_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int64_t _e3_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int64_t _ln,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int32_t _fn) {
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t args;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t ret_tmp;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string ret;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string str;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp8 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp9;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  range_byteIndex_both_one coerce_tmp2;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp10 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp11;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__init_tuple21(_e0_args, _e1_args, _e2_args, _e3_args, &ret_tmp);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  args = ret_tmp;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  str = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp8 = (&args)->x0;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp8, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  coerce_tmp2 = (&args)->x1;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp9 = chpl___COLON_26(coerce_tmp2, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy55(coerce_tmp2);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp10 = (&args)->x2;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp10, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp11 = chpl___COLON_48((&args)->x3, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp11, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  ret = str;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy60(&args);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  return ret;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
}

#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
/* ChapelIOStringifyHelper.chpl:70 */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
static string stringify_simple4(string * _e0_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int64_t _e1_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                string * _e2_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int64_t _e3_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int64_t _ln,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int32_t _fn) {
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_4__ref_string_int64_t__ref_string_int64_t args;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_4__ref_string_int64_t__ref_string_int64_t ret_tmp;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string ret;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string str;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp8 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp9;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp10 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp11;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__init_tuple4(_e0_args, _e1_args, _e2_args, _e3_args, &ret_tmp);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  args = ret_tmp;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  str = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp8 = (&args)->x0;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp8, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp9 = chpl___COLON_48((&args)->x1, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp10 = (&args)->x2;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp10, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp11 = chpl___COLON_48((&args)->x3, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp11, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  ret = str;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy63(&args);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  return ret;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
}

#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
/* ChapelIOStringifyHelper.chpl:70 */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
static string stringify_simple6(string * _e0_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                range_int64_t_low_one _e1_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                string * _e2_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int64_t _e3_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int64_t _ln,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int32_t _fn) {
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t args;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t ret_tmp;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string ret;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string str;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp8 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp9;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  range_int64_t_low_one coerce_tmp2;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp10 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp11;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__init_tuple3(_e0_args, _e1_args, _e2_args, _e3_args, &ret_tmp);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  args = ret_tmp;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  str = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp8 = (&args)->x0;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp8, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  coerce_tmp2 = (&args)->x1;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp9 = chpl___COLON_29(coerce_tmp2, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy19(coerce_tmp2);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp10 = (&args)->x2;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp10, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp11 = chpl___COLON_48((&args)->x3, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp11, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  ret = str;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy61(&args);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  return ret;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
}

#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
/* ChapelIOStringifyHelper.chpl:70 */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
static string stringify_simple14(string * _e0_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 range_byteIndex_low_one _e1_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 string * _e2_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 int64_t _e3_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 int64_t _ln,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 int32_t _fn) {
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t args;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t ret_tmp;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string ret;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string str;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp8 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp9;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  range_byteIndex_low_one coerce_tmp2;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp10 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp11;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__init_tuple11(_e0_args, _e1_args, _e2_args, _e3_args, &ret_tmp);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  args = ret_tmp;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  str = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp8 = (&args)->x0;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp8, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  coerce_tmp2 = (&args)->x1;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp9 = chpl___COLON_25(coerce_tmp2, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy65(coerce_tmp2);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp10 = (&args)->x2;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp10, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp11 = chpl___COLON_48((&args)->x3, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp11, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  ret = str;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy36(&args);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  return ret;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
}

#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
/* ChapelIOStringifyHelper.chpl:70 */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
static string stringify_simple9(string * _e0_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                range_byteIndex_high_one _e1_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                string * _e2_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int64_t _e3_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int64_t _ln,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int32_t _fn) {
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t args;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t ret_tmp;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string ret;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string str;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp8 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp9;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  range_byteIndex_high_one coerce_tmp2;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp10 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp11;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__init_tuple2(_e0_args, _e1_args, _e2_args, _e3_args, &ret_tmp);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  args = ret_tmp;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  str = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp8 = (&args)->x0;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp8, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  coerce_tmp2 = (&args)->x1;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp9 = chpl___COLON_28(coerce_tmp2, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy22(coerce_tmp2);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp10 = (&args)->x2;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp10, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp11 = chpl___COLON_48((&args)->x3, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp11, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  ret = str;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy56(&args);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  return ret;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
}

#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
/* ChapelIOStringifyHelper.chpl:70 */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
static string stringify_simple3(string * _e0_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                string * _e1_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                string * _e2_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                string * _e3_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int64_t _ln,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int32_t _fn) {
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_4_star__ref_string args;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_4_star__ref_string ret_tmp;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string ret;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string str;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp8 = NULL;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp9 = NULL;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp10 = NULL;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp11 = NULL;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__init_tuple12(_e0_args, _e1_args, _e2_args, _e3_args, &ret_tmp);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  *(args + INT64(0)) = *(ret_tmp + INT64(0));
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  *(args + INT64(1)) = *(ret_tmp + INT64(1));
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  *(args + INT64(2)) = *(ret_tmp + INT64(2));
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  *(args + INT64(3)) = *(ret_tmp + INT64(3));
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  str = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp8 = *(args + INT64(0));
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp8, _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp9 = *(args + INT64(1));
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp9, _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp10 = *(args + INT64(2));
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp10, _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp11 = *(args + INT64(3));
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp11, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  ret = str;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy62(&args);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  return ret;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
}

#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
/* ChapelIOStringifyHelper.chpl:70 */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
static string stringify_simple8(string * _e0_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int32_t _e1_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                string * _e2_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int64_t _e3_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int64_t _ln,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int32_t _fn) {
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_4__ref_string_int32_t__ref_string_int64_t args;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_4__ref_string_int32_t__ref_string_int64_t ret_tmp;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string ret;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string str;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp8 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp9;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp10 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp11;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__init_tuple27(_e0_args, _e1_args, _e2_args, _e3_args, &ret_tmp);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  args = ret_tmp;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  str = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp8 = (&args)->x0;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp8, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp9 = chpl___COLON_50((&args)->x1, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp10 = (&args)->x2;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp10, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp11 = chpl___COLON_48((&args)->x3, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp11, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  ret = str;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy57(&args);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  return ret;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
}

#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
/* ChapelIOStringifyHelper.chpl:70 */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
static string stringify_simple12(string * _e0_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 uint64_t _e1_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 int64_t _ln,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                 int32_t _fn) {
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_2__ref_string_uint64_t args;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_2__ref_string_uint64_t ret_tmp;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string ret;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string str;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp8 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp9;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__init_tuple24(_e0_args, _e1_args, &ret_tmp);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  args = ret_tmp;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  str = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp8 = (&args)->x0;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp8, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp9 = chpl___COLON_49((&args)->x1, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  ret = str;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy51(&args);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  return ret;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
}

#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
/* ChapelIOStringifyHelper.chpl:70 */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
static string stringify_simple7(string * _e0_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int64_t _e1_args,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int64_t _ln,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
                                int32_t _fn) {
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_2__ref_string_int64_t args;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _tuple_2__ref_string_int64_t ret_tmp;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string ret;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string str;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  _ref_string call_tmp8 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  string call_tmp9;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__init_tuple30(_e0_args, _e1_args, &ret_tmp);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  args = ret_tmp;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  str = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp8 = (&args)->x0;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, call_tmp8, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  call_tmp9 = chpl___COLON_48((&args)->x1, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl___PLUS__ASSIGN_3(&str, &call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  ret = str;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  chpl__autoDestroy31(&args);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
  return ret;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelIOStringifyHelper.chpl"
}

