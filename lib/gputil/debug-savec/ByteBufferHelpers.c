#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:21 */
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static void chpl__init_ByteBufferHelpers(int64_t _ln,
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                         int32_t _fn) {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  if (chpl__init_ByteBufferHelpers_p) /* ZLINE: 21 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    goto _exit_chpl__init_ByteBufferHelpers;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  }
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  printModuleInit("%*s\n", "ByteBufferHelpers", INT64(17), _ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  refIndentLevel = &moduleInitLevel;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  *(refIndentLevel) += INT64(1);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl__init_ByteBufferHelpers_p = UINT8(true);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    chpl__init_POSIX(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    chpl__init_Communication(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    chpl__init_String(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  }
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  *(refIndentLevel) -= INT64(1);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  _exit_chpl__init_ByteBufferHelpers:;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:49 */
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static int16_t offset_STR_COPY_DATA(void) {
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int16_t call_tmp8;
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int16_t call_tmp9;
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp8 = chpl_memhook_md_num();
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp9 = chpl___HYPHEN_(CHPL_RT_MD_STR_COPY_DATA, call_tmp8);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return call_tmp9;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:58 */
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static void chpl_string_comm_get(uint8_t * dest,
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                 int64_t src_loc_id,
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                 uint8_t * src_addr,
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                 int64_t len,
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                 int64_t _ln,
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                 int32_t _fn) {
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  uint64_t call_tmp8;
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp8 = safeCast5(len, _ln, _fn);
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  get(((c_ptr_void)(dest)), ((c_ptr_void)(src_addr)), src_loc_id, call_tmp8, _ln, _fn);
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return;
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:64 */
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static int64_t getGoodAllocSize(int64_t requestedSize,
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                int64_t _ln,
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                int32_t _fn) {
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int64_t call_tmp8;
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int64_t call_tmp9;
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp8 = chpl_here_good_alloc_size(requestedSize, _ln, _fn);
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp9 = max2(call_tmp8, INT64(0));
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return call_tmp9;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:70 */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static _tuple_2_c_ptr_uint8_t_int64_t bufferAlloc(int64_t requestedSize,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                  int64_t _ln,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                  int32_t _fn) {
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int64_t call_tmp8;
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int16_t call_tmp9;
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_void cast_tmp = NULL;
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t call_tmp10 = NULL;
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t call_tmp11;
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp8 = getGoodAllocSize(requestedSize, _ln, _fn);
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp9 = offset_STR_COPY_DATA();
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  cast_tmp = chpl_here_alloc(call_tmp8, call_tmp9, _ln, _fn);
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp10 = chpl___COLON_58(cast_tmp, _ln, _fn);
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp11 = _build_tuple9(call_tmp10, call_tmp8);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return call_tmp11;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static _tuple_2_c_ptr_uint8_t_int64_t bufferRealloc(uint8_t * buf,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                    int64_t requestedSize,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                    int64_t _ln,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                    int32_t _fn) {
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int64_t call_tmp8;
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int64_t call_tmp9;
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int16_t call_tmp10;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_void call_tmp11 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t call_tmp12 = NULL;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t call_tmp13;
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp8 = chpl___PLUS_7(requestedSize);
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp9 = getGoodAllocSize(call_tmp8, _ln, _fn);
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp10 = offset_STR_COPY_DATA();
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp11 = chpl_here_realloc(((c_ptr_void)(buf)), call_tmp9, call_tmp10, _ln, _fn);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp12 = chpl___COLON_58(call_tmp11, _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp13 = _build_tuple9(call_tmp12, call_tmp9);
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return call_tmp13;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:83 */
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static _tuple_2_c_ptr_uint8_t_int64_t bufferEnsureSize(uint8_t * buf,
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                       int64_t currentSize,
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                       int64_t requestedSize,
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                       int64_t _ln,
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                       int32_t _fn) {
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t ret;
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl_bool call_tmp8;
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp8 = chpl___LESS_3(currentSize, requestedSize);
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  if (call_tmp8) /* ZLINE: 84 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  {
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    ret = bufferRealloc(buf, requestedSize, _ln, _fn);
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    goto _end_bufferEnsureSize;
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  } else /* ZLINE: 84 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  {
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    ret = _build_tuple9(buf, currentSize);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    goto _end_bufferEnsureSize;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  }
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  _end_bufferEnsureSize:;
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return ret;
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:90 */
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static uint8_t * bufferCopyRemote(int64_t src_loc_id,
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                  uint8_t * src_addr,
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                  int64_t len,
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                  int64_t _ln,
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                  int32_t _fn) {
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int64_t call_tmp8;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t dst = NULL;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  _ref_uint8_t call_tmp9 = NULL;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp8 = chpl___PLUS_7(len);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  T = bufferAlloc(call_tmp8, _ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  coerce_tmp2 = (&T)->x0;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  dst = coerce_tmp2;
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl_string_comm_get(coerce_tmp2, src_loc_id, src_addr, len, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp9 = this21(coerce_tmp2, len);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl___ASSIGN_4(call_tmp9, ((uint8_t)(INT64(0))));
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl__autoDestroy6(&T);
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return dst;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:98 */
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static _tuple_2_c_ptr_uint8_t_int64_t bufferCopyLocal(uint8_t * src_addr,
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                      int64_t len,
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                      int64_t _ln,
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                      int32_t _fn) {
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int64_t call_tmp8;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t T;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t dst = NULL;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int64_t coerce_tmp3;
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  _ref_uint8_t call_tmp9 = NULL;
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t call_tmp10;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp8 = chpl___PLUS_7(len);
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  T = bufferAlloc(call_tmp8, _ln, _fn);
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  coerce_tmp2 = (&T)->x0;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  dst = coerce_tmp2;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  coerce_tmp3 = (&T)->x1;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  bufferMemcpyLocal(coerce_tmp2, src_addr, len, INT64(0), INT64(0), _ln, _fn);
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp9 = this21(coerce_tmp2, len);
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl___ASSIGN_4(call_tmp9, ((uint8_t)(INT64(0))));
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp10 = _build_tuple9(dst, coerce_tmp3);
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl__autoDestroy6(&T);
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return call_tmp10;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:105 */
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static void bufferFree(uint8_t * buf,
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                       int64_t _ln,
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                       int32_t _fn) {
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl_here_free(((c_ptr_void)(buf)), _ln, _fn);
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return;
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:109 */
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static _tuple_2_c_ptr_uint8_t_int64_t bufferCopy(uint8_t * buf,
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                 int64_t off,
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                 int64_t len,
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                 int32_t loc,
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                 int64_t _ln,
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                                                 int32_t _fn) {
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t call_tmp9;
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp8 = chpl___PLUS_11(buf, off);
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp9 = bufferCopyLocal(call_tmp8, len, _ln, _fn);
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return call_tmp9;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:120 */
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static void bufferMemcpy(uint8_t * dst,
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                         int64_t src_loc,
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                         uint8_t * src,
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                         int64_t len,
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                         int64_t dst_off,
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                         int64_t src_off,
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                         int64_t _ln,
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                         int32_t _fn) {
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t call_tmp9 = NULL;
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  uint64_t call_tmp10;
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp8 = chpl___PLUS_11(dst, dst_off);
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp9 = chpl___PLUS_11(src, src_off);
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp10 = safeCast5(len, _ln, _fn);
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  memcpy2(((c_ptr_void)(call_tmp8)), ((c_ptr_void)(call_tmp9)), call_tmp10);
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return;
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:130 */
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static void bufferMemcpyLocal(uint8_t * dst,
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                              uint8_t * src,
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                              int64_t len,
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                              int64_t dst_off,
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                              int64_t src_off,
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                              int64_t _ln,
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                              int32_t _fn) {
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t call_tmp9 = NULL;
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  uint64_t call_tmp10;
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp8 = chpl___PLUS_11(dst, dst_off);
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp9 = chpl___PLUS_11(src, src_off);
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp10 = safeCast5(len, _ln, _fn);
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  memcpy2(((c_ptr_void)(call_tmp8)), ((c_ptr_void)(call_tmp9)), call_tmp10);
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return;
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:135 */
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static void bufferMemmoveLocal(uint8_t * dst,
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                               uint8_t * src,
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                               int64_t len,
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                               int64_t dst_off,
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                               int64_t src_off,
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                               int64_t _ln,
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                               int32_t _fn) {
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t call_tmp9 = NULL;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  uint64_t call_tmp10;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp8 = chpl___PLUS_11(dst, dst_off);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp9 = chpl___PLUS_11(src, src_off);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp10 = safeCast5(len, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  memmove2(((c_ptr_void)(call_tmp8)), ((c_ptr_void)(call_tmp9)), call_tmp10);
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return;
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:140 */
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static uint8_t bufferGetByte(uint8_t * buf,
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                             int64_t off,
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                             int32_t loc,
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                             int64_t _ln,
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                             int32_t _fn) {
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  uint8_t ret;
#line 148 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  _ref_uint8_t call_tmp8 = NULL;
#line 148 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl_check_nil(buf, _ln, _fn);
#line 148 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp8 = this21(buf, off);
#line 148 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  ret = *(call_tmp8);
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return ret;
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:165 */
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static int64_t _strcmp_local(uint8_t * buf1,
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                             int64_t len1,
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                             uint8_t * buf2,
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                             int64_t len2,
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                             int64_t _ln,
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                             int32_t _fn) {
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int64_t ret;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int64_t call_tmp8;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int64_t size5;
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  uint64_t call_tmp9;
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int64_t call_tmp10;
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl_bool call_tmp11;
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl_bool call_tmp12;
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl_bool call_tmp13;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp8 = min2(len1, len2);
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  size5 = call_tmp8;
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp9 = safeCast5(call_tmp8, _ln, _fn);
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp10 = memcmp2(((c_ptr_void)(buf1)), ((c_ptr_void)(buf2)), call_tmp9, _ln, _fn);
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp11 = chpl___EQUALS_3(call_tmp10, INT64(0));
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  if (call_tmp11) /* ZLINE: 171 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  {
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    call_tmp12 = chpl___LESS_3(size5, len1);
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    if (call_tmp12) /* ZLINE: 173 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    {
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      ret = INT64(1);
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      goto _end__strcmp_local;
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    }
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    call_tmp13 = chpl___LESS_3(size5, len2);
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    if (call_tmp13) /* ZLINE: 174 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    {
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      ret = INT64(-1);
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      goto _end__strcmp_local;
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    }
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  }
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  ret = call_tmp10;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  _end__strcmp_local:;
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return ret;
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
/* ByteBufferHelpers.chpl:179 */
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
static int64_t _strcmp(uint8_t * buf1,
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                       int64_t len1,
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                       int32_t loc1,
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                       uint8_t * buf2,
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                       int64_t len2,
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                       int32_t loc2,
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                       int64_t _ln,
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
                       int32_t _fn) {
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int64_t ret;
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl_bool T;
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int32_t call_tmp8;
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl_bool T2;
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int32_t call_tmp9;
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl_bool T3;
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int32_t call_tmp10;
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl_bool T4;
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int32_t call_tmp11;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t call_tmp12 = NULL;
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int64_t call_tmp13;
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl_bool T5;
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int32_t call_tmp14;
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  chpl_bool T6;
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int32_t call_tmp15;
#line 192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t call_tmp16 = NULL;
#line 193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int64_t call_tmp17;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t call_tmp18 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  c_ptr_uint8_t call_tmp19 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  int64_t call_tmp20;
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  call_tmp8 = get_chpl_nodeID();
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  T = chpl___EQUALS_2(loc1, call_tmp8);
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  if (T) /* ZLINE: 181 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  {
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    call_tmp9 = get_chpl_nodeID();
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    T2 = chpl___EQUALS_2(loc2, call_tmp9);
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  } else /* ZLINE: 181 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  {
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    T2 = UINT8(false);
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  }
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  if (T2) /* ZLINE: 181 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    ret = _strcmp_local(buf1, len1, buf2, len2, _ln, _fn);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    goto _end__strcmp;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  } else /* ZLINE: 181 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  {
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    call_tmp10 = get_chpl_nodeID();
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    T3 = chpl___EXCLAMATION__ASSIGN_(loc1, call_tmp10);
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    if (T3) /* ZLINE: 185 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    {
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      call_tmp11 = get_chpl_nodeID();
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      T4 = chpl___EQUALS_2(loc2, call_tmp11);
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    } else /* ZLINE: 185 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    {
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      T4 = UINT8(false);
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    }
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    if (T4) /* ZLINE: 185 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    {
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      call_tmp12 = bufferCopyRemote(((int64_t)(loc1)), buf1, len1, _ln, _fn);
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      call_tmp13 = _strcmp_local(call_tmp12, len1, buf2, len2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      bufferFree(call_tmp12, _ln, _fn);
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      ret = call_tmp13;
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      goto _end__strcmp;
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    } else /* ZLINE: 185 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    {
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      call_tmp14 = get_chpl_nodeID();
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      T5 = chpl___EQUALS_2(loc1, call_tmp14);
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      if (T5) /* ZLINE: 191 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      {
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
        call_tmp15 = get_chpl_nodeID();
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
        T6 = chpl___EXCLAMATION__ASSIGN_(loc2, call_tmp15);
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      } else /* ZLINE: 191 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      {
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
        T6 = UINT8(false);
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      }
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      if (T6) /* ZLINE: 191 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      {
#line 192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
        call_tmp16 = bufferCopyRemote(((int64_t)(loc2)), buf2, len2, _ln, _fn);
#line 193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
        call_tmp17 = _strcmp_local(buf1, len1, call_tmp16, len2, _ln, _fn);
#line 194 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
        bufferFree(call_tmp16, _ln, _fn);
#line 195 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
        ret = call_tmp17;
#line 195 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
        goto _end__strcmp;
#line 195 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      } else /* ZLINE: 197 /Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl */
#line 195 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      {
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
        call_tmp18 = bufferCopyRemote(((int64_t)(loc1)), buf1, len1, _ln, _fn);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
        call_tmp19 = bufferCopyRemote(((int64_t)(loc2)), buf2, len2, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
        call_tmp20 = _strcmp_local(call_tmp18, len1, call_tmp19, len2, _ln, _fn);
#line 201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
        bufferFree(call_tmp18, _ln, _fn);
#line 202 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
        bufferFree(call_tmp19, _ln, _fn);
#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
        ret = call_tmp20;
#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
        goto _end__strcmp;
#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
      }
#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
    }
#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  }
#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  _end__strcmp:;
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
  return ret;
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ByteBufferHelpers.chpl"
}

