#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
/* Communication.chpl:33 */
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
static void chpl__init_Communication(int64_t _ln,
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
                                     int32_t _fn) {
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  if (chpl__init_Communication_p) /* ZLINE: 33 /Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl */
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  {
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
    goto _exit_chpl__init_Communication;
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  }
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  printModuleInit("%*s\n", "Communication", INT64(13), _ln, _fn);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  refIndentLevel = &moduleInitLevel;
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  *(refIndentLevel) += INT64(1);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  chpl__init_Communication_p = UINT8(true);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  {
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  }
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  *(refIndentLevel) -= INT64(1);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  _exit_chpl__init_Communication:;
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  return;
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
}

#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
/* Communication.chpl:48 */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
static void get(void * dest,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
                void * src,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
                int64_t srcLocID,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
                uint64_t numBytes2,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
                int64_t _ln,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
                int32_t _fn) {
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  chpl_bool T;
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  chpl_bool T2;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  _ref_uint8_t call_tmp9 = NULL;
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  c_ptr_uint8_t call_tmp10 = NULL;
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  _ref_uint8_t call_tmp11 = NULL;
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  T = chpl___LESS_3(srcLocID, INT64(0));
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  if (T) /* ZLINE: 51 /Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl */
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  {
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
    T2 = UINT8(true);
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  } else /* ZLINE: 51 /Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl */
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  {
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
    T2 = chpl___GREATER__ASSIGN_(srcLocID, ((int64_t)(chpl_numNodes)));
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  }
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  if (T2) /* ZLINE: 51 /Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl */
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  {
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
    halt11(&_str_literal_216, srcLocID, &_str_literal_217, _ln, _fn);
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  }
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  call_tmp8 = chpl___COLON_58(dest, _ln, _fn);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  call_tmp9 = deref(call_tmp8);
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  call_tmp10 = chpl___COLON_58(src, _ln, _fn);
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  chpl_check_nil(call_tmp10, _ln, _fn);
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  call_tmp11 = deref(call_tmp10);
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  chpl_gen_comm_get(((void*)(call_tmp9)), srcLocID, call_tmp11, numBytes2, COMMID(0), _ln, _fn);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
  return;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Communication.chpl"
}

