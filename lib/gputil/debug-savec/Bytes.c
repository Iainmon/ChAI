#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
/* Bytes.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
static void chpl__init_Bytes(int64_t _ln,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
                             int32_t _fn) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  if (chpl__init_Bytes_p) /* ZLINE: 26 /Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
    goto _exit_chpl__init_Bytes;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  }
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  printModuleInit("%*s\n", "Bytes", INT64(5), _ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  refIndentLevel = &moduleInitLevel;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  *(refIndentLevel) += INT64(1);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  chpl__init_Bytes_p = UINT8(true);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
    chpl__init_ByteBufferHelpers(_ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
    chpl__init_BytesStringCommon(_ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
    chpl__init_POSIX(_ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
    chpl__init_String(_ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  }
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  *(refIndentLevel) -= INT64(1);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  _exit_chpl__init_Bytes:;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
}

#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
/* Bytes.chpl:81 */
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
static bytes createBorrowingBuffer(uint8_t * x2,
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
                                   int64_t length,
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
                                   int64_t _ln,
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
                                   int32_t _fn) {
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  int64_t call_tmp8;
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  bytes call_tmp9;
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  call_tmp8 = chpl___PLUS_7(length);
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  call_tmp9 = createBorrowingBuffer2(x2, length, call_tmp8, _ln, _fn);
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  return call_tmp9;
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
}

#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
/* Bytes.chpl:109 */
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
static bytes chpl_createBytesWithLiteral(c_string_rehook buffer,
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
                                         int64_t offset2,
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
                                         c_string_rehook x2,
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
                                         int64_t length,
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
                                         int64_t _ln,
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
                                         int32_t _fn) {
#line 114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  c_ptr_void call_tmp8 = NULL;
#line 114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  c_ptr_uint8_t call_tmp9 = NULL;
#line 114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  c_ptr_uint8_t buf = NULL;
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  c_ptr_uint8_t call_tmp10 = NULL;
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  c_ptr_void call_tmp11 = NULL;
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  c_ptr_void call_tmp12 = NULL;
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  uint64_t call_tmp13;
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  _ref_uint8_t call_tmp14 = NULL;
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  bytes call_tmp15;
#line 114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  call_tmp8 = chpl___COLON_(buffer, _ln, _fn);
#line 114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  call_tmp9 = chpl___COLON_58(call_tmp8, _ln, _fn);
#line 114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  buf = call_tmp9;
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  call_tmp10 = chpl___PLUS_11(call_tmp9, offset2);
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  chpl___ASSIGN_74(&buf, call_tmp10);
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  call_tmp11 = ((c_ptr_void)(buf));
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  call_tmp12 = chpl___COLON_(x2, _ln, _fn);
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  call_tmp13 = safeCast5(length, _ln, _fn);
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  memcpy2(call_tmp11, call_tmp12, call_tmp13);
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  chpl_check_nil(buf, _ln, _fn);
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  call_tmp14 = this21(buf, length);
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  chpl___ASSIGN_4(call_tmp14, ((uint8_t)(INT64(0))));
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  call_tmp15 = createBorrowingBuffer(buf, length, _ln, _fn);
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  return call_tmp15;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
}

#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
/* Bytes.chpl:143 */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
static bytes createBorrowingBuffer2(uint8_t * x2,
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
                                    int64_t length,
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
                                    int64_t size5,
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
                                    int64_t _ln,
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
                                    int32_t _fn) {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  bytes ret;
#line 148 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  bytes ret2;
#line 148 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  init3(&ret2, _ln, _fn);
#line 149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  initWithBorrowedBuffer2(&ret2, x2, length, size5);
#line 150 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  ret = ret2;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  return ret;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
}

#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
/* Bytes.chpl:285 */
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
static int64_t * chpl_get_bytes_buffLen(bytes * this24) {
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  call_tmp8 = &((this24)->buffLen);
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  return call_tmp8;
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
}

#line 286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
/* Bytes.chpl:286 */
#line 286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
static int64_t * chpl_get_bytes_buffSize(bytes * this24) {
#line 286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  call_tmp8 = &((this24)->buffSize);
#line 286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  return call_tmp8;
#line 286 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
}

#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
/* Bytes.chpl:287 */
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
static c_ptr_uint8_t * chpl_get_bytes_buff(bytes * this24) {
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  _ref_c_ptr_uint8_t call_tmp8 = NULL;
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  call_tmp8 = &((this24)->buff);
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  return call_tmp8;
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
}

#line 288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
/* Bytes.chpl:288 */
#line 288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
static chpl_bool * chpl_get_bytes_isOwned(bytes * this24) {
#line 288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  call_tmp8 = &((this24)->isOwned);
#line 288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  return call_tmp8;
#line 288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
}

#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
/* Bytes.chpl:294 */
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
static void init3(bytes * this24,
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
                  int64_t _ln,
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
                  int32_t _fn) {
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  c_ptr_uint8_t init_coerce_tmp = NULL;
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  int32_t call_tmp8;
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  (this24)->buffLen = INT64(0);
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  (this24)->buffSize = INT64(0);
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  init_coerce_tmp = ((c_ptr_uint8_t)(nil));
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  (this24)->buff = init_coerce_tmp;
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  (this24)->isOwned = UINT8(true);
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  call_tmp8 = get_chpl_nodeID();
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  (this24)->locale_id = call_tmp8;
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
  return;
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Bytes.chpl"
}

