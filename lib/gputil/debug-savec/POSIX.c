#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__init_POSIX(int64_t _ln,
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                             int32_t _fn) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (chpl__init_POSIX_p) /* ZLINE: 46 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    goto _exit_chpl__init_POSIX;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  printModuleInit("%*s\n", "POSIX", INT64(5), _ln, _fn);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  refIndentLevel = &moduleInitLevel;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  *(refIndentLevel) += INT64(1);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__init_POSIX_p = UINT8(true);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__init_OS(_ln, _fn);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  *(refIndentLevel) -= INT64(1);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _exit_chpl__init_POSIX:;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1079 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1079 */
#line 1079 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void memmove2(void * dest,
#line 1079 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     void * src,
#line 1079 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     uint64_t n) {
#line 1082 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  memmove(dest, src, n);
#line 1079 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1079 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1096 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1096 */
#line 1096 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void memcpy2(void * dest,
#line 1096 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    void * src,
#line 1096 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    uint64_t n) {
#line 1099 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  memcpy(dest, src, n);
#line 1096 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1096 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1112 */
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static int64_t memcmp2(void * s1,
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                       void * s2,
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                       uint64_t n,
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                       int64_t _ln,
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                       int32_t _fn) {
#line 1115 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp8;
#line 1115 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int64_t call_tmp9;
#line 1115 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = memcmp(s1, s2, n);
#line 1115 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp9 = safeCast6(call_tmp8, _ln, _fn);
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp9;
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1130 */
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void * memset3(void * s,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      int64_t c,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      uint64_t n,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      int64_t _ln,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      int32_t _fn) {
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp8;
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = safeCast2(c, _ln, _fn);
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  memset(s, call_tmp8, n);
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return s;
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1130 */
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void * memset2(void * s,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      int8_t c,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      uint64_t n,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      int64_t _ln,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      int32_t _fn) {
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp8;
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = safeCast7(c, _ln, _fn);
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  memset(s, call_tmp8, n);
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return s;
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

