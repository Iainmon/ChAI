#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:21 */
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static void chpl__init_BytesStringCommon(int64_t _ln,
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                         int32_t _fn) {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (chpl__init_BytesStringCommon_p) /* ZLINE: 21 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _exit_chpl__init_BytesStringCommon;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  printModuleInit("%*s\n", "BytesStringCommon", INT64(17), _ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  refIndentLevel = &moduleInitLevel;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  *(refIndentLevel) += INT64(1);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__init_BytesStringCommon_p = UINT8(true);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__init_ByteBufferHelpers(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__init_NVStringFactory(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__init_OS(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__init_Bytes(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__init_String(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  *(refIndentLevel) -= INT64(1);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _exit_chpl__init_BytesStringCommon:;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:90 */
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static const int8_t * getCStr(string * x2,
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                              int64_t _ln,
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                              int32_t _fn) {
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp8 = NULL;
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl_get_string_buff(x2);
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = ((c_ptrConst_int8_t)(*(call_tmp8)));
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return call_tmp9;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:109 */
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static string decodeByteBuffer(uint8_t * buff,
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                               int64_t length,
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                               decodePolicy policy,
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                               Error * error_out,
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                               int64_t _ln,
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                               int32_t _fn) {
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret;
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp8;
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp9;
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T;
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t newBuff = NULL;
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t allocSize;
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp2;
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool hasEscapes;
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t numCodepoints2;
#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t expectedSize;
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t thisIdx;
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t decodedIdx;
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T2;
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_3_syserr_int32_t_int32_t T3;
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  syserr coerce_tmp3;
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int32_t coerce_tmp4;
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t call_tmp10 = NULL;
#line 139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp11;
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp12;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _owned_DecodeError call_tmp13;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  DecodeError new_temp = NULL;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _owned_DecodeError initTemp;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  Error call_tmp14 = NULL;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _owned_Error _formal_tmp_in_err;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int32_t nInvalidBytes;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int32_t T4;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp15;
#line 154 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp16;
#line 162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int32_t call_tmp17;
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T5;
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t T6 = NULL;
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t T7 = NULL;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t call_tmp18 = NULL;
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp19;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int32_t call_tmp20;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T8;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t T9 = NULL;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t T10 = NULL;
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t i;
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t call_tmp21 = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp22;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp23;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp24 = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int32_t call_tmp25;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int32_t call_tmp26;
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp27 = NULL;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret2;
#line 218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool call_tmp28 = NULL;
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl___EQUALS_3(length, INT64(0));
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp8) /* ZLINE: 117 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_decodeByteBuffer;
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl___PLUS_7(length);
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T = bufferAlloc(call_tmp9, _ln, _fn);
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  newBuff = (&T)->x0;
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp2 = (&T)->x1;
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  allocSize = coerce_tmp2;
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  hasEscapes = UINT8(false);
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  numCodepoints2 = INT64(0);
#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  expectedSize = coerce_tmp2;
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  thisIdx = INT64(0);
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  decodedIdx = INT64(0);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T2 = chpl___LESS_3(INT64(0), length);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  while (T2) {
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T3 = decodeHelp(buff, length, thisIdx, UINT8(false), _ln, _fn);
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    coerce_tmp3 = (&T3)->x0;
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    coerce_tmp4 = (&T3)->x2;
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp10 = chpl___PLUS_11(buff, thisIdx);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___PLUS__ASSIGN_(&numCodepoints2, INT64(1));
#line 139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp11 = chpl___EXCLAMATION__ASSIGN_16(coerce_tmp3, INT64(0), _ln, _fn);
#line 139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (call_tmp11) /* ZLINE: 139 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp12 = chpl___EQUALS_10(policy, decodePolicy_strict);
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      if (call_tmp12) /* ZLINE: 140 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      {
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        bufferFree(newBuff, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        new_temp = _new14(_ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        init81(&initTemp, new_temp);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp13 = initTemp;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        _formal_tmp_in_err = chpl___COLON_37(&call_tmp13, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp14 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        *(error_out) = call_tmp14;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        chpl__autoDestroy34(&T3);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        chpl__autoDestroy6(&T);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        goto _end_decodeByteBuffer;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      } else /* ZLINE: 144 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      {
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp15 = chpl___EQUALS_2(coerce_tmp4, ((int32_t)(INT64(1))));
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        if (call_tmp15) /* ZLINE: 151 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        {
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          T4 = coerce_tmp4;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        } else /* ZLINE: 151 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        {
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          T4 = chpl___HYPHEN_2(coerce_tmp4, ((int32_t)(INT64(1))));
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        }
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        nInvalidBytes = T4;
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        chpl___PLUS__ASSIGN_(&thisIdx, ((int64_t)(T4)));
#line 154 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp16 = chpl___EQUALS_10(policy, decodePolicy_replace);
#line 154 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        if (call_tmp16) /* ZLINE: 154 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 154 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        {
#line 162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp17 = chpl___HYPHEN_2(((int32_t)(INT64(3))), T4);
#line 162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl___PLUS__ASSIGN_(&expectedSize, ((int64_t)(call_tmp17)));
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          T6 = &newBuff;
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          T7 = &allocSize;
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          T5 = bufferEnsureSize(newBuff, allocSize, expectedSize, _ln, _fn);
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl___ASSIGN_74(T6, (&T5)->x0);
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl___ASSIGN_3(T7, (&T5)->x1);
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl__autoDestroy6(&T5);
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp18 = chpl___PLUS_11(newBuff, decodedIdx);
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          qio_encode_char_buf(((c_ptr_void)(call_tmp18)), INT32(65533));
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl___PLUS__ASSIGN_(&decodedIdx, INT64(3));
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        } else /* ZLINE: 154 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        {
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp19 = chpl___EQUALS_10(policy, decodePolicy_escape);
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          if (call_tmp19) /* ZLINE: 170 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          {
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
            chpl___ASSIGN_(&hasEscapes, UINT8(true));
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
            call_tmp20 = chpl___ASTERISK_(((int32_t)(INT64(2))), T4);
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
            chpl___PLUS__ASSIGN_(&expectedSize, ((int64_t)(call_tmp20)));
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
            T9 = &newBuff;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
            T10 = &allocSize;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
            T8 = bufferEnsureSize(newBuff, allocSize, expectedSize, _ln, _fn);
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
            chpl___ASSIGN_74(T9, (&T8)->x0);
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
            chpl___ASSIGN_3(T10, (&T8)->x1);
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
            chpl__autoDestroy6(&T8);
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
            i = INT64(0);
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
            for (i = INT64(0); ((i < nInvalidBytes)); i += INT64(1)) {
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
              call_tmp21 = chpl___PLUS_11(newBuff, decodedIdx);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
              call_tmp22 = chpl___HYPHEN_3(thisIdx, ((int64_t)(nInvalidBytes)));
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
              call_tmp23 = chpl___PLUS_3(call_tmp22, i);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
              chpl_check_nil(buff, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
              call_tmp24 = this21(buff, call_tmp23);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
              call_tmp25 = chpl___PLUS_2(((int32_t)(INT64(56320))), ((int32_t)(*(call_tmp24))));
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
              qio_encode_char_buf(((c_ptr_void)(call_tmp21)), call_tmp25);
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
              chpl___PLUS__ASSIGN_(&decodedIdx, INT64(3));
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
            }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
            call_tmp26 = chpl___HYPHEN_2(nInvalidBytes, ((int32_t)(INT64(1))));
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
            chpl___PLUS__ASSIGN_(&numCodepoints2, ((int64_t)(call_tmp26)));
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    } else /* ZLINE: 204 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      bufferMemcpyLocal(newBuff, call_tmp10, ((int64_t)(coerce_tmp4)), decodedIdx, INT64(0), _ln, _fn);
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___PLUS__ASSIGN_(&thisIdx, ((int64_t)(coerce_tmp4)));
#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___PLUS__ASSIGN_(&decodedIdx, ((int64_t)(coerce_tmp4)));
#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy34(&T3);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T2 = chpl___LESS_3(thisIdx, length);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_check_nil(newBuff, _ln, _fn);
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp27 = this21(newBuff, decodedIdx);
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_4(call_tmp27, ((uint8_t)(INT64(0))));
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret2 = chpl_createStringWithOwnedBufferNV(newBuff, decodedIdx, allocSize, numCodepoints2, _ln, _fn);
#line 218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp28 = chpl_get_string_hasEscapes(&ret2);
#line 218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_(call_tmp28, hasEscapes);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = ret2;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy6(&T);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end_decodeByteBuffer:;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:242 */
#line 242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static _tuple_3_syserr_int32_t_int32_t decodeHelp(uint8_t * buff,
#line 242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                  int64_t buffLen,
#line 242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                  int64_t offset2,
#line 242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                  chpl_bool allowEsc,
#line 242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                  int64_t _ln,
#line 242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                  int32_t _fn) {
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int32_t chr;
#line 258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int32_t nBytes;
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int32_t call_tmp8;
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t call_tmp9 = NULL;
#line 261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp10;
#line 262 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  syserr decodeRet;
#line 272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_3_syserr_int32_t_int32_t call_tmp11;
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chr = INT32(0);
#line 258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  nBytes = INT32(0);
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl___COLON_4(offset2, _ln, _fn);
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl___PLUS_10(buff, call_tmp8);
#line 261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl___HYPHEN_3(buffLen, ((int64_t)(call_tmp8)));
#line 263 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (allowEsc) /* ZLINE: 263 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 263 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 264 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    decodeRet = qio_decode_char_buf_esc(&chr, &nBytes, call_tmp9, call_tmp10);
#line 264 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  } else /* ZLINE: 263 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 264 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    decodeRet = qio_decode_char_buf(&chr, &nBytes, call_tmp9, call_tmp10);
#line 268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = _build_tuple3(decodeRet, chr, nBytes);
#line 242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return call_tmp11;
#line 242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:275 */
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static void initWithBorrowedBuffer(string * x2,
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                   string * other,
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                   int64_t _ln,
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                   int32_t _fn) {
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 279 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool call_tmp9 = NULL;
#line 279 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool call_tmp10 = NULL;
#line 281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp11 = NULL;
#line 281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int32_t call_tmp12;
#line 281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp13;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp14;
#line 284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp15;
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp16 = NULL;
#line 288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool call_tmp17 = NULL;
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp18 = NULL;
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp19 = NULL;
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp20 = NULL;
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t call_tmp21 = NULL;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp22 = NULL;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp23;
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp24 = NULL;
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp25 = NULL;
#line 295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp26 = NULL;
#line 295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp27 = NULL;
#line 296 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp28 = NULL;
#line 296 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp29 = NULL;
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp30 = NULL;
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp31 = NULL;
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl_get_string_isOwned(x2);
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_(call_tmp8, UINT8(false));
#line 279 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl_get_string_hasEscapes(x2);
#line 279 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl_get_string_hasEscapes(other);
#line 279 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_(call_tmp9, *(call_tmp10));
#line 281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl_get_string_locale_id(other);
#line 281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp12 = get_chpl_nodeID();
#line 281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = chpl___EXCLAMATION__ASSIGN_(*(call_tmp11), call_tmp12);
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = numBytes(other);
#line 284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp15 = chpl___GREATER_(call_tmp14, INT64(0));
#line 284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp15) /* ZLINE: 284 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp16 = chpl_get_string_buffLen(x2);
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_3(call_tmp16, call_tmp14);
#line 286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (call_tmp13) /* ZLINE: 286 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp17 = chpl_get_string_isOwned(x2);
#line 288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_(call_tmp17, UINT8(true));
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp18 = chpl_get_string_buff(x2);
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp19 = chpl_get_string_locale_id(other);
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp20 = chpl_get_string_buff(other);
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp21 = bufferCopyRemote(((int64_t)(*(call_tmp19))), *(call_tmp20), call_tmp14, _ln, _fn);
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_74(call_tmp18, call_tmp21);
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp22 = chpl_get_string_buffSize(x2);
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp23 = chpl___PLUS_7(call_tmp14);
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_3(call_tmp22, call_tmp23);
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp24 = chpl_get_string_cachedNumCodepoints(x2);
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp25 = chpl_get_string_cachedNumCodepoints(other);
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_3(call_tmp24, *(call_tmp25));
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    } else /* ZLINE: 293 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp26 = chpl_get_string_buff(x2);
#line 295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp27 = chpl_get_string_buff(other);
#line 295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_74(call_tmp26, *(call_tmp27));
#line 296 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp28 = chpl_get_string_buffSize(x2);
#line 296 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp29 = chpl_get_string_buffSize(other);
#line 296 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_3(call_tmp28, *(call_tmp29));
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp30 = chpl_get_string_cachedNumCodepoints(x2);
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp31 = chpl_get_string_cachedNumCodepoints(other);
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_3(call_tmp30, *(call_tmp31));
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return;
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:302 */
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static void initWithBorrowedBuffer3(string * x2,
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                    uint8_t * other,
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                    int64_t length,
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                    int64_t size5) {
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp9 = NULL;
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl_get_string_isOwned(x2);
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_(call_tmp8, UINT8(false));
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl_get_string_buff(x2);
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_74(call_tmp9, other);
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl_get_string_buffSize(x2);
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_3(call_tmp10, size5);
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl_get_string_buffLen(x2);
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_3(call_tmp11, length);
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return;
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:302 */
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static void initWithBorrowedBuffer2(bytes * x2,
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                    uint8_t * other,
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                    int64_t length,
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                    int64_t size5) {
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp9 = NULL;
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl_get_bytes_isOwned(x2);
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_(call_tmp8, UINT8(false));
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl_get_bytes_buff(x2);
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_74(call_tmp9, other);
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl_get_bytes_buffSize(x2);
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_3(call_tmp10, size5);
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl_get_bytes_buffLen(x2);
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_3(call_tmp11, length);
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return;
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:314 */
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static void initWithOwnedBuffer(string * x2,
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                uint8_t * other,
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                int64_t length,
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                int64_t size5) {
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp9 = NULL;
#line 322 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl_get_string_isOwned(x2);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_(call_tmp8, UINT8(true));
#line 321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl_get_string_buff(x2);
#line 321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_74(call_tmp9, other);
#line 322 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl_get_string_buffSize(x2);
#line 322 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_3(call_tmp10, size5);
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl_get_string_buffLen(x2);
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_3(call_tmp11, length);
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:326 */
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static void initWithNewBuffer(string * x2,
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                              string * other,
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                              int64_t _ln,
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                              int32_t _fn) {
#line 329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp8 = NULL;
#line 329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int32_t call_tmp9;
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp10;
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool call_tmp11 = NULL;
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool call_tmp12 = NULL;
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool call_tmp13 = NULL;
#line 333 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp14 = NULL;
#line 333 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp15 = NULL;
#line 335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp16;
#line 336 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp17 = NULL;
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp18 = NULL;
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T;
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp3;
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp19 = NULL;
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp20 = NULL;
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp21 = NULL;
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t _this_tmp_ = NULL;
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp4 = NULL;
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp5;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp22 = NULL;
#line 329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl_get_string_locale_id(other);
#line 329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = get_chpl_nodeID();
#line 329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___EXCLAMATION__ASSIGN_(*(call_tmp8), call_tmp9);
#line 330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = numBytes(other);
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl_get_string_isOwned(x2);
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_(call_tmp11, UINT8(true));
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp12 = chpl_get_string_hasEscapes(x2);
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = chpl_get_string_hasEscapes(other);
#line 332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_(call_tmp12, *(call_tmp13));
#line 333 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = chpl_get_string_cachedNumCodepoints(x2);
#line 333 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp15 = chpl_get_string_cachedNumCodepoints(other);
#line 333 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_3(call_tmp14, *(call_tmp15));
#line 335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp16 = chpl___GREATER_(call_tmp10, INT64(0));
#line 335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp16) /* ZLINE: 335 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 335 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 336 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp17 = chpl_get_string_buffLen(x2);
#line 336 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_3(call_tmp17, call_tmp10);
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp18 = chpl_get_string_buff(other);
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T = bufferCopyLocal(*(call_tmp18), call_tmp10, _ln, _fn);
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    coerce_tmp2 = (&T)->x0;
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    coerce_tmp3 = (&T)->x1;
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp19 = chpl_get_string_buff(x2);
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_74(call_tmp19, coerce_tmp2);
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp20 = chpl_get_string_buffLen(x2);
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _this_tmp_ = chpl_get_string_buff(x2);
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    coerce_tmp4 = *(_this_tmp_);
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    coerce_tmp5 = *(call_tmp20);
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp21 = this21(coerce_tmp4, coerce_tmp5);
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_4(call_tmp21, ((uint8_t)(INT64(0))));
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp22 = chpl_get_string_buffSize(x2);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_3(call_tmp22, coerce_tmp3);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy6(&T);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return;
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:377 */
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static _tuple_2_range_int64_t_both_one_int64_t getView4(string * x2,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        range_int64_t_both_one r,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        Error * error_out,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        int64_t _ln,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        int32_t _fn) {
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t ret;
#line 425 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp8;
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp9;
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp10;
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp11;
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp12 = NULL;
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp13;
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one _formal_tmp_in_x;
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one intR;
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp14;
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp15;
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp16;
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp17;
#line 450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t cpCount;
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t cpIdxLow;
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp18;
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp19;
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t T;
#line 454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t cpIdxHigh;
#line 455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp20;
#line 458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp21 = NULL;
#line 458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t byteLow;
#line 459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp22 = NULL;
#line 459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t byteHigh;
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp23;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ic__indexLen__ref_string _iterator = NULL;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir__indexLen__ref_string call_tmp24;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex default_arg_start;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir__indexLen__ref_string ret_tmp;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_string this24 = NULL;
#line 865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string localThis;
#line 867 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp25;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_byteIndex start = NULL;
#line 867 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t i;
#line 868 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp26;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T2;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T3;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp27 = NULL;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T4;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp28 = NULL;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t _this_tmp_ = NULL;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp29;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T5;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp30 = NULL;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T6;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp31 = NULL;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t _this_tmp_2 = NULL;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t coerce_tmp3 = NULL;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp32;
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T7;
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp33 = NULL;
#line 872 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp34;
#line 872 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t j;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T8;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T9;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp35 = NULL;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T10;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp36 = NULL;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t _this_tmp_3 = NULL;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t coerce_tmp4 = NULL;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp37;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T11;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp38 = NULL;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T12;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp39 = NULL;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t _this_tmp_4 = NULL;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t coerce_tmp5 = NULL;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp40;
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_2__ref_byteIndex_int64_t yret;
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex call_tmp41;
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp42;
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_2__ref_byteIndex_int64_t call_tmp43;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_byteIndex_int64_t _yieldedIndex;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex i2;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t nBytes;
#line 463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp44;
#line 464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp45;
#line 468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp46;
#line 469 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp47;
#line 469 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp48;
#line 469 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp49;
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp50 = NULL;
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp51;
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp52;
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp53;
#line 425 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = isASCII(x2);
#line 425 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp8) /* ZLINE: 425 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 425 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = simpleCaseHelper3(x2, r, _ln, _fn);
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getView;
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  } else /* ZLINE: 428 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp9 = indices2(x2);
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp10 = chpl___EQUALS_20(r, call_tmp9, _ln, _fn);
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (call_tmp10) /* ZLINE: 438 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp11 = byteIndices(x2);
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp12 = chpl_get_string_cachedNumCodepoints(x2);
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      ret = _build_tuple5(call_tmp11, *(call_tmp12));
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl__autoDestroy59(call_tmp11);
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl__autoDestroy59(call_tmp9);
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      goto _end_getView;
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy59(call_tmp9);
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _formal_tmp_in_x = r;
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp13 = _removed_cast3(&_formal_tmp_in_x);
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    intR = call_tmp13;
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp14 = indices2(x2);
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp15 = chpl_boundsCheck(call_tmp14, call_tmp13, _ln, _fn);
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp16 = chpl___EXCLAMATION_(call_tmp15);
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (call_tmp16) /* ZLINE: 444 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp17 = size4(x2);
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      halt4(&_str_literal_269, r, &_str_literal_170, call_tmp17, _ln, _fn);
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy59(call_tmp14);
#line 450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    cpCount = INT64(0);
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp18 = low2(call_tmp13);
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp19 = chpl___GREATER__ASSIGN_5(call_tmp18);
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (call_tmp19) /* ZLINE: 451 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T = low2(intR);
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    } else /* ZLINE: 451 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T = INT64(0);
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    cpIdxLow = T;
#line 455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp20 = high(intR);
#line 454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    cpIdxHigh = call_tmp20;
#line 458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp21 = chpl_get_string_buffLen(x2);
#line 458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    byteLow = *(call_tmp21);
#line 459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp22 = chpl_get_string_buffLen(x2);
#line 459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    byteHigh = chpl___HYPHEN_6(*(call_tmp22));
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp23 = chpl___GREATER__ASSIGN_5(call_tmp20);
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (call_tmp23) /* ZLINE: 461 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      default_arg_start = _indexLen_default_start(x2);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _indexLen(x2, &default_arg_start, &ret_tmp);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp24 = ret_tmp;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _iterator = _getIterator21(&call_tmp24, _ln, _fn);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      this24 = (_iterator)->F0_this;
#line 865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      localThis = localize(this24, _ln, _fn);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      start = (_iterator)->F1_start;
#line 867 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp25 = chpl___COLON_42(start);
#line 867 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      i = call_tmp25;
#line 868 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp26 = chpl___GREATER_(call_tmp25, INT64(0));
#line 868 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      if (call_tmp26) /* ZLINE: 869 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 868 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      {
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp27 = chpl_get_string_buffLen(&localThis);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        T3 = chpl___LESS_3(call_tmp25, *(call_tmp27));
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        if (T3) /* ZLINE: 869 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        {
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          _this_tmp_ = chpl_get_string_buff(&localThis);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          coerce_tmp2 = *(_this_tmp_);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp28 = this21(coerce_tmp2, call_tmp25);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp29 = isInitialByte(*(call_tmp28), _ln, _fn);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T4 = chpl___EXCLAMATION_(call_tmp29);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        } else /* ZLINE: 869 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        {
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T4 = UINT8(false);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        }
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        T2 = T4;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        while (T2) {
#line 870 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl___PLUS__ASSIGN_(&i, INT64(1));
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp30 = chpl_get_string_buffLen(&localThis);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T5 = chpl___LESS_3(i, *(call_tmp30));
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          if (T5) /* ZLINE: 869 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          {
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            _this_tmp_2 = chpl_get_string_buff(&localThis);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            coerce_tmp3 = *(_this_tmp_2);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            call_tmp31 = this21(coerce_tmp3, i);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            call_tmp32 = isInitialByte(*(call_tmp31), _ln, _fn);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            T6 = chpl___EXCLAMATION_(call_tmp32);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          } else /* ZLINE: 869 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          {
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            T6 = UINT8(false);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          }
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T2 = T6;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        }
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      }
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp33 = chpl_get_string_buffLen(&localThis);
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      T7 = chpl___LESS_3(i, *(call_tmp33));
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      while (T7) {
#line 872 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp34 = chpl___PLUS_7(i);
#line 872 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        j = call_tmp34;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp35 = chpl_get_string_buffLen(&localThis);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        T9 = chpl___LESS_3(call_tmp34, *(call_tmp35));
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        if (T9) /* ZLINE: 873 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        {
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          _this_tmp_3 = chpl_get_string_buff(&localThis);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          coerce_tmp4 = *(_this_tmp_3);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp36 = this21(coerce_tmp4, call_tmp34);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp37 = isInitialByte(*(call_tmp36), _ln, _fn);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T10 = chpl___EXCLAMATION_(call_tmp37);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        } else /* ZLINE: 873 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        {
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T10 = UINT8(false);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        }
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        T8 = T10;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        while (T8) {
#line 874 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl___PLUS__ASSIGN_(&j, INT64(1));
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp38 = chpl_get_string_buffLen(&localThis);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T11 = chpl___LESS_3(j, *(call_tmp38));
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          if (T11) /* ZLINE: 873 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          {
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            _this_tmp_4 = chpl_get_string_buff(&localThis);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            coerce_tmp5 = *(_this_tmp_4);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            chpl_check_nil(coerce_tmp5, _ln, _fn);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            call_tmp39 = this21(coerce_tmp5, j);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            call_tmp40 = isInitialByte(*(call_tmp39), _ln, _fn);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            T12 = chpl___EXCLAMATION_(call_tmp40);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          } else /* ZLINE: 873 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          {
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            T12 = UINT8(false);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          }
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T8 = T12;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        }
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp41 = chpl___COLON_43(i);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp42 = chpl___HYPHEN_3(j, i);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp43 = _build_tuple2(&call_tmp41, call_tmp42);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        yret = call_tmp43;
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        _yieldedIndex = chpl__initCopy2(&yret, UINT8(false));
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        i2 = (&_yieldedIndex)->x0;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        nBytes = (&_yieldedIndex)->x1;
#line 463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp44 = chpl___EQUALS_3(cpCount, cpIdxLow);
#line 463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        if (call_tmp44) /* ZLINE: 463 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        {
#line 464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp45 = chpl___COLON_42(&i2);
#line 464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl___ASSIGN_3(&byteLow, call_tmp45);
#line 464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        }
#line 468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp46 = chpl___EQUALS_3(cpCount, cpIdxHigh);
#line 468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        if (call_tmp46) /* ZLINE: 468 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        {
#line 469 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp47 = chpl___COLON_42(&i2);
#line 469 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp48 = chpl___PLUS_3(call_tmp47, nBytes);
#line 469 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp49 = chpl___HYPHEN_6(call_tmp48);
#line 469 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl___ASSIGN_3(&byteHigh, call_tmp49);
#line 470 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl__autoDestroy26(&i2);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl__autoDestroy47(&call_tmp43);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl__autoDestroy26(&call_tmp41);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl__autoDestroy23(&localThis, _ln, _fn);
#line 470 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          goto _breakLabel;
#line 470 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        }
#line 472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        chpl___PLUS__ASSIGN_(&cpCount, INT64(1));
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        chpl__autoDestroy26(&i2);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl__autoDestroy47(&call_tmp43);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl__autoDestroy26(&call_tmp41);
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl___ASSIGN_3(&i, j);
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp50 = chpl_get_string_buffLen(&localThis);
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        T7 = chpl___LESS_3(i, *(call_tmp50));
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      }
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl__autoDestroy23(&localThis, _ln, _fn);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _breakLabel:;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _freeIterator9(_iterator, _ln, _fn);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl__autoDestroy26(&default_arg_start);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp51 = chpl_build_bounded_range3(byteLow, byteHigh);
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp52 = chpl___HYPHEN_3(cpIdxHigh, cpIdxLow);
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp53 = chpl___PLUS_7(call_tmp52);
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = _build_tuple5(call_tmp51, call_tmp53);
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy59(call_tmp51);
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy59(intR);
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getView;
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end_getView:;
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:377 */
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static _tuple_2_range_int64_t_both_one_int64_t getView3(string * x2,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        range_byteIndex_both_one r,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        Error * error_out,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        int64_t _ln,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        int32_t _fn) {
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t ret;
#line 407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp8;
#line 407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex call_tmp9;
#line 407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp10;
#line 407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp11;
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T;
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex call_tmp12;
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp13;
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  uint8_t call_tmp14;
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp15;
#line 411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex call_tmp16;
#line 411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp17;
#line 410 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp18;
#line 410 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp19;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _owned_CodepointSplitError call_tmp20;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  CodepointSplitError new_temp = NULL;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _owned_CodepointSplitError initTemp;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  Error call_tmp21 = NULL;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _owned_Error _formal_tmp_in_err;
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp22;
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex call_tmp23;
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp24;
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp25;
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp26;
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T2;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex call_tmp27;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp28;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp29;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  uint8_t call_tmp30;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp31;
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex call_tmp32;
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp33;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp34;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp35;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _owned_CodepointSplitError call_tmp36;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  CodepointSplitError new_temp2 = NULL;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _owned_CodepointSplitError initTemp2;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  Error call_tmp37 = NULL;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _owned_Error _formal_tmp_in_err2;
#line 407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = byteIndices(x2);
#line 407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = lowBound3(r);
#line 407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl___COLON_42(&call_tmp9);
#line 407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = contains3(call_tmp8, call_tmp10);
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy26(&call_tmp9);
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp8);
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp11) /* ZLINE: 406 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp12 = lowBound3(r);
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp13 = chpl___COLON_42(&call_tmp12);
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp14 = byte(x2, call_tmp13, _ln, _fn);
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp15 = isInitialByte(call_tmp14, _ln, _fn);
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T = chpl___EXCLAMATION_(call_tmp15);
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy26(&call_tmp12);
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  } else /* ZLINE: 406 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T = UINT8(false);
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (T) /* ZLINE: 408 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp16 = lowBound3(r);
#line 411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp17 = chpl___COLON_41(&call_tmp16, _ln, _fn);
#line 410 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp18 = chpl___PLUS_9(&_str_literal_3307, &call_tmp17, _ln, _fn);
#line 410 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp19 = chpl___PLUS_9(&call_tmp18, &_str_literal_276, _ln, _fn);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    new_temp = _new16(&call_tmp19, _ln, _fn);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    init85(&initTemp, new_temp);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp20 = initTemp;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _formal_tmp_in_err = chpl___COLON_36(&call_tmp20, _ln, _fn);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp21 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    *(error_out) = call_tmp21;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp19, _ln, _fn);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp18, _ln, _fn);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp17, _ln, _fn);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy26(&call_tmp16);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getView;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp22 = byteIndices(x2);
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp23 = highBound(r);
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp24 = chpl___COLON_42(&call_tmp23);
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp25 = chpl___PLUS_7(call_tmp24);
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp26 = contains3(call_tmp22, call_tmp25);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy26(&call_tmp23);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp22);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp26) /* ZLINE: 415 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp27 = highBound(r);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp28 = chpl___COLON_42(&call_tmp27);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp29 = chpl___PLUS_7(call_tmp28);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp30 = byte(x2, call_tmp29, _ln, _fn);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp31 = isInitialByte(call_tmp30, _ln, _fn);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T2 = chpl___EXCLAMATION_(call_tmp31);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy26(&call_tmp27);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  } else /* ZLINE: 415 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T2 = UINT8(false);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (T2) /* ZLINE: 417 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp32 = highBound(r);
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp33 = chpl___COLON_41(&call_tmp32, _ln, _fn);
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp34 = chpl___PLUS_9(&_str_literal_3309, &call_tmp33, _ln, _fn);
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp35 = chpl___PLUS_9(&call_tmp34, &_str_literal_276, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    new_temp2 = _new16(&call_tmp35, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    init85(&initTemp2, new_temp2);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp36 = initTemp2;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _formal_tmp_in_err2 = chpl___COLON_36(&call_tmp36, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp37 = chpl_fix_thrown_error(&_formal_tmp_in_err2, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    *(error_out) = call_tmp37;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp35, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp34, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp33, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy26(&call_tmp32);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getView;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 423 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = simpleCaseHelper5(x2, r, _ln, _fn);
#line 423 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end_getView:;
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:377 */
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static _tuple_2_range_int64_t_both_one_int64_t getView2(string * x2,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        range_int64_t_low_one r,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        Error * error_out,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        int64_t _ln,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        int32_t _fn) {
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t ret;
#line 425 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp8;
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp9;
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_low_one call_tmp10;
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_low_one _formal_tmp_in_x;
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_low_one intR;
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp11;
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp12;
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp13;
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp14;
#line 450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t cpCount;
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t cpIdxLow;
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp15;
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp16;
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t T;
#line 454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t cpIdxHigh;
#line 454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t T2;
#line 456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp17 = NULL;
#line 458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp18 = NULL;
#line 458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t byteLow;
#line 459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp19 = NULL;
#line 459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t byteHigh;
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp20;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ic__indexLen__ref_string _iterator = NULL;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir__indexLen__ref_string call_tmp21;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex default_arg_start;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir__indexLen__ref_string ret_tmp;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_string this24 = NULL;
#line 865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string localThis;
#line 867 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp22;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_byteIndex start = NULL;
#line 867 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t i;
#line 868 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp23;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T3;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T4;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp24 = NULL;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T5;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp25 = NULL;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t _this_tmp_ = NULL;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp26;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T6;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp27 = NULL;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T7;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp28 = NULL;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t _this_tmp_2 = NULL;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t coerce_tmp3 = NULL;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp29;
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T8;
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp30 = NULL;
#line 872 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp31;
#line 872 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t j;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T9;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T10;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp32 = NULL;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T11;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp33 = NULL;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t _this_tmp_3 = NULL;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t coerce_tmp4 = NULL;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp34;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T12;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp35 = NULL;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool T13;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp36 = NULL;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t _this_tmp_4 = NULL;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t coerce_tmp5 = NULL;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_bool call_tmp37;
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_2__ref_byteIndex_int64_t yret;
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  byteIndex call_tmp38;
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t call_tmp39;
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _tuple_2__ref_byteIndex_int64_t call_tmp40;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_byteIndex_int64_t _yieldedIndex;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex i2;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t nBytes;
#line 463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp41;
#line 464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp42;
#line 468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp43;
#line 469 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp44;
#line 469 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp45;
#line 469 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp46;
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp47 = NULL;
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp48;
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp49;
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp50;
#line 425 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = isASCII(x2);
#line 425 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp8) /* ZLINE: 425 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 425 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = simpleCaseHelper6(x2, r, _ln, _fn);
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getView;
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  } else /* ZLINE: 428 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp9 = indices2(x2);
#line 438 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy59(call_tmp9);
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _formal_tmp_in_x = r;
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp10 = _removed_cast2(&_formal_tmp_in_x);
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    intR = call_tmp10;
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp11 = indices2(x2);
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp12 = chpl_boundsCheck3(call_tmp11, call_tmp10, _ln, _fn);
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp13 = chpl___EXCLAMATION_(call_tmp12);
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (call_tmp13) /* ZLINE: 444 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp14 = size4(x2);
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      halt6(&_str_literal_269, r, &_str_literal_170, call_tmp14, _ln, _fn);
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy59(call_tmp11);
#line 450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    cpCount = INT64(0);
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp15 = low(call_tmp10);
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp16 = chpl___GREATER__ASSIGN_5(call_tmp15);
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (call_tmp16) /* ZLINE: 451 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T = low(intR);
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    } else /* ZLINE: 451 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T = INT64(0);
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    cpIdxLow = T;
#line 456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp17 = chpl_get_string_buffLen(x2);
#line 454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T2 = chpl___HYPHEN_6(*(call_tmp17));
#line 454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    cpIdxHigh = T2;
#line 458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp18 = chpl_get_string_buffLen(x2);
#line 458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    byteLow = *(call_tmp18);
#line 459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp19 = chpl_get_string_buffLen(x2);
#line 459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    byteHigh = chpl___HYPHEN_6(*(call_tmp19));
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp20 = chpl___GREATER__ASSIGN_5(T2);
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (call_tmp20) /* ZLINE: 461 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      default_arg_start = _indexLen_default_start(x2);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _indexLen(x2, &default_arg_start, &ret_tmp);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp21 = ret_tmp;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _iterator = _getIterator21(&call_tmp21, _ln, _fn);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      this24 = (_iterator)->F0_this;
#line 865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      localThis = localize(this24, _ln, _fn);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      start = (_iterator)->F1_start;
#line 867 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp22 = chpl___COLON_42(start);
#line 867 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      i = call_tmp22;
#line 868 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp23 = chpl___GREATER_(call_tmp22, INT64(0));
#line 868 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      if (call_tmp23) /* ZLINE: 869 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 868 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      {
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp24 = chpl_get_string_buffLen(&localThis);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        T4 = chpl___LESS_3(call_tmp22, *(call_tmp24));
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        if (T4) /* ZLINE: 869 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        {
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          _this_tmp_ = chpl_get_string_buff(&localThis);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          coerce_tmp2 = *(_this_tmp_);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp25 = this21(coerce_tmp2, call_tmp22);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp26 = isInitialByte(*(call_tmp25), _ln, _fn);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T5 = chpl___EXCLAMATION_(call_tmp26);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        } else /* ZLINE: 869 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        {
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T5 = UINT8(false);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        }
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        T3 = T5;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        while (T3) {
#line 870 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl___PLUS__ASSIGN_(&i, INT64(1));
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp27 = chpl_get_string_buffLen(&localThis);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T6 = chpl___LESS_3(i, *(call_tmp27));
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          if (T6) /* ZLINE: 869 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          {
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            _this_tmp_2 = chpl_get_string_buff(&localThis);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            coerce_tmp3 = *(_this_tmp_2);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            call_tmp28 = this21(coerce_tmp3, i);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            call_tmp29 = isInitialByte(*(call_tmp28), _ln, _fn);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            T7 = chpl___EXCLAMATION_(call_tmp29);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          } else /* ZLINE: 869 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          {
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            T7 = UINT8(false);
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          }
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T3 = T7;
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        }
#line 869 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      }
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp30 = chpl_get_string_buffLen(&localThis);
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      T8 = chpl___LESS_3(i, *(call_tmp30));
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      while (T8) {
#line 872 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp31 = chpl___PLUS_7(i);
#line 872 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        j = call_tmp31;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp32 = chpl_get_string_buffLen(&localThis);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        T10 = chpl___LESS_3(call_tmp31, *(call_tmp32));
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        if (T10) /* ZLINE: 873 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        {
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          _this_tmp_3 = chpl_get_string_buff(&localThis);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          coerce_tmp4 = *(_this_tmp_3);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp33 = this21(coerce_tmp4, call_tmp31);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp34 = isInitialByte(*(call_tmp33), _ln, _fn);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T11 = chpl___EXCLAMATION_(call_tmp34);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        } else /* ZLINE: 873 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        {
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T11 = UINT8(false);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        }
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        T9 = T11;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        while (T9) {
#line 874 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl___PLUS__ASSIGN_(&j, INT64(1));
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          call_tmp35 = chpl_get_string_buffLen(&localThis);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T12 = chpl___LESS_3(j, *(call_tmp35));
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          if (T12) /* ZLINE: 873 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          {
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            _this_tmp_4 = chpl_get_string_buff(&localThis);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            coerce_tmp5 = *(_this_tmp_4);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            chpl_check_nil(coerce_tmp5, _ln, _fn);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            call_tmp36 = this21(coerce_tmp5, j);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            call_tmp37 = isInitialByte(*(call_tmp36), _ln, _fn);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            T13 = chpl___EXCLAMATION_(call_tmp37);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          } else /* ZLINE: 873 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          {
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
            T13 = UINT8(false);
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          }
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          T9 = T13;
#line 873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        }
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp38 = chpl___COLON_43(i);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp39 = chpl___HYPHEN_3(j, i);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp40 = _build_tuple2(&call_tmp38, call_tmp39);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        yret = call_tmp40;
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        _yieldedIndex = chpl__initCopy2(&yret, UINT8(false));
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        i2 = (&_yieldedIndex)->x0;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        nBytes = (&_yieldedIndex)->x1;
#line 463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp41 = chpl___EQUALS_3(cpCount, cpIdxLow);
#line 463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        if (call_tmp41) /* ZLINE: 463 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        {
#line 464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp42 = chpl___COLON_42(&i2);
#line 464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl___ASSIGN_3(&byteLow, call_tmp42);
#line 466 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl__autoDestroy26(&i2);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl__autoDestroy47(&call_tmp40);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl__autoDestroy26(&call_tmp38);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl__autoDestroy23(&localThis, _ln, _fn);
#line 466 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          goto _breakLabel;
#line 466 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        }
#line 468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp43 = chpl___EQUALS_3(cpCount, cpIdxHigh);
#line 468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        if (call_tmp43) /* ZLINE: 468 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        {
#line 469 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp44 = chpl___COLON_42(&i2);
#line 469 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp45 = chpl___PLUS_3(call_tmp44, nBytes);
#line 469 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp46 = chpl___HYPHEN_6(call_tmp45);
#line 469 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl___ASSIGN_3(&byteHigh, call_tmp46);
#line 470 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl__autoDestroy26(&i2);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl__autoDestroy47(&call_tmp40);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl__autoDestroy26(&call_tmp38);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl__autoDestroy23(&localThis, _ln, _fn);
#line 470 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          goto _breakLabel;
#line 470 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        }
#line 472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        chpl___PLUS__ASSIGN_(&cpCount, INT64(1));
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        chpl__autoDestroy26(&i2);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl__autoDestroy47(&call_tmp40);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl__autoDestroy26(&call_tmp38);
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl___ASSIGN_3(&i, j);
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp47 = chpl_get_string_buffLen(&localThis);
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        T8 = chpl___LESS_3(i, *(call_tmp47));
#line 871 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      }
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl__autoDestroy23(&localThis, _ln, _fn);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _breakLabel:;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _freeIterator9(_iterator, _ln, _fn);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl__autoDestroy26(&default_arg_start);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp48 = chpl_build_bounded_range3(byteLow, byteHigh);
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp49 = chpl___HYPHEN_3(cpIdxHigh, cpIdxLow);
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp50 = chpl___PLUS_7(call_tmp49);
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = _build_tuple5(call_tmp48, call_tmp50);
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy59(call_tmp48);
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy19(intR);
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getView;
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end_getView:;
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:377 */
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static _tuple_2_range_int64_t_both_one_int64_t getView5(string * x2,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        range_byteIndex_low_one r,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        Error * error_out,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        int64_t _ln,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        int32_t _fn) {
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t ret;
#line 407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp8;
#line 407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex call_tmp9;
#line 407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp10;
#line 407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp11;
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T;
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex call_tmp12;
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp13;
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  uint8_t call_tmp14;
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp15;
#line 411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex call_tmp16;
#line 411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp17;
#line 410 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp18;
#line 410 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp19;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _owned_CodepointSplitError call_tmp20;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  CodepointSplitError new_temp = NULL;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _owned_CodepointSplitError initTemp;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  Error call_tmp21 = NULL;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _owned_Error _formal_tmp_in_err;
#line 407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = byteIndices(x2);
#line 407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = lowBound2(r);
#line 407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl___COLON_42(&call_tmp9);
#line 407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = contains3(call_tmp8, call_tmp10);
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy26(&call_tmp9);
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp8);
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp11) /* ZLINE: 406 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp12 = lowBound2(r);
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp13 = chpl___COLON_42(&call_tmp12);
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp14 = byte(x2, call_tmp13, _ln, _fn);
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp15 = isInitialByte(call_tmp14, _ln, _fn);
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T = chpl___EXCLAMATION_(call_tmp15);
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy26(&call_tmp12);
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  } else /* ZLINE: 406 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T = UINT8(false);
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (T) /* ZLINE: 408 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp16 = lowBound2(r);
#line 411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp17 = chpl___COLON_41(&call_tmp16, _ln, _fn);
#line 410 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp18 = chpl___PLUS_9(&_str_literal_3307, &call_tmp17, _ln, _fn);
#line 410 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp19 = chpl___PLUS_9(&call_tmp18, &_str_literal_276, _ln, _fn);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    new_temp = _new16(&call_tmp19, _ln, _fn);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    init85(&initTemp, new_temp);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp20 = initTemp;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _formal_tmp_in_err = chpl___COLON_36(&call_tmp20, _ln, _fn);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp21 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    *(error_out) = call_tmp21;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp19, _ln, _fn);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp18, _ln, _fn);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp17, _ln, _fn);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy26(&call_tmp16);
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getView;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 423 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = simpleCaseHelper4(x2, r, _ln, _fn);
#line 423 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end_getView:;
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:377 */
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static _tuple_2_range_int64_t_both_one_int64_t getView6(string * x2,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        range_byteIndex_low_one r,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        Error * error_out,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        int64_t _ln,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                        int32_t _fn) {
#line 423 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t call_tmp8;
#line 423 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = simpleCaseHelper2(x2, r, _ln, _fn);
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return call_tmp8;
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:377 */
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static _tuple_2_range_int64_t_both_one_int64_t getView(string * x2,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                       range_byteIndex_high_one r,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                       Error * error_out,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                       int64_t _ln,
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                       int32_t _fn) {
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t ret;
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp8;
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex call_tmp9;
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp10;
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp11;
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp12;
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex call_tmp13;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp14;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp15;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  uint8_t call_tmp16;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp17;
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex call_tmp18;
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp19;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp20;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp21;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _owned_CodepointSplitError call_tmp22;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  CodepointSplitError new_temp = NULL;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _owned_CodepointSplitError initTemp;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  Error call_tmp23 = NULL;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _owned_Error _formal_tmp_in_err;
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = byteIndices(x2);
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = highBound3(r);
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl___COLON_42(&call_tmp9);
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl___PLUS_7(call_tmp10);
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp12 = contains3(call_tmp8, call_tmp11);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy26(&call_tmp9);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp8);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp12) /* ZLINE: 415 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp13 = highBound3(r);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp14 = chpl___COLON_42(&call_tmp13);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp15 = chpl___PLUS_7(call_tmp14);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp16 = byte(x2, call_tmp15, _ln, _fn);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp17 = isInitialByte(call_tmp16, _ln, _fn);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T = chpl___EXCLAMATION_(call_tmp17);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy26(&call_tmp13);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  } else /* ZLINE: 415 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T = UINT8(false);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (T) /* ZLINE: 417 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp18 = highBound3(r);
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp19 = chpl___COLON_41(&call_tmp18, _ln, _fn);
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp20 = chpl___PLUS_9(&_str_literal_3309, &call_tmp19, _ln, _fn);
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp21 = chpl___PLUS_9(&call_tmp20, &_str_literal_276, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    new_temp = _new16(&call_tmp21, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    init85(&initTemp, new_temp);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp22 = initTemp;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _formal_tmp_in_err = chpl___COLON_36(&call_tmp22, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp23 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    *(error_out) = call_tmp23;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp21, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp20, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp19, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy26(&call_tmp18);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getView;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 423 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = simpleCaseHelper(x2, r, _ln, _fn);
#line 423 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end_getView:;
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:383 */
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static _tuple_2_range_int64_t_both_one_int64_t simpleCaseHelper(string * x2,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                range_byteIndex_high_one r,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                int64_t _ln,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                int32_t _fn) {
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t ret;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_high_one call_tmp8;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_high_one intR;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp9;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp10;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp11;
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp12;
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp13;
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp14;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl___COLON_23(r, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  intR = call_tmp8;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = byteIndices(x2);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl_boundsCheck2(call_tmp9, call_tmp8, _ln, _fn);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl___EXCLAMATION_(call_tmp10);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp11) /* ZLINE: 388 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp12 = numBytes(x2);
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    halt12(&_str_literal_269, r, &_str_literal_170, call_tmp12, _ln, _fn);
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp9);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = byteIndices(x2);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = this12(call_tmp8, call_tmp13);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = _build_tuple5(call_tmp14, INT64(-1));
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp14);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp13);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy3(intR);
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:383 */
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static _tuple_2_range_int64_t_both_one_int64_t simpleCaseHelper2(string * x2,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                 range_byteIndex_low_one r,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                 int64_t _ln,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                 int32_t _fn) {
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t ret;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_low_one call_tmp8;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_low_one intR;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp9;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp10;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp11;
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp12;
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp13;
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp14;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl___COLON_24(r, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  intR = call_tmp8;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = byteIndices(x2);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl_boundsCheck3(call_tmp9, call_tmp8, _ln, _fn);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl___EXCLAMATION_(call_tmp10);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp11) /* ZLINE: 388 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp12 = numBytes(x2);
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    halt8(&_str_literal_269, r, &_str_literal_170, call_tmp12, _ln, _fn);
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp9);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = byteIndices(x2);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = this10(call_tmp8, call_tmp13);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = _build_tuple5(call_tmp14, INT64(-1));
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp14);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp13);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy19(intR);
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:383 */
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static _tuple_2_range_int64_t_both_one_int64_t simpleCaseHelper4(string * x2,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                 range_byteIndex_low_one r,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                 int64_t _ln,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                 int32_t _fn) {
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t ret;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_low_one call_tmp8;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_low_one intR;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp9;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp10;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp11;
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp12;
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp13;
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp14;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl___COLON_24(r, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  intR = call_tmp8;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = byteIndices(x2);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl_boundsCheck3(call_tmp9, call_tmp8, _ln, _fn);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl___EXCLAMATION_(call_tmp10);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp11) /* ZLINE: 388 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp12 = numBytes(x2);
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    halt8(&_str_literal_269, r, &_str_literal_170, call_tmp12, _ln, _fn);
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp9);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = byteIndices(x2);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = this10(call_tmp8, call_tmp13);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = _build_tuple5(call_tmp14, INT64(-1));
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp14);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp13);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy19(intR);
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:383 */
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static _tuple_2_range_int64_t_both_one_int64_t simpleCaseHelper6(string * x2,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                 range_int64_t_low_one r,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                 int64_t _ln,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                 int32_t _fn) {
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t ret;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_low_one call_tmp8;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_low_one _formal_tmp_in_x;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_low_one intR;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp9;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp10;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp11;
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp12;
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp13;
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp14;
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one retRange;
#line 398 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp15;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _formal_tmp_in_x = r;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = _removed_cast2(&_formal_tmp_in_x);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  intR = call_tmp8;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = byteIndices(x2);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl_boundsCheck3(call_tmp9, call_tmp8, _ln, _fn);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl___EXCLAMATION_(call_tmp10);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp11) /* ZLINE: 388 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp12 = numBytes(x2);
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    halt6(&_str_literal_269, r, &_str_literal_170, call_tmp12, _ln, _fn);
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp9);
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = byteIndices(x2);
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = this10(call_tmp8, call_tmp13);
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  retRange = call_tmp14;
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp13);
#line 398 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp15 = size3(call_tmp14, _ln, _fn);
#line 398 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = _build_tuple5(retRange, call_tmp15);
#line 398 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(retRange);
#line 398 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy19(intR);
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:383 */
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static _tuple_2_range_int64_t_both_one_int64_t simpleCaseHelper5(string * x2,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                 range_byteIndex_both_one r,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                 int64_t _ln,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                 int32_t _fn) {
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t ret;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp8;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one intR;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp9;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp10;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp11;
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp12;
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp13;
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp14;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl___COLON_22(r, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  intR = call_tmp8;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = byteIndices(x2);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl_boundsCheck(call_tmp9, call_tmp8, _ln, _fn);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl___EXCLAMATION_(call_tmp10);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp11) /* ZLINE: 388 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp12 = numBytes(x2);
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    halt14(&_str_literal_269, r, &_str_literal_170, call_tmp12, _ln, _fn);
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp9);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = byteIndices(x2);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = this11(call_tmp8, call_tmp13);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = _build_tuple5(call_tmp14, INT64(-1));
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp14);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp13);
#line 394 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(intR);
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:383 */
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static _tuple_2_range_int64_t_both_one_int64_t simpleCaseHelper3(string * x2,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                 range_int64_t_both_one r,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                 int64_t _ln,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                                 int32_t _fn) {
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t ret;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp8;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one _formal_tmp_in_x;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one intR;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp9;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp10;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp11;
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp12;
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp13;
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp14;
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one retRange;
#line 398 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp15;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _formal_tmp_in_x = r;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = _removed_cast3(&_formal_tmp_in_x);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  intR = call_tmp8;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = byteIndices(x2);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl_boundsCheck(call_tmp9, call_tmp8, _ln, _fn);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl___EXCLAMATION_(call_tmp10);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp11) /* ZLINE: 388 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp12 = numBytes(x2);
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    halt4(&_str_literal_269, r, &_str_literal_170, call_tmp12, _ln, _fn);
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp9);
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = byteIndices(x2);
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = this11(call_tmp8, call_tmp13);
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  retRange = call_tmp14;
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp13);
#line 398 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp15 = size3(call_tmp14, _ln, _fn);
#line 398 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = _build_tuple5(retRange, call_tmp15);
#line 398 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(retRange);
#line 398 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(intR);
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:480 */
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static string getSlice5(string * x2,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        range_byteIndex_both_one r,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        Error * error_out,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        int64_t _ln,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        int32_t _fn) {
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret;
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp8;
#line 484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret2;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t call_tmp9;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  Error error = NULL;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t T;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one r2;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp2;
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp10;
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp11;
#line 490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret3;
#line 494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t buff = NULL;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp12;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp13;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp14;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp15;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp16 = NULL;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp17;
#line 503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp18 = NULL;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T2;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp3 = NULL;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp4;
#line 518 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp19;
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp20 = NULL;
#line 522 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t numCodepoints2;
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp21;
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp22;
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = isEmpty2(x2);
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp8) /* ZLINE: 483 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    init96(&ret2, _ln, _fn);
#line 485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = ret2;
#line 485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getSlice;
#line 485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  error = NULL;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = getView3(x2, r, &error, _ln, _fn);
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (error != nil) /* ZLINE: 488 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    *(error_out) = error;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getSlice;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T = call_tmp9;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  r2 = (&T)->x0;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp2 = (&T)->x1;
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = size3(r2, _ln, _fn);
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl___LESS__ASSIGN_(call_tmp10, INT64(0));
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp11) /* ZLINE: 489 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    init96(&ret3, _ln, _fn);
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = ret3;
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy59(r2);
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy46(&T);
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getSlice;
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp12 = highBound2(r2);
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = lowBound4(r2);
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = chpl___HYPHEN_3(call_tmp12, call_tmp13);
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp15 = chpl___PLUS_7(call_tmp14);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp16 = chpl_get_string_buff(x2);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp17 = lowBound4(r2);
#line 503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp18 = chpl_get_string_locale_id(x2);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T2 = bufferCopy(*(call_tmp16), call_tmp17, call_tmp15, *(call_tmp18), _ln, _fn);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp3 = (&T2)->x0;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp4 = (&T2)->x1;
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  buff = coerce_tmp3;
#line 518 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp19 = size3(r2, _ln, _fn);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp20 = this21(coerce_tmp3, call_tmp19);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_4(call_tmp20, ((uint8_t)(INT64(0))));
#line 522 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  numCodepoints2 = coerce_tmp2;
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp21 = chpl___EQUALS_3(coerce_tmp2, INT64(-1));
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp21) /* ZLINE: 523 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp22 = countNumCodepoints(buff, call_tmp19, _ln, _fn);
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_3(&numCodepoints2, call_tmp22);
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = chpl_createStringWithOwnedBufferNV(buff, call_tmp19, coerce_tmp4, numCodepoints2, _ln, _fn);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy6(&T2);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(r2);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy46(&T);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end_getSlice:;
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:480 */
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static string getSlice3(string * x2,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        range_int64_t_low_one r,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        Error * error_out,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        int64_t _ln,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        int32_t _fn) {
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret;
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp8;
#line 484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret2;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t call_tmp9;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  Error error = NULL;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t T;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one r2;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp2;
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp10;
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp11;
#line 490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret3;
#line 494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t buff = NULL;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp12;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp13;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp14;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp15;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp16 = NULL;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp17;
#line 503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp18 = NULL;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T2;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp3 = NULL;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp4;
#line 518 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp19;
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp20 = NULL;
#line 522 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t numCodepoints2;
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp21;
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp22;
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = isEmpty2(x2);
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp8) /* ZLINE: 483 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    init96(&ret2, _ln, _fn);
#line 485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = ret2;
#line 485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getSlice;
#line 485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  error = NULL;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = getView2(x2, r, &error, _ln, _fn);
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (error != nil) /* ZLINE: 488 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    *(error_out) = error;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getSlice;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T = call_tmp9;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  r2 = (&T)->x0;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp2 = (&T)->x1;
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = size3(r2, _ln, _fn);
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl___LESS__ASSIGN_(call_tmp10, INT64(0));
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp11) /* ZLINE: 489 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    init96(&ret3, _ln, _fn);
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = ret3;
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy59(r2);
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy46(&T);
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getSlice;
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp12 = highBound2(r2);
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = lowBound4(r2);
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = chpl___HYPHEN_3(call_tmp12, call_tmp13);
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp15 = chpl___PLUS_7(call_tmp14);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp16 = chpl_get_string_buff(x2);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp17 = lowBound4(r2);
#line 503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp18 = chpl_get_string_locale_id(x2);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T2 = bufferCopy(*(call_tmp16), call_tmp17, call_tmp15, *(call_tmp18), _ln, _fn);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp3 = (&T2)->x0;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp4 = (&T2)->x1;
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  buff = coerce_tmp3;
#line 518 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp19 = size3(r2, _ln, _fn);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp20 = this21(coerce_tmp3, call_tmp19);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_4(call_tmp20, ((uint8_t)(INT64(0))));
#line 522 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  numCodepoints2 = coerce_tmp2;
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp21 = chpl___EQUALS_3(coerce_tmp2, INT64(-1));
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp21) /* ZLINE: 523 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp22 = countNumCodepoints(buff, call_tmp19, _ln, _fn);
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_3(&numCodepoints2, call_tmp22);
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = chpl_createStringWithOwnedBufferNV(buff, call_tmp19, coerce_tmp4, numCodepoints2, _ln, _fn);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy6(&T2);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(r2);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy46(&T);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end_getSlice:;
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:480 */
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static string getSlice(string * x2,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                       range_byteIndex_high_one r,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                       Error * error_out,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                       int64_t _ln,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                       int32_t _fn) {
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret;
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp8;
#line 484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret2;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t call_tmp9;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  Error error = NULL;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t T;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one r2;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp2;
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp10;
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp11;
#line 490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret3;
#line 494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t buff = NULL;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp12;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp13;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp14;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp15;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp16 = NULL;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp17;
#line 503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp18 = NULL;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T2;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp3 = NULL;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp4;
#line 518 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp19;
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp20 = NULL;
#line 522 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t numCodepoints2;
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp21;
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp22;
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = isEmpty2(x2);
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp8) /* ZLINE: 483 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    init96(&ret2, _ln, _fn);
#line 485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = ret2;
#line 485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getSlice;
#line 485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  error = NULL;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = getView(x2, r, &error, _ln, _fn);
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (error != nil) /* ZLINE: 488 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    *(error_out) = error;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getSlice;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T = call_tmp9;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  r2 = (&T)->x0;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp2 = (&T)->x1;
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = size3(r2, _ln, _fn);
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl___LESS__ASSIGN_(call_tmp10, INT64(0));
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp11) /* ZLINE: 489 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    init96(&ret3, _ln, _fn);
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = ret3;
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy59(r2);
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy46(&T);
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getSlice;
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp12 = highBound2(r2);
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = lowBound4(r2);
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = chpl___HYPHEN_3(call_tmp12, call_tmp13);
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp15 = chpl___PLUS_7(call_tmp14);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp16 = chpl_get_string_buff(x2);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp17 = lowBound4(r2);
#line 503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp18 = chpl_get_string_locale_id(x2);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T2 = bufferCopy(*(call_tmp16), call_tmp17, call_tmp15, *(call_tmp18), _ln, _fn);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp3 = (&T2)->x0;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp4 = (&T2)->x1;
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  buff = coerce_tmp3;
#line 518 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp19 = size3(r2, _ln, _fn);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp20 = this21(coerce_tmp3, call_tmp19);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_4(call_tmp20, ((uint8_t)(INT64(0))));
#line 522 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  numCodepoints2 = coerce_tmp2;
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp21 = chpl___EQUALS_3(coerce_tmp2, INT64(-1));
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp21) /* ZLINE: 523 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp22 = countNumCodepoints(buff, call_tmp19, _ln, _fn);
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_3(&numCodepoints2, call_tmp22);
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = chpl_createStringWithOwnedBufferNV(buff, call_tmp19, coerce_tmp4, numCodepoints2, _ln, _fn);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy6(&T2);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(r2);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy46(&T);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end_getSlice:;
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:480 */
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static string getSlice4(string * x2,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        range_byteIndex_low_one r,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        Error * error_out,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        int64_t _ln,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        int32_t _fn) {
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret;
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp8;
#line 484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret2;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t call_tmp9;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  Error error = NULL;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t T;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one r2;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp2;
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp10;
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp11;
#line 490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret3;
#line 494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t buff = NULL;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp12;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp13;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp14;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp15;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp16 = NULL;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp17;
#line 503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp18 = NULL;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T2;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp3 = NULL;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp4;
#line 518 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp19;
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp20 = NULL;
#line 522 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t numCodepoints2;
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp21;
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp22;
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = isEmpty2(x2);
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp8) /* ZLINE: 483 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    init96(&ret2, _ln, _fn);
#line 485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = ret2;
#line 485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getSlice;
#line 485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  error = NULL;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = getView5(x2, r, &error, _ln, _fn);
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (error != nil) /* ZLINE: 488 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    *(error_out) = error;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getSlice;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T = call_tmp9;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  r2 = (&T)->x0;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp2 = (&T)->x1;
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = size3(r2, _ln, _fn);
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl___LESS__ASSIGN_(call_tmp10, INT64(0));
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp11) /* ZLINE: 489 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    init96(&ret3, _ln, _fn);
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = ret3;
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy59(r2);
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy46(&T);
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getSlice;
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp12 = highBound2(r2);
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = lowBound4(r2);
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = chpl___HYPHEN_3(call_tmp12, call_tmp13);
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp15 = chpl___PLUS_7(call_tmp14);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp16 = chpl_get_string_buff(x2);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp17 = lowBound4(r2);
#line 503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp18 = chpl_get_string_locale_id(x2);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T2 = bufferCopy(*(call_tmp16), call_tmp17, call_tmp15, *(call_tmp18), _ln, _fn);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp3 = (&T2)->x0;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp4 = (&T2)->x1;
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  buff = coerce_tmp3;
#line 518 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp19 = size3(r2, _ln, _fn);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp20 = this21(coerce_tmp3, call_tmp19);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_4(call_tmp20, ((uint8_t)(INT64(0))));
#line 522 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  numCodepoints2 = coerce_tmp2;
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp21 = chpl___EQUALS_3(coerce_tmp2, INT64(-1));
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp21) /* ZLINE: 523 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp22 = countNumCodepoints(buff, call_tmp19, _ln, _fn);
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_3(&numCodepoints2, call_tmp22);
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = chpl_createStringWithOwnedBufferNV(buff, call_tmp19, coerce_tmp4, numCodepoints2, _ln, _fn);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy6(&T2);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(r2);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy46(&T);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end_getSlice:;
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:480 */
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static string getSlice2(string * x2,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        range_int64_t_both_one r,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        Error * error_out,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        int64_t _ln,
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        int32_t _fn) {
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret;
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp8;
#line 484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret2;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t call_tmp9;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  Error error = NULL;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t T;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one r2;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp2;
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp10;
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp11;
#line 490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret3;
#line 494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t buff = NULL;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp12;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp13;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp14;
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp15;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp16 = NULL;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp17;
#line 503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp18 = NULL;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T2;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp3 = NULL;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp4;
#line 518 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp19;
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp20 = NULL;
#line 522 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t numCodepoints2;
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp21;
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp22;
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = isEmpty2(x2);
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp8) /* ZLINE: 483 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    init96(&ret2, _ln, _fn);
#line 485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = ret2;
#line 485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getSlice;
#line 485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  error = NULL;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = getView4(x2, r, &error, _ln, _fn);
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (error != nil) /* ZLINE: 488 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    *(error_out) = error;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getSlice;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T = call_tmp9;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  r2 = (&T)->x0;
#line 488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp2 = (&T)->x1;
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = size3(r2, _ln, _fn);
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl___LESS__ASSIGN_(call_tmp10, INT64(0));
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp11) /* ZLINE: 489 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    init96(&ret3, _ln, _fn);
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = ret3;
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy59(r2);
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy46(&T);
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_getSlice;
#line 491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp12 = highBound2(r2);
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = lowBound4(r2);
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = chpl___HYPHEN_3(call_tmp12, call_tmp13);
#line 501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp15 = chpl___PLUS_7(call_tmp14);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp16 = chpl_get_string_buff(x2);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp17 = lowBound4(r2);
#line 503 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp18 = chpl_get_string_locale_id(x2);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T2 = bufferCopy(*(call_tmp16), call_tmp17, call_tmp15, *(call_tmp18), _ln, _fn);
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp3 = (&T2)->x0;
#line 502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp4 = (&T2)->x1;
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  buff = coerce_tmp3;
#line 518 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp19 = size3(r2, _ln, _fn);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp20 = this21(coerce_tmp3, call_tmp19);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_4(call_tmp20, ((uint8_t)(INT64(0))));
#line 522 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  numCodepoints2 = coerce_tmp2;
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp21 = chpl___EQUALS_3(coerce_tmp2, INT64(-1));
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp21) /* ZLINE: 523 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 523 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp22 = countNumCodepoints(buff, call_tmp19, _ln, _fn);
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_3(&numCodepoints2, call_tmp22);
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = chpl_createStringWithOwnedBufferNV(buff, call_tmp19, coerce_tmp4, numCodepoints2, _ln, _fn);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy6(&T2);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(r2);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy46(&T);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end_getSlice:;
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:543 */
#line 543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static string doReplace(string * x2,
#line 543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        string * needle,
#line 543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        string * replacement,
#line 543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        int64_t count,
#line 543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        int64_t _ln,
#line 543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                        int32_t _fn) {
#line 543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret;
#line 548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string result;
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t found;
#line 550 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex startIdx;
#line 551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string localNeedle;
#line 552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string localReplacement;
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T;
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T2;
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T3;
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_byteIndex_low_one call_tmp8;
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex idx;
#line 556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp9;
#line 560 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  Error error = NULL;
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex call_tmp10;
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_byteIndex_high_one call_tmp11;
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp12;
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp13;
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp14;
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex call_tmp15;
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_byteIndex_low_one call_tmp16;
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp17;
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp18;
#line 565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp19;
#line 565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  byteIndex call_tmp20;
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T4;
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T5;
#line 548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  init_ASSIGN_25(&result, x2, _ln, _fn);
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  found = INT64(0);
#line 550 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  init_ASSIGN_24(&startIdx, INT64(0));
#line 551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  localNeedle = localize(needle, _ln, _fn);
#line 552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  localReplacement = localize(replacement, _ln, _fn);
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T2 = chpl___LESS_3(count, INT64(0));
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (T2) /* ZLINE: 554 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T3 = UINT8(true);
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  } else /* ZLINE: 554 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T3 = chpl___LESS_3(INT64(0), count);
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T = T3;
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  while (T) {
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp8 = chpl_build_low_bounded_range2(&startIdx);
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    idx = find(&result, &localNeedle, call_tmp8, _ln, _fn);
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy65(call_tmp8);
#line 556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp9 = chpl___EQUALS_21(&idx, INT64(-1));
#line 556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (call_tmp9) /* ZLINE: 556 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl__autoDestroy26(&idx);
#line 556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      goto _breakLabel;
#line 556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___PLUS__ASSIGN_(&found, INT64(1));
#line 560 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    error = NULL;
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp10 = chpl___HYPHEN_11(&idx, INT64(1));
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp11 = chpl_build_high_bounded_range(&call_tmp10);
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp12 = this17(&result, call_tmp11, &error, _ln, _fn);
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (error != nil) /* ZLINE: 561 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl__autoDestroy22(call_tmp11);
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl__autoDestroy26(&call_tmp10);
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      goto handler;
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp13 = chpl___PLUS_9(&call_tmp12, &localReplacement, _ln, _fn);
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp14 = numBytes(&localNeedle);
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp15 = chpl___PLUS_8(&idx, call_tmp14);
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp16 = chpl_build_low_bounded_range2(&call_tmp15);
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp17 = this16(&result, call_tmp16, &error, _ln, _fn);
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (error != nil) /* ZLINE: 562 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl__autoDestroy65(call_tmp16);
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl__autoDestroy26(&call_tmp15);
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl__autoDestroy23(&call_tmp13, _ln, _fn);
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl__autoDestroy22(call_tmp11);
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl__autoDestroy26(&call_tmp10);
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      goto handler;
#line 562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp18 = chpl___PLUS_9(&call_tmp13, &call_tmp17, _ln, _fn);
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_71(&result, &call_tmp18, _ln, _fn);
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp18, _ln, _fn);
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp17, _ln, _fn);
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy65(call_tmp16);
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy26(&call_tmp15);
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp13, _ln, _fn);
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy22(call_tmp11);
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy26(&call_tmp10);
#line 561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    handler:;
#line 560 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (error != nil) /* ZLINE: 560 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 560 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 560 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_uncaught_error(error, _ln, _fn);
#line 560 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp19 = numBytes(&localReplacement);
#line 565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp20 = chpl___PLUS_8(&idx, call_tmp19);
#line 565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_70(&startIdx, &call_tmp20);
#line 565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy26(&call_tmp20);
#line 565 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy26(&idx);
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T4 = chpl___LESS_3(count, INT64(0));
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (T4) /* ZLINE: 554 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T5 = UINT8(true);
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    } else /* ZLINE: 554 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T5 = chpl___LESS_3(found, count);
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T = T5;
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 554 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _breakLabel:;
#line 567 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = result;
#line 567 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy23(&localReplacement, _ln, _fn);
#line 567 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy23(&localNeedle, _ln, _fn);
#line 567 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy26(&startIdx);
#line 543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 730 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:730 */
#line 730 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static int64_t doSearchNoEnc(string * x2,
#line 730 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                             string * needle,
#line 730 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                             range_byteIndex_low_one region,
#line 730 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                             int64_t _ln,
#line 730 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                             int32_t _fn) {
#line 730 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t ret;
#line 735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t ret2;
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp8 = NULL;
#line 740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t localRet;
#line 741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t nLen;
#line 741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp2;
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t call_tmp10;
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  Error error = NULL;
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_range_int64_t_both_one_int64_t T;
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one view;
#line 746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp11;
#line 754 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp12;
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp13;
#line 769 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp14;
#line 771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp15;
#line 771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string localNeedle;
#line 776 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp16;
#line 776 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp17;
#line 777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one searchSpace;
#line 778 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_low_one call_tmp18;
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ic_these_range_int64_t_both_one _iterator = NULL;
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one this24;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp19;
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one this25;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp20;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp21;
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one this26;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp22;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end;
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one this27;
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t i2;
#line 782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ic_chpl_direct_counted_range_iter _iterator2 = NULL;
#line 782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir_chpl_direct_counted_range_iter call_tmp23;
#line 782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir_chpl_direct_counted_range_iter ret_tmp;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_counted_range_iter_helper _iterator3 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper call_tmp24;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper ret_tmp2;
#line 782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
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
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp30;
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp31;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp32 = NULL;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t _this_tmp_ = NULL;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp3 = NULL;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp33 = NULL;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t _this_tmp_2 = NULL;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp4 = NULL;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp34;
#line 786 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp35;
#line 786 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp36;
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp37;
#line 794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp38;
#line 735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret2 = INT64(-1);
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl_get_string_locale_id(x2);
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_buildLocaleID(*(call_tmp8), c_sublocid_any, _ln, _fn);
#line 740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  localRet = INT64(-2);
#line 741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl_get_string_buffLen(needle);
#line 741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp2 = *(call_tmp9);
#line 741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  nLen = coerce_tmp2;
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  error = NULL;
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = getView5(x2, region, &error, _ln, _fn);
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (error != nil) /* ZLINE: 745 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T = call_tmp10;
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  view = (&T)->x0;
#line 746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = size3(view, _ln, _fn);
#line 754 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp12 = chpl___EQUALS_3(coerce_tmp2, INT64(0));
#line 754 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp12) /* ZLINE: 754 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 754 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_3(&localRet, INT64(-1));
#line 756 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = chpl___GREATER_(coerce_tmp2, call_tmp11);
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp13) /* ZLINE: 765 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_3(&localRet, INT64(-1));
#line 766 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 769 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = chpl___EQUALS_3(localRet, INT64(-2));
#line 769 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp14) /* ZLINE: 769 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 769 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 770 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_3(&localRet, INT64(-1));
#line 771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp15 = localize(needle, _ln, _fn);
#line 771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    localNeedle = call_tmp15;
#line 772 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_get_string_buffLen(&localNeedle);
#line 776 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp16 = chpl___HYPHEN_3(call_tmp11, coerce_tmp2);
#line 776 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp17 = chpl___PLUS_7(call_tmp16);
#line 778 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp18 = chpl_build_low_bounded_range(INT64(0));
#line 777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    searchSpace = chpl___POUND_(call_tmp18, call_tmp17, _ln, _fn);
#line 777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy19(call_tmp18);
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _iterator = _getIterator3(&searchSpace, _ln, _fn);
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_check_nil(_iterator, _ln, _fn);
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    this24 = (_iterator)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    checkIfIterWillOverflow(this24, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    i = INT64(0);
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_check_nil(_iterator, _ln, _fn);
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    this25 = (_iterator)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp19 = lowBoundForIter(this25);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp20 = chpl__idxToInt(call_tmp19);
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_check_nil(_iterator, _ln, _fn);
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    this26 = (_iterator)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp21 = highBoundForIter(this26);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp22 = chpl__idxToInt(call_tmp21);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    end = call_tmp22;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    for (i = call_tmp20; ((i <= end)); i += INT64(1)) {
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      this27 = (_iterator)->F0_this;
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      i2 = chpl_intToIdx3(this27, i);
#line 782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_direct_counted_range_iter(INT64(0), nLen, &ret_tmp);
#line 782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp23 = ret_tmp;
#line 782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _iterator2 = _getIterator10(&call_tmp23, _ln, _fn);
#line 782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      low3 = (_iterator2)->F0_low;
#line 782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
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
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp30 = chpl___PLUS_3(i2, i3);
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp31 = orderToIndex(view, call_tmp30, _ln, _fn);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        _this_tmp_ = chpl_get_string_buff(x2);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        coerce_tmp3 = *(_this_tmp_);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp32 = this21(coerce_tmp3, call_tmp31);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        _this_tmp_2 = chpl_get_string_buff(&localNeedle);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        coerce_tmp4 = *(_this_tmp_2);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp33 = this21(coerce_tmp4, i3);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp34 = chpl___EXCLAMATION__ASSIGN_3(*(call_tmp32), *(call_tmp33));
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        if (call_tmp34) /* ZLINE: 784 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        {
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _freeIterator19(_iterator4, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _freeIterator20(_iterator3, _ln, _fn);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          goto _breakLabel;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        }
#line 786 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp35 = chpl___HYPHEN_6(nLen);
#line 786 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp36 = chpl___EQUALS_3(i3, call_tmp35);
#line 786 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        if (call_tmp36) /* ZLINE: 786 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 786 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        {
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp37 = orderToIndex(view, i2, _ln, _fn);
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl___ASSIGN_3(&localRet, call_tmp37);
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        }
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator19(_iterator4, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator20(_iterator3, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _breakLabel:;
#line 782 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _freeIterator(_iterator2, _ln, _fn);
#line 794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp38 = chpl___EXCLAMATION__ASSIGN_2(localRet, INT64(-1));
#line 794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      if (call_tmp38) /* ZLINE: 794 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      {
#line 794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        goto _breakLabel2;
#line 794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      }
#line 794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 794 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _breakLabel2:;
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _freeIterator17(_iterator, _ln, _fn);
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy59(searchSpace);
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&localNeedle, _ln, _fn);
#line 780 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_3(&ret2, localRet);
#line 798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(view);
#line 798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy46(&T);
#line 800 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = ret2;
#line 730 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 730 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1044 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1044 */
#line 1044 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static int64_t resizeBufferForAppend(string * lhs,
#line 1044 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                     int64_t n,
#line 1044 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                     int64_t _ln,
#line 1044 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                     int32_t _fn) {
#line 1047 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1047 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp9;
#line 1047 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp10;
#line 1049 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 1049 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp12;
#line 1051 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp13 = NULL;
#line 1051 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp14;
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp15;
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp16 = NULL;
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _real64 call_tmp17;
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp18;
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp19;
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool call_tmp20 = NULL;
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp21 = NULL;
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T;
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp3;
#line 1056 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp22 = NULL;
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp23 = NULL;
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T2;
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp4 = NULL;
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp5;
#line 1060 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp24 = NULL;
#line 1060 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp25 = NULL;
#line 1061 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp26 = NULL;
#line 1062 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp27 = NULL;
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool call_tmp28 = NULL;
#line 1047 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl_get_string_buffLen(lhs);
#line 1047 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = safeAdd(*(call_tmp8), n);
#line 1047 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl___EXCLAMATION_(call_tmp9);
#line 1047 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp10) /* ZLINE: 1047 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1047 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1048 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    halt(&_str_literal_303, _ln, _fn);
#line 1048 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1049 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl_get_string_buffLen(lhs);
#line 1049 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp12 = chpl___PLUS_3(*(call_tmp11), n);
#line 1051 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = chpl_get_string_buffSize(lhs);
#line 1051 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = chpl___LESS__ASSIGN_(*(call_tmp13), call_tmp12);
#line 1051 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp14) /* ZLINE: 1051 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1051 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp15 = chpl___PLUS_7(call_tmp12);
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp16 = chpl_get_string_buffLen(lhs);
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp17 = chpl___ASTERISK_4(((_real64)(*(call_tmp16))), REAL64(0x1.8p+0));
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp18 = chpl___COLON_7(call_tmp17, _ln, _fn);
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp19 = max2(call_tmp15, call_tmp18);
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp20 = chpl_get_string_isOwned(lhs);
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (*(call_tmp20)) /* ZLINE: 1054 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp21 = chpl_get_string_buff(lhs);
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T = bufferRealloc(*(call_tmp21), call_tmp19, _ln, _fn);
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      coerce_tmp2 = (&T)->x0;
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      coerce_tmp3 = (&T)->x1;
#line 1056 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp22 = chpl_get_string_buff(lhs);
#line 1056 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_74(call_tmp22, coerce_tmp2);
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp23 = chpl_get_string_buffSize(lhs);
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_3(call_tmp23, coerce_tmp3);
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl__autoDestroy6(&T);
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    } else /* ZLINE: 1058 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T2 = bufferAlloc(call_tmp19, _ln, _fn);
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      coerce_tmp4 = (&T2)->x0;
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      coerce_tmp5 = (&T2)->x1;
#line 1060 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp24 = chpl_get_string_buff(lhs);
#line 1060 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp25 = chpl_get_string_buffLen(lhs);
#line 1060 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      bufferMemcpyLocal(coerce_tmp4, *(call_tmp24), *(call_tmp25), INT64(0), INT64(0), _ln, _fn);
#line 1061 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp26 = chpl_get_string_buff(lhs);
#line 1061 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_74(call_tmp26, coerce_tmp4);
#line 1062 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp27 = chpl_get_string_buffSize(lhs);
#line 1062 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_3(call_tmp27, coerce_tmp5);
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp28 = chpl_get_string_isOwned(lhs);
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_(call_tmp28, UINT8(true));
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl__autoDestroy6(&T2);
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1044 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return call_tmp12;
#line 1044 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1070 */
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static void doAppend(string * lhs,
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                     string * rhs,
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                     int64_t _ln,
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                     int32_t _fn) {
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp9;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp10 = NULL;
#line 1080 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 1080 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp12;
#line 1082 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp13 = NULL;
#line 1082 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp14 = NULL;
#line 1082 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp15 = NULL;
#line 1082 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp16 = NULL;
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp17 = NULL;
#line 1084 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp18 = NULL;
#line 1085 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp19 = NULL;
#line 1085 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t _this_tmp_ = NULL;
#line 1085 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp20 = NULL;
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp21 = NULL;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl_get_string_buffLen(rhs);
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl___EQUALS_3(*(call_tmp8), INT64(0));
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp9) /* ZLINE: 1074 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_doAppend;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl_get_string_locale_id(lhs);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_buildLocaleID(*(call_tmp10), c_sublocid_any, _ln, _fn);
#line 1080 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl_get_string_buffLen(rhs);
#line 1080 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp12 = resizeBufferForAppend(lhs, *(call_tmp11), _ln, _fn);
#line 1082 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = chpl_get_string_buff(lhs);
#line 1082 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = chpl_get_string_locale_id(rhs);
#line 1082 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp15 = chpl_get_string_buff(rhs);
#line 1082 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp16 = chpl_get_string_buffLen(rhs);
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp17 = chpl_get_string_buffLen(lhs);
#line 1082 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  bufferMemcpy(*(call_tmp13), ((int64_t)(*(call_tmp14))), *(call_tmp15), *(call_tmp16), *(call_tmp17), INT64(0), _ln, _fn);
#line 1084 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp18 = chpl_get_string_buffLen(lhs);
#line 1084 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_3(call_tmp18, call_tmp12);
#line 1085 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _this_tmp_ = chpl_get_string_buff(lhs);
#line 1085 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp2 = *(_this_tmp_);
#line 1085 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1085 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp19 = this21(coerce_tmp2, call_tmp12);
#line 1085 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_4(call_tmp19, ((uint8_t)(INT64(0))));
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp20 = chpl_get_string_cachedNumCodepoints(lhs);
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp21 = chpl_get_string_cachedNumCodepoints(rhs);
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___PLUS__ASSIGN_(call_tmp20, *(call_tmp21));
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end_doAppend:;
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return;
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1116 */
#line 1116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static void resizeBuffer(string * lhs,
#line 1116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                         int64_t buffLen,
#line 1116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                         int64_t _ln,
#line 1116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                         int32_t _fn) {
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T;
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T2;
#line 1121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp8;
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T3;
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool call_tmp9 = NULL;
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T4;
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp10;
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 1125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool T5 = NULL;
#line 1125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T6;
#line 1125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp12;
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp13 = NULL;
#line 1128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp14;
#line 1128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T7;
#line 1128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 1128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp3;
#line 1129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp15 = NULL;
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp16 = NULL;
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool call_tmp17 = NULL;
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_chpl_bool T8 = NULL;
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T9;
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp18;
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp19 = NULL;
#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp20 = NULL;
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp21 = NULL;
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T = isEmpty2(lhs);
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (T) /* ZLINE: 1117 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T2 = chpl___EQUALS_3(buffLen, INT64(0));
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  } else /* ZLINE: 1117 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T2 = UINT8(false);
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (T2) /* ZLINE: 1117 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_resizeBuffer;
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_2(buffLen, INT64(0));
#line 1121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp8) /* ZLINE: 1121 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp9 = chpl_get_string_isOwned(lhs);
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T3 = chpl___EXCLAMATION_(*(call_tmp9));
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (T3) /* ZLINE: 1122 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T4 = UINT8(true);
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    } else /* ZLINE: 1122 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp10 = chpl___PLUS_7(buffLen);
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp11 = chpl_get_string_buffSize(lhs);
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T4 = chpl___GREATER_(call_tmp10, *(call_tmp11));
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (T4) /* ZLINE: 1122 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T5 = chpl_get_string_isOwned(lhs);
#line 1125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      if (*(T5)) /* ZLINE: 1125 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      {
#line 1125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp12 = isEmpty2(lhs);
#line 1125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        T6 = chpl___EXCLAMATION_(call_tmp12);
#line 1125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      } else /* ZLINE: 1125 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      {
#line 1125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        T6 = UINT8(false);
#line 1125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      }
#line 1125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      if (T6) /* ZLINE: 1125 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      {
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp13 = chpl_get_string_buff(lhs);
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        bufferFree(*(call_tmp13), _ln, _fn);
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      }
#line 1128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp14 = chpl___PLUS_7(buffLen);
#line 1128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T7 = bufferAlloc(call_tmp14, _ln, _fn);
#line 1128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      coerce_tmp2 = (&T7)->x0;
#line 1128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      coerce_tmp3 = (&T7)->x1;
#line 1129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp15 = chpl_get_string_buff(lhs);
#line 1129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_74(call_tmp15, coerce_tmp2);
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp16 = chpl_get_string_buffSize(lhs);
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_3(call_tmp16, coerce_tmp3);
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp17 = chpl_get_string_isOwned(lhs);
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_(call_tmp17, UINT8(true));
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl__autoDestroy6(&T7);
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  } else /* ZLINE: 1134 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T8 = chpl_get_string_isOwned(lhs);
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (*(T8)) /* ZLINE: 1137 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp18 = isEmpty2(lhs);
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T9 = chpl___EXCLAMATION_(call_tmp18);
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    } else /* ZLINE: 1137 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T9 = UINT8(false);
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (T9) /* ZLINE: 1137 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp19 = chpl_get_string_buff(lhs);
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      bufferFree(*(call_tmp19), _ln, _fn);
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp20 = chpl_get_string_buffSize(lhs);
#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_3(call_tmp20, INT64(0));
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp21 = chpl_get_string_buff(lhs);
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_79(call_tmp21, nil, _ln, _fn);
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end_resizeBuffer:;
#line 1116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return;
#line 1116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1147 */
#line 1147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static void reinitWithNewBuffer(string * lhs,
#line 1147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                uint8_t * buff,
#line 1147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                int64_t buffLen,
#line 1147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                int64_t buffSize,
#line 1147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                int64_t numCodepoints2,
#line 1147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                int64_t _ln,
#line 1147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                int32_t _fn) {
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T;
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T2;
#line 1152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp8;
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp9 = NULL;
#line 1154 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp10 = NULL;
#line 1154 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t _this_tmp_ = NULL;
#line 1154 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp12 = NULL;
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T = isEmpty2(lhs);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (T) /* ZLINE: 1149 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T2 = chpl___EQUALS_24(buff, nil);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  } else /* ZLINE: 1149 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T2 = UINT8(false);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (T2) /* ZLINE: 1149 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_reinitWithNewBuffer;
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  resizeBuffer(lhs, buffLen, _ln, _fn);
#line 1152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_2(buffLen, INT64(0));
#line 1152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp8) /* ZLINE: 1152 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp9 = chpl_get_string_buff(lhs);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    bufferMemmoveLocal(*(call_tmp9), buff, buffLen, INT64(0), INT64(0), _ln, _fn);
#line 1154 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _this_tmp_ = chpl_get_string_buff(lhs);
#line 1154 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    coerce_tmp2 = *(_this_tmp_);
#line 1154 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1154 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp10 = this21(coerce_tmp2, buffLen);
#line 1154 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_4(call_tmp10, ((uint8_t)(INT64(0))));
#line 1154 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl_get_string_buffLen(lhs);
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_3(call_tmp11, buffLen);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp12 = chpl_get_string_cachedNumCodepoints(lhs);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_3(call_tmp12, numCodepoints2);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end_reinitWithNewBuffer:;
#line 1147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return;
#line 1147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1186 */
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static void doAssign(string * lhs,
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                     string * rhs,
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                     int64_t _ln,
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                     int32_t _fn) {
#line 1214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  helpMe(lhs, rhs, _ln, _fn);
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return;
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1189 */
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static void helpMe(string * lhs,
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                   string * rhs,
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                   int64_t _ln,
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                   int32_t _fn) {
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp8 = NULL;
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp11;
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl_get_string_buff(rhs);
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl_get_string_buffLen(rhs);
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl_get_string_buffSize(rhs);
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = numCodepoints(rhs);
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  reinitWithNewBuffer(lhs, *(call_tmp8), *(call_tmp9), *(call_tmp10), call_tmp11, _ln, _fn);
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return;
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1264 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1264 */
#line 1264 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static string doConcat(string * s0,
#line 1264 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                       string * s1,
#line 1264 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                       int64_t _ln,
#line 1264 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                       int32_t _fn) {
#line 1264 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp2;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp9;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp10;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string _formal_tmp_in_x;
#line 1270 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 1270 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp3;
#line 1271 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp12;
#line 1273 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp13;
#line 1274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp14;
#line 1274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T;
#line 1274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t buff = NULL;
#line 1274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp4 = NULL;
#line 1274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp5;
#line 1276 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp15 = NULL;
#line 1276 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp16 = NULL;
#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp17 = NULL;
#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp18 = NULL;
#line 1279 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp19 = NULL;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret2;
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp20 = NULL;
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp21 = NULL;
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp22 = NULL;
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp23;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl_get_string_buffLen(s0);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl___EQUALS_3(coerce_tmp2, INT64(0));
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp9) /* ZLINE: 1269 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _formal_tmp_in_x = chpl__initCopy6(s1, UINT8(false), _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp10 = _removed_cast(&_formal_tmp_in_x);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = call_tmp10;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_doConcat;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1270 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl_get_string_buffLen(s1);
#line 1270 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp3 = *(call_tmp11);
#line 1271 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp12 = chpl___EQUALS_3(coerce_tmp3, INT64(0));
#line 1271 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp12) /* ZLINE: 1271 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1271 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1271 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = chpl__initCopy6(s0, UINT8(false), _ln, _fn);
#line 1271 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_doConcat;
#line 1271 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1273 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = chpl___PLUS_3(coerce_tmp2, coerce_tmp3);
#line 1274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = chpl___PLUS_7(call_tmp13);
#line 1274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T = bufferAlloc(call_tmp14, _ln, _fn);
#line 1274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp4 = (&T)->x0;
#line 1274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  buff = coerce_tmp4;
#line 1274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  coerce_tmp5 = (&T)->x1;
#line 1276 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp15 = chpl_get_string_locale_id(s0);
#line 1276 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp16 = chpl_get_string_buff(s0);
#line 1276 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  bufferMemcpy(coerce_tmp4, ((int64_t)(*(call_tmp15))), *(call_tmp16), coerce_tmp2, INT64(0), INT64(0), _ln, _fn);
#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp17 = chpl_get_string_locale_id(s1);
#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp18 = chpl_get_string_buff(s1);
#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  bufferMemcpy(coerce_tmp4, ((int64_t)(*(call_tmp17))), *(call_tmp18), coerce_tmp3, coerce_tmp2, INT64(0), _ln, _fn);
#line 1279 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 1279 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp19 = this21(coerce_tmp4, call_tmp13);
#line 1279 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_4(call_tmp19, ((uint8_t)(INT64(0))));
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  init96(&ret2, _ln, _fn);
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp20 = chpl_get_string_cachedNumCodepoints(&ret2);
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp21 = chpl_get_string_cachedNumCodepoints(s0);
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp22 = chpl_get_string_cachedNumCodepoints(s1);
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp23 = chpl___PLUS_3(*(call_tmp21), *(call_tmp22));
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl___ASSIGN_3(call_tmp20, call_tmp23);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  initWithOwnedBuffer(&ret2, buff, call_tmp13, coerce_tmp5);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = ret2;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy6(&T);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end_doConcat:;
#line 1264 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 1264 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1289 */
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static string doStripNoEnc(string * x2,
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                           string * chars,
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                           chpl_bool leading,
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                           chpl_bool trailing,
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                           int64_t _ln,
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                           int32_t _fn) {
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string ret;
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp8;
#line 1292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp9;
#line 1294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp10;
#line 1294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string localX;
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string localChars;
#line 1297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t start;
#line 1298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 1298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t end;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string _iterator;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp12;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ic_these_range_int64_t_both_one call_tmp13 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir_chpl_bytes__ref_string call_tmp14;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir_chpl_bytes__ref_string ret_tmp;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ic_chpl_bytes__ref_string call_tmp15 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ic_these_range_int64_t_both_one _iterator2 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ic_chpl_bytes__ref_string _iterator3 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool hasMore3;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t retTmp;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  uint8_t _index;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t i;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  uint8_t xChar;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ic_chpl_bytes__ref_string _iterator4 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir_chpl_bytes__ref_string call_tmp16;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir_chpl_bytes__ref_string ret_tmp2;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_string this24 = NULL;
#line 1327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string localThis;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_chpl_direct_counted_range_iter _iterator5 = NULL;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp17 = NULL;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir_chpl_direct_counted_range_iter call_tmp18;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir_chpl_direct_counted_range_iter ret_tmp3;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string ref_localThis = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_counted_range_iter_helper _iterator6 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper call_tmp19;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper ret_tmp4;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t low3;
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp20;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp21;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp22;
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp23;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator7 = NULL;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp24;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp5;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i2;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low5;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  uint8_t yret;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp25 = NULL;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t _this_tmp_ = NULL;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp26;
#line 1304 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp27;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t moreVal1;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t moreValNeg1;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t moreVal2;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t moreValNeg2;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t retTmp2;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string _iterator8;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp28;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ic_these_range_int64_t_both_one call_tmp29 = NULL;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir_chpl_bytes__ref_string call_tmp30;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir_chpl_bytes__ref_string ret_tmp6;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ic_chpl_bytes__ref_string call_tmp31 = NULL;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ic_these_range_int64_t_both_one _iterator9 = NULL;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ic_chpl_bytes__ref_string _iterator10 = NULL;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool hasMore4;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t retTmp3;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  uint8_t _index2;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t i3;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  uint8_t xChar2;
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ic_chpl_bytes__ref_string _iterator11 = NULL;
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir_chpl_bytes__ref_string call_tmp32;
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir_chpl_bytes__ref_string ret_tmp7;
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_string this25 = NULL;
#line 1327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string localThis2;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_chpl_direct_counted_range_iter _iterator12 = NULL;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp33 = NULL;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir_chpl_direct_counted_range_iter call_tmp34;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir_chpl_direct_counted_range_iter ret_tmp8;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string ref_localThis2 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_counted_range_iter_helper _iterator13 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper call_tmp35;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper ret_tmp9;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  int64_t low6;
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp36;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low7;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T2;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp37;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp38;
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp39;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator14 = NULL;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp40;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp10;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i4;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first2;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last2;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low8;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high3;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  uint8_t yret2;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp41 = NULL;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t _this_tmp_2 = NULL;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t coerce_tmp3 = NULL;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp42;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t retTmp4;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_both_one call_tmp43;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp44;
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = isEmpty2(x2);
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp8) /* ZLINE: 1290 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = chpl__initCopy6(&_str_literal_77, UINT8(false), _ln, _fn);
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_doStripNoEnc;
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = isEmpty2(chars);
#line 1292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp9) /* ZLINE: 1292 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    ret = chpl__autoCopy2(x2, UINT8(false), _ln, _fn);
#line 1292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    goto _end_doStripNoEnc;
#line 1292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = localize(x2, _ln, _fn);
#line 1294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  localX = call_tmp10;
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  localChars = localize(chars, _ln, _fn);
#line 1297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  start = INT64(0);
#line 1298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl_get_string_buffLen(&localX);
#line 1298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  end = chpl___HYPHEN_6(*(call_tmp11));
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (leading) /* ZLINE: 1300 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp12 = indices2(x2);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp13 = _getIterator3(&call_tmp12, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_bytes(&localX, &ret_tmp);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp14 = ret_tmp;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp15 = _getIterator22(&call_tmp14, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _iterator = _build_tuple(call_tmp13, call_tmp15);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _iterator2 = (&_iterator)->x0;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _iterator3 = (&_iterator)->x1;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_check_nil(_iterator2, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    zip1(_iterator2, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_check_nil(_iterator3, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    zip12(_iterator3, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    for (chpl_check_nil(_iterator2, _ln, _fn),init49(_iterator2, _ln, _fn),chpl_check_nil(_iterator3, _ln, _fn),init97(_iterator3, _ln, _fn); (chpl_check_nil(_iterator2, _ln, _fn),hasMore(_iterator2, _ln, _fn)); chpl_check_nil(_iterator2, _ln, _fn),incr(_iterator2, _ln, _fn),chpl_check_nil(_iterator3, _ln, _fn),incr2(_iterator3, _ln, _fn)) {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      zip22(_iterator3, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      retTmp = hasMore2(_iterator3, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      hasMore3 = (retTmp != INT64(0));
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      if (! hasMore3) /* ZLINE: 1301 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        chpl_error("zippered iterations have non-equal lengths", _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      }
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _index = getValue2(_iterator3, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      zip2(_iterator2, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      i = getValue(_iterator2, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      xChar = _index;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_bytes(&localChars, &ret_tmp2);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp16 = ret_tmp2;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _iterator4 = _getIterator22(&call_tmp16, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator4, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      this24 = (_iterator4)->F0_this;
#line 1327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      localThis = localize(this24, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp17 = chpl_get_string_buffLen(&localThis);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl_direct_counted_range_iter(INT64(0), *(call_tmp17), &ret_tmp3);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp18 = ret_tmp3;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _iterator5 = _getIterator10(&call_tmp18, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      ref_localThis = &localThis;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl_check_nil(_iterator5, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      low3 = (_iterator5)->F0_low;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl_check_nil(_iterator5, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_direct_counted_range_iter_helper(low3, (_iterator5)->F1_count, &ret_tmp4);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp19 = ret_tmp4;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _iterator6 = _getIterator11(&call_tmp19, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator6, _ln, _fn);
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp20 = chpl___LESS_3((_iterator6)->F1_count, INT64(0));
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      if (call_tmp20) /* ZLINE: 3252 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        boundsCheckHalt(&_str_literal_883, _ln, _fn);
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      }
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator6, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      low4 = (_iterator6)->F0_low;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator6, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp21 = chpl___EQUALS_3((_iterator6)->F1_count, INT64(0));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      if (call_tmp21) /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator6, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp22 = chpl___HYPHEN_5(((uint64_t)((_iterator6)->F0_low)));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        T = chpl___COLON_6(call_tmp22, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      } else /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator6, _ln, _fn);
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp23 = chpl___HYPHEN_6((_iterator6)->F1_count);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator6, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        T = chpl___PLUS_3((_iterator6)->F0_low, call_tmp23);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_direct_param_stride_range_iter(low4, T, &ret_tmp5);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp24 = ret_tmp5;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _iterator7 = _getIterator13(&call_tmp24, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      i2 = INT64(0);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator7, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator7)->F0_low);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator7, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator7)->F1_high);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator7, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      low5 = (_iterator7)->F0_low;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator7, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_checkIfRangeIterWillOverflow(low5, (_iterator7)->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator7, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      high2 = (_iterator7)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      for (chpl_check_nil(_iterator7, _ln, _fn),i2 = (_iterator7)->F0_low; ((i2 <= high2)); i2 += INT64(1)) {
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        _this_tmp_ = chpl_get_string_buff(ref_localThis);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        coerce_tmp2 = *(_this_tmp_);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp25 = this21(coerce_tmp2, i2);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        yret = *(call_tmp25);
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp26 = chpl___EQUALS_4(xChar, yret);
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        if (call_tmp26) /* ZLINE: 1303 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        {
#line 1304 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp27 = chpl___PLUS_7(i);
#line 1304 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl___ASSIGN_3(&start, call_tmp27);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _freeIterator19(_iterator7, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _freeIterator20(_iterator6, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          _freeIterator(_iterator5, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl__autoDestroy23(&localThis, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          _freeIterator18(_iterator4, _ln, _fn);
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          goto _continueLabel;
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        }
#line 1305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator19(_iterator7, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator20(_iterator6, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _freeIterator(_iterator5, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl__autoDestroy23(&localThis, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _freeIterator18(_iterator4, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      moreVal1 = (_iterator2)->more;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      moreValNeg1 = (-moreVal1);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      (_iterator2)->more = moreValNeg1;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      advance(_iterator2, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      moreVal2 = (_iterator3)->more;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      moreValNeg2 = (-moreVal2);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      (_iterator3)->more = moreValNeg2;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      advance2(_iterator3, _ln, _fn);
#line 1308 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      goto _breakLabel;
#line 1308 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _continueLabel:;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      zip3(_iterator2);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      zip32(_iterator3);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_check_nil(_iterator3, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    retTmp2 = hasMore2(_iterator3, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    hasMore3 = (retTmp2 != INT64(0));
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (hasMore3) /* ZLINE: 1301 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_error("zippered iterations have non-equal lengths", _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_check_nil(_iterator3, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    zip42(_iterator3, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_check_nil(_iterator2, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    zip4(_iterator2);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _breakLabel:;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _freeIterator21(&_iterator, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy38(&_iterator);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy59(call_tmp12);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (trailing) /* ZLINE: 1312 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_3(&end, INT64(-1));
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp28 = indices2(x2);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp29 = _getIterator3(&call_tmp28, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_bytes(&localX, &ret_tmp6);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp30 = ret_tmp6;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp31 = _getIterator22(&call_tmp30, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _iterator8 = _build_tuple(call_tmp29, call_tmp31);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _iterator9 = (&_iterator8)->x0;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _iterator10 = (&_iterator8)->x1;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_check_nil(_iterator9, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    zip1(_iterator9, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_check_nil(_iterator10, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    zip12(_iterator10, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    for (chpl_check_nil(_iterator9, _ln, _fn),init49(_iterator9, _ln, _fn),chpl_check_nil(_iterator10, _ln, _fn),init97(_iterator10, _ln, _fn); (chpl_check_nil(_iterator9, _ln, _fn),hasMore(_iterator9, _ln, _fn)); chpl_check_nil(_iterator9, _ln, _fn),incr(_iterator9, _ln, _fn),chpl_check_nil(_iterator10, _ln, _fn),incr2(_iterator10, _ln, _fn)) {
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator10, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      zip22(_iterator10, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator10, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      retTmp3 = hasMore2(_iterator10, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      hasMore4 = (retTmp3 != INT64(0));
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      if (! hasMore4) /* ZLINE: 1318 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      {
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        chpl_error("zippered iterations have non-equal lengths", _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      }
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator10, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _index2 = getValue2(_iterator10, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator9, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      zip2(_iterator9, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator9, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      i3 = getValue(_iterator9, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      xChar2 = _index2;
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_bytes(&localChars, &ret_tmp7);
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp32 = ret_tmp7;
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _iterator11 = _getIterator22(&call_tmp32, _ln, _fn);
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator11, _ln, _fn);
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      this25 = (_iterator11)->F0_this;
#line 1327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      localThis2 = localize(this25, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp33 = chpl_get_string_buffLen(&localThis2);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl_direct_counted_range_iter(INT64(0), *(call_tmp33), &ret_tmp8);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      call_tmp34 = ret_tmp8;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _iterator12 = _getIterator10(&call_tmp34, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      ref_localThis2 = &localThis2;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl_check_nil(_iterator12, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      low6 = (_iterator12)->F0_low;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl_check_nil(_iterator12, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_direct_counted_range_iter_helper(low6, (_iterator12)->F1_count, &ret_tmp9);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp35 = ret_tmp9;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _iterator13 = _getIterator11(&call_tmp35, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator13, _ln, _fn);
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp36 = chpl___LESS_3((_iterator13)->F1_count, INT64(0));
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      if (call_tmp36) /* ZLINE: 3252 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        boundsCheckHalt(&_str_literal_883, _ln, _fn);
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      }
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator13, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      low7 = (_iterator13)->F0_low;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator13, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp37 = chpl___EQUALS_3((_iterator13)->F1_count, INT64(0));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      if (call_tmp37) /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator13, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp38 = chpl___HYPHEN_5(((uint64_t)((_iterator13)->F0_low)));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        T2 = chpl___COLON_6(call_tmp38, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      } else /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator13, _ln, _fn);
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp39 = chpl___HYPHEN_6((_iterator13)->F1_count);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator13, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        T2 = chpl___PLUS_3((_iterator13)->F0_low, call_tmp39);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_direct_param_stride_range_iter(low7, T2, &ret_tmp10);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp40 = ret_tmp10;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _iterator14 = _getIterator13(&call_tmp40, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      i4 = INT64(0);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator14, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      default_arg_first2 = chpl_checkIfRangeIterWillOverflow_default_first((_iterator14)->F0_low);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator14, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      default_arg_last2 = chpl_checkIfRangeIterWillOverflow_default_last((_iterator14)->F1_high);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator14, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      low8 = (_iterator14)->F0_low;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator14, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_checkIfRangeIterWillOverflow(low8, (_iterator14)->F1_high, INT64(1), default_arg_first2, default_arg_last2, UINT8(true), _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator14, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      high3 = (_iterator14)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      for (chpl_check_nil(_iterator14, _ln, _fn),i4 = (_iterator14)->F0_low; ((i4 <= high3)); i4 += INT64(1)) {
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        _this_tmp_2 = chpl_get_string_buff(ref_localThis2);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        coerce_tmp3 = *(_this_tmp_2);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        call_tmp41 = this21(coerce_tmp3, i4);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
        yret2 = *(call_tmp41);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp42 = chpl___EQUALS_4(xChar2, yret2);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        if (call_tmp42) /* ZLINE: 1320 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        {
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _freeIterator19(_iterator14, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _freeIterator20(_iterator13, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          _freeIterator(_iterator12, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
          chpl__autoDestroy23(&localThis2, _ln, _fn);
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          _freeIterator18(_iterator11, _ln, _fn);
#line 1321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          goto _continueLabel2;
#line 1321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        }
#line 1321 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator19(_iterator14, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator20(_iterator13, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _freeIterator(_iterator12, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl__autoDestroy23(&localThis2, _ln, _fn);
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _freeIterator18(_iterator11, _ln, _fn);
#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_3(&end, i3);
#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _continueLabel2:;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator9, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      zip3(_iterator9);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(_iterator10, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      zip32(_iterator10);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_check_nil(_iterator10, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    retTmp4 = hasMore2(_iterator10, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    hasMore4 = (retTmp4 != INT64(0));
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (hasMore4) /* ZLINE: 1318 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_error("zippered iterations have non-equal lengths", _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_check_nil(_iterator10, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    zip42(_iterator10, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_check_nil(_iterator9, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    zip4(_iterator9);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _freeIterator21(&_iterator8, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy38(&_iterator8);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy59(call_tmp28);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp43 = chpl_build_bounded_range3(start, end);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp44 = this19(&localX, call_tmp43, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = call_tmp44;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy59(call_tmp43);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy23(&localChars, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl__autoDestroy23(&localX, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end_doStripNoEnc:;
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1332 */
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static chpl_bool doEq(string * a,
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                      string * b,
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                      int64_t _ln,
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                      int32_t _fn) {
#line 1350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp8 = NULL;
#line 1350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 1350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp10 = NULL;
#line 1350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp11 = NULL;
#line 1350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp12 = NULL;
#line 1350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp13 = NULL;
#line 1350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp14;
#line 1350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp15;
#line 1350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl_get_string_buff(a);
#line 1350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl_get_string_buffLen(a);
#line 1350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl_get_string_locale_id(a);
#line 1350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl_get_string_buff(b);
#line 1350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp12 = chpl_get_string_buffLen(b);
#line 1350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = chpl_get_string_locale_id(b);
#line 1350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = _strcmp(*(call_tmp8), *(call_tmp9), *(call_tmp10), *(call_tmp11), *(call_tmp12), *(call_tmp13), _ln, _fn);
#line 1350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp15 = chpl___EQUALS_3(call_tmp14, INT64(0));
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return call_tmp15;
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1353 */
#line 1353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static chpl_bool doLessThan(string * a,
#line 1353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                            string * b,
#line 1353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                            int64_t _ln,
#line 1353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                            int32_t _fn) {
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp8 = NULL;
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp10 = NULL;
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp11 = NULL;
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp12 = NULL;
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp13 = NULL;
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp14;
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp15;
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl_get_string_buff(a);
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl_get_string_buffLen(a);
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl_get_string_locale_id(a);
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl_get_string_buff(b);
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp12 = chpl_get_string_buffLen(b);
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = chpl_get_string_locale_id(b);
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = _strcmp(*(call_tmp8), *(call_tmp9), *(call_tmp10), *(call_tmp11), *(call_tmp12), *(call_tmp13), _ln, _fn);
#line 1357 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp15 = chpl___LESS_3(call_tmp14, INT64(0));
#line 1353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return call_tmp15;
#line 1353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1360 */
#line 1360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static chpl_bool doGreaterThan(string * a,
#line 1360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                               string * b,
#line 1360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                               int64_t _ln,
#line 1360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                               int32_t _fn) {
#line 1364 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp8 = NULL;
#line 1364 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 1364 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp10 = NULL;
#line 1364 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t call_tmp11 = NULL;
#line 1364 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp12 = NULL;
#line 1364 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int32_t call_tmp13 = NULL;
#line 1364 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp14;
#line 1364 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp15;
#line 1364 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl_get_string_buff(a);
#line 1364 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl_get_string_buffLen(a);
#line 1364 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = chpl_get_string_locale_id(a);
#line 1364 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp11 = chpl_get_string_buff(b);
#line 1364 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp12 = chpl_get_string_buffLen(b);
#line 1364 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp13 = chpl_get_string_locale_id(b);
#line 1364 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp14 = _strcmp(*(call_tmp8), *(call_tmp9), *(call_tmp10), *(call_tmp11), *(call_tmp12), *(call_tmp13), _ln, _fn);
#line 1364 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp15 = chpl___GREATER_(call_tmp14, INT64(0));
#line 1360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return call_tmp15;
#line 1360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1414 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1414 */
#line 1414 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static int64_t countNumCodepoints(uint8_t * buff,
#line 1414 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                  int64_t buffLen,
#line 1414 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                  int64_t _ln,
#line 1414 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                  int32_t _fn) {
#line 1414 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t ret;
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t n;
#line 1416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t i;
#line 1417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T;
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T2;
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T3;
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T4;
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp8 = NULL;
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp9;
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T5;
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T6;
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp10 = NULL;
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp11;
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  n = INT64(0);
#line 1416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  i = INT64(0);
#line 1417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  T = chpl___LESS_3(INT64(0), buffLen);
#line 1417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  while (T) {
#line 1418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___PLUS__ASSIGN_(&i, INT64(1));
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T3 = chpl___LESS_3(i, buffLen);
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (T3) /* ZLINE: 1419 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(buff, _ln, _fn);
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp8 = this21(buff, i);
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp9 = isInitialByte(*(call_tmp8), _ln, _fn);
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T4 = chpl___EXCLAMATION_(call_tmp9);
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    } else /* ZLINE: 1419 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T4 = UINT8(false);
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T2 = T4;
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    while (T2) {
#line 1420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___PLUS__ASSIGN_(&i, INT64(1));
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T5 = chpl___LESS_3(i, buffLen);
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      if (T5) /* ZLINE: 1419 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      {
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        chpl_check_nil(buff, _ln, _fn);
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp10 = this21(buff, i);
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp11 = isInitialByte(*(call_tmp10), _ln, _fn);
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        T6 = chpl___EXCLAMATION_(call_tmp11);
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      } else /* ZLINE: 1419 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      {
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        T6 = UINT8(false);
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      }
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T2 = T6;
#line 1419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 1421 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___PLUS__ASSIGN_(&n, INT64(1));
#line 1417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T = chpl___LESS_3(i, buffLen);
#line 1417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1423 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = n;
#line 1414 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 1414 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1431 */
#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static chpl_bool isInitialByte(uint8_t b,
#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                               int64_t _ln,
#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                               int32_t _fn) {
#line 1432 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  uint8_t call_tmp8;
#line 1432 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp9;
#line 1432 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl___AMPERSAND_(b, ((uint8_t)(INT64(192))));
#line 1432 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_3(call_tmp8, ((uint8_t)(INT64(128))));
#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return call_tmp9;
#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1439 */
#line 1439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static int64_t _findStartOfNextCodepointFromByte(string * x2,
#line 1439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                 byteIndex * i,
#line 1439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                 int64_t _ln,
#line 1439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                                 int32_t _fn) {
#line 1439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t ret;
#line 1440 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp8;
#line 1440 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t ret2;
#line 1441 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp9;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T2;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T3;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp11 = NULL;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t _this_tmp_ = NULL;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp12;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T4;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp13 = NULL;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T5;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp14 = NULL;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t _this_tmp_2 = NULL;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp3 = NULL;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp15;
#line 1440 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = chpl___COLON_42(i);
#line 1440 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret2 = call_tmp8;
#line 1441 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl___GREATER_(call_tmp8, INT64(0));
#line 1441 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp9) /* ZLINE: 1441 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1441 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp10 = chpl_get_string_buffLen(x2);
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T2 = chpl___LESS_3(call_tmp8, *(call_tmp10));
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (T2) /* ZLINE: 1442 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _this_tmp_ = chpl_get_string_buff(x2);
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      coerce_tmp2 = *(_this_tmp_);
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp11 = this21(coerce_tmp2, call_tmp8);
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp12 = isInitialByte(*(call_tmp11), _ln, _fn);
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T3 = chpl___EXCLAMATION_(call_tmp12);
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    } else /* ZLINE: 1442 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T3 = UINT8(false);
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    T = T3;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    while (T) {
#line 1443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___PLUS__ASSIGN_(&ret2, INT64(1));
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp13 = chpl_get_string_buffLen(x2);
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T4 = chpl___LESS_3(ret2, *(call_tmp13));
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      if (T4) /* ZLINE: 1442 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      {
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        _this_tmp_2 = chpl_get_string_buff(x2);
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        coerce_tmp3 = *(_this_tmp_2);
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp14 = this21(coerce_tmp3, ret2);
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        call_tmp15 = isInitialByte(*(call_tmp14), _ln, _fn);
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        T5 = chpl___EXCLAMATION_(call_tmp15);
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      } else /* ZLINE: 1442 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      {
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        T5 = UINT8(false);
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      }
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      T = T5;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = ret2;
#line 1439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 1439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1450 */
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static void _cleanupForNumericCast(string * x2,
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                   int64_t _ln,
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                   int32_t _fn) {
#line 1455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool hasUnderscores;
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ic_chpl_direct_range_iter3 _iterator = NULL;
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp8;
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp9;
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir_chpl_direct_range_iter3 call_tmp10;
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir_chpl_direct_range_iter3 ret_tmp;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator2 = NULL;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp11;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp2;
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t low3;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  uint8_t call_tmp12;
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp13;
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp14;
#line 1466 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp15;
#line 1467 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t call_tmp16;
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp17;
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T;
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool T2;
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  uint8_t call_tmp18;
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp19;
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  range_int64_t_low_one call_tmp20;
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp21;
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp22;
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp23;
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  string call_tmp24;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp25 = NULL;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp26;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_int64_t call_tmp27 = NULL;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_uint8_t call_tmp28 = NULL;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_c_ptr_uint8_t _this_tmp_ = NULL;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int64_t coerce_tmp3;
#line 1455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  hasUnderscores = UINT8(false);
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = numBytes(x2);
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl__nudgeHighBound(call_tmp8);
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_direct_range_iter3(INT64(1), call_tmp9, &ret_tmp);
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp10 = ret_tmp;
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _iterator = _getIterator9(&call_tmp10, _ln, _fn);
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  low3 = (_iterator)->F0_low;
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_param_stride_range_iter(low3, (_iterator)->F1_high, &ret_tmp2);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = ret_tmp2;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator2 = _getIterator13(&call_tmp11, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator2)->F0_low);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator2)->F1_high);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low4 = (_iterator2)->F0_low;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_checkIfRangeIterWillOverflow(low4, (_iterator2)->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  high2 = (_iterator2)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (chpl_check_nil(_iterator2, _ln, _fn),i = (_iterator2)->F0_low; ((i <= high2)); i += INT64(1)) {
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp12 = byte(x2, i, _ln, _fn);
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp13 = chpl___EQUALS_4(call_tmp12, UINT8(95));
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (call_tmp13) /* ZLINE: 1457 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      chpl___ASSIGN_(&hasUnderscores, UINT8(true));
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator19(_iterator2, _ln, _fn);
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      goto _breakLabel;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator19(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _breakLabel:;
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _freeIterator10(_iterator, _ln, _fn);
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (hasUnderscores) /* ZLINE: 1463 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1463 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp14 = strip(x2, &_str_literal_179, UINT8(true), UINT8(true), _ln, _fn);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_71(x2, &call_tmp14, _ln, _fn);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl__autoDestroy23(&call_tmp14, _ln, _fn);
#line 1466 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp15 = _isSingleWord(x2, _ln, _fn);
#line 1466 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (call_tmp15) /* ZLINE: 1466 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1466 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1467 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp16 = size4(x2);
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      call_tmp17 = chpl___GREATER__ASSIGN_7(call_tmp16);
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      if (call_tmp17) /* ZLINE: 1468 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      {
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        T = chpl___GREATER_(call_tmp16, INT64(2));
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        if (T) /* ZLINE: 1471 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        {
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp18 = byte(x2, INT64(0), _ln, _fn);
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          T2 = chpl___EQUALS_4(call_tmp18, UINT8(95));
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        } else /* ZLINE: 1471 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        {
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          T2 = UINT8(false);
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        }
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        if (T2) /* ZLINE: 1471 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        {
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp19 = item2(x2, INT64(0), _ln, _fn);
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp20 = chpl_build_low_bounded_range(INT64(1));
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp21 = this18(x2, call_tmp20, _ln, _fn);
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp22 = replace(&call_tmp21, &_str_literal_317, &_str_literal_77, INT64(-1), _ln, _fn);
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp23 = chpl___PLUS_9(&call_tmp19, &call_tmp22, _ln, _fn);
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl___ASSIGN_71(x2, &call_tmp23, _ln, _fn);
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl__autoDestroy23(&call_tmp23, _ln, _fn);
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl__autoDestroy23(&call_tmp22, _ln, _fn);
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl__autoDestroy23(&call_tmp21, _ln, _fn);
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl__autoDestroy19(call_tmp20);
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl__autoDestroy23(&call_tmp19, _ln, _fn);
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        } else /* ZLINE: 1473 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1472 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        {
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          call_tmp24 = replace(x2, &_str_literal_317, &_str_literal_77, INT64(-1), _ln, _fn);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl___ASSIGN_71(x2, &call_tmp24, _ln, _fn);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
          chpl__autoDestroy23(&call_tmp24, _ln, _fn);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
        }
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      }
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp25 = chpl_get_string_buffLen(x2);
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp26 = chpl___GREATER_(*(call_tmp25), INT64(0));
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  if (call_tmp26) /* ZLINE: 1481 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  {
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp27 = chpl_get_string_buffLen(x2);
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    _this_tmp_ = chpl_get_string_buff(x2);
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    coerce_tmp2 = *(_this_tmp_);
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    coerce_tmp3 = *(call_tmp27);
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp28 = this21(coerce_tmp2, coerce_tmp3);
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    chpl___ASSIGN_4(call_tmp28, ((uint8_t)(INT64(0))));
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1484 */
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static chpl_bool _isSingleWord(string * x2,
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                               int64_t _ln,
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                               int32_t _fn) {
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool ret;
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ic_chpl_bytes__ref_string _iterator = NULL;
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir_chpl_bytes__ref_string call_tmp8;
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ir_chpl_bytes__ref_string ret_tmp;
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _ref_string this24 = NULL;
#line 1327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string localThis;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ic_chpl_direct_counted_range_iter _iterator2 = NULL;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir_chpl_direct_counted_range_iter call_tmp10;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ir_chpl_direct_counted_range_iter ret_tmp2;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_string ref_localThis = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_counted_range_iter_helper _iterator3 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper call_tmp11;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper ret_tmp3;
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
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp14;
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp15;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator4 = NULL;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp16;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp4;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low5;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  uint8_t yret;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_uint8_t call_tmp17 = NULL;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_c_ptr_uint8_t _this_tmp_ = NULL;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 1489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp18;
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bytes(x2, &ret_tmp);
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = ret_tmp;
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _iterator = _getIterator22(&call_tmp8, _ln, _fn);
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  this24 = (_iterator)->F0_this;
#line 1327 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  localThis = localize(this24, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp9 = chpl_get_string_buffLen(&localThis);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_direct_counted_range_iter(INT64(0), *(call_tmp9), &ret_tmp2);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp10 = ret_tmp2;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _iterator2 = _getIterator10(&call_tmp10, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ref_localThis = &localThis;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  low3 = (_iterator2)->F0_low;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_counted_range_iter_helper(low3, (_iterator2)->F1_count, &ret_tmp3);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = ret_tmp3;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator3 = _getIterator11(&call_tmp11, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator3, _ln, _fn);
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = chpl___LESS_3((_iterator3)->F1_count, INT64(0));
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp12) /* ZLINE: 3252 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
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
  call_tmp13 = chpl___EQUALS_3((_iterator3)->F1_count, INT64(0));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp13) /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator3, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp14 = chpl___HYPHEN_5(((uint64_t)((_iterator3)->F0_low)));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T = chpl___COLON_6(call_tmp14, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator3, _ln, _fn);
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp15 = chpl___HYPHEN_6((_iterator3)->F1_count);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator3, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T = chpl___PLUS_3((_iterator3)->F0_low, call_tmp15);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_param_stride_range_iter(low4, T, &ret_tmp4);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp16 = ret_tmp4;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator4 = _getIterator13(&call_tmp16, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
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
  for (chpl_check_nil(_iterator4, _ln, _fn),i = (_iterator4)->F0_low; ((i <= high2)); i += INT64(1)) {
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    _this_tmp_ = chpl_get_string_buff(ref_localThis);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    coerce_tmp2 = *(_this_tmp_);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    call_tmp17 = this21(coerce_tmp2, i);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    yret = *(call_tmp17);
#line 1489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    call_tmp18 = byte_isWhitespace(yret, _ln, _fn);
#line 1489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    if (call_tmp18) /* ZLINE: 1489 /Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl */
#line 1489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    {
#line 1489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      ret = UINT8(false);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator19(_iterator4, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator20(_iterator3, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      _freeIterator(_iterator2, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
      chpl__autoDestroy23(&localThis, _ln, _fn);
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      _freeIterator18(_iterator, _ln, _fn);
#line 1489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
      goto _end__isSingleWord;
#line 1489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
    }
#line 1489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator19(_iterator4, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator20(_iterator3, _ln, _fn);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _freeIterator(_iterator2, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl__autoDestroy23(&localThis, _ln, _fn);
#line 1488 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _freeIterator18(_iterator, _ln, _fn);
#line 1491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  ret = UINT8(true);
#line 1491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  _end__isSingleWord:;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return ret;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

#line 1504 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
/* BytesStringCommon.chpl:1504 */
#line 1504 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
static chpl_bool byte_isWhitespace(uint8_t c,
#line 1504 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                   int64_t _ln,
#line 1504 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
                                   int32_t _fn) {
#line 1507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  int32_t call_tmp8;
#line 1507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  chpl_bool call_tmp9;
#line 1507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp8 = isspace(((int32_t)(c)));
#line 1507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_(call_tmp8, ((int32_t)(INT64(0))));
#line 1504 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
  return call_tmp9;
#line 1504 "/Users/iainmoncrief/Desktop/chapel/modules/internal/BytesStringCommon.chpl"
}

