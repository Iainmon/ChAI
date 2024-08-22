#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:36 */
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__init_OS(int64_t _ln,
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          int32_t _fn) {
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (chpl__init_OS_p) /* ZLINE: 36 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    goto _exit_chpl__init_OS;
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  printModuleInit("%*s\n", "OS", INT64(2), _ln, _fn);
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  refIndentLevel = &moduleInitLevel;
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  *(refIndentLevel) += INT64(1);
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__init_OS_p = UINT8(true);
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__init_POSIX(_ln, _fn);
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  *(refIndentLevel) -= INT64(1);
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _exit_chpl__init_OS:;
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1170 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1170 */
#line 1170 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static chpl_bool chpl___EQUALS_27(syserr a,
#line 1170 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                  int32_t b) {
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp8;
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp9;
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = qio_err_to_int(a);
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp9 = chpl___EQUALS_2(call_tmp8, b);
#line 1170 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp9;
#line 1170 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1173 */
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static chpl_bool chpl___EQUALS_28(syserr a,
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                  int64_t b,
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                  int64_t _ln,
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                  int32_t _fn) {
#line 1174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp8;
#line 1174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp9;
#line 1174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp10;
#line 1174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = qio_err_to_int(a);
#line 1174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp9 = chpl___COLON_4(b, _ln, _fn);
#line 1174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp10 = chpl___EQUALS_2(call_tmp8, call_tmp9);
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp10;
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1184 */
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static chpl_bool chpl___EXCLAMATION__ASSIGN_15(syserr a,
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                               int32_t b) {
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp8;
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp9;
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = chpl___EQUALS_27(a, b);
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp9 = chpl___EXCLAMATION_(call_tmp8);
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp9;
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1186 */
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static chpl_bool chpl___EXCLAMATION__ASSIGN_16(syserr a,
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                               int64_t b,
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                               int64_t _ln,
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                               int32_t _fn) {
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp8;
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp9;
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = chpl___EQUALS_28(a, b, _ln, _fn);
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp9 = chpl___EXCLAMATION_(call_tmp8);
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp9;
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1192 */
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static chpl_bool chpl___EXCLAMATION_2(syserr a) {
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp8;
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp9;
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = qio_err_iserr(a);
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp9 = chpl___EQUALS_2(call_tmp8, INT32(0));
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp9;
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1193 */
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static chpl_bool chpl_cond_test_method(syserr this24) {
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp8;
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp9;
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = qio_err_iserr(this24);
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_(call_tmp8, INT32(0));
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp9;
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1199 */
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static syserr chpl___COLON_68(int32_t x2) {
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  syserr call_tmp8;
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = qio_int_to_err(x2);
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp8;
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1201 */
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static syserr chpl___COLON_69(int64_t x2,
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              int64_t _ln,
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              int32_t _fn) {
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp8;
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  syserr call_tmp9;
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = chpl___COLON_4(x2, _ln, _fn);
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp9 = qio_int_to_err(call_tmp8);
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp9;
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1203 */
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl___ASSIGN_86(syserr * ret,
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                             syserr x2) {
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  *(ret) = x2;
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1226 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1226 */
#line 1226 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static int32_t EEOF3(void) {
#line 1226 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp8;
#line 1226 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = chpl_macro_int_EEOF();
#line 1226 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp8;
#line 1226 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1227 */
#line 1227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static int32_t ESHORT2(void) {
#line 1227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp8;
#line 1227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = chpl_macro_int_ESHORT();
#line 1227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp8;
#line 1227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1228 */
#line 1228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static int32_t EFORMAT2(void) {
#line 1228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp8;
#line 1228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = chpl_macro_int_EFORMAT();
#line 1228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp8;
#line 1228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1235 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1235 */
#line 1235 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_SystemError(SystemError this24,
#line 1235 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                           int64_t _ln,
#line 1235 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                           int32_t _fn) {
#line 1239 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string _field_destructor_tmp_ = NULL;
#line 1239 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1239 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _field_destructor_tmp_ = &((this24)->details);
#line 1239 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  deinit52(_field_destructor_tmp_, _ln, _fn);
#line 1235 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_Error(((Error)(this24)), _ln, _fn);
#line 1235 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1235 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1237 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1237 */
#line 1237 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static syserr * chpl_get_SystemError_err(SystemError this24,
#line 1237 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                         int64_t _ln,
#line 1237 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                         int32_t _fn) {
#line 1237 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_syserr call_tmp8 = NULL;
#line 1237 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1237 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = &((this24)->err);
#line 1237 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp8;
#line 1237 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1239 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1239 */
#line 1239 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static string * chpl_get_SystemError_details(SystemError this24,
#line 1239 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                             int64_t _ln,
#line 1239 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                             int32_t _fn) {
#line 1239 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp8 = NULL;
#line 1239 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1239 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = &((this24)->details);
#line 1239 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp8;
#line 1239 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1245 */
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init126(SystemError this24,
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error super_tmp = NULL;
#line 1247 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string details2;
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init98(super_tmp, _ln, _fn);
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((Error)(this24))))->chpl__cid = chpl__cid_Error;
#line 1246 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1246 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  (this24)->err = err;
#line 1247 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init_ASSIGN_25(&details2, details, _ln, _fn);
#line 1247 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1247 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  (this24)->details = details2;
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_SystemError;
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1245 */
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static SystemError _new21(syserr err,
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          string * details,
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          int64_t _ln,
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          int32_t _fn) {
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  SystemError initTemp = NULL;
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  SystemError T = NULL;
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_SystemError_object), INT16(26), _ln, _fn);
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((SystemError)(cast_tmp));
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_SystemError;
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init126(initTemp, err, details, _ln, _fn);
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1245 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1254 */
#line 1254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void message7(SystemError this24,
#line 1254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     string * _retArg,
#line 1254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     int64_t _ln,
#line 1254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     int32_t _fn) {
#line 1254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string ret;
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t strerror_err;
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_syserr call_tmp8 = NULL;
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  syserr coerce_tmp2;
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t _formal_tmp_out_err_in_strerror;
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string err_msg;
#line 1258 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error error = NULL;
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp10;
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int64_t default_arg_length;
#line 1262 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp11 = NULL;
#line 1262 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp12;
#line 1262 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp13;
#line 1263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp14 = NULL;
#line 1263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp15;
#line 1263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp16;
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  strerror_err = INT32(0);
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = chpl_get_SystemError_err(this24, _ln, _fn);
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp9 = sys_strerror_syserr_str(coerce_tmp2, &_formal_tmp_out_err_in_strerror);
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl___ASSIGN_2(&strerror_err, _formal_tmp_out_err_in_strerror);
#line 1258 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  error = NULL;
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  default_arg_length = createAdoptingBuffer_default_length(call_tmp9, &error, _ln, _fn);
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (error != nil) /* ZLINE: 1259 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    goto handler;
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp10 = createAdoptingBuffer(call_tmp9, default_arg_length, &error, _ln, _fn);
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (error != nil) /* ZLINE: 1259 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    goto handler;
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  err_msg = call_tmp10;
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  handler:;
#line 1258 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (error != nil) /* ZLINE: 1258 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1258 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1258 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 1258 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1262 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1262 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp11 = chpl_get_SystemError_details(this24, _ln, _fn);
#line 1262 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp12 = isEmpty2(call_tmp11);
#line 1262 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp13 = chpl___EXCLAMATION_(call_tmp12);
#line 1262 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (call_tmp13) /* ZLINE: 1262 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1262 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp14 = chpl_get_SystemError_details(this24, _ln, _fn);
#line 1263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp15 = chpl___PLUS_9(&_str_literal_81, call_tmp14, _ln, _fn);
#line 1263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp16 = chpl___PLUS_9(&call_tmp15, &_str_literal_82, _ln, _fn);
#line 1263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl___PLUS__ASSIGN_3(&err_msg, &call_tmp16, _ln, _fn);
#line 1263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 1263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&call_tmp15, _ln, _fn);
#line 1263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ret = err_msg;
#line 1254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  *(_retArg) = ret;
#line 1254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1277 */
#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static _owned_Error createSystemOrChplError(syserr err,
#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                            string * details,
#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                            int64_t _ln,
#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                            int32_t _fn) {
#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_Error ret;
#line 1279 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t strerror_err;
#line 1280 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptrConst_int8_t call_tmp8 = NULL;
#line 1280 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t _formal_tmp_out_err_in_strerror;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string err_msg;
#line 1282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error error = NULL;
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp9;
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int64_t default_arg_length;
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp10;
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp11;
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_EofError call_tmp12;
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  EofError new_temp = NULL;
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_EofError initTemp;
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp13;
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp14;
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_UnexpectedEofError call_tmp15;
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  UnexpectedEofError new_temp2 = NULL;
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_UnexpectedEofError initTemp2;
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp16;
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp17;
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_BadFormatError call_tmp18;
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  BadFormatError new_temp3 = NULL;
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_BadFormatError initTemp3;
#line 1291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_SystemError call_tmp19;
#line 1279 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  strerror_err = INT32(0);
#line 1280 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = sys_strerror_syserr_str(err, &_formal_tmp_out_err_in_strerror);
#line 1280 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl___ASSIGN_2(&strerror_err, _formal_tmp_out_err_in_strerror);
#line 1282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  error = NULL;
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  default_arg_length = createAdoptingBuffer_default_length(call_tmp8, &error, _ln, _fn);
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (error != nil) /* ZLINE: 1283 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    goto handler;
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp9 = createAdoptingBuffer(call_tmp8, default_arg_length, &error, _ln, _fn);
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (error != nil) /* ZLINE: 1283 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    goto handler;
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  err_msg = call_tmp9;
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  handler:;
#line 1282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (error != nil) /* ZLINE: 1282 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 1282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp10 = EEOF3();
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp11 = chpl___EQUALS_27(err, call_tmp10);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (call_tmp11) /* ZLINE: 1288 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    new_temp = _new37(details, &err_msg, _ln, _fn);
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    init82(&initTemp, new_temp);
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp12 = initTemp;
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    init_ASSIGN_19(&ret, &call_tmp12, _ln, _fn);
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy97(&call_tmp12, _ln, _fn);
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&err_msg, _ln, _fn);
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    goto _end_createSystemOrChplError;
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  } else /* ZLINE: 1287 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp13 = ESHORT2();
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp14 = chpl___EQUALS_27(err, call_tmp13);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    if (call_tmp14) /* ZLINE: 1289 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    {
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      new_temp2 = _new38(details, &err_msg, _ln, _fn);
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      init65(&initTemp2, new_temp2);
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      call_tmp15 = initTemp2;
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      init_ASSIGN_13(&ret, &call_tmp15, _ln, _fn);
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      chpl__autoDestroy69(&call_tmp15, _ln, _fn);
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      chpl__autoDestroy23(&err_msg, _ln, _fn);
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      goto _end_createSystemOrChplError;
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    } else /* ZLINE: 1287 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    {
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      call_tmp16 = EFORMAT2();
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      call_tmp17 = chpl___EQUALS_27(err, call_tmp16);
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      if (call_tmp17) /* ZLINE: 1290 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1287 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      {
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        new_temp3 = _new39(details, &err_msg, _ln, _fn);
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        init77(&initTemp3, new_temp3);
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        call_tmp18 = initTemp3;
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        init_ASSIGN_2(&ret, &call_tmp18, _ln, _fn);
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        chpl__autoDestroy82(&call_tmp18, _ln, _fn);
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        chpl__autoDestroy23(&err_msg, _ln, _fn);
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        goto _end_createSystemOrChplError;
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      } else /* ZLINE: 1291 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      {
#line 1291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        call_tmp19 = createSystemError(err, details, _ln, _fn);
#line 1291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        init_ASSIGN_5(&ret, &call_tmp19, _ln, _fn);
#line 1291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        chpl__autoDestroy83(&call_tmp19, _ln, _fn);
#line 1291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        chpl__autoDestroy23(&err_msg, _ln, _fn);
#line 1291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        goto _end_createSystemOrChplError;
#line 1291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      }
#line 1291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    }
#line 1291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _end_createSystemOrChplError:;
#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return ret;
#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1301 */
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static _owned_Error createSystemOrChplError2(int64_t err,
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                             string * details,
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                             int64_t _ln,
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                             int32_t _fn) {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_Error ret;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  syserr call_tmp8;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_Error call_tmp9;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = chpl___COLON_69(err, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp9 = createSystemOrChplError(call_tmp8, details, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ret = call_tmp9;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return ret;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1314 */
#line 1314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static _owned_SystemError createSystemError(syserr err,
#line 1314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                            string * details,
#line 1314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                            int64_t _ln,
#line 1314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                            int32_t _fn) {
#line 1314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_SystemError ret;
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool T;
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool T2;
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool T3;
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool T4;
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_BlockingIoError call_tmp8;
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  BlockingIoError new_temp = NULL;
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_BlockingIoError initTemp;
#line 1317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp9;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_ChildProcessError call_tmp10;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ChildProcessError new_temp2 = NULL;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_ChildProcessError initTemp2;
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp11;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_BrokenPipeError call_tmp12;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  BrokenPipeError new_temp3 = NULL;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_BrokenPipeError initTemp3;
#line 1321 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp13;
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_ConnectionAbortedError call_tmp14;
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ConnectionAbortedError new_temp4 = NULL;
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_ConnectionAbortedError initTemp4;
#line 1323 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp15;
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_ConnectionRefusedError call_tmp16;
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ConnectionRefusedError new_temp5 = NULL;
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_ConnectionRefusedError initTemp5;
#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp17;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_ConnectionResetError call_tmp18;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ConnectionResetError new_temp6 = NULL;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_ConnectionResetError initTemp6;
#line 1327 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp19;
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_FileExistsError call_tmp20;
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  FileExistsError new_temp7 = NULL;
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_FileExistsError initTemp7;
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp21;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_FileNotFoundError call_tmp22;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  FileNotFoundError new_temp8 = NULL;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_FileNotFoundError initTemp8;
#line 1331 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp23;
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_InterruptedError call_tmp24;
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  InterruptedError new_temp9 = NULL;
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_InterruptedError initTemp9;
#line 1333 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp25;
#line 1334 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_IsADirectoryError call_tmp26;
#line 1334 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  IsADirectoryError new_temp10 = NULL;
#line 1334 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_IsADirectoryError initTemp10;
#line 1335 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp27;
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_NotADirectoryError call_tmp28;
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  NotADirectoryError new_temp11 = NULL;
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_NotADirectoryError initTemp11;
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool T5;
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool T6;
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_PermissionError call_tmp29;
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  PermissionError new_temp12 = NULL;
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_PermissionError initTemp12;
#line 1339 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp30;
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_ProcessLookupError call_tmp31;
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ProcessLookupError new_temp13 = NULL;
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_ProcessLookupError initTemp13;
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp32;
#line 1342 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_TimeoutError call_tmp33;
#line 1342 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  TimeoutError new_temp14 = NULL;
#line 1342 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_TimeoutError initTemp14;
#line 1343 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp34;
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_IoError call_tmp35;
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  IoError new_temp15 = NULL;
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_IoError initTemp15;
#line 1347 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_SystemError call_tmp36;
#line 1347 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  SystemError new_temp16 = NULL;
#line 1347 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_SystemError initTemp16;
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = chpl___EQUALS_27(err, EAGAIN);
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (T) /* ZLINE: 1315 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    T2 = UINT8(true);
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  } else /* ZLINE: 1315 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    T2 = chpl___EQUALS_27(err, EALREADY);
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (T2) /* ZLINE: 1315 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    T3 = UINT8(true);
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  } else /* ZLINE: 1315 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    T3 = chpl___EQUALS_27(err, EWOULDBLOCK);
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (T3) /* ZLINE: 1315 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    T4 = UINT8(true);
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  } else /* ZLINE: 1315 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    T4 = chpl___EQUALS_27(err, EINPROGRESS);
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (T4) /* ZLINE: 1315 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    new_temp = _new22(details, err, _ln, _fn);
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    init86(&initTemp, new_temp);
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp8 = initTemp;
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    init_ASSIGN_15(&ret, &call_tmp8, _ln, _fn);
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy86(&call_tmp8, _ln, _fn);
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    goto _end_createSystemError;
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  } else /* ZLINE: 1315 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp9 = chpl___EQUALS_27(err, ECHILD);
#line 1317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    if (call_tmp9) /* ZLINE: 1317 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    {
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      new_temp2 = _new23(details, err, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      init88(&initTemp2, new_temp2);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      call_tmp10 = initTemp2;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      init_ASSIGN_20(&ret, &call_tmp10, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      chpl__autoDestroy74(&call_tmp10, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      goto _end_createSystemError;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    } else /* ZLINE: 1317 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    {
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      call_tmp11 = chpl___EQUALS_27(err, EPIPE);
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      if (call_tmp11) /* ZLINE: 1319 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      {
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        new_temp3 = _new24(details, err, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        init63(&initTemp3, new_temp3);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        call_tmp12 = initTemp3;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        init_ASSIGN_4(&ret, &call_tmp12, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        chpl__autoDestroy71(&call_tmp12, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        goto _end_createSystemError;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      } else /* ZLINE: 1319 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      {
#line 1321 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        call_tmp13 = chpl___EQUALS_27(err, ECONNABORTED);
#line 1321 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        if (call_tmp13) /* ZLINE: 1321 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1321 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        {
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
          new_temp4 = _new25(details, err, _ln, _fn);
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
          init79(&initTemp4, new_temp4);
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
          call_tmp14 = initTemp4;
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
          init_ASSIGN_17(&ret, &call_tmp14, _ln, _fn);
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
          chpl__autoDestroy98(&call_tmp14, _ln, _fn);
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
          goto _end_createSystemError;
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        } else /* ZLINE: 1321 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        {
#line 1323 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
          call_tmp15 = chpl___EQUALS_27(err, ECONNREFUSED);
#line 1323 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
          if (call_tmp15) /* ZLINE: 1323 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1323 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
          {
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
            new_temp5 = _new26(details, err, _ln, _fn);
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
            init83(&initTemp5, new_temp5);
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
            call_tmp16 = initTemp5;
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
            init_ASSIGN_14(&ret, &call_tmp16, _ln, _fn);
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
            chpl__autoDestroy84(&call_tmp16, _ln, _fn);
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
            goto _end_createSystemError;
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
          } else /* ZLINE: 1323 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
          {
#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
            call_tmp17 = chpl___EQUALS_27(err, ECONNRESET);
#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
            if (call_tmp17) /* ZLINE: 1325 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
            {
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
              new_temp6 = _new27(details, err, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
              init66(&initTemp6, new_temp6);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
              call_tmp18 = initTemp6;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
              init_ASSIGN_10(&ret, &call_tmp18, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
              chpl__autoDestroy76(&call_tmp18, _ln, _fn);
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
              goto _end_createSystemError;
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
            } else /* ZLINE: 1325 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1326 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
            {
#line 1327 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
              call_tmp19 = chpl___EQUALS_27(err, EEXIST);
#line 1327 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
              if (call_tmp19) /* ZLINE: 1327 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1327 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
              {
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                new_temp7 = _new28(details, err, _ln, _fn);
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                init68(&initTemp7, new_temp7);
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                call_tmp20 = initTemp7;
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                init_ASSIGN_21(&ret, &call_tmp20, _ln, _fn);
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                chpl__autoDestroy92(&call_tmp20, _ln, _fn);
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                goto _end_createSystemError;
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
              } else /* ZLINE: 1327 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
              {
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                call_tmp21 = chpl___EQUALS_27(err, ENOENT);
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                if (call_tmp21) /* ZLINE: 1329 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1329 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                {
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                  new_temp8 = _new29(details, err, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                  init72(&initTemp8, new_temp8);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                  call_tmp22 = initTemp8;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                  init_ASSIGN_3(&ret, &call_tmp22, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                  chpl__autoDestroy70(&call_tmp22, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                  goto _end_createSystemError;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                } else /* ZLINE: 1329 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                {
#line 1331 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                  call_tmp23 = chpl___EQUALS_27(err, EINTR);
#line 1331 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                  if (call_tmp23) /* ZLINE: 1331 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1331 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                  {
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    new_temp9 = _new30(details, err, _ln, _fn);
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    init73(&initTemp9, new_temp9);
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    call_tmp24 = initTemp9;
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    init_ASSIGN_18(&ret, &call_tmp24, _ln, _fn);
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    chpl__autoDestroy96(&call_tmp24, _ln, _fn);
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    goto _end_createSystemError;
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                  } else /* ZLINE: 1331 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                  {
#line 1333 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    call_tmp25 = chpl___EQUALS_27(err, EISDIR);
#line 1333 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    if (call_tmp25) /* ZLINE: 1333 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1333 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    {
#line 1334 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      new_temp10 = _new31(details, err, _ln, _fn);
#line 1334 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      init78(&initTemp10, new_temp10);
#line 1334 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      call_tmp26 = initTemp10;
#line 1334 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      init_ASSIGN_11(&ret, &call_tmp26, _ln, _fn);
#line 1334 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      chpl__autoDestroy73(&call_tmp26, _ln, _fn);
#line 1334 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      goto _end_createSystemError;
#line 1334 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    } else /* ZLINE: 1333 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1334 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    {
#line 1335 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      call_tmp27 = chpl___EQUALS_27(err, ENOTDIR);
#line 1335 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      if (call_tmp27) /* ZLINE: 1335 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1335 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      {
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        new_temp11 = _new32(details, err, _ln, _fn);
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        init80(&initTemp11, new_temp11);
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        call_tmp28 = initTemp11;
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        init_ASSIGN_7(&ret, &call_tmp28, _ln, _fn);
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        chpl__autoDestroy93(&call_tmp28, _ln, _fn);
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        goto _end_createSystemError;
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      } else /* ZLINE: 1335 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      {
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        T5 = chpl___EQUALS_27(err, EACCES);
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        if (T5) /* ZLINE: 1337 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        {
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          T6 = UINT8(true);
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        } else /* ZLINE: 1337 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        {
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          T6 = chpl___EQUALS_27(err, EPERM);
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        }
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        if (T6) /* ZLINE: 1337 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1337 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        {
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          new_temp12 = _new33(details, err, _ln, _fn);
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          init84(&initTemp12, new_temp12);
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          call_tmp29 = initTemp12;
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          init_ASSIGN_16(&ret, &call_tmp29, _ln, _fn);
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          chpl__autoDestroy81(&call_tmp29, _ln, _fn);
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          goto _end_createSystemError;
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        } else /* ZLINE: 1337 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        {
#line 1339 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          call_tmp30 = chpl___EQUALS_27(err, ESRCH);
#line 1339 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          if (call_tmp30) /* ZLINE: 1339 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1339 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          {
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                            new_temp13 = _new34(details, err, _ln, _fn);
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                            init87(&initTemp13, new_temp13);
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                            call_tmp31 = initTemp13;
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                            init_ASSIGN_6(&ret, &call_tmp31, _ln, _fn);
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                            chpl__autoDestroy77(&call_tmp31, _ln, _fn);
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                            goto _end_createSystemError;
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          } else /* ZLINE: 1339 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1340 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          {
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                            call_tmp32 = chpl___EQUALS_27(err, ETIMEDOUT);
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                            if (call_tmp32) /* ZLINE: 1341 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                            {
#line 1342 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              new_temp14 = _new35(details, err, _ln, _fn);
#line 1342 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              init76(&initTemp14, new_temp14);
#line 1342 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              call_tmp33 = initTemp14;
#line 1342 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              init_ASSIGN_12(&ret, &call_tmp33, _ln, _fn);
#line 1342 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              chpl__autoDestroy78(&call_tmp33, _ln, _fn);
#line 1342 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              goto _end_createSystemError;
#line 1342 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                            } else /* ZLINE: 1341 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1342 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                            {
#line 1343 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              call_tmp34 = chpl___EQUALS_27(err, EIO);
#line 1343 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              if (call_tmp34) /* ZLINE: 1343 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1343 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              {
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                new_temp15 = _new36(err, details, _ln, _fn);
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                init62(&initTemp15, new_temp15);
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                call_tmp35 = initTemp15;
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                init_ASSIGN_8(&ret, &call_tmp35, _ln, _fn);
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                chpl__autoDestroy79(&call_tmp35, _ln, _fn);
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                goto _end_createSystemError;
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              }
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                            }
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                          }
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                        }
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      }
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    }
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                  }
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                }
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
              }
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
            }
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
          }
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
        }
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      }
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    }
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1347 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  new_temp16 = _new21(err, details, _ln, _fn);
#line 1347 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init74(&initTemp16, new_temp16);
#line 1347 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp36 = initTemp16;
#line 1347 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ret = call_tmp36;
#line 1347 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _end_createSystemError:;
#line 1314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return ret;
#line 1314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1359 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1359 */
#line 1359 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static _owned_SystemError createSystemError2(int64_t err,
#line 1359 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                             string * details,
#line 1359 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                             int64_t _ln,
#line 1359 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                             int32_t _fn) {
#line 1359 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_SystemError ret;
#line 1360 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  syserr call_tmp8;
#line 1360 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = chpl___COLON_69(err, _ln, _fn);
#line 1360 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ret = createSystemError(call_tmp8, details, _ln, _fn);
#line 1359 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return ret;
#line 1359 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1369 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1369 */
#line 1369 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_BlockingIoError(BlockingIoError this24,
#line 1369 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                               int64_t _ln,
#line 1369 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                               int32_t _fn) {
#line 1369 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_SystemError(((SystemError)(this24)), _ln, _fn);
#line 1369 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1369 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1371 */
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init127(BlockingIoError this24,
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  SystemError super_tmp = NULL;
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1372 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1372 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init126(super_tmp, err, details, _ln, _fn);
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((SystemError)(this24))))->chpl__cid = chpl__cid_SystemError;
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_BlockingIoError;
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1371 */
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static BlockingIoError _new22(string * details,
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              syserr err,
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              int64_t _ln,
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              int32_t _fn) {
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  BlockingIoError initTemp = NULL;
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  BlockingIoError T = NULL;
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_BlockingIoError_object), INT16(11), _ln, _fn);
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((BlockingIoError)(cast_tmp));
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_BlockingIoError;
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init127(initTemp, details, err, _ln, _fn);
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1380 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1380 */
#line 1380 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_ChildProcessError(ChildProcessError this24,
#line 1380 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                 int64_t _ln,
#line 1380 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                 int32_t _fn) {
#line 1380 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_SystemError(((SystemError)(this24)), _ln, _fn);
#line 1380 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1380 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1382 */
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init128(ChildProcessError this24,
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  SystemError super_tmp = NULL;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1383 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1383 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init126(super_tmp, err, details, _ln, _fn);
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((SystemError)(this24))))->chpl__cid = chpl__cid_SystemError;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_ChildProcessError;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1382 */
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static ChildProcessError _new23(string * details,
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                syserr err,
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                int64_t _ln,
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                int32_t _fn) {
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ChildProcessError initTemp = NULL;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ChildProcessError T = NULL;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_ChildProcessError_object), INT16(12), _ln, _fn);
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((ChildProcessError)(cast_tmp));
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_ChildProcessError;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init128(initTemp, details, err, _ln, _fn);
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1391 */
#line 1391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_ConnectionError(ConnectionError this24,
#line 1391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                               int64_t _ln,
#line 1391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                               int32_t _fn) {
#line 1391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_SystemError(((SystemError)(this24)), _ln, _fn);
#line 1391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1393 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1393 */
#line 1393 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init129(ConnectionError this24,
#line 1393 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1393 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1393 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1393 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1393 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  SystemError super_tmp = NULL;
#line 1393 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1393 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1394 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init126(super_tmp, err, details, _ln, _fn);
#line 1393 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((SystemError)(this24))))->chpl__cid = chpl__cid_SystemError;
#line 1393 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_ConnectionError;
#line 1393 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1393 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1402 */
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_BrokenPipeError(BrokenPipeError this24,
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                               int64_t _ln,
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                               int32_t _fn) {
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_ConnectionError(((ConnectionError)(this24)), _ln, _fn);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1404 */
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init130(BrokenPipeError this24,
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ConnectionError super_tmp = NULL;
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1405 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1405 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init129(super_tmp, err, details, _ln, _fn);
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((ConnectionError)(this24))))->chpl__cid = chpl__cid_ConnectionError;
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_BrokenPipeError;
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1404 */
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static BrokenPipeError _new24(string * details,
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              syserr err,
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              int64_t _ln,
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              int32_t _fn) {
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  BrokenPipeError initTemp = NULL;
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  BrokenPipeError T = NULL;
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_BrokenPipeError_object), INT16(13), _ln, _fn);
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((BrokenPipeError)(cast_tmp));
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_BrokenPipeError;
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init130(initTemp, details, err, _ln, _fn);
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1413 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1413 */
#line 1413 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_ConnectionAbortedError(ConnectionAbortedError this24,
#line 1413 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                      int64_t _ln,
#line 1413 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                      int32_t _fn) {
#line 1413 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_ConnectionError(((ConnectionError)(this24)), _ln, _fn);
#line 1413 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1413 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1415 */
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init131(ConnectionAbortedError this24,
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ConnectionError super_tmp = NULL;
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1416 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1416 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init129(super_tmp, err, details, _ln, _fn);
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((ConnectionError)(this24))))->chpl__cid = chpl__cid_ConnectionError;
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_ConnectionAbortedError;
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1415 */
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static ConnectionAbortedError _new25(string * details,
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                     syserr err,
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                     int64_t _ln,
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                     int32_t _fn) {
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ConnectionAbortedError initTemp = NULL;
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ConnectionAbortedError T = NULL;
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_ConnectionAbortedError_object), INT16(14), _ln, _fn);
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((ConnectionAbortedError)(cast_tmp));
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_ConnectionAbortedError;
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init131(initTemp, details, err, _ln, _fn);
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1415 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1424 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1424 */
#line 1424 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_ConnectionRefusedError(ConnectionRefusedError this24,
#line 1424 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                      int64_t _ln,
#line 1424 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                      int32_t _fn) {
#line 1424 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_ConnectionError(((ConnectionError)(this24)), _ln, _fn);
#line 1424 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1424 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1426 */
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init132(ConnectionRefusedError this24,
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ConnectionError super_tmp = NULL;
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1427 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1427 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init129(super_tmp, err, details, _ln, _fn);
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((ConnectionError)(this24))))->chpl__cid = chpl__cid_ConnectionError;
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_ConnectionRefusedError;
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1426 */
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static ConnectionRefusedError _new26(string * details,
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                     syserr err,
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                     int64_t _ln,
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                     int32_t _fn) {
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ConnectionRefusedError initTemp = NULL;
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ConnectionRefusedError T = NULL;
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_ConnectionRefusedError_object), INT16(15), _ln, _fn);
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((ConnectionRefusedError)(cast_tmp));
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_ConnectionRefusedError;
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init132(initTemp, details, err, _ln, _fn);
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1435 */
#line 1435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_ConnectionResetError(ConnectionResetError this24,
#line 1435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                    int64_t _ln,
#line 1435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                    int32_t _fn) {
#line 1435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_ConnectionError(((ConnectionError)(this24)), _ln, _fn);
#line 1435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1437 */
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init133(ConnectionResetError this24,
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ConnectionError super_tmp = NULL;
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1438 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1438 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init129(super_tmp, err, details, _ln, _fn);
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((ConnectionError)(this24))))->chpl__cid = chpl__cid_ConnectionError;
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_ConnectionResetError;
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1437 */
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static ConnectionResetError _new27(string * details,
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                   syserr err,
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                   int64_t _ln,
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                   int32_t _fn) {
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ConnectionResetError initTemp = NULL;
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ConnectionResetError T = NULL;
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_ConnectionResetError_object), INT16(16), _ln, _fn);
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((ConnectionResetError)(cast_tmp));
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_ConnectionResetError;
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init133(initTemp, details, err, _ln, _fn);
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1446 */
#line 1446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_FileExistsError(FileExistsError this24,
#line 1446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                               int64_t _ln,
#line 1446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                               int32_t _fn) {
#line 1446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_SystemError(((SystemError)(this24)), _ln, _fn);
#line 1446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1448 */
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static FileExistsError _new28(string * details,
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              syserr err,
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              int64_t _ln,
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              int32_t _fn) {
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  FileExistsError initTemp = NULL;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  FileExistsError T = NULL;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_FileExistsError_object), INT16(17), _ln, _fn);
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((FileExistsError)(cast_tmp));
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_FileExistsError;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init134(initTemp, details, err, _ln, _fn);
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1448 */
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init134(FileExistsError this24,
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  SystemError super_tmp = NULL;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init126(super_tmp, err, details, _ln, _fn);
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((SystemError)(this24))))->chpl__cid = chpl__cid_SystemError;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_FileExistsError;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1457 */
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_FileNotFoundError(FileNotFoundError this24,
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                 int64_t _ln,
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                 int32_t _fn) {
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_SystemError(((SystemError)(this24)), _ln, _fn);
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1459 */
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init135(FileNotFoundError this24,
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  SystemError super_tmp = NULL;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1460 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1460 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init126(super_tmp, err, details, _ln, _fn);
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((SystemError)(this24))))->chpl__cid = chpl__cid_SystemError;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_FileNotFoundError;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1459 */
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static FileNotFoundError _new29(string * details,
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                syserr err,
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                int64_t _ln,
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                int32_t _fn) {
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  FileNotFoundError initTemp = NULL;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  FileNotFoundError T = NULL;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_FileNotFoundError_object), INT16(18), _ln, _fn);
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((FileNotFoundError)(cast_tmp));
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_FileNotFoundError;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init135(initTemp, details, err, _ln, _fn);
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1468 */
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_InterruptedError(InterruptedError this24,
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                int64_t _ln,
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                int32_t _fn) {
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_SystemError(((SystemError)(this24)), _ln, _fn);
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1470 */
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init136(InterruptedError this24,
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  SystemError super_tmp = NULL;
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init126(super_tmp, err, details, _ln, _fn);
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((SystemError)(this24))))->chpl__cid = chpl__cid_SystemError;
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_InterruptedError;
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1470 */
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static InterruptedError _new30(string * details,
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                               syserr err,
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                               int64_t _ln,
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                               int32_t _fn) {
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  InterruptedError initTemp = NULL;
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  InterruptedError T = NULL;
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_InterruptedError_object), INT16(19), _ln, _fn);
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((InterruptedError)(cast_tmp));
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_InterruptedError;
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init136(initTemp, details, err, _ln, _fn);
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1470 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1479 */
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_IsADirectoryError(IsADirectoryError this24,
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                 int64_t _ln,
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                 int32_t _fn) {
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_SystemError(((SystemError)(this24)), _ln, _fn);
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1481 */
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init137(IsADirectoryError this24,
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  SystemError super_tmp = NULL;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init126(super_tmp, err, details, _ln, _fn);
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((SystemError)(this24))))->chpl__cid = chpl__cid_SystemError;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_IsADirectoryError;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1481 */
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static IsADirectoryError _new31(string * details,
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                syserr err,
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                int64_t _ln,
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                int32_t _fn) {
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  IsADirectoryError initTemp = NULL;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  IsADirectoryError T = NULL;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_IsADirectoryError_object), INT16(20), _ln, _fn);
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((IsADirectoryError)(cast_tmp));
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_IsADirectoryError;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init137(initTemp, details, err, _ln, _fn);
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1481 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1490 */
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_NotADirectoryError(NotADirectoryError this24,
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                  int64_t _ln,
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                  int32_t _fn) {
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_SystemError(((SystemError)(this24)), _ln, _fn);
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1492 */
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init138(NotADirectoryError this24,
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  SystemError super_tmp = NULL;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init126(super_tmp, err, details, _ln, _fn);
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((SystemError)(this24))))->chpl__cid = chpl__cid_SystemError;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_NotADirectoryError;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1492 */
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static NotADirectoryError _new32(string * details,
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                 syserr err,
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                 int64_t _ln,
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                 int32_t _fn) {
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  NotADirectoryError initTemp = NULL;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  NotADirectoryError T = NULL;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_NotADirectoryError_object), INT16(21), _ln, _fn);
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((NotADirectoryError)(cast_tmp));
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_NotADirectoryError;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init138(initTemp, details, err, _ln, _fn);
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1492 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1501 */
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_PermissionError(PermissionError this24,
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                               int64_t _ln,
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                               int32_t _fn) {
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_SystemError(((SystemError)(this24)), _ln, _fn);
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1503 */
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init139(PermissionError this24,
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  SystemError super_tmp = NULL;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init126(super_tmp, err, details, _ln, _fn);
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((SystemError)(this24))))->chpl__cid = chpl__cid_SystemError;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_PermissionError;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1503 */
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static PermissionError _new33(string * details,
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              syserr err,
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              int64_t _ln,
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                              int32_t _fn) {
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  PermissionError initTemp = NULL;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  PermissionError T = NULL;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_PermissionError_object), INT16(22), _ln, _fn);
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((PermissionError)(cast_tmp));
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_PermissionError;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init139(initTemp, details, err, _ln, _fn);
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1512 */
#line 1512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_ProcessLookupError(ProcessLookupError this24,
#line 1512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                  int64_t _ln,
#line 1512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                  int32_t _fn) {
#line 1512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_SystemError(((SystemError)(this24)), _ln, _fn);
#line 1512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1514 */
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init140(ProcessLookupError this24,
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  SystemError super_tmp = NULL;
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1515 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1515 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init126(super_tmp, err, details, _ln, _fn);
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((SystemError)(this24))))->chpl__cid = chpl__cid_SystemError;
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_ProcessLookupError;
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1514 */
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static ProcessLookupError _new34(string * details,
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                 syserr err,
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                 int64_t _ln,
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                 int32_t _fn) {
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ProcessLookupError initTemp = NULL;
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ProcessLookupError T = NULL;
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_ProcessLookupError_object), INT16(23), _ln, _fn);
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((ProcessLookupError)(cast_tmp));
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_ProcessLookupError;
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init140(initTemp, details, err, _ln, _fn);
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1514 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1523 */
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_TimeoutError(TimeoutError this24,
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                            int64_t _ln,
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                            int32_t _fn) {
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_SystemError(((SystemError)(this24)), _ln, _fn);
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1523 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1525 */
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static TimeoutError _new35(string * details,
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                           syserr err,
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                           int64_t _ln,
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                           int32_t _fn) {
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  TimeoutError initTemp = NULL;
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  TimeoutError T = NULL;
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_TimeoutError_object), INT16(24), _ln, _fn);
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((TimeoutError)(cast_tmp));
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_TimeoutError;
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init141(initTemp, details, err, _ln, _fn);
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1525 */
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init141(TimeoutError this24,
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  SystemError super_tmp = NULL;
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1526 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1526 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init126(super_tmp, err, details, _ln, _fn);
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((SystemError)(this24))))->chpl__cid = chpl__cid_SystemError;
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_TimeoutError;
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1534 */
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_IoError(IoError this24,
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                       int64_t _ln,
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                       int32_t _fn) {
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_SystemError(((SystemError)(this24)), _ln, _fn);
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1536 */
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init142(IoError this24,
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    syserr err,
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  SystemError super_tmp = NULL;
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init126(super_tmp, err, details, _ln, _fn);
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((SystemError)(this24))))->chpl__cid = chpl__cid_SystemError;
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_IoError;
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1536 */
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static IoError _new36(syserr err,
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      string * details,
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      int64_t _ln,
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      int32_t _fn) {
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  IoError initTemp = NULL;
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  IoError T = NULL;
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_IoError_object), INT16(25), _ln, _fn);
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((IoError)(cast_tmp));
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_IoError;
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init142(initTemp, err, details, _ln, _fn);
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1545 */
#line 1545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_EofError(EofError this24,
#line 1545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                        int64_t _ln,
#line 1545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                        int32_t _fn) {
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string _field_destructor_tmp_ = NULL;
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _field_destructor_tmp_ = &((this24)->details);
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  deinit52(_field_destructor_tmp_, _ln, _fn);
#line 1545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_Error(((Error)(this24)), _ln, _fn);
#line 1545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1547 */
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static string * chpl_get_EofError_details(EofError this24,
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                          int64_t _ln,
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                          int32_t _fn) {
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp8 = NULL;
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = &((this24)->details);
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp8;
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1550 */
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init143(EofError this24,
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * err_msg,
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error super_tmp = NULL;
#line 1551 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string details2;
#line 1552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp8 = NULL;
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init98(super_tmp, _ln, _fn);
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((Error)(this24))))->chpl__cid = chpl__cid_Error;
#line 1551 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init_ASSIGN_25(&details2, details, _ln, _fn);
#line 1551 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1551 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  (this24)->details = details2;
#line 1552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = &(((Error)(this24))->_msg);
#line 1552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl___ASSIGN_71(call_tmp8, err_msg, _ln, _fn);
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_EofError;
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1550 */
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static EofError _new37(string * details,
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                       string * err_msg,
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                       int64_t _ln,
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                       int32_t _fn) {
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  EofError initTemp = NULL;
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  EofError T = NULL;
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_EofError_object), INT16(8), _ln, _fn);
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((EofError)(cast_tmp));
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_EofError;
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init143(initTemp, details, err_msg, _ln, _fn);
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1556 */
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void message8(EofError this24,
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     string * _retArg,
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     int64_t _ln,
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     int32_t _fn) {
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string ret;
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string generatedMsg;
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp8 = NULL;
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error coerce_tmp2 = NULL;
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp9;
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp10;
#line 1560 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp11 = NULL;
#line 1560 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error coerce_tmp3 = NULL;
#line 1563 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp12;
#line 1563 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  syserr init_coerce_tmp;
#line 1564 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t strerror_err_ignore;
#line 1565 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptrConst_int8_t call_tmp13 = NULL;
#line 1565 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t _formal_tmp_out_err_in_strerror;
#line 1566 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string errorcode_msg;
#line 1567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error error = NULL;
#line 1568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp14;
#line 1568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int64_t default_arg_length;
#line 1574 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp15 = NULL;
#line 1574 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp16;
#line 1574 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp17;
#line 1575 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp18 = NULL;
#line 1575 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp19;
#line 1575 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp20;
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init96(&generatedMsg, _ln, _fn);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  coerce_tmp2 = ((Error)(this24));
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = chpl_get_Error__msg(coerce_tmp2, _ln, _fn);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp9 = isEmpty2(call_tmp8);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp10 = chpl___EXCLAMATION_(call_tmp9);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (call_tmp10) /* ZLINE: 1559 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1560 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    coerce_tmp3 = ((Error)(this24));
#line 1560 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 1560 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp11 = chpl_get_Error__msg(coerce_tmp3, _ln, _fn);
#line 1560 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl___PLUS__ASSIGN_3(&generatedMsg, call_tmp11, _ln, _fn);
#line 1560 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  } else /* ZLINE: 1561 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1560 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1563 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp12 = EEOF3();
#line 1563 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    init_coerce_tmp = chpl___COLON_68(call_tmp12);
#line 1564 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    strerror_err_ignore = INT32(0);
#line 1565 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp13 = sys_strerror_syserr_str(init_coerce_tmp, &_formal_tmp_out_err_in_strerror);
#line 1565 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl___ASSIGN_2(&strerror_err_ignore, _formal_tmp_out_err_in_strerror);
#line 1567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    error = NULL;
#line 1568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    default_arg_length = createAdoptingBuffer_default_length(call_tmp13, &error, _ln, _fn);
#line 1568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    if (error != nil) /* ZLINE: 1568 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    {
#line 1568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      goto handler;
#line 1568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    }
#line 1568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp14 = createAdoptingBuffer(call_tmp13, default_arg_length, &error, _ln, _fn);
#line 1568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    if (error != nil) /* ZLINE: 1568 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    {
#line 1568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      goto handler;
#line 1568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    }
#line 1568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    errorcode_msg = call_tmp14;
#line 1568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    handler:;
#line 1567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    if (error != nil) /* ZLINE: 1567 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    {
#line 1567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      chpl_uncaught_error(error, _ln, _fn);
#line 1567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    }
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl___PLUS__ASSIGN_3(&generatedMsg, &errorcode_msg, _ln, _fn);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&errorcode_msg, _ln, _fn);
#line 1570 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1574 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1574 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp15 = chpl_get_EofError_details(this24, _ln, _fn);
#line 1574 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp16 = isEmpty2(call_tmp15);
#line 1574 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp17 = chpl___EXCLAMATION_(call_tmp16);
#line 1574 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (call_tmp17) /* ZLINE: 1574 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1574 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1575 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1575 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp18 = chpl_get_EofError_details(this24, _ln, _fn);
#line 1575 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp19 = chpl___PLUS_9(&_str_literal_81, call_tmp18, _ln, _fn);
#line 1575 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp20 = chpl___PLUS_9(&call_tmp19, &_str_literal_82, _ln, _fn);
#line 1575 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl___PLUS__ASSIGN_3(&generatedMsg, &call_tmp20, _ln, _fn);
#line 1575 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&call_tmp20, _ln, _fn);
#line 1575 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&call_tmp19, _ln, _fn);
#line 1575 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1577 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ret = generatedMsg;
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  *(_retArg) = ret;
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1590 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1590 */
#line 1590 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_UnexpectedEofError(UnexpectedEofError this24,
#line 1590 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                  int64_t _ln,
#line 1590 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                  int32_t _fn) {
#line 1592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string _field_destructor_tmp_ = NULL;
#line 1592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _field_destructor_tmp_ = &((this24)->details);
#line 1592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  deinit52(_field_destructor_tmp_, _ln, _fn);
#line 1590 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_Error(((Error)(this24)), _ln, _fn);
#line 1590 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1590 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1592 */
#line 1592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static string * chpl_get_UnexpectedEofError_details(UnexpectedEofError this24,
#line 1592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                    int64_t _ln,
#line 1592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                    int32_t _fn) {
#line 1592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp8 = NULL;
#line 1592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = &((this24)->details);
#line 1592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp8;
#line 1592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1595 */
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init144(UnexpectedEofError this24,
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * err_msg,
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error super_tmp = NULL;
#line 1596 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string details2;
#line 1597 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp8 = NULL;
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init98(super_tmp, _ln, _fn);
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((Error)(this24))))->chpl__cid = chpl__cid_Error;
#line 1596 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init_ASSIGN_25(&details2, details, _ln, _fn);
#line 1596 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1596 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  (this24)->details = details2;
#line 1597 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1597 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = &(((Error)(this24))->_msg);
#line 1597 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl___ASSIGN_71(call_tmp8, err_msg, _ln, _fn);
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_UnexpectedEofError;
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1595 */
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static UnexpectedEofError _new38(string * details,
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                 string * err_msg,
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                 int64_t _ln,
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                 int32_t _fn) {
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  UnexpectedEofError initTemp = NULL;
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  UnexpectedEofError T = NULL;
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_UnexpectedEofError_object), INT16(9), _ln, _fn);
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((UnexpectedEofError)(cast_tmp));
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_UnexpectedEofError;
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init144(initTemp, details, err_msg, _ln, _fn);
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1595 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1601 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1601 */
#line 1601 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void message9(UnexpectedEofError this24,
#line 1601 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     string * _retArg,
#line 1601 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     int64_t _ln,
#line 1601 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     int32_t _fn) {
#line 1601 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string ret;
#line 1602 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string generatedMsg;
#line 1604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp8 = NULL;
#line 1604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error coerce_tmp2 = NULL;
#line 1604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp9;
#line 1604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp10;
#line 1605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp11 = NULL;
#line 1605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error coerce_tmp3 = NULL;
#line 1608 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp12;
#line 1608 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  syserr init_coerce_tmp;
#line 1609 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t strerror_err_ignore;
#line 1610 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptrConst_int8_t call_tmp13 = NULL;
#line 1610 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t _formal_tmp_out_err_in_strerror;
#line 1611 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string errorcode_msg;
#line 1612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error error = NULL;
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp14;
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int64_t default_arg_length;
#line 1619 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp15 = NULL;
#line 1619 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp16;
#line 1619 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp17;
#line 1620 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp18 = NULL;
#line 1620 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp19;
#line 1620 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp20;
#line 1602 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init96(&generatedMsg, _ln, _fn);
#line 1604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  coerce_tmp2 = ((Error)(this24));
#line 1604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = chpl_get_Error__msg(coerce_tmp2, _ln, _fn);
#line 1604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp9 = isEmpty2(call_tmp8);
#line 1604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp10 = chpl___EXCLAMATION_(call_tmp9);
#line 1604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (call_tmp10) /* ZLINE: 1604 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    coerce_tmp3 = ((Error)(this24));
#line 1605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 1605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp11 = chpl_get_Error__msg(coerce_tmp3, _ln, _fn);
#line 1605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl___PLUS__ASSIGN_3(&generatedMsg, call_tmp11, _ln, _fn);
#line 1605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  } else /* ZLINE: 1606 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1608 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp12 = ESHORT2();
#line 1608 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    init_coerce_tmp = chpl___COLON_68(call_tmp12);
#line 1609 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    strerror_err_ignore = INT32(0);
#line 1610 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp13 = sys_strerror_syserr_str(init_coerce_tmp, &_formal_tmp_out_err_in_strerror);
#line 1610 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl___ASSIGN_2(&strerror_err_ignore, _formal_tmp_out_err_in_strerror);
#line 1612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    error = NULL;
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    default_arg_length = createAdoptingBuffer_default_length(call_tmp13, &error, _ln, _fn);
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    if (error != nil) /* ZLINE: 1613 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    {
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      goto handler;
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    }
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp14 = createAdoptingBuffer(call_tmp13, default_arg_length, &error, _ln, _fn);
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    if (error != nil) /* ZLINE: 1613 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    {
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      goto handler;
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    }
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    errorcode_msg = call_tmp14;
#line 1613 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    handler:;
#line 1612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    if (error != nil) /* ZLINE: 1612 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    {
#line 1612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      chpl_uncaught_error(error, _ln, _fn);
#line 1612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    }
#line 1615 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl___PLUS__ASSIGN_3(&generatedMsg, &errorcode_msg, _ln, _fn);
#line 1615 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&errorcode_msg, _ln, _fn);
#line 1615 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1619 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1619 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp15 = chpl_get_UnexpectedEofError_details(this24, _ln, _fn);
#line 1619 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp16 = isEmpty2(call_tmp15);
#line 1619 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp17 = chpl___EXCLAMATION_(call_tmp16);
#line 1619 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (call_tmp17) /* ZLINE: 1619 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1619 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1620 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1620 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp18 = chpl_get_UnexpectedEofError_details(this24, _ln, _fn);
#line 1620 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp19 = chpl___PLUS_9(&_str_literal_81, call_tmp18, _ln, _fn);
#line 1620 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp20 = chpl___PLUS_9(&call_tmp19, &_str_literal_82, _ln, _fn);
#line 1620 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl___PLUS__ASSIGN_3(&generatedMsg, &call_tmp20, _ln, _fn);
#line 1620 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&call_tmp20, _ln, _fn);
#line 1620 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&call_tmp19, _ln, _fn);
#line 1620 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1622 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ret = generatedMsg;
#line 1601 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  *(_retArg) = ret;
#line 1601 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1601 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1630 */
#line 1630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void chpl__auto_destroy_BadFormatError(BadFormatError this24,
#line 1630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                              int64_t _ln,
#line 1630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                              int32_t _fn) {
#line 1632 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string _field_destructor_tmp_ = NULL;
#line 1632 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1632 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _field_destructor_tmp_ = &((this24)->details);
#line 1632 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  deinit52(_field_destructor_tmp_, _ln, _fn);
#line 1630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__auto_destroy_Error(((Error)(this24)), _ln, _fn);
#line 1630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1632 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1632 */
#line 1632 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static string * chpl_get_BadFormatError_details(BadFormatError this24,
#line 1632 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                int64_t _ln,
#line 1632 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                                                int32_t _fn) {
#line 1632 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp8 = NULL;
#line 1632 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1632 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = &((this24)->details);
#line 1632 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return call_tmp8;
#line 1632 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1635 */
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void init145(BadFormatError this24,
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * details,
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * err_msg,
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error super_tmp = NULL;
#line 1636 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string details2;
#line 1637 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp8 = NULL;
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  super_tmp = &((this24)->super);
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init98(super_tmp, _ln, _fn);
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(((Error)(this24))))->chpl__cid = chpl__cid_Error;
#line 1636 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init_ASSIGN_25(&details2, details, _ln, _fn);
#line 1636 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1636 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  (this24)->details = details2;
#line 1637 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1637 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = &(((Error)(this24))->_msg);
#line 1637 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl___ASSIGN_71(call_tmp8, err_msg, _ln, _fn);
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_BadFormatError;
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1635 */
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static BadFormatError _new39(string * details,
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                             string * err_msg,
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                             int64_t _ln,
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                             int32_t _fn) {
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  BadFormatError initTemp = NULL;
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  BadFormatError T = NULL;
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_BadFormatError_object), INT16(10), _ln, _fn);
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  initTemp = ((BadFormatError)(cast_tmp));
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_BadFormatError;
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init145(initTemp, details, err_msg, _ln, _fn);
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  T = initTemp;
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return T;
#line 1635 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1641 */
#line 1641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void message10(BadFormatError this24,
#line 1641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      string * _retArg,
#line 1641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      int64_t _ln,
#line 1641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                      int32_t _fn) {
#line 1641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string ret;
#line 1642 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string generatedMsg;
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp8 = NULL;
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error coerce_tmp2 = NULL;
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp9;
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp10;
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp11 = NULL;
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error coerce_tmp3 = NULL;
#line 1648 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t call_tmp12;
#line 1648 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  syserr init_coerce_tmp;
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t strerror_err_ignore;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptrConst_int8_t call_tmp13 = NULL;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int32_t _formal_tmp_out_err_in_strerror;
#line 1651 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string errorcode_msg;
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error error = NULL;
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp14;
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int64_t default_arg_length;
#line 1659 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp15 = NULL;
#line 1659 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp16;
#line 1659 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp17;
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _ref_string call_tmp18 = NULL;
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp19;
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp20;
#line 1642 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  init96(&generatedMsg, _ln, _fn);
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  coerce_tmp2 = ((Error)(this24));
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = chpl_get_Error__msg(coerce_tmp2, _ln, _fn);
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp9 = isEmpty2(call_tmp8);
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp10 = chpl___EXCLAMATION_(call_tmp9);
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (call_tmp10) /* ZLINE: 1644 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1644 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    coerce_tmp3 = ((Error)(this24));
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp11 = chpl_get_Error__msg(coerce_tmp3, _ln, _fn);
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl___PLUS__ASSIGN_3(&generatedMsg, call_tmp11, _ln, _fn);
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  } else /* ZLINE: 1646 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1645 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1648 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp12 = EFORMAT2();
#line 1648 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    init_coerce_tmp = chpl___COLON_68(call_tmp12);
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    strerror_err_ignore = INT32(0);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp13 = sys_strerror_syserr_str(init_coerce_tmp, &_formal_tmp_out_err_in_strerror);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl___ASSIGN_2(&strerror_err_ignore, _formal_tmp_out_err_in_strerror);
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    error = NULL;
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    default_arg_length = createAdoptingBuffer_default_length(call_tmp13, &error, _ln, _fn);
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    if (error != nil) /* ZLINE: 1653 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    {
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      goto handler;
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    }
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp14 = createAdoptingBuffer(call_tmp13, default_arg_length, &error, _ln, _fn);
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    if (error != nil) /* ZLINE: 1653 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    {
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      goto handler;
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    }
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    errorcode_msg = call_tmp14;
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    handler:;
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    if (error != nil) /* ZLINE: 1652 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    {
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      chpl_uncaught_error(error, _ln, _fn);
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    }
#line 1655 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl___PLUS__ASSIGN_3(&generatedMsg, &errorcode_msg, _ln, _fn);
#line 1655 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&errorcode_msg, _ln, _fn);
#line 1655 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1659 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1659 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp15 = chpl_get_BadFormatError_details(this24, _ln, _fn);
#line 1659 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp16 = isEmpty2(call_tmp15);
#line 1659 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp17 = chpl___EXCLAMATION_(call_tmp16);
#line 1659 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (call_tmp17) /* ZLINE: 1659 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1659 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp18 = chpl_get_BadFormatError_details(this24, _ln, _fn);
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp19 = chpl___PLUS_9(&_str_literal_81, call_tmp18, _ln, _fn);
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp20 = chpl___PLUS_9(&call_tmp19, &_str_literal_82, _ln, _fn);
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl___PLUS__ASSIGN_3(&generatedMsg, &call_tmp20, _ln, _fn);
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&call_tmp20, _ln, _fn);
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&call_tmp19, _ln, _fn);
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1662 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ret = generatedMsg;
#line 1641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  *(_retArg) = ret;
#line 1641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1696 */
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static string quote_string(string * s,
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                           int64_t len,
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                           int64_t _ln,
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                           int32_t _fn) {
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string ret;
#line 1703 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptrConst_int8_t ret2 = NULL;
#line 1707 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp8;
#line 1707 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 1705 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  syserr call_tmp10;
#line 1711 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error error = NULL;
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp11;
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  c_ptrConst_int8_t call_tmp12 = NULL;
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp13;
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int64_t default_arg_length;
#line 1713 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp14;
#line 1713 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int64_t default_arg_length2;
#line 1703 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ret2 = ((c_ptrConst_int8_t)(nil));
#line 1707 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = localize(s, _ln, _fn);
#line 1707 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp9 = c_str(&call_tmp8, _ln, _fn);
#line 1705 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp10 = qio_quote_string(UINT8(34), UINT8(34), QIO_STRING_FORMAT_CHPL, call_tmp9, len, &ret2, nil);
#line 1705 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 1711 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  error = NULL;
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp11 = _cond_test7(call_tmp10);
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (call_tmp11) /* ZLINE: 1712 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp12 = qio_strdup("<error>");
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    default_arg_length = createAdoptingBuffer_default_length(call_tmp12, &error, _ln, _fn);
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    if (error != nil) /* ZLINE: 1712 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    {
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      goto handler;
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    }
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp13 = createAdoptingBuffer(call_tmp12, default_arg_length, &error, _ln, _fn);
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    if (error != nil) /* ZLINE: 1712 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    {
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
      goto handler;
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    }
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    ret = call_tmp13;
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    goto _end_quote_string;
#line 1712 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1713 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  default_arg_length2 = createAdoptingBuffer_default_length(ret2, &error, _ln, _fn);
#line 1713 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (error != nil) /* ZLINE: 1713 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1713 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1713 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    goto handler;
#line 1713 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1713 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp14 = createAdoptingBuffer(ret2, default_arg_length2, &error, _ln, _fn);
#line 1713 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (error != nil) /* ZLINE: 1713 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1713 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1713 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    goto handler;
#line 1713 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1713 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  ret = call_tmp14;
#line 1713 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  goto _end_quote_string;
#line 1713 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  handler:;
#line 1711 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (error != nil) /* ZLINE: 1711 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1711 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1711 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 1711 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1711 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _end_quote_string:;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return ret;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1732 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1732 */
#line 1732 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void ioerror(syserr error,
#line 1732 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * msg,
#line 1732 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    string * path,
#line 1732 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t offset2,
#line 1732 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    Error * error_out,
#line 1732 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int64_t _ln,
#line 1732 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                    int32_t _fn) {
#line 1734 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp8;
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int64_t call_tmp9;
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string quotedpath;
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp10;
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp11;
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp12;
#line 1737 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp13;
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string details;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_Error call_tmp14;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error call_tmp15 = NULL;
#line 1734 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = _cond_test7(error);
#line 1734 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (call_tmp8) /* ZLINE: 1734 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1734 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp9 = numBytes(path);
#line 1735 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    quotedpath = quote_string(path, call_tmp9, _ln, _fn);
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp10 = chpl___PLUS_9(msg, &_str_literal_90, _ln, _fn);
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp11 = chpl___PLUS_9(&call_tmp10, &quotedpath, _ln, _fn);
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp12 = chpl___PLUS_9(&call_tmp11, &_str_literal_91, _ln, _fn);
#line 1737 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp13 = chpl___COLON_48(offset2, _ln, _fn);
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    details = chpl___PLUS_9(&call_tmp12, &call_tmp13, _ln, _fn);
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&call_tmp13, _ln, _fn);
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&call_tmp10, _ln, _fn);
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp14 = createSystemOrChplError(error, &details, _ln, _fn);
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp15 = chpl_fix_thrown_error(&call_tmp14, _ln, _fn);
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    *(error_out) = call_tmp15;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&details, _ln, _fn);
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&quotedpath, _ln, _fn);
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    goto _endioerror;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _endioerror:;
#line 1732 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1732 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1745 */
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void ioerror2(syserr error,
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     string * msg,
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     string * path,
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     Error * error_out,
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     int64_t _ln,
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     int32_t _fn) {
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp8;
#line 1748 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  int64_t call_tmp9;
#line 1748 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string quotedpath;
#line 1749 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string call_tmp10;
#line 1749 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  string details;
#line 1750 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_Error call_tmp11;
#line 1750 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error call_tmp12 = NULL;
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = _cond_test7(error);
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (call_tmp8) /* ZLINE: 1747 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1748 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp9 = numBytes(path);
#line 1748 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    quotedpath = quote_string(path, call_tmp9, _ln, _fn);
#line 1749 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp10 = chpl___PLUS_9(msg, &_str_literal_90, _ln, _fn);
#line 1749 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    details = chpl___PLUS_9(&call_tmp10, &quotedpath, _ln, _fn);
#line 1749 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&call_tmp10, _ln, _fn);
#line 1750 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp11 = createSystemOrChplError(error, &details, _ln, _fn);
#line 1750 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp12 = chpl_fix_thrown_error(&call_tmp11, _ln, _fn);
#line 1750 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    *(error_out) = call_tmp12;
#line 1750 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&details, _ln, _fn);
#line 1750 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    chpl__autoDestroy23(&quotedpath, _ln, _fn);
#line 1750 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    goto _endioerror;
#line 1750 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1750 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _endioerror:;
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

#line 1757 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
/* OS.chpl:1757 */
#line 1757 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
static void ioerror3(syserr error,
#line 1757 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     string * msg,
#line 1757 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     Error * error_out,
#line 1757 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     int64_t _ln,
#line 1757 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
                     int32_t _fn) {
#line 1759 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  chpl_bool call_tmp8;
#line 1759 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _owned_Error call_tmp9;
#line 1759 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  Error call_tmp10 = NULL;
#line 1759 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  call_tmp8 = _cond_test7(error);
#line 1759 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  if (call_tmp8) /* ZLINE: 1759 /Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl */
#line 1759 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  {
#line 1759 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp9 = createSystemOrChplError(error, msg, _ln, _fn);
#line 1759 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    call_tmp10 = chpl_fix_thrown_error(&call_tmp9, _ln, _fn);
#line 1759 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    *(error_out) = call_tmp10;
#line 1759 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
    goto _endioerror;
#line 1759 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  }
#line 1759 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  _endioerror:;
#line 1757 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
  return;
#line 1757 "/Users/iainmoncrief/Desktop/chapel/modules/standard/OS.chpl"
}

