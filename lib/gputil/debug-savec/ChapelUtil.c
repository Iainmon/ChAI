#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:25 */
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static void chpl__init_ChapelUtil(int64_t _ln,
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                  int32_t _fn) {
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (chpl__init_ChapelUtil_p) /* ZLINE: 25 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto _exit_chpl__init_ChapelUtil;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  printModuleInit("%*s\n", "ChapelUtil", INT64(10), _ln, _fn);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  refIndentLevel = &moduleInitLevel;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  *(refIndentLevel) += INT64(1);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl__init_ChapelUtil_p = UINT8(true);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl__init_Regex(_ln, _fn);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  *(refIndentLevel) -= INT64(1);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _exit_chpl__init_ChapelUtil:;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:32 */
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static chpl_bool safeAdd(int64_t a,
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                         int64_t b) {
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool ret;
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp8;
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp9;
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t call_tmp10;
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp11;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp12;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t call_tmp13;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp14;
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = chpl___LESS_3(a, INT64(0));
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (call_tmp8) /* ZLINE: 35 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    call_tmp9 = chpl___GREATER__ASSIGN_5(b);
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    if (call_tmp9) /* ZLINE: 36 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    {
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      ret = UINT8(true);
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      goto _end_safeAdd;
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    } else /* ZLINE: 38 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    {
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      call_tmp10 = chpl___HYPHEN_10(a);
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      call_tmp11 = chpl___LESS_3(b, call_tmp10);
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      if (call_tmp11) /* ZLINE: 39 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      {
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        ret = UINT8(false);
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        goto _end_safeAdd;
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      } else /* ZLINE: 41 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      {
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        ret = UINT8(true);
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        goto _end_safeAdd;
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      }
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    }
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  } else /* ZLINE: 45 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    call_tmp12 = chpl___LESS__ASSIGN_(b, INT64(0));
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    if (call_tmp12) /* ZLINE: 46 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    {
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      ret = UINT8(true);
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      goto _end_safeAdd;
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    } else /* ZLINE: 48 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    {
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      call_tmp13 = chpl___HYPHEN_7(a);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      call_tmp14 = chpl___GREATER_(b, call_tmp13);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      if (call_tmp14) /* ZLINE: 49 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      {
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        ret = UINT8(false);
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        goto _end_safeAdd;
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      } else /* ZLINE: 51 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      {
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        ret = UINT8(true);
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        goto _end_safeAdd;
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      }
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    }
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end_safeAdd:;
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:105 */
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static chpl_bool safeMul(uint64_t a,
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                         uint64_t b,
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                         int64_t _ln,
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                         int32_t _fn) {
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool ret;
#line 108 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp8;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp9;
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  uint64_t call_tmp10;
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp11;
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  uint64_t call_tmp12;
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp13;
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp14;
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  uint64_t call_tmp15;
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp16;
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool T;
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool T2;
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  uint64_t call_tmp17;
#line 108 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = chpl___GREATER_5(a, INT64(0), _ln, _fn);
#line 108 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (call_tmp8) /* ZLINE: 108 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 108 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    call_tmp9 = chpl___GREATER_5(b, INT64(0), _ln, _fn);
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    if (call_tmp9) /* ZLINE: 109 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    {
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      call_tmp10 = chpl___SLASH_4(b, _ln, _fn);
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      call_tmp11 = chpl___GREATER_3(a, call_tmp10);
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      if (call_tmp11) /* ZLINE: 110 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      {
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        ret = UINT8(false);
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        goto _end_safeMul;
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      }
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    } else /* ZLINE: 112 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    {
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      call_tmp12 = chpl___SLASH_3(a, _ln, _fn);
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      call_tmp13 = chpl___LESS_4(b, call_tmp12);
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      if (call_tmp13) /* ZLINE: 113 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      {
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        ret = UINT8(false);
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        goto _end_safeMul;
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      }
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    }
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  } else /* ZLINE: 116 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    call_tmp14 = chpl___GREATER_5(b, INT64(0), _ln, _fn);
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    if (call_tmp14) /* ZLINE: 117 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    {
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      call_tmp15 = chpl___SLASH_3(b, _ln, _fn);
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      call_tmp16 = chpl___LESS_4(a, call_tmp15);
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      if (call_tmp16) /* ZLINE: 118 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      {
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        ret = UINT8(false);
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        goto _end_safeMul;
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      }
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    } else /* ZLINE: 120 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    {
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      T = chpl___EXCLAMATION__ASSIGN_8(a, INT64(0), _ln, _fn);
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      if (T) /* ZLINE: 121 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      {
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        call_tmp17 = chpl___SLASH_4(a, _ln, _fn);
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        T2 = chpl___LESS_4(b, call_tmp17);
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      } else /* ZLINE: 121 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      {
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        T2 = UINT8(false);
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      }
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      if (T2) /* ZLINE: 121 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      {
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        ret = UINT8(false);
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
        goto _end_safeMul;
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
      }
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    }
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  ret = UINT8(true);
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end_safeMul:;
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:134 */
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static _real64 _command_line_cast(c_string_rehook x2,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                  int64_t _ln,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                  int32_t _fn) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _real64 ret;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  Error error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t default_arg_length;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string str;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _real64 call_tmp9;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  default_arg_length = createCopyingBuffer_default_length(x2, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = createCopyingBuffer(x2, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  str = call_tmp8;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp9 = chpl___COLON_53(&str, &error, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 151 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  ret = call_tmp9;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  goto _end__command_line_cast;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  handler:;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 142 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end__command_line_cast:;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:134 */
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static int64_t _command_line_cast5(c_string_rehook x2,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                   int64_t _ln,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                   int32_t _fn) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t ret;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  Error error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t default_arg_length;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string str;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t call_tmp9;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  default_arg_length = createCopyingBuffer_default_length(x2, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = createCopyingBuffer(x2, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  str = call_tmp8;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp9 = chpl___COLON_52(&str, &error, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 151 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  ret = call_tmp9;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  goto _end__command_line_cast;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  handler:;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 142 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end__command_line_cast:;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:134 */
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static chpl_bool _command_line_cast2(c_string_rehook x2,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                     int64_t _ln,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                     int32_t _fn) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool ret;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  Error error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t default_arg_length;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string str;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp9;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  default_arg_length = createCopyingBuffer_default_length(x2, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = createCopyingBuffer(x2, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  str = call_tmp8;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp9 = chpl___COLON_46(&str, &error, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 151 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  ret = call_tmp9;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  goto _end__command_line_cast;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  handler:;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 142 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end__command_line_cast:;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:134 */
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static int64_t _command_line_cast3(c_string_rehook x2,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                   int64_t _ln,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                   int32_t _fn) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t ret;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  Error error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t default_arg_length;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string str;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t call_tmp9;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  default_arg_length = createCopyingBuffer_default_length(x2, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = createCopyingBuffer(x2, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  str = call_tmp8;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp9 = chpl___COLON_52(&str, &error, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 151 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  ret = call_tmp9;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  goto _end__command_line_cast;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  handler:;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 142 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end__command_line_cast:;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:134 */
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static int64_t _command_line_cast13(c_string_rehook x2,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                    int64_t _ln,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                    int32_t _fn) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t ret;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  Error error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t default_arg_length;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string str;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t call_tmp9;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  default_arg_length = createCopyingBuffer_default_length(x2, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = createCopyingBuffer(x2, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  str = call_tmp8;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp9 = chpl___COLON_52(&str, &error, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 151 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  ret = call_tmp9;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  goto _end__command_line_cast;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  handler:;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 142 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end__command_line_cast:;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:134 */
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static chpl_bool _command_line_cast14(c_string_rehook x2,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                      int64_t _ln,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                      int32_t _fn) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool ret;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  Error error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t default_arg_length;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string str;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp9;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  default_arg_length = createCopyingBuffer_default_length(x2, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = createCopyingBuffer(x2, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  str = call_tmp8;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp9 = chpl___COLON_46(&str, &error, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 151 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  ret = call_tmp9;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  goto _end__command_line_cast;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  handler:;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 142 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end__command_line_cast:;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:134 */
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static chpl_bool _command_line_cast12(c_string_rehook x2,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                      int64_t _ln,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                      int32_t _fn) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool ret;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  Error error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t default_arg_length;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string str;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp9;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  default_arg_length = createCopyingBuffer_default_length(x2, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = createCopyingBuffer(x2, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  str = call_tmp8;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp9 = chpl___COLON_46(&str, &error, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 151 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  ret = call_tmp9;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  goto _end__command_line_cast;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  handler:;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 142 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end__command_line_cast:;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:134 */
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static chpl_bool _command_line_cast11(c_string_rehook x2,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                      int64_t _ln,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                      int32_t _fn) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool ret;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  Error error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t default_arg_length;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string str;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp9;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  default_arg_length = createCopyingBuffer_default_length(x2, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = createCopyingBuffer(x2, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  str = call_tmp8;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp9 = chpl___COLON_46(&str, &error, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 151 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  ret = call_tmp9;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  goto _end__command_line_cast;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  handler:;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 142 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end__command_line_cast:;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:134 */
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static chpl_bool _command_line_cast10(c_string_rehook x2,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                      int64_t _ln,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                      int32_t _fn) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool ret;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  Error error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t default_arg_length;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string str;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp9;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  default_arg_length = createCopyingBuffer_default_length(x2, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = createCopyingBuffer(x2, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  str = call_tmp8;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp9 = chpl___COLON_46(&str, &error, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 151 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  ret = call_tmp9;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  goto _end__command_line_cast;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  handler:;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 142 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end__command_line_cast:;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:134 */
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static uint64_t _command_line_cast9(c_string_rehook x2,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                    int64_t _ln,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                    int32_t _fn) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  uint64_t ret;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  Error error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t default_arg_length;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string str;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  uint64_t call_tmp9;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  default_arg_length = createCopyingBuffer_default_length(x2, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = createCopyingBuffer(x2, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  str = call_tmp8;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp9 = chpl___COLON_51(&str, &error, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 151 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  ret = call_tmp9;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  goto _end__command_line_cast;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  handler:;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 142 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end__command_line_cast:;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:134 */
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static uint64_t _command_line_cast8(c_string_rehook x2,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                    int64_t _ln,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                    int32_t _fn) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  uint64_t ret;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  Error error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t default_arg_length;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string str;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  uint64_t call_tmp9;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  default_arg_length = createCopyingBuffer_default_length(x2, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = createCopyingBuffer(x2, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  str = call_tmp8;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp9 = chpl___COLON_51(&str, &error, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 151 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  ret = call_tmp9;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  goto _end__command_line_cast;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  handler:;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 142 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end__command_line_cast:;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:134 */
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static string _command_line_cast7(c_string_rehook x2,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                  int64_t _ln,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                  int32_t _fn) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string ret;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  Error error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t default_arg_length;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  default_arg_length = createCopyingBuffer_default_length(x2, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = createCopyingBuffer(x2, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  ret = call_tmp8;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  goto _end__command_line_cast;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  handler:;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 142 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end__command_line_cast:;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:134 */
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static string _command_line_cast6(c_string_rehook x2,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                  int64_t _ln,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                  int32_t _fn) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string ret;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  Error error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t default_arg_length;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  default_arg_length = createCopyingBuffer_default_length(x2, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = createCopyingBuffer(x2, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  ret = call_tmp8;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  goto _end__command_line_cast;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  handler:;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 142 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end__command_line_cast:;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:134 */
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static string _command_line_cast4(c_string_rehook x2,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                  int64_t _ln,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                  int32_t _fn) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string ret;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  Error error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t default_arg_length;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  default_arg_length = createCopyingBuffer_default_length(x2, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = createCopyingBuffer(x2, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  ret = call_tmp8;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  goto _end__command_line_cast;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  handler:;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 142 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end__command_line_cast:;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:134 */
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static chpl_bool _command_line_cast15(c_string_rehook x2,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                      int64_t _ln,
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                                      int32_t _fn) {
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool ret;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  Error error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  int64_t default_arg_length;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  string str;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool call_tmp9;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  error = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  default_arg_length = createCopyingBuffer_default_length(x2, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp8 = createCopyingBuffer(x2, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  str = call_tmp8;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  call_tmp9 = chpl___COLON_46(&str, &error, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 151 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    goto handler;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  ret = call_tmp9;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl__autoDestroy23(&str, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  goto _end__command_line_cast;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  handler:;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  if (error != nil) /* ZLINE: 142 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  {
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _end__command_line_cast:;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return ret;
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 211 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:211 */
#line 211 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
static void chpl_addModule(c_string_rehook moduleName,
#line 211 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                           c_fn_ptr_rehook deinitFun,
#line 211 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                           int64_t _ln,
#line 211 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
                           int32_t _fn) {
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_ModuleDeinit new_temp = NULL;
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  new_temp = _new2(((c_ptrConst_int8_t)(moduleName)), deinitFun, chpl_moduleDeinitFuns, _ln, _fn);
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl___ASSIGN_39(&chpl_moduleDeinitFuns, new_temp);
#line 211 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return;
#line 211 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
/* ChapelUtil.chpl:216 */
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
void chpl_deinitModules(void) {
#line 223 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_ModuleDeinit prev = NULL;
#line 224 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_bool T;
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_ModuleDeinit call_tmp8 = NULL;
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl_ModuleDeinit curr = NULL;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _ref_c_fn_ptr_rehook call_tmp9 = NULL;
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  _ref_chpl_ModuleDeinit call_tmp10 = NULL;
#line 223 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  prev = chpl_moduleDeinitFuns;
#line 224 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  T = _cond_test3(prev, INT64(224), INT32(80));
#line 224 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  while (T) {
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    call_tmp8 = postfix_EXCLAMATION_5(prev, INT64(225), INT32(80));
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    curr = call_tmp8;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_check_nil(call_tmp8, INT64(228), INT32(80));
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    call_tmp9 = chpl_get_chpl_ModuleDeinit_deinitFun(call_tmp8, INT64(228), INT32(80));
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_execute_module_deinit(*(call_tmp9));
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl_check_nil(curr, INT64(229), INT32(80));
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    call_tmp10 = chpl_get_chpl_ModuleDeinit_prevModule(curr, INT64(229), INT32(80));
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl___ASSIGN_39(&prev, *(call_tmp10));
#line 230 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    chpl__delete15(curr, INT64(230), INT32(80));
#line 224 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
    T = _cond_test3(prev, INT64(224), INT32(80));
#line 224 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  }
#line 233 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  chpl___ASSIGN_52(&chpl_moduleDeinitFuns, nil, INT64(233), INT32(80));
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  deallocate_string_literals_buf();
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
  return;
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelUtil.chpl"
}

