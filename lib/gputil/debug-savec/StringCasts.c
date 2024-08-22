#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
/* StringCasts.chpl:21 */
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
static void chpl__init_StringCasts(int64_t _ln,
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                                   int32_t _fn) {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  if (chpl__init_StringCasts_p) /* ZLINE: 21 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    goto _exit_chpl__init_StringCasts;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  }
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  printModuleInit("%*s\n", "StringCasts", INT64(11), _ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  refIndentLevel = &moduleInitLevel;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  *(refIndentLevel) += INT64(1);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl__init_StringCasts_p = UINT8(true);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__init_BytesStringCommon(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__init_NVStringFactory(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  }
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  *(refIndentLevel) -= INT64(1);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _exit_chpl__init_StringCasts:;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  return;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
}

#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
/* StringCasts.chpl:45 */
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
static chpl_bool chpl___COLON_46(string * x2,
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                                 Error * error_out,
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                                 int64_t _ln,
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                                 int32_t _fn) {
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl_bool ret;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string str;
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl_bool call_tmp8;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError call_tmp9;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  IllegalArgumentError new_temp = NULL;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError initTemp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  Error call_tmp10 = NULL;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_Error _formal_tmp_in_err;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl_bool call_tmp11;
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl_bool call_tmp12;
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp13;
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp14;
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError call_tmp15;
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  IllegalArgumentError new_temp2 = NULL;
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError initTemp2;
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  Error call_tmp16 = NULL;
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_Error _formal_tmp_in_err2;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  str = strip(x2, &_str_literal_179, UINT8(true), UINT8(true), _ln, _fn);
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp8 = isEmpty2(&str);
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  if (call_tmp8) /* ZLINE: 47 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  {
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    new_temp = _new15(&_str_literal_104, _ln, _fn);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    init75(&initTemp, new_temp);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp9 = initTemp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    _formal_tmp_in_err = chpl___COLON_35(&call_tmp9, _ln, _fn);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp10 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    *(error_out) = call_tmp10;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&str, _ln, _fn);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    goto _end__COLON_;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  } else /* ZLINE: 47 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  {
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp11 = chpl___EQUALS_23(&str, &_str_literal_102, _ln, _fn);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    if (call_tmp11) /* ZLINE: 49 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    {
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
      ret = UINT8(true);
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
      chpl__autoDestroy23(&str, _ln, _fn);
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
      goto _end__COLON_;
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    } else /* ZLINE: 49 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    {
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
      call_tmp12 = chpl___EQUALS_23(&str, &_str_literal_103, _ln, _fn);
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
      if (call_tmp12) /* ZLINE: 51 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
      {
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
        ret = UINT8(false);
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
        chpl__autoDestroy23(&str, _ln, _fn);
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
        goto _end__COLON_;
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
      } else /* ZLINE: 53 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
      {
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
        call_tmp13 = chpl___PLUS_9(&_str_literal_105, x2, _ln, _fn);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
        call_tmp14 = chpl___PLUS_9(&call_tmp13, &_str_literal_106, _ln, _fn);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
        new_temp2 = _new15(&call_tmp14, _ln, _fn);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
        init75(&initTemp2, new_temp2);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
        call_tmp15 = initTemp2;
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
        _formal_tmp_in_err2 = chpl___COLON_35(&call_tmp15, _ln, _fn);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
        call_tmp16 = chpl_fix_thrown_error(&_formal_tmp_in_err2, _ln, _fn);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
        *(error_out) = call_tmp16;
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
        chpl__autoDestroy23(&call_tmp14, _ln, _fn);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
        chpl__autoDestroy23(&call_tmp13, _ln, _fn);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
        chpl__autoDestroy23(&str, _ln, _fn);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
        goto _end__COLON_;
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
      }
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    }
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  }
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _end__COLON_:;
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  return ret;
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
}

#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
/* StringCasts.chpl:74 */
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
static string chpl___COLON_48(int64_t x2,
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                              int64_t _ln,
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                              int32_t _fn) {
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl_bool isErr;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  c_ptrConst_int8_t call_tmp8 = NULL;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError call_tmp9;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  IllegalArgumentError new_temp = NULL;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError initTemp;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  Error call_tmp10 = NULL;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_Error _formal_tmp_in_err;
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  uint64_t call_tmp11;
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  int64_t call_tmp12;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  c_ptr_uint8_t call_tmp13 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  int64_t call_tmp14;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp15;
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  isErr = UINT8(false);
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp8 = integral_to_c_string(x2, ((uint32_t)(INT64(8))), UINT8(true), &isErr);
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  if (isErr) /* ZLINE: 85 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  {
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    new_temp = _new15(&_str_literal_110, _ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    init75(&initTemp, new_temp);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp9 = initTemp;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    _formal_tmp_in_err = chpl___COLON_35(&call_tmp9, _ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp10 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    if (call_tmp10 != nil) /* ZLINE: 86 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    {
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
      chpl_uncaught_error(call_tmp10, _ln, _fn);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    }
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  }
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp11 = strlen(call_tmp8);
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp12 = safeCast4(call_tmp11, _ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp13 = chpl___COLON_55(call_tmp8, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp14 = chpl___PLUS_7(call_tmp12);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp15 = chpl_createStringWithOwnedBufferNV(call_tmp13, call_tmp12, call_tmp14, call_tmp12, _ln, _fn);
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  return call_tmp15;
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
}

#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
/* StringCasts.chpl:74 */
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
static string chpl___COLON_49(uint64_t x2,
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                              int64_t _ln,
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                              int32_t _fn) {
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl_bool isErr;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  int64_t call_tmp8;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError call_tmp10;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  IllegalArgumentError new_temp = NULL;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError initTemp;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  Error call_tmp11 = NULL;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_Error _formal_tmp_in_err;
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  uint64_t call_tmp12;
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  int64_t call_tmp13;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  c_ptr_uint8_t call_tmp14 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  int64_t call_tmp15;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp16;
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  isErr = UINT8(false);
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp8 = chpl___COLON_6(x2, _ln, _fn);
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp9 = integral_to_c_string(call_tmp8, ((uint32_t)(INT64(8))), UINT8(false), &isErr);
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  if (isErr) /* ZLINE: 85 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  {
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    new_temp = _new15(&_str_literal_110, _ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    init75(&initTemp, new_temp);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp10 = initTemp;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    _formal_tmp_in_err = chpl___COLON_35(&call_tmp10, _ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp11 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    if (call_tmp11 != nil) /* ZLINE: 86 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    {
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
      chpl_uncaught_error(call_tmp11, _ln, _fn);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    }
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  }
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp12 = strlen(call_tmp9);
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp13 = safeCast4(call_tmp12, _ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp14 = chpl___COLON_55(call_tmp9, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp15 = chpl___PLUS_7(call_tmp13);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp16 = chpl_createStringWithOwnedBufferNV(call_tmp14, call_tmp13, call_tmp15, call_tmp13, _ln, _fn);
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  return call_tmp16;
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
}

#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
/* StringCasts.chpl:74 */
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
static string chpl___COLON_50(int32_t x2,
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                              int64_t _ln,
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                              int32_t _fn) {
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl_bool isErr;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  c_ptrConst_int8_t call_tmp8 = NULL;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError call_tmp9;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  IllegalArgumentError new_temp = NULL;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError initTemp;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  Error call_tmp10 = NULL;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_Error _formal_tmp_in_err;
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  uint64_t call_tmp11;
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  int64_t call_tmp12;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  c_ptr_uint8_t call_tmp13 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  int64_t call_tmp14;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp15;
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  isErr = UINT8(false);
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp8 = integral_to_c_string(((int64_t)(x2)), ((uint32_t)(INT64(4))), UINT8(true), &isErr);
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  if (isErr) /* ZLINE: 85 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  {
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    new_temp = _new15(&_str_literal_110, _ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    init75(&initTemp, new_temp);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp9 = initTemp;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    _formal_tmp_in_err = chpl___COLON_35(&call_tmp9, _ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp10 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    if (call_tmp10 != nil) /* ZLINE: 86 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    {
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
      chpl_uncaught_error(call_tmp10, _ln, _fn);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    }
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  }
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp11 = strlen(call_tmp8);
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp12 = safeCast4(call_tmp11, _ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp13 = chpl___COLON_55(call_tmp8, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp14 = chpl___PLUS_7(call_tmp12);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp15 = chpl_createStringWithOwnedBufferNV(call_tmp13, call_tmp12, call_tmp14, call_tmp12, _ln, _fn);
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  return call_tmp15;
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
}

#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
/* StringCasts.chpl:74 */
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
static string chpl___COLON_47(uint8_t x2,
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                              int64_t _ln,
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                              int32_t _fn) {
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl_bool isErr;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  c_ptrConst_int8_t call_tmp8 = NULL;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError call_tmp9;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  IllegalArgumentError new_temp = NULL;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError initTemp;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  Error call_tmp10 = NULL;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_Error _formal_tmp_in_err;
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  uint64_t call_tmp11;
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  int64_t call_tmp12;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  c_ptr_uint8_t call_tmp13 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  int64_t call_tmp14;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp15;
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  isErr = UINT8(false);
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp8 = integral_to_c_string(((int64_t)(x2)), ((uint32_t)(INT64(1))), UINT8(false), &isErr);
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  if (isErr) /* ZLINE: 85 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  {
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    new_temp = _new15(&_str_literal_110, _ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    init75(&initTemp, new_temp);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp9 = initTemp;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    _formal_tmp_in_err = chpl___COLON_35(&call_tmp9, _ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp10 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    if (call_tmp10 != nil) /* ZLINE: 86 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    {
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
      chpl_uncaught_error(call_tmp10, _ln, _fn);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    }
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  }
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp11 = strlen(call_tmp8);
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp12 = safeCast4(call_tmp11, _ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp13 = chpl___COLON_55(call_tmp8, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp14 = chpl___PLUS_7(call_tmp12);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp15 = chpl_createStringWithOwnedBufferNV(call_tmp13, call_tmp12, call_tmp14, call_tmp12, _ln, _fn);
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  return call_tmp15;
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
}

#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
/* StringCasts.chpl:98 */
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
static int64_t chpl___COLON_52(string * x2,
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                               Error * error_out,
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                               int64_t _ln,
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                               int32_t _fn) {
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  int64_t ret;
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  int64_t retVal;
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl_bool isErr;
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string localX;
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl_bool call_tmp8;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError call_tmp9;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  IllegalArgumentError new_temp = NULL;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError initTemp;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  Error call_tmp10 = NULL;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_Error _formal_tmp_in_err;
#line 136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl_bool call_tmp11;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp12;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp13;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp14;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError call_tmp15;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  IllegalArgumentError new_temp2 = NULL;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError initTemp2;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  Error call_tmp16 = NULL;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_Error _formal_tmp_in_err2;
#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  c_ptrConst_int8_t call_tmp17 = NULL;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp18;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp19;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp20;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError call_tmp21;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  IllegalArgumentError new_temp3 = NULL;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError initTemp3;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  Error call_tmp22 = NULL;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_Error _formal_tmp_in_err3;
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  isErr = UINT8(false);
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  localX = localize(x2, _ln, _fn);
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp8 = isEmpty2(&localX);
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  if (call_tmp8) /* ZLINE: 130 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  {
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    new_temp = _new15(&_str_literal_3315, _ln, _fn);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    init75(&initTemp, new_temp);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp9 = initTemp;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    _formal_tmp_in_err = chpl___COLON_35(&call_tmp9, _ln, _fn);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp10 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    *(error_out) = call_tmp10;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&localX, _ln, _fn);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    goto _end__COLON_;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  }
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _cleanupForNumericCast(&localX, _ln, _fn);
#line 136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp11 = isEmpty2(&localX);
#line 136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  if (call_tmp11) /* ZLINE: 136 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  {
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp12 = chpl___PLUS_9(&_str_literal_105, x2, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp13 = chpl___PLUS_9(&call_tmp12, &_str_literal_112, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp14 = chpl___PLUS_9(&call_tmp13, &_str_literal_3197, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    new_temp2 = _new15(&call_tmp14, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    init75(&initTemp2, new_temp2);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp15 = initTemp2;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    _formal_tmp_in_err2 = chpl___COLON_35(&call_tmp15, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp16 = chpl_fix_thrown_error(&_formal_tmp_in_err2, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    *(error_out) = call_tmp16;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&call_tmp14, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&call_tmp13, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&localX, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    goto _end__COLON_;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  }
#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp17 = c_str(&localX, _ln, _fn);
#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  retVal = c_string_to_int64_t(call_tmp17, &isErr, _ln, _fn);
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  if (isErr) /* ZLINE: 157 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  {
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp18 = chpl___PLUS_9(&_str_literal_105, x2, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp19 = chpl___PLUS_9(&call_tmp18, &_str_literal_112, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp20 = chpl___PLUS_9(&call_tmp19, &_str_literal_3197, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    new_temp3 = _new15(&call_tmp20, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    init75(&initTemp3, new_temp3);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp21 = initTemp3;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    _formal_tmp_in_err3 = chpl___COLON_35(&call_tmp21, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp22 = chpl_fix_thrown_error(&_formal_tmp_in_err3, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    *(error_out) = call_tmp22;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&call_tmp20, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&call_tmp19, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&call_tmp18, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&localX, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    goto _end__COLON_;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  }
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  ret = retVal;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl__autoDestroy23(&localX, _ln, _fn);
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _end__COLON_:;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  return ret;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
}

#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
/* StringCasts.chpl:98 */
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
static uint64_t chpl___COLON_51(string * x2,
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                                Error * error_out,
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                                int64_t _ln,
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                                int32_t _fn) {
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  uint64_t ret;
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  uint64_t retVal;
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl_bool isErr;
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string localX;
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl_bool call_tmp8;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError call_tmp9;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  IllegalArgumentError new_temp = NULL;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError initTemp;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  Error call_tmp10 = NULL;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_Error _formal_tmp_in_err;
#line 136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl_bool call_tmp11;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp12;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp13;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp14;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError call_tmp15;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  IllegalArgumentError new_temp2 = NULL;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError initTemp2;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  Error call_tmp16 = NULL;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_Error _formal_tmp_in_err2;
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  c_ptrConst_int8_t call_tmp17 = NULL;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp18;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp19;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp20;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError call_tmp21;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  IllegalArgumentError new_temp3 = NULL;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError initTemp3;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  Error call_tmp22 = NULL;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_Error _formal_tmp_in_err3;
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  isErr = UINT8(false);
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  localX = localize(x2, _ln, _fn);
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp8 = isEmpty2(&localX);
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  if (call_tmp8) /* ZLINE: 130 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  {
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    new_temp = _new15(&_str_literal_3353, _ln, _fn);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    init75(&initTemp, new_temp);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp9 = initTemp;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    _formal_tmp_in_err = chpl___COLON_35(&call_tmp9, _ln, _fn);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp10 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    *(error_out) = call_tmp10;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&localX, _ln, _fn);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    goto _end__COLON_;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  }
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _cleanupForNumericCast(&localX, _ln, _fn);
#line 136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp11 = isEmpty2(&localX);
#line 136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  if (call_tmp11) /* ZLINE: 136 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 136 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  {
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp12 = chpl___PLUS_9(&_str_literal_105, x2, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp13 = chpl___PLUS_9(&call_tmp12, &_str_literal_112, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp14 = chpl___PLUS_9(&call_tmp13, &_str_literal_3200, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    new_temp2 = _new15(&call_tmp14, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    init75(&initTemp2, new_temp2);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp15 = initTemp2;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    _formal_tmp_in_err2 = chpl___COLON_35(&call_tmp15, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp16 = chpl_fix_thrown_error(&_formal_tmp_in_err2, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    *(error_out) = call_tmp16;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&call_tmp14, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&call_tmp13, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&localX, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    goto _end__COLON_;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  }
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp17 = c_str(&localX, _ln, _fn);
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  retVal = c_string_to_uint64_t(call_tmp17, &isErr, _ln, _fn);
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  if (isErr) /* ZLINE: 157 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  {
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp18 = chpl___PLUS_9(&_str_literal_105, x2, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp19 = chpl___PLUS_9(&call_tmp18, &_str_literal_112, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp20 = chpl___PLUS_9(&call_tmp19, &_str_literal_3200, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    new_temp3 = _new15(&call_tmp20, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    init75(&initTemp3, new_temp3);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp21 = initTemp3;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    _formal_tmp_in_err3 = chpl___COLON_35(&call_tmp21, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp22 = chpl_fix_thrown_error(&_formal_tmp_in_err3, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    *(error_out) = call_tmp22;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&call_tmp20, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&call_tmp19, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&call_tmp18, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&localX, _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    goto _end__COLON_;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  }
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  ret = retVal;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl__autoDestroy23(&localX, _ln, _fn);
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _end__COLON_:;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  return ret;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
}

#line 194 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
/* StringCasts.chpl:194 */
#line 194 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
static _real64 chpl___COLON_53(string * x2,
#line 194 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                               Error * error_out,
#line 194 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                               int64_t _ln,
#line 194 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
                               int32_t _fn) {
#line 194 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _real64 ret;
#line 202 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _real64 retVal;
#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl_bool isErr;
#line 204 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string localX;
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl_bool call_tmp8;
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError call_tmp9;
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  IllegalArgumentError new_temp = NULL;
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError initTemp;
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  Error call_tmp10 = NULL;
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_Error _formal_tmp_in_err;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  c_ptrConst_int8_t call_tmp11 = NULL;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp12;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp13;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp14;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  string call_tmp15;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError call_tmp16;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  IllegalArgumentError new_temp2 = NULL;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_IllegalArgumentError initTemp2;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  Error call_tmp17 = NULL;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _owned_Error _formal_tmp_in_err2;
#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  isErr = UINT8(false);
#line 204 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  localX = localize(x2, _ln, _fn);
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp8 = isEmpty2(&localX);
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  if (call_tmp8) /* ZLINE: 206 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  {
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    new_temp = _new15(&_str_literal_3294, _ln, _fn);
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    init75(&initTemp, new_temp);
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp9 = initTemp;
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    _formal_tmp_in_err = chpl___COLON_35(&call_tmp9, _ln, _fn);
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp10 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    *(error_out) = call_tmp10;
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&localX, _ln, _fn);
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    goto _end__COLON_;
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  }
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _cleanupForNumericCast(&localX, _ln, _fn);
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  call_tmp11 = c_str(&localX, _ln, _fn);
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  retVal = c_string_to_real64(call_tmp11, &isErr, _ln, _fn);
#line 218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  if (isErr) /* ZLINE: 218 /Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl */
#line 218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  {
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp12 = chpl___PLUS_9(&_str_literal_105, x2, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp13 = chpl___PLUS_9(&call_tmp12, &_str_literal_116, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp14 = chpl___PLUS_9(&call_tmp13, &_str_literal_3235, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp15 = chpl___PLUS_9(&call_tmp14, &_str_literal_82, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    new_temp2 = _new15(&call_tmp15, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    init75(&initTemp2, new_temp2);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp16 = initTemp2;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    _formal_tmp_in_err2 = chpl___COLON_35(&call_tmp16, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    call_tmp17 = chpl_fix_thrown_error(&_formal_tmp_in_err2, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    *(error_out) = call_tmp17;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&call_tmp15, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&call_tmp14, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&call_tmp13, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    chpl__autoDestroy23(&localX, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
    goto _end__COLON_;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  }
#line 221 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  ret = retVal;
#line 221 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  chpl__autoDestroy23(&localX, _ln, _fn);
#line 221 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  _end__COLON_:;
#line 194 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
  return ret;
#line 194 "/Users/iainmoncrief/Desktop/chapel/modules/internal/StringCasts.chpl"
}

