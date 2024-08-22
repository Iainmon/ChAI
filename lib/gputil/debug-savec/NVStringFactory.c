#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:676 */
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static void chpl__init_NVStringFactory(int64_t _ln,
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                       int32_t _fn) {
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  if (chpl__init_NVStringFactory_p) /* ZLINE: 676 /Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl */
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    goto _exit_chpl__init_NVStringFactory;
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  printModuleInit("%*s\n", "NVStringFactory", INT64(15), _ln, _fn);
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  refIndentLevel = &moduleInitLevel;
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  *(refIndentLevel) += INT64(1);
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl__init_NVStringFactory_p = UINT8(true);
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  {
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__init_String(_ln, _fn);
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__init_BytesStringCommon(_ln, _fn);
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
    chpl__init_ByteBufferHelpers(_ln, _fn);
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  }
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  *(refIndentLevel) -= INT64(1);
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _exit_chpl__init_NVStringFactory:;
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return;
#line 676 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:691 */
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string chpl_createStringWithBorrowedBufferNV(uint8_t * x2,
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                    int64_t length,
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                    int64_t size5,
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                    int64_t numCodepoints2,
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                    int64_t _ln,
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                    int32_t _fn) {
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string ret;
#line 699 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string ret2;
#line 716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 699 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  init96(&ret2, _ln, _fn);
#line 715 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  initWithBorrowedBuffer3(&ret2, x2, length, size5);
#line 716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl_get_string_cachedNumCodepoints(&ret2);
#line 716 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl___ASSIGN_3(call_tmp8, numCodepoints2);
#line 717 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = ret2;
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

#line 720 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
/* String.chpl:720 */
#line 720 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
static string chpl_createStringWithOwnedBufferNV(uint8_t * x2,
#line 720 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                 int64_t length,
#line 720 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                 int64_t size5,
#line 720 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                 int64_t numCodepoints2,
#line 720 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                 int64_t _ln,
#line 720 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
                                                 int32_t _fn) {
#line 720 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string ret;
#line 724 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  string ret2;
#line 726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 724 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  init96(&ret2, _ln, _fn);
#line 725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  initWithOwnedBuffer(&ret2, x2, length, size5);
#line 726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  call_tmp8 = chpl_get_string_cachedNumCodepoints(&ret2);
#line 726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  chpl___ASSIGN_3(call_tmp8, numCodepoints2);
#line 727 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  ret = ret2;
#line 720 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
  return ret;
#line 720 "/Users/iainmoncrief/Desktop/chapel/modules/internal/String.chpl"
}

