#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:34 */
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void chpl__init_Errors(int64_t _ln,
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                              int32_t _fn) {
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (chpl__init_Errors_p) /* ZLINE: 34 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    goto _exit_chpl__init_Errors;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  printModuleInit("%*s\n", "Errors", INT64(6), _ln, _fn);
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  refIndentLevel = &moduleInitLevel;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  *(refIndentLevel) += INT64(1);
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__init_Errors_p = UINT8(true);
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl__init_ChapelLocks(_ln, _fn);
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  *(refIndentLevel) -= INT64(1);
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _exit_chpl__init_Errors:;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:42 */
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void chpl__auto_destroy_Error(Error this24,
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                     int64_t _ln,
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                     int32_t _fn) {
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_string _field_destructor_tmp_ = NULL;
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _field_destructor_tmp_ = &((this24)->_msg);
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  deinit52(_field_destructor_tmp_, _ln, _fn);
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__auto_destroy_RootClass(((RootClass)(this24)), _ln, _fn);
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:44 */
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static Error * chpl_get_Error__next(Error this24,
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                    int64_t _ln,
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                    int32_t _fn) {
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_Error call_tmp8 = NULL;
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = &((this24)->_next);
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return call_tmp8;
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:48 */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static int64_t * chpl_get_Error_thrownLine(Error this24,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                           int64_t _ln,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                           int32_t _fn) {
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = &((this24)->thrownLine);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return call_tmp8;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:50 */
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static int32_t * chpl_get_Error_thrownFileId(Error this24,
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                             int64_t _ln,
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                             int32_t _fn) {
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int32_t call_tmp8 = NULL;
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = &((this24)->thrownFileId);
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return call_tmp8;
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:53 */
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static string * chpl_get_Error__msg(Error this24,
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                    int64_t _ln,
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                    int32_t _fn) {
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_string call_tmp8 = NULL;
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = &((this24)->_msg);
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return call_tmp8;
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:56 */
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static chpl_bool * chpl_get_Error__hasThrowInfo(Error this24,
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                                int64_t _ln,
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                                int32_t _fn) {
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = &((this24)->_hasThrowInfo);
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return call_tmp8;
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:59 */
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void init98(Error this24,
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int64_t _ln,
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int32_t _fn) {
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  RootClass super_tmp = NULL;
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error init_coerce_tmp = NULL;
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string _msg;
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  super_tmp = &((this24)->super);
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init5(super_tmp);
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(((RootClass)(this24))))->chpl__cid = chpl__cid_RootClass;
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init_coerce_tmp = ((Error)(nil));
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (this24)->_next = init_coerce_tmp;
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (this24)->thrownLine = INT64(0);
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (this24)->thrownFileId = INT32(0);
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init96(&_msg, _ln, _fn);
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (this24)->_msg = _msg;
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (this24)->_hasThrowInfo = UINT8(false);
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_Error;
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:64 */
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void init99(Error this24,
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   string * msg,
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int64_t _ln,
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int32_t _fn) {
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  RootClass super_tmp = NULL;
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error init_coerce_tmp = NULL;
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string _msg;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  super_tmp = &((this24)->super);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init5(super_tmp);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(((RootClass)(this24))))->chpl__cid = chpl__cid_RootClass;
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init_coerce_tmp = ((Error)(nil));
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (this24)->_next = init_coerce_tmp;
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (this24)->thrownLine = INT64(0);
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (this24)->thrownFileId = INT32(0);
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init_ASSIGN_25(&_msg, msg, _ln, _fn);
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (this24)->_msg = _msg;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (this24)->_hasThrowInfo = UINT8(false);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_Error;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:73 */
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void message(Error this24,
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    string * _retArg,
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int64_t _ln,
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int32_t _fn) {
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string ret;
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_string call_tmp8 = NULL;
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_get_Error__msg(this24, _ln, _fn);
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ret = chpl__autoCopy2(call_tmp8, UINT8(false), _ln, _fn);
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  *(_retArg) = ret;
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:82 */
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void init100(NilThrownError this24,
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int64_t _ln,
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int32_t _fn) {
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error super_tmp = NULL;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  super_tmp = &((this24)->super);
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init98(super_tmp, _ln, _fn);
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(((Error)(this24))))->chpl__cid = chpl__cid_Error;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_NilThrownError;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:82 */
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void chpl__auto_destroy_NilThrownError(NilThrownError this24,
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                              int64_t _ln,
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                              int32_t _fn) {
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__auto_destroy_Error(((Error)(this24)), _ln, _fn);
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:82 */
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static NilThrownError _new12(int64_t _ln,
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                             int32_t _fn) {
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  NilThrownError initTemp = NULL;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr_void cast_tmp = NULL;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  NilThrownError T = NULL;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_NilThrownError_object), INT16(1), _ln, _fn);
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  initTemp = ((NilThrownError)(cast_tmp));
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_NilThrownError;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init100(initTemp, _ln, _fn);
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  T = initTemp;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return T;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:84 */
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void message2(NilThrownError this24,
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     string * _retArg,
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     int64_t _ln,
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     int32_t _fn) {
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string ret;
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ret = chpl__initCopy6(&_str_literal_557, UINT8(false), _ln, _fn);
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  *(_retArg) = ret;
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:92 */
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void init101(NilClassError this24,
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int64_t _ln,
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int32_t _fn) {
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error super_tmp = NULL;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  super_tmp = &((this24)->super);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init98(super_tmp, _ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(((Error)(this24))))->chpl__cid = chpl__cid_Error;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_NilClassError;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:92 */
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void chpl__auto_destroy_NilClassError(NilClassError this24,
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                             int64_t _ln,
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                             int32_t _fn) {
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__auto_destroy_Error(((Error)(this24)), _ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:92 */
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static NilClassError _new13(int64_t _ln,
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                            int32_t _fn) {
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  NilClassError initTemp = NULL;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr_void cast_tmp = NULL;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  NilClassError T = NULL;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_NilClassError_object), INT16(58), _ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  initTemp = ((NilClassError)(cast_tmp));
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_NilClassError;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init101(initTemp, _ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  T = initTemp;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return T;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void message3(NilClassError this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     string * _retArg,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     int32_t _fn) {
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string ret;
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ret = chpl__initCopy6(&_str_literal_558, UINT8(false), _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  *(_retArg) = ret;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:116 */
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static DecodeError _new14(int64_t _ln,
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                          int32_t _fn) {
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  DecodeError initTemp = NULL;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr_void cast_tmp = NULL;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  DecodeError T = NULL;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_DecodeError_object), INT16(2), _ln, _fn);
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  initTemp = ((DecodeError)(cast_tmp));
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_DecodeError;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init102(initTemp, _ln, _fn);
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  T = initTemp;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return T;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:116 */
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void init102(DecodeError this24,
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int64_t _ln,
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int32_t _fn) {
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error super_tmp = NULL;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  super_tmp = &((this24)->super);
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init98(super_tmp, _ln, _fn);
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(((Error)(this24))))->chpl__cid = chpl__cid_Error;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_DecodeError;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:116 */
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void chpl__auto_destroy_DecodeError(DecodeError this24,
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                           int64_t _ln,
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                           int32_t _fn) {
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__auto_destroy_Error(((Error)(this24)), _ln, _fn);
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:119 */
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void message4(DecodeError this24,
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     string * _retArg,
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     int64_t _ln,
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     int32_t _fn) {
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string ret;
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ret = chpl__initCopy6(&_str_literal_560, UINT8(false), _ln, _fn);
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  *(_retArg) = ret;
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:128 */
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void chpl__auto_destroy_IllegalArgumentError(IllegalArgumentError this24,
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                                    int64_t _ln,
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                                    int32_t _fn) {
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__auto_destroy_Error(((Error)(this24)), _ln, _fn);
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:133 */
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void init103(IllegalArgumentError this24,
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    string * msg,
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int64_t _ln,
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int32_t _fn) {
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error super_tmp = NULL;
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  super_tmp = &((this24)->super);
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 134 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init99(super_tmp, msg, _ln, _fn);
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(((Error)(this24))))->chpl__cid = chpl__cid_Error;
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_IllegalArgumentError;
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:133 */
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static IllegalArgumentError _new15(string * msg,
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                   int64_t _ln,
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                   int32_t _fn) {
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  IllegalArgumentError initTemp = NULL;
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr_void cast_tmp = NULL;
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  IllegalArgumentError T = NULL;
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_IllegalArgumentError_object), INT16(0), _ln, _fn);
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  initTemp = ((IllegalArgumentError)(cast_tmp));
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_IllegalArgumentError;
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init103(initTemp, msg, _ln, _fn);
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  T = initTemp;
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return T;
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:144 */
#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void chpl__auto_destroy_CodepointSplitError(CodepointSplitError this24,
#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                                   int64_t _ln,
#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                                   int32_t _fn) {
#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__auto_destroy_Error(((Error)(this24)), _ln, _fn);
#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:146 */
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void init104(CodepointSplitError this24,
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    string * info,
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int64_t _ln,
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int32_t _fn) {
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error super_tmp = NULL;
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  super_tmp = &((this24)->super);
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init99(super_tmp, info, _ln, _fn);
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(((Error)(this24))))->chpl__cid = chpl__cid_Error;
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_CodepointSplitError;
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:146 */
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static CodepointSplitError _new16(string * info,
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                  int64_t _ln,
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                  int32_t _fn) {
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  CodepointSplitError initTemp = NULL;
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr_void cast_tmp = NULL;
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  CodepointSplitError T = NULL;
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_CodepointSplitError_object), INT16(36), _ln, _fn);
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  initTemp = ((CodepointSplitError)(cast_tmp));
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_CodepointSplitError;
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init104(initTemp, info, _ln, _fn);
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  T = initTemp;
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return T;
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:151 */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void message5(CodepointSplitError this24,
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     string * _retArg,
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     int64_t _ln,
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     int32_t _fn) {
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_string call_tmp8 = NULL;
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error coerce_tmp2 = NULL;
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp9;
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  coerce_tmp2 = ((Error)(this24));
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_get_Error__msg(coerce_tmp2, _ln, _fn);
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = chpl___PLUS_9(&_str_literal_561, call_tmp8, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  *(_retArg) = call_tmp9;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:173 */
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void init105(chpl_TaskErrors * this24,
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    Error _head,
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    chpl_LocalSpinlock * _errorsLock) {
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_LocalSpinlock _formal_tmp__errorsLock;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _formal_tmp__errorsLock = *(_errorsLock);
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (this24)->_head = _head;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (this24)->_errorsLock = _formal_tmp__errorsLock;
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:173 */
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void chpl__auto_destroy_chpl_TaskErrors(chpl_TaskErrors * this24) {
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_chpl_LocalSpinlock _field_destructor_tmp_ = NULL;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _field_destructor_tmp_ = &((this24)->_errorsLock);
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__auto_destroy_chpl_LocalSpinlock(_field_destructor_tmp_);
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:174 */
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static Error * chpl_get_chpl_TaskErrors__head(chpl_TaskErrors * this24) {
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_Error call_tmp8 = NULL;
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = &((this24)->_head);
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return call_tmp8;
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:174 */
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static Error init_default__head(int64_t _ln,
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                int32_t _fn) {
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error T = NULL;
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  T = ((Error)(nil));
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return T;
#line 174 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:175 */
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static chpl_LocalSpinlock * chpl_get_chpl_TaskErrors__errorsLock(chpl_TaskErrors * this24) {
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_chpl_LocalSpinlock call_tmp8 = NULL;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = &((this24)->_errorsLock);
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return call_tmp8;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:175 */
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static chpl_LocalSpinlock init_default__errorsLock(void) {
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_LocalSpinlock ret;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_LocalSpinlock _errorsLock;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init34(&_errorsLock);
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ret = _errorsLock;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return ret;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:177 */
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void append(chpl_TaskErrors * this24,
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   Error err,
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int64_t _ln,
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int32_t _fn) {
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_chpl_LocalSpinlock call_tmp8 = NULL;
#line 180 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_Error call_tmp9 = NULL;
#line 180 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_Error call_tmp10 = NULL;
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_Error call_tmp11 = NULL;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_chpl_LocalSpinlock call_tmp12 = NULL;
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_get_chpl_TaskErrors__errorsLock(this24);
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  lock(call_tmp8, _ln, _fn);
#line 180 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(err, _ln, _fn);
#line 180 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = chpl_get_Error__next(err, _ln, _fn);
#line 180 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp10 = chpl_get_chpl_TaskErrors__head(this24);
#line 180 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl___ASSIGN_53(call_tmp9, *(call_tmp10));
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp11 = chpl_get_chpl_TaskErrors__head(this24);
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl___ASSIGN_53(call_tmp11, err);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp12 = chpl_get_chpl_TaskErrors__errorsLock(this24);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  unlock(call_tmp12, _ln, _fn);
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:186 */
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static chpl_bool empty(chpl_TaskErrors * this24,
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                       int64_t _ln,
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                       int32_t _fn) {
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_Error call_tmp8 = NULL;
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp9;
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_get_chpl_TaskErrors__head(this24);
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = chpl___EQUALS_8(((RootClass)(*(call_tmp8))), nil);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return call_tmp9;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:214 */
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static int64_t * chpl_get_TaskErrors_nErrors(TaskErrors this24,
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                             int64_t _ln,
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                             int32_t _fn) {
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = &((this24)->nErrors);
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return call_tmp8;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:216 */
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static c_ptr__owned_Error * chpl_get_TaskErrors_errorsArray(TaskErrors this24,
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                                            int64_t _ln,
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                                            int32_t _fn) {
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error call_tmp8 = NULL;
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = &((this24)->errorsArray);
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return call_tmp8;
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:219 */
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void init106(TaskErrors this24,
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    chpl_TaskErrors * group,
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int64_t _ln,
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int32_t _fn) {
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error super_tmp = NULL;
#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_Error call_tmp8 = NULL;
#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error head = NULL;
#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error coerce_tmp2 = NULL;
#line 221 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_Error call_tmp9 = NULL;
#line 222 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error errorsArray = NULL;
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t n;
#line 226 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error cur = NULL;
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error call_tmp10 = NULL;
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error while_borrow = NULL;
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool T;
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error curr = NULL;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_Error call_tmp11 = NULL;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error curnext = NULL;
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors call_tmp12 = NULL;
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors ifvar_borrow = NULL;
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp13;
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors asTaskErr = NULL;
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ic_these_TaskErrors _iterator = NULL;
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this25 = NULL;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int32_t call_tmp14;
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this26 = NULL;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  locale call_tmp15;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t call_tmp16;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp17;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int32_t call_tmp18;
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this27 = NULL;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  locale call_tmp19;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t call_tmp20;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ic_chpl_direct_counted_range_iter _iterator2 = NULL;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int64_t call_tmp21 = NULL;
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this28 = NULL;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_chpl_direct_counted_range_iter call_tmp22;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_chpl_direct_counted_range_iter ret_tmp;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors taskInd_this = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_counted_range_iter_helper _iterator3 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper call_tmp23;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper ret_tmp2;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t low3;
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp24;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T2;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp25;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp26;
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp27;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator4 = NULL;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp28;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp3;
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
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref__owned_Error2 call_tmp29 = NULL;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error _this_tmp_ = NULL;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error coerce_tmp3 = NULL;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp30;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error coerce_tmp4 = NULL;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error _this_tmp_2 = NULL;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error coerce_tmp5 = NULL;
#line 242 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int64_t call_tmp31 = NULL;
#line 243 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error call_tmp32 = NULL;
#line 243 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  uint64_t call_tmp33;
#line 243 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error call_tmp34 = NULL;
#line 243 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  uint64_t default_arg_alignment;
#line 246 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t idx;
#line 248 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error call_tmp35 = NULL;
#line 248 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error while_borrow2 = NULL;
#line 248 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool T3;
#line 248 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error curr2 = NULL;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_Error call_tmp36 = NULL;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error curnext2 = NULL;
#line 250 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_Error call_tmp37 = NULL;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors call_tmp38 = NULL;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors ifvar_borrow2 = NULL;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp39;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors asTaskErr2 = NULL;
#line 252 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  locale origLoc;
#line 252 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error call_tmp40 = NULL;
#line 252 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error EA = NULL;
#line 252 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr_int64_t call_tmp41 = NULL;
#line 252 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr_int64_t idxPtr = NULL;
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ic_these_TaskErrors _iterator5 = NULL;
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this29 = NULL;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int32_t call_tmp42;
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this30 = NULL;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  locale call_tmp43;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t call_tmp44;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp45;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int32_t call_tmp46;
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this31 = NULL;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  locale call_tmp47;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t call_tmp48;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ic_chpl_direct_counted_range_iter _iterator6 = NULL;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int64_t call_tmp49 = NULL;
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this32 = NULL;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_chpl_direct_counted_range_iter call_tmp50;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_chpl_direct_counted_range_iter ret_tmp4;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors taskInd_this2 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_counted_range_iter_helper _iterator7 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper call_tmp51;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper ret_tmp5;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t low6;
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp52;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low7;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T4;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp53;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp54;
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp55;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator8 = NULL;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp56;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp6;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i2;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first2;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last2;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low8;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high3;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref__owned_Error2 call_tmp57 = NULL;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error _this_tmp_3 = NULL;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error coerce_tmp6 = NULL;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp58;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error coerce_tmp7 = NULL;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref__owned_Error2 call_tmp59 = NULL;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error _this_tmp_4 = NULL;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error coerce_tmp8 = NULL;
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int64_t call_tmp60 = NULL;
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref__owned_Error2 call_tmp61 = NULL;
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t coerce_tmp9;
#line 261 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int64_t call_tmp62 = NULL;
#line 265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref__owned_Error2 call_tmp63 = NULL;
#line 265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error _this_tmp_5 = NULL;
#line 265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error coerce_tmp10 = NULL;
#line 265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _owned_Error call_tmp64;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  super_tmp = &((this24)->super);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init98(super_tmp, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(((Error)(this24))))->chpl__cid = chpl__cid_Error;
#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_get_chpl_TaskErrors__head(group);
#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  head = coerce_tmp2;
#line 221 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = chpl_get_chpl_TaskErrors__head(group);
#line 221 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl___ASSIGN_48(call_tmp9, nil, _ln, _fn);
#line 222 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 222 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (this24)->nErrors = INT64(0);
#line 222 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  errorsArray = ((c_ptr__owned_Error)(nil));
#line 222 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 222 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (this24)->errorsArray = errorsArray;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_TaskErrors;
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  n = INT64(0);
#line 226 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  cur = coerce_tmp2;
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp10 = chpl_checkBorrowIfVar3(coerce_tmp2);
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  while_borrow = call_tmp10;
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  T = _cond_test6(call_tmp10, _ln, _fn);
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  while (T) {
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    curr = while_borrow;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(while_borrow, _ln, _fn);
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp11 = chpl_get_Error__next(while_borrow, _ln, _fn);
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    curnext = *(call_tmp11);
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp12 = chpl___COLON_20(curr, _ln, _fn);
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    ifvar_borrow = chpl_checkBorrowIfVar5(call_tmp12);
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp13 = _cond_test2(ifvar_borrow, _ln, _fn);
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    if (call_tmp13) /* ZLINE: 229 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    {
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      asTaskErr = ifvar_borrow;
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      _iterator = _getIterator4(&asTaskErr, _ln, _fn);
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      this25 = (_iterator)->F0_this;
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      this26 = (_iterator)->F0_this;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp14 = chpl_nodeID;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp15 = here(_ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp16 = id(&call_tmp15, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp17 = chpl___EQUALS_3(((int64_t)(call_tmp14)), call_tmp16);
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      this27 = (_iterator)->F0_this;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp18 = chpl_nodeID;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp19 = here(_ln, _fn);
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp20 = id(&call_tmp19, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      assert3(call_tmp17, &_str_literal_568, call_tmp18, &_str_literal_569, call_tmp20, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl__autoDestroy45(&call_tmp19);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl__autoDestroy45(&call_tmp15);
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(_iterator, _ln, _fn);
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      this28 = (_iterator)->F0_this;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(this28, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp21 = chpl_get_TaskErrors_nErrors(this28, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_direct_counted_range_iter(INT64(0), *(call_tmp21), &ret_tmp);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp22 = ret_tmp;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      _iterator2 = _getIterator10(&call_tmp22, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      taskInd_this = this25;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      low3 = (_iterator2)->F0_low;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_direct_counted_range_iter_helper(low3, (_iterator2)->F1_count, &ret_tmp2);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp23 = ret_tmp2;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _iterator3 = _getIterator11(&call_tmp23, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator3, _ln, _fn);
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp24 = chpl___LESS_3((_iterator3)->F1_count, INT64(0));
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      if (call_tmp24) /* ZLINE: 3252 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
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
      call_tmp25 = chpl___EQUALS_3((_iterator3)->F1_count, INT64(0));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      if (call_tmp25) /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator3, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp26 = chpl___HYPHEN_5(((uint64_t)((_iterator3)->F0_low)));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        T2 = chpl___COLON_6(call_tmp26, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      } else /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator3, _ln, _fn);
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp27 = chpl___HYPHEN_6((_iterator3)->F1_count);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator3, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        T2 = chpl___PLUS_3((_iterator3)->F0_low, call_tmp27);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_direct_param_stride_range_iter(low4, T2, &ret_tmp3);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp28 = ret_tmp3;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _iterator4 = _getIterator13(&call_tmp28, _ln, _fn);
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
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl_check_nil(taskInd_this, _ln, _fn);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        _this_tmp_ = chpl_get_TaskErrors_errorsArray(taskInd_this, _ln, _fn);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        coerce_tmp3 = *(_this_tmp_);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        call_tmp29 = this20(coerce_tmp3, i);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        coerce_tmp4 = borrow2(call_tmp29);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        call_tmp30 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(coerce_tmp4)), nil);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        if (call_tmp30) /* ZLINE: 316 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        {
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          chpl_check_nil(taskInd_this, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          _this_tmp_2 = chpl_get_TaskErrors_errorsArray(taskInd_this, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          coerce_tmp5 = *(_this_tmp_2);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          chpl_check_nil(coerce_tmp5, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          this20(coerce_tmp5, i);
#line 232 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          chpl___PLUS__ASSIGN_(&n, INT64(1));
#line 232 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        }
#line 232 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator19(_iterator4, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator20(_iterator3, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      _freeIterator(_iterator2, _ln, _fn);
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      _freeIterator11(_iterator, _ln, _fn);
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    } else /* ZLINE: 233 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 231 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    {
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl___PLUS__ASSIGN_(&n, INT64(1));
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    }
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl___ASSIGN_53(&cur, curnext);
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    while_borrow = chpl_checkBorrowIfVar3(cur);
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    T = _cond_test6(while_borrow, _ln, _fn);
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 242 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 242 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp31 = chpl_get_TaskErrors_nErrors(this24, _ln, _fn);
#line 242 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl___ASSIGN_3(call_tmp31, n);
#line 243 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 243 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp32 = chpl_get_TaskErrors_errorsArray(this24, _ln, _fn);
#line 243 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp33 = ((uint64_t)(n));
#line 243 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  default_arg_alignment = allocate_default_alignment3();
#line 243 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp34 = allocate3(call_tmp33, UINT8(true), default_arg_alignment, _ln, _fn);
#line 243 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl___ASSIGN_77(call_tmp32, call_tmp34);
#line 246 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  idx = INT64(0);
#line 247 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl___ASSIGN_53(&cur, head);
#line 248 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp35 = chpl_checkBorrowIfVar3(cur);
#line 248 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  while_borrow2 = call_tmp35;
#line 248 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  T3 = _cond_test6(call_tmp35, _ln, _fn);
#line 248 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  while (T3) {
#line 248 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    curr2 = while_borrow2;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(while_borrow2, _ln, _fn);
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp36 = chpl_get_Error__next(while_borrow2, _ln, _fn);
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    curnext2 = *(call_tmp36);
#line 250 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(curr2, _ln, _fn);
#line 250 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp37 = chpl_get_Error__next(curr2, _ln, _fn);
#line 250 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl___ASSIGN_48(call_tmp37, nil, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp38 = chpl___COLON_20(curr2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    ifvar_borrow2 = chpl_checkBorrowIfVar5(call_tmp38);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp39 = _cond_test2(ifvar_borrow2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    if (call_tmp39) /* ZLINE: 251 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    {
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      asTaskErr2 = ifvar_borrow2;
#line 252 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      origLoc = here(_ln, _fn);
#line 252 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 252 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp40 = chpl_get_TaskErrors_errorsArray(this24, _ln, _fn);
#line 252 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      EA = *(call_tmp40);
#line 252 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp41 = c_ptrTo5(&idx);
#line 252 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      idxPtr = call_tmp41;
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      _iterator5 = _getIterator4(&asTaskErr2, _ln, _fn);
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(_iterator5, _ln, _fn);
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      this29 = (_iterator5)->F0_this;
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(_iterator5, _ln, _fn);
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      this30 = (_iterator5)->F0_this;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp42 = chpl_nodeID;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp43 = here(_ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp44 = id(&call_tmp43, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp45 = chpl___EQUALS_3(((int64_t)(call_tmp42)), call_tmp44);
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(_iterator5, _ln, _fn);
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      this31 = (_iterator5)->F0_this;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp46 = chpl_nodeID;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp47 = here(_ln, _fn);
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp48 = id(&call_tmp47, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      assert3(call_tmp45, &_str_literal_568, call_tmp46, &_str_literal_569, call_tmp48, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl__autoDestroy45(&call_tmp47);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl__autoDestroy45(&call_tmp43);
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(_iterator5, _ln, _fn);
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      this32 = (_iterator5)->F0_this;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(this32, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp49 = chpl_get_TaskErrors_nErrors(this32, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_direct_counted_range_iter(INT64(0), *(call_tmp49), &ret_tmp4);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp50 = ret_tmp4;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      _iterator6 = _getIterator10(&call_tmp50, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      taskInd_this2 = this29;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(_iterator6, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      low6 = (_iterator6)->F0_low;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(_iterator6, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_direct_counted_range_iter_helper(low6, (_iterator6)->F1_count, &ret_tmp5);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp51 = ret_tmp5;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _iterator7 = _getIterator11(&call_tmp51, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator7, _ln, _fn);
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp52 = chpl___LESS_3((_iterator7)->F1_count, INT64(0));
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      if (call_tmp52) /* ZLINE: 3252 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        boundsCheckHalt(&_str_literal_883, _ln, _fn);
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      }
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator7, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      low7 = (_iterator7)->F0_low;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator7, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp53 = chpl___EQUALS_3((_iterator7)->F1_count, INT64(0));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      if (call_tmp53) /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator7, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp54 = chpl___HYPHEN_5(((uint64_t)((_iterator7)->F0_low)));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        T4 = chpl___COLON_6(call_tmp54, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      } else /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator7, _ln, _fn);
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp55 = chpl___HYPHEN_6((_iterator7)->F1_count);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator7, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        T4 = chpl___PLUS_3((_iterator7)->F0_low, call_tmp55);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_direct_param_stride_range_iter(low7, T4, &ret_tmp6);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp56 = ret_tmp6;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _iterator8 = _getIterator13(&call_tmp56, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      i2 = INT64(0);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator8, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      default_arg_first2 = chpl_checkIfRangeIterWillOverflow_default_first((_iterator8)->F0_low);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator8, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      default_arg_last2 = chpl_checkIfRangeIterWillOverflow_default_last((_iterator8)->F1_high);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator8, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      low8 = (_iterator8)->F0_low;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator8, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_checkIfRangeIterWillOverflow(low8, (_iterator8)->F1_high, INT64(1), default_arg_first2, default_arg_last2, UINT8(true), _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator8, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      high3 = (_iterator8)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      for (chpl_check_nil(_iterator8, _ln, _fn),i2 = (_iterator8)->F0_low; ((i2 <= high3)); i2 += INT64(1)) {
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl_check_nil(taskInd_this2, _ln, _fn);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        _this_tmp_3 = chpl_get_TaskErrors_errorsArray(taskInd_this2, _ln, _fn);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        coerce_tmp6 = *(_this_tmp_3);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl_check_nil(coerce_tmp6, _ln, _fn);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        call_tmp57 = this20(coerce_tmp6, i2);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        coerce_tmp7 = borrow2(call_tmp57);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        call_tmp58 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(coerce_tmp7)), nil);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        if (call_tmp58) /* ZLINE: 316 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        {
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          chpl_check_nil(taskInd_this2, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          _this_tmp_4 = chpl_get_TaskErrors_errorsArray(taskInd_this2, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          coerce_tmp8 = *(_this_tmp_4);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          chpl_check_nil(coerce_tmp8, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          call_tmp59 = this20(coerce_tmp8, i2);
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          _value4(&origLoc, _ln, _fn);
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          chpl_check_nil(idxPtr, _ln, _fn);
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          call_tmp60 = deref3(idxPtr);
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          coerce_tmp9 = *(call_tmp60);
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          chpl_check_nil(EA, _ln, _fn);
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          call_tmp61 = this20(EA, coerce_tmp9);
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          chpl___ASSIGN_64(call_tmp61, call_tmp59, _ln, _fn);
#line 261 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          chpl_check_nil(idxPtr, _ln, _fn);
#line 261 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          call_tmp62 = deref3(idxPtr);
#line 261 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          chpl___PLUS__ASSIGN_(call_tmp62, INT64(1));
#line 261 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        }
#line 261 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator19(_iterator8, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator20(_iterator7, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      _freeIterator(_iterator6, _ln, _fn);
#line 257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      _freeIterator11(_iterator5, _ln, _fn);
#line 263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl__delete11(asTaskErr2, _ln, _fn);
#line 263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl__autoDestroy45(&origLoc);
#line 263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    } else /* ZLINE: 264 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    {
#line 265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      _this_tmp_5 = chpl_get_TaskErrors_errorsArray(this24, _ln, _fn);
#line 265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      coerce_tmp10 = *(_this_tmp_5);
#line 265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(coerce_tmp10, _ln, _fn);
#line 265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp63 = this20(coerce_tmp10, idx);
#line 265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp64 = adopt(curr2);
#line 265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl___ASSIGN_63(call_tmp63, &call_tmp64, _ln, _fn);
#line 265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl__autoDestroy85(&call_tmp64, _ln, _fn);
#line 266 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl___PLUS__ASSIGN_(&idx, INT64(1));
#line 266 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    }
#line 268 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl___ASSIGN_53(&cur, curnext2);
#line 248 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    while_borrow2 = chpl_checkBorrowIfVar3(cur);
#line 248 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    T3 = _cond_test6(while_borrow2, _ln, _fn);
#line 248 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:219 */
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static TaskErrors _new17(chpl_TaskErrors * group,
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                         int64_t _ln,
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                         int32_t _fn) {
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors initTemp = NULL;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr_void cast_tmp = NULL;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors T = NULL;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_TaskErrors_object), INT16(43), _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  initTemp = ((TaskErrors)(cast_tmp));
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_TaskErrors;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init106(initTemp, group, _ln, _fn);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  T = initTemp;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return T;
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:273 */
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void init107(TaskErrors this24,
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    Error err,
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int64_t _ln,
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int32_t _fn) {
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error super_tmp = NULL;
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error call_tmp8 = NULL;
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  uint64_t coerce_tmp2;
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  uint64_t default_arg_alignment;
#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_Error call_tmp9 = NULL;
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref__owned_Error2 call_tmp10 = NULL;
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error _this_tmp_ = NULL;
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error coerce_tmp3 = NULL;
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _owned_Error call_tmp11;
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  super_tmp = &((this24)->super);
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init98(super_tmp, _ln, _fn);
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(((Error)(this24))))->chpl__cid = chpl__cid_Error;
#line 274 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 274 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (this24)->nErrors = INT64(1);
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  coerce_tmp2 = ((uint64_t)(INT64(1)));
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  default_arg_alignment = allocate_default_alignment3();
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = allocate3(coerce_tmp2, UINT8(true), default_arg_alignment, _ln, _fn);
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (this24)->errorsArray = call_tmp8;
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_TaskErrors;
#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(err, _ln, _fn);
#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = chpl_get_Error__next(err, _ln, _fn);
#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl___ASSIGN_48(call_tmp9, nil, _ln, _fn);
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _this_tmp_ = chpl_get_TaskErrors_errorsArray(this24, _ln, _fn);
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  coerce_tmp3 = *(_this_tmp_);
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp10 = this20(coerce_tmp3, INT64(0));
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp11 = adopt(err);
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl___ASSIGN_63(call_tmp10, &call_tmp11, _ln, _fn);
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy85(&call_tmp11, _ln, _fn);
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:273 */
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static TaskErrors _new18(Error err,
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                         int64_t _ln,
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                         int32_t _fn) {
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors initTemp = NULL;
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr_void cast_tmp = NULL;
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors T = NULL;
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_TaskErrors_object), INT16(43), _ln, _fn);
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  initTemp = ((TaskErrors)(cast_tmp));
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_TaskErrors;
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init107(initTemp, err, _ln, _fn);
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  T = initTemp;
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return T;
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:288 */
#line 288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void deinit53(TaskErrors this24,
#line 288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     int64_t _ln,
#line 288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     int32_t _fn) {
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error call_tmp8 = NULL;
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp9;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ic_chpl_direct_counted_range_iter _iterator = NULL;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_chpl_direct_counted_range_iter call_tmp11;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_chpl_direct_counted_range_iter ret_tmp;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_counted_range_iter_helper _iterator2 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper call_tmp12;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper ret_tmp2;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t low3;
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp13;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp14;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp15;
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp16;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator3 = NULL;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp17;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp3;
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
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref__owned_Error2 call_tmp18 = NULL;
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error _this_tmp_ = NULL;
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error coerce_tmp2 = NULL;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error call_tmp19 = NULL;
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_get_TaskErrors_errorsArray(this24, _ln, _fn);
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = _cond_test8(*(call_tmp8));
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (call_tmp9) /* ZLINE: 289 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp10 = chpl_get_TaskErrors_nErrors(this24, _ln, _fn);
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_direct_counted_range_iter(INT64(0), *(call_tmp10), &ret_tmp);
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp11 = ret_tmp;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    _iterator = _getIterator10(&call_tmp11, _ln, _fn);
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(_iterator, _ln, _fn);
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    low3 = (_iterator)->F0_low;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(_iterator, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_direct_counted_range_iter_helper(low3, (_iterator)->F1_count, &ret_tmp2);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp12 = ret_tmp2;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    _iterator2 = _getIterator11(&call_tmp12, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator2, _ln, _fn);
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp13 = chpl___LESS_3((_iterator2)->F1_count, INT64(0));
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    if (call_tmp13) /* ZLINE: 3252 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    {
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      boundsCheckHalt(&_str_literal_883, _ln, _fn);
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    }
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator2, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    low4 = (_iterator2)->F0_low;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator2, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp14 = chpl___EQUALS_3((_iterator2)->F1_count, INT64(0));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    if (call_tmp14) /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp15 = chpl___HYPHEN_5(((uint64_t)((_iterator2)->F0_low)));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      T = chpl___COLON_6(call_tmp15, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    } else /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp16 = chpl___HYPHEN_6((_iterator2)->F1_count);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      T = chpl___PLUS_3((_iterator2)->F0_low, call_tmp16);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_direct_param_stride_range_iter(low4, T, &ret_tmp3);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp17 = ret_tmp3;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    _iterator3 = _getIterator13(&call_tmp17, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    i = INT64(0);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator3, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator3)->F0_low);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator3, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator3)->F1_high);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator3, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    low5 = (_iterator3)->F0_low;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator3, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_checkIfRangeIterWillOverflow(low5, (_iterator3)->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator3, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    high2 = (_iterator3)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    for (chpl_check_nil(_iterator3, _ln, _fn),i = (_iterator3)->F0_low; ((i <= high2)); i += INT64(1)) {
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      _this_tmp_ = chpl_get_TaskErrors_errorsArray(this24, _ln, _fn);
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      coerce_tmp2 = *(_this_tmp_);
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp18 = this20(coerce_tmp2, i);
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl___ASSIGN_66(call_tmp18, nil, _ln, _fn);
#line 291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    _freeIterator19(_iterator3, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    _freeIterator20(_iterator2, _ln, _fn);
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    _freeIterator(_iterator, _ln, _fn);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp19 = chpl_get_TaskErrors_errorsArray(this24, _ln, _fn);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    deallocate(((c_ptr_void)(*(call_tmp19))), _ln, _fn);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__auto_destroy_Error(((Error)(this24)), _ln, _fn);
#line 288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:311 */
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static _ic_these_TaskErrors _getIterator24(_ir_these_TaskErrors * ir,
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                           int64_t _ln,
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                           int32_t _fn) {
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ic_these_TaskErrors _ic_ = NULL;
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr_void cast_tmp = NULL;
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors T = NULL;
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic_these_TaskErrors_object), INT16(42), _ln, _fn);
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ic_ = ((_ic_these_TaskErrors)(cast_tmp));
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic_these_TaskErrors;
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (_ic_)->more = INT64(1);
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  T = (ir)->F0_this;
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (_ic_)->F0_this = T;
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return _ic_;
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:311 */
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void these5(TaskErrors this24,
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   _ir_these_TaskErrors * _retArg) {
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  (_retArg)->F0_this = this24;
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:345 */
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void message6(TaskErrors this24,
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     string * _retArg,
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     int64_t _ln,
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                     int32_t _fn) {
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string ret;
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t n;
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string minMsg;
#line 349 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string maxMsg;
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error first2 = NULL;
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error last = NULL;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ic_these_TaskErrors _iterator = NULL;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_these_TaskErrors call_tmp8;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_these_TaskErrors ret_tmp;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int32_t call_tmp9;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this25 = NULL;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  locale call_tmp10;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t call_tmp11;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp12;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int32_t call_tmp13;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this26 = NULL;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  locale call_tmp14;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t call_tmp15;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ic_chpl_direct_counted_range_iter _iterator2 = NULL;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int64_t call_tmp16 = NULL;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this27 = NULL;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_chpl_direct_counted_range_iter call_tmp17;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_chpl_direct_counted_range_iter ret_tmp2;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors taskInd_this = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_counted_range_iter_helper _iterator3 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper call_tmp18;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper ret_tmp3;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t low3;
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp19;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp20;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp21;
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp22;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator4 = NULL;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp23;
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
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref__owned_Error2 call_tmp24 = NULL;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error _this_tmp_ = NULL;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error coerce_tmp2 = NULL;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp25;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error coerce_tmp3 = NULL;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref__owned_Error2 call_tmp26 = NULL;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error _this_tmp_2 = NULL;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error coerce_tmp4 = NULL;
#line 354 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error call_tmp27 = NULL;
#line 354 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error e = NULL;
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool T2;
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool T3;
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp28;
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string ret_tmp5;
#line 356 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp29;
#line 356 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string ret_tmp6;
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool T4;
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool T5;
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp30;
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string ret_tmp7;
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp31;
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string ret_tmp8;
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ic_these_TaskErrors _iterator5 = NULL;
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_these_TaskErrors call_tmp32;
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_these_TaskErrors ret_tmp9;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int32_t call_tmp33;
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this28 = NULL;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  locale call_tmp34;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t call_tmp35;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp36;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int32_t call_tmp37;
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this29 = NULL;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  locale call_tmp38;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t call_tmp39;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ic_chpl_direct_counted_range_iter _iterator6 = NULL;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int64_t call_tmp40 = NULL;
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this30 = NULL;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_chpl_direct_counted_range_iter call_tmp41;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_chpl_direct_counted_range_iter ret_tmp10;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors taskInd_this2 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_counted_range_iter_helper _iterator7 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper call_tmp42;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper ret_tmp11;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t low6;
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp43;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low7;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T6;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp44;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp45;
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp46;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator8 = NULL;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp47;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp12;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i2;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first2;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last2;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low8;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high3;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref__owned_Error2 call_tmp48 = NULL;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error _this_tmp_3 = NULL;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error coerce_tmp5 = NULL;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp49;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error coerce_tmp6 = NULL;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref__owned_Error2 call_tmp50 = NULL;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error _this_tmp_4 = NULL;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error coerce_tmp7 = NULL;
#line 366 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error call_tmp51 = NULL;
#line 366 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error e2 = NULL;
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp52;
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string ret_tmp13;
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp53;
#line 368 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp54;
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp55;
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ic_these_TaskErrors _iterator9 = NULL;
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_these_TaskErrors call_tmp56;
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_these_TaskErrors ret_tmp14;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int32_t call_tmp57;
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this31 = NULL;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  locale call_tmp58;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t call_tmp59;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp60;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int32_t call_tmp61;
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this32 = NULL;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  locale call_tmp62;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t call_tmp63;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ic_chpl_direct_counted_range_iter _iterator10 = NULL;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int64_t call_tmp64 = NULL;
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors this33 = NULL;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_chpl_direct_counted_range_iter call_tmp65;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ir_chpl_direct_counted_range_iter ret_tmp15;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors taskInd_this3 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_counted_range_iter_helper _iterator11 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper call_tmp66;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper ret_tmp16;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t low9;
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp67;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low10;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T7;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp68;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp69;
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp70;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator12 = NULL;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp71;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp17;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i3;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first3;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last3;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low11;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high4;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref__owned_Error2 call_tmp72 = NULL;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error _this_tmp_5 = NULL;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error coerce_tmp8 = NULL;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp73;
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error coerce_tmp9 = NULL;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref__owned_Error2 call_tmp74 = NULL;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_c_ptr__owned_Error _this_tmp_6 = NULL;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptr__owned_Error coerce_tmp10 = NULL;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error call_tmp75 = NULL;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error e3 = NULL;
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp76;
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string ret_tmp18;
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp77;
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp78;
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string ret2;
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool T8;
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool T9;
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool T10;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error call_tmp79 = NULL;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp80;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp81;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error call_tmp82 = NULL;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp83;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp84;
#line 387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp85;
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp86;
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  n = INT64(0);
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init96(&minMsg, _ln, _fn);
#line 349 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init96(&maxMsg, _ln, _fn);
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  first2 = ((Error)(nil));
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  last = ((Error)(nil));
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  these5(this24, &ret_tmp);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = ret_tmp;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _iterator = _getIterator24(&call_tmp8, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  this25 = (_iterator)->F0_this;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = chpl_nodeID;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp10 = here(_ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp11 = id(&call_tmp10, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp12 = chpl___EQUALS_3(((int64_t)(call_tmp9)), call_tmp11);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  this26 = (_iterator)->F0_this;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp13 = chpl_nodeID;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp14 = here(_ln, _fn);
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp15 = id(&call_tmp14, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  assert3(call_tmp12, &_str_literal_568, call_tmp13, &_str_literal_569, call_tmp15, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy45(&call_tmp14);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy45(&call_tmp10);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  this27 = (_iterator)->F0_this;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this27, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp16 = chpl_get_TaskErrors_nErrors(this27, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_direct_counted_range_iter(INT64(0), *(call_tmp16), &ret_tmp2);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp17 = ret_tmp2;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _iterator2 = _getIterator10(&call_tmp17, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  taskInd_this = (_iterator)->F0_this;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  low3 = (_iterator2)->F0_low;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_counted_range_iter_helper(low3, (_iterator2)->F1_count, &ret_tmp3);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp18 = ret_tmp3;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator3 = _getIterator11(&call_tmp18, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator3, _ln, _fn);
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp19 = chpl___LESS_3((_iterator3)->F1_count, INT64(0));
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp19) /* ZLINE: 3252 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
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
  call_tmp20 = chpl___EQUALS_3((_iterator3)->F1_count, INT64(0));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp20) /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator3, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp21 = chpl___HYPHEN_5(((uint64_t)((_iterator3)->F0_low)));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T = chpl___COLON_6(call_tmp21, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator3, _ln, _fn);
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp22 = chpl___HYPHEN_6((_iterator3)->F1_count);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator3, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T = chpl___PLUS_3((_iterator3)->F0_low, call_tmp22);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_param_stride_range_iter(low4, T, &ret_tmp4);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp23 = ret_tmp4;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator4 = _getIterator13(&call_tmp23, _ln, _fn);
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
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(taskInd_this, _ln, _fn);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    _this_tmp_ = chpl_get_TaskErrors_errorsArray(taskInd_this, _ln, _fn);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    coerce_tmp2 = *(_this_tmp_);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp24 = this20(coerce_tmp2, i);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    coerce_tmp3 = borrow2(call_tmp24);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp25 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(coerce_tmp3)), nil);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    if (call_tmp25) /* ZLINE: 316 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    {
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(taskInd_this, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      _this_tmp_2 = chpl_get_TaskErrors_errorsArray(taskInd_this, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      coerce_tmp4 = *(_this_tmp_2);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp26 = this20(coerce_tmp4, i);
#line 354 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp27 = postfix_EXCLAMATION_37(call_tmp26, _ln, _fn);
#line 354 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      e = call_tmp27;
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      T2 = chpl___EQUALS_23(&minMsg, &_str_literal_77, _ln, _fn);
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      if (T2) /* ZLINE: 355 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      {
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        T3 = UINT8(true);
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      } else /* ZLINE: 355 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      {
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl_check_nil(call_tmp27, _ln, _fn);
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        ((void(*)(Error,
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
           string *,
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
           int64_t,
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
           int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(call_tmp27))->chpl__cid) + INT64(1))])(call_tmp27, &ret_tmp5, _ln, _fn);
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        call_tmp28 = ret_tmp5;
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        T3 = chpl___LESS_6(&call_tmp28, &minMsg, _ln, _fn);
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl__autoDestroy23(&call_tmp28, _ln, _fn);
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      }
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      if (T3) /* ZLINE: 355 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 355 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      {
#line 356 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl_check_nil(e, _ln, _fn);
#line 356 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        ((void(*)(Error,
#line 356 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
           string *,
#line 356 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
           int64_t,
#line 356 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
           int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(e))->chpl__cid) + INT64(1))])(e, &ret_tmp6, _ln, _fn);
#line 356 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        call_tmp29 = ret_tmp6;
#line 356 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl___ASSIGN_71(&minMsg, &call_tmp29, _ln, _fn);
#line 356 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl__autoDestroy23(&call_tmp29, _ln, _fn);
#line 356 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      }
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      T4 = chpl___EQUALS_23(&maxMsg, &_str_literal_77, _ln, _fn);
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      if (T4) /* ZLINE: 357 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      {
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        T5 = UINT8(true);
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      } else /* ZLINE: 357 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      {
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl_check_nil(e, _ln, _fn);
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        ((void(*)(Error,
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
           string *,
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
           int64_t,
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
           int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(e))->chpl__cid) + INT64(1))])(e, &ret_tmp7, _ln, _fn);
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        call_tmp30 = ret_tmp7;
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        T5 = chpl___GREATER_6(&call_tmp30, &maxMsg, _ln, _fn);
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl__autoDestroy23(&call_tmp30, _ln, _fn);
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      }
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      if (T5) /* ZLINE: 357 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      {
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl_check_nil(e, _ln, _fn);
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        ((void(*)(Error,
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
           string *,
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
           int64_t,
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
           int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(e))->chpl__cid) + INT64(1))])(e, &ret_tmp8, _ln, _fn);
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        call_tmp31 = ret_tmp8;
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl___ASSIGN_71(&maxMsg, &call_tmp31, _ln, _fn);
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl__autoDestroy23(&call_tmp31, _ln, _fn);
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      }
#line 360 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl___PLUS__ASSIGN_(&n, INT64(1));
#line 360 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    }
#line 360 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator19(_iterator4, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator20(_iterator3, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _freeIterator(_iterator2, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _freeIterator11(_iterator, _ln, _fn);
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  these5(this24, &ret_tmp9);
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp32 = ret_tmp9;
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _iterator5 = _getIterator24(&call_tmp32, _ln, _fn);
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  this28 = (_iterator5)->F0_this;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp33 = chpl_nodeID;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp34 = here(_ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp35 = id(&call_tmp34, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp36 = chpl___EQUALS_3(((int64_t)(call_tmp33)), call_tmp35);
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  this29 = (_iterator5)->F0_this;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp37 = chpl_nodeID;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp38 = here(_ln, _fn);
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp39 = id(&call_tmp38, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  assert3(call_tmp36, &_str_literal_568, call_tmp37, &_str_literal_569, call_tmp39, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy45(&call_tmp38);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy45(&call_tmp34);
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  this30 = (_iterator5)->F0_this;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(this30, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp40 = chpl_get_TaskErrors_nErrors(this30, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_direct_counted_range_iter(INT64(0), *(call_tmp40), &ret_tmp10);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp41 = ret_tmp10;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _iterator6 = _getIterator10(&call_tmp41, _ln, _fn);
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  taskInd_this2 = (_iterator5)->F0_this;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(_iterator6, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  low6 = (_iterator6)->F0_low;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(_iterator6, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_counted_range_iter_helper(low6, (_iterator6)->F1_count, &ret_tmp11);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp42 = ret_tmp11;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator7 = _getIterator11(&call_tmp42, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator7, _ln, _fn);
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp43 = chpl___LESS_3((_iterator7)->F1_count, INT64(0));
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp43) /* ZLINE: 3252 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    boundsCheckHalt(&_str_literal_883, _ln, _fn);
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator7, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low7 = (_iterator7)->F0_low;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator7, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp44 = chpl___EQUALS_3((_iterator7)->F1_count, INT64(0));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp44) /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator7, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp45 = chpl___HYPHEN_5(((uint64_t)((_iterator7)->F0_low)));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T6 = chpl___COLON_6(call_tmp45, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator7, _ln, _fn);
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp46 = chpl___HYPHEN_6((_iterator7)->F1_count);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator7, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T6 = chpl___PLUS_3((_iterator7)->F0_low, call_tmp46);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_param_stride_range_iter(low7, T6, &ret_tmp12);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp47 = ret_tmp12;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator8 = _getIterator13(&call_tmp47, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i2 = INT64(0);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator8, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_first2 = chpl_checkIfRangeIterWillOverflow_default_first((_iterator8)->F0_low);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator8, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_last2 = chpl_checkIfRangeIterWillOverflow_default_last((_iterator8)->F1_high);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator8, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low8 = (_iterator8)->F0_low;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator8, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_checkIfRangeIterWillOverflow(low8, (_iterator8)->F1_high, INT64(1), default_arg_first2, default_arg_last2, UINT8(true), _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator8, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  high3 = (_iterator8)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (chpl_check_nil(_iterator8, _ln, _fn),i2 = (_iterator8)->F0_low; ((i2 <= high3)); i2 += INT64(1)) {
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(taskInd_this2, _ln, _fn);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    _this_tmp_3 = chpl_get_TaskErrors_errorsArray(taskInd_this2, _ln, _fn);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    coerce_tmp5 = *(_this_tmp_3);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(coerce_tmp5, _ln, _fn);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp48 = this20(coerce_tmp5, i2);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    coerce_tmp6 = borrow2(call_tmp48);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp49 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(coerce_tmp6)), nil);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    if (call_tmp49) /* ZLINE: 316 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    {
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(taskInd_this2, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      _this_tmp_4 = chpl_get_TaskErrors_errorsArray(taskInd_this2, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      coerce_tmp7 = *(_this_tmp_4);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(coerce_tmp7, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp50 = this20(coerce_tmp7, i2);
#line 366 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp51 = postfix_EXCLAMATION_37(call_tmp50, _ln, _fn);
#line 366 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      e2 = call_tmp51;
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(call_tmp51, _ln, _fn);
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      ((void(*)(Error,
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
         string *,
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
         int64_t,
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
         int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(call_tmp51))->chpl__cid) + INT64(1))])(call_tmp51, &ret_tmp13, _ln, _fn);
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp52 = ret_tmp13;
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp53 = chpl___EQUALS_23(&call_tmp52, &minMsg, _ln, _fn);
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      if (call_tmp53) /* ZLINE: 367 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      {
#line 368 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        call_tmp54 = chpl___EQUALS_8(((RootClass)(first2)), nil);
#line 368 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        if (call_tmp54) /* ZLINE: 368 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 368 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        {
#line 369 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          chpl___ASSIGN_19(&first2, e2);
#line 369 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        }
#line 370 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl___ASSIGN_19(&last, e2);
#line 370 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      }
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl__autoDestroy23(&call_tmp52, _ln, _fn);
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    }
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator19(_iterator8, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator20(_iterator7, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _freeIterator(_iterator6, _ln, _fn);
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _freeIterator11(_iterator5, _ln, _fn);
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp55 = chpl___EXCLAMATION__ASSIGN_11(&minMsg, &maxMsg, _ln, _fn);
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (call_tmp55) /* ZLINE: 373 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    these5(this24, &ret_tmp14);
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp56 = ret_tmp14;
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    _iterator9 = _getIterator24(&call_tmp56, _ln, _fn);
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(_iterator9, _ln, _fn);
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    this31 = (_iterator9)->F0_this;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp57 = chpl_nodeID;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp58 = here(_ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp59 = id(&call_tmp58, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp60 = chpl___EQUALS_3(((int64_t)(call_tmp57)), call_tmp59);
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(_iterator9, _ln, _fn);
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    this32 = (_iterator9)->F0_this;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp61 = chpl_nodeID;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp62 = here(_ln, _fn);
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp63 = id(&call_tmp62, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    assert3(call_tmp60, &_str_literal_568, call_tmp61, &_str_literal_569, call_tmp63, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl__autoDestroy45(&call_tmp62);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl__autoDestroy45(&call_tmp58);
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(_iterator9, _ln, _fn);
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    this33 = (_iterator9)->F0_this;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(this33, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp64 = chpl_get_TaskErrors_nErrors(this33, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_direct_counted_range_iter(INT64(0), *(call_tmp64), &ret_tmp15);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp65 = ret_tmp15;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    _iterator10 = _getIterator10(&call_tmp65, _ln, _fn);
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(_iterator9, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    taskInd_this3 = (_iterator9)->F0_this;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(_iterator10, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    low9 = (_iterator10)->F0_low;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(_iterator10, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_direct_counted_range_iter_helper(low9, (_iterator10)->F1_count, &ret_tmp16);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp66 = ret_tmp16;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    _iterator11 = _getIterator11(&call_tmp66, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator11, _ln, _fn);
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp67 = chpl___LESS_3((_iterator11)->F1_count, INT64(0));
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    if (call_tmp67) /* ZLINE: 3252 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    {
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      boundsCheckHalt(&_str_literal_883, _ln, _fn);
#line 3253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    }
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator11, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    low10 = (_iterator11)->F0_low;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator11, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp68 = chpl___EQUALS_3((_iterator11)->F1_count, INT64(0));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    if (call_tmp68) /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator11, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp69 = chpl___HYPHEN_5(((uint64_t)((_iterator11)->F0_low)));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      T7 = chpl___COLON_6(call_tmp69, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    } else /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator11, _ln, _fn);
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp70 = chpl___HYPHEN_6((_iterator11)->F1_count);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl_check_nil(_iterator11, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      T7 = chpl___PLUS_3((_iterator11)->F0_low, call_tmp70);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_direct_param_stride_range_iter(low10, T7, &ret_tmp17);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp71 = ret_tmp17;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    _iterator12 = _getIterator13(&call_tmp71, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    i3 = INT64(0);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator12, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    default_arg_first3 = chpl_checkIfRangeIterWillOverflow_default_first((_iterator12)->F0_low);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator12, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    default_arg_last3 = chpl_checkIfRangeIterWillOverflow_default_last((_iterator12)->F1_high);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator12, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    low11 = (_iterator12)->F0_low;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator12, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_checkIfRangeIterWillOverflow(low11, (_iterator12)->F1_high, INT64(1), default_arg_first3, default_arg_last3, UINT8(true), _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator12, _ln, _fn);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    high4 = (_iterator12)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    for (chpl_check_nil(_iterator12, _ln, _fn),i3 = (_iterator12)->F0_low; ((i3 <= high4)); i3 += INT64(1)) {
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(taskInd_this3, _ln, _fn);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      _this_tmp_5 = chpl_get_TaskErrors_errorsArray(taskInd_this3, _ln, _fn);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      coerce_tmp8 = *(_this_tmp_5);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl_check_nil(coerce_tmp8, _ln, _fn);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp72 = this20(coerce_tmp8, i3);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      coerce_tmp9 = borrow2(call_tmp72);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp73 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(coerce_tmp9)), nil);
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      if (call_tmp73) /* ZLINE: 316 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 316 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      {
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl_check_nil(taskInd_this3, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        _this_tmp_6 = chpl_get_TaskErrors_errorsArray(taskInd_this3, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        coerce_tmp10 = *(_this_tmp_6);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl_check_nil(coerce_tmp10, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        call_tmp74 = this20(coerce_tmp10, i3);
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        call_tmp75 = postfix_EXCLAMATION_37(call_tmp74, _ln, _fn);
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        e3 = call_tmp75;
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl_check_nil(call_tmp75, _ln, _fn);
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        ((void(*)(Error,
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
           string *,
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
           int64_t,
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
           int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(call_tmp75))->chpl__cid) + INT64(1))])(call_tmp75, &ret_tmp18, _ln, _fn);
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        call_tmp76 = ret_tmp18;
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        call_tmp77 = chpl___EQUALS_23(&call_tmp76, &maxMsg, _ln, _fn);
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        if (call_tmp77) /* ZLINE: 376 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        {
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
          chpl___ASSIGN_19(&last, e3);
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        }
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
        chpl__autoDestroy23(&call_tmp76, _ln, _fn);
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      }
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    _freeIterator19(_iterator12, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    _freeIterator20(_iterator11, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    _freeIterator(_iterator10, _ln, _fn);
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    _freeIterator11(_iterator9, _ln, _fn);
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp78 = chpl___COLON_48(n, _ln, _fn);
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ret2 = chpl___PLUS_9(&call_tmp78, &_str_literal_572, _ln, _fn);
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp78, _ln, _fn);
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  T8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(first2)), nil);
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (T8) /* ZLINE: 385 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    T9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(last)), nil);
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  } else /* ZLINE: 385 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    T9 = UINT8(false);
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (T9) /* ZLINE: 385 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    T10 = chpl___EXCLAMATION__ASSIGN_5(((RootClass)(first2)), ((RootClass)(last)));
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  } else /* ZLINE: 385 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    T10 = UINT8(false);
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (T10) /* ZLINE: 385 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp79 = postfix_EXCLAMATION_18(first2, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp80 = chpl_describe_error(call_tmp79, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp81 = chpl___PLUS_9(&call_tmp80, &_str_literal_573, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp82 = postfix_EXCLAMATION_18(last, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp83 = chpl_describe_error(call_tmp82, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp84 = chpl___PLUS_9(&call_tmp81, &call_tmp83, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl___PLUS__ASSIGN_3(&ret2, &call_tmp84, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl__autoDestroy23(&call_tmp84, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl__autoDestroy23(&call_tmp83, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl__autoDestroy23(&call_tmp81, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl__autoDestroy23(&call_tmp80, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  } else /* ZLINE: 385 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp85 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(first2)), nil);
#line 387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    if (call_tmp85) /* ZLINE: 387 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    {
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      call_tmp86 = chpl_describe_error(first2, _ln, _fn);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl___PLUS__ASSIGN_3(&ret2, &call_tmp86, _ln, _fn);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
      chpl__autoDestroy23(&call_tmp86, _ln, _fn);
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    }
#line 388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ret = ret2;
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&maxMsg, _ln, _fn);
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&minMsg, _ln, _fn);
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  *(_retArg) = ret;
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:423 */
#line 423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static string chpl_error_type_name(Error err,
#line 423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                   int64_t _ln,
#line 423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                   int32_t _fn) {
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string nameS;
#line 427 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error error = NULL;
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp8 = NULL;
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp9;
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t default_arg_length;
#line 424 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(err, _ln, _fn);
#line 427 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  error = NULL;
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = ((c_ptrConst_int8_t)(chpl_classNames[((RootClass)(err))->chpl__cid]));
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  default_arg_length = createCopyingBuffer_default_length(call_tmp8, &error, _ln, _fn);
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (error != nil) /* ZLINE: 428 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    goto handler;
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = createCopyingBuffer(call_tmp8, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (error != nil) /* ZLINE: 428 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    goto handler;
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  nameS = call_tmp9;
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  handler:;
#line 427 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (error != nil) /* ZLINE: 427 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 427 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 427 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 427 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return nameS;
#line 423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 432 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:432 */
#line 432 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static string chpl_describe_error(Error err,
#line 432 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                  int64_t _ln,
#line 432 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                  int32_t _fn) {
#line 433 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string nameS;
#line 435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp9;
#line 435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string ret_tmp;
#line 435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp10;
#line 433 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  nameS = chpl_error_type_name(err, _ln, _fn);
#line 435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl___PLUS_9(&nameS, &_str_literal_575, _ln, _fn);
#line 435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(err, _ln, _fn);
#line 435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ((void(*)(Error,
#line 435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
     string *,
#line 435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
     int64_t,
#line 435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
     int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(err))->chpl__cid) + INT64(1))])(err, &ret_tmp, _ln, _fn);
#line 435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = ret_tmp;
#line 435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp10 = chpl___PLUS_9(&call_tmp8, &call_tmp9, _ln, _fn);
#line 435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 437 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&nameS, _ln, _fn);
#line 432 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return call_tmp10;
#line 432 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:442 */
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static Error chpl_do_fix_thrown_error(Error err,
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                      int64_t _ln,
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                      int32_t _fn) {
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error fixErr = NULL;
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp8;
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  NilThrownError new_temp = NULL;
#line 448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t call_tmp9;
#line 449 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int32_t call_tmp10;
#line 455 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error call_tmp11 = NULL;
#line 455 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_chpl_bool call_tmp12 = NULL;
#line 455 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp13;
#line 456 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error call_tmp14 = NULL;
#line 456 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_chpl_bool call_tmp15 = NULL;
#line 457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error call_tmp16 = NULL;
#line 457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int64_t call_tmp17 = NULL;
#line 458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error call_tmp18 = NULL;
#line 458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int32_t call_tmp19 = NULL;
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error call_tmp20 = NULL;
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  fixErr = err;
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(err)), nil);
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (call_tmp8) /* ZLINE: 445 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    new_temp = _new12(_ln, _fn);
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl___ASSIGN_47(&fixErr, new_temp, _ln, _fn);
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 448 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = _ln;
#line 449 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp10 = _fn;
#line 455 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp11 = postfix_EXCLAMATION_3(fixErr, _ln, _fn);
#line 455 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(call_tmp11, _ln, _fn);
#line 455 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp12 = chpl_get_Error__hasThrowInfo(call_tmp11, _ln, _fn);
#line 455 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp13 = chpl___EXCLAMATION_(*(call_tmp12));
#line 455 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (call_tmp13) /* ZLINE: 455 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 455 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 456 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp14 = postfix_EXCLAMATION_3(fixErr, _ln, _fn);
#line 456 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(call_tmp14, _ln, _fn);
#line 456 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp15 = chpl_get_Error__hasThrowInfo(call_tmp14, _ln, _fn);
#line 456 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl___ASSIGN_(call_tmp15, UINT8(true));
#line 457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp16 = postfix_EXCLAMATION_3(fixErr, _ln, _fn);
#line 457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(call_tmp16, _ln, _fn);
#line 457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp17 = chpl_get_Error_thrownLine(call_tmp16, _ln, _fn);
#line 457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl___ASSIGN_3(call_tmp17, call_tmp9);
#line 458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp18 = postfix_EXCLAMATION_3(fixErr, _ln, _fn);
#line 458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_check_nil(call_tmp18, _ln, _fn);
#line 458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp19 = chpl_get_Error_thrownFileId(call_tmp18, _ln, _fn);
#line 458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl___ASSIGN_2(call_tmp19, call_tmp10);
#line 458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp20 = _to_nonnil14(fixErr);
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return call_tmp20;
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:475 */
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static Error chpl_fix_thrown_error(_owned_Error * err,
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                   int64_t _ln,
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                   int32_t _fn) {
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _owned_Error _formal_tmp_err;
#line 476 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error call_tmp8 = NULL;
#line 476 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error call_tmp9 = NULL;
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _formal_tmp_err = *(err);
#line 476 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = release6(&_formal_tmp_err, _ln, _fn);
#line 476 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = chpl_do_fix_thrown_error(call_tmp8, _ln, _fn);
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy85(&_formal_tmp_err, _ln, _fn);
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return call_tmp9;
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:506 */
#line 506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void chpl_delete_error(Error err,
#line 506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                              int64_t _ln,
#line 506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                              int32_t _fn) {
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp8;
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(err)), nil);
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (call_tmp8) /* ZLINE: 507 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl__delete12(err, _ln, _fn);
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:512 */
#line 512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void chpl_uncaught_error(Error err,
#line 512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                int64_t _ln,
#line 512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                int32_t _fn) {
#line 517 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string myFileS;
#line 518 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error error = NULL;
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp8 = NULL;
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp9;
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t default_arg_length;
#line 521 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t call_tmp10;
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int32_t call_tmp11 = NULL;
#line 525 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string thrownFileS;
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error error2 = NULL;
#line 527 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp12 = NULL;
#line 527 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp13;
#line 527 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t default_arg_length2;
#line 529 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _ref_int64_t call_tmp14 = NULL;
#line 529 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error coerce_tmp2 = NULL;
#line 529 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  int64_t coerce_tmp3;
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp15;
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp16;
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp17;
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp18;
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp19;
#line 532 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp20;
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp21;
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp22;
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp23;
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp24;
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp25;
#line 533 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp26;
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp27;
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string s;
#line 534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp28 = NULL;
#line 518 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  error = NULL;
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = ((c_ptrConst_int8_t)(chpl_lookupFilename(_fn)));
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  default_arg_length = createCopyingBuffer_default_length(call_tmp8, &error, _ln, _fn);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (error != nil) /* ZLINE: 519 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    goto handler;
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = createCopyingBuffer(call_tmp8, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (error != nil) /* ZLINE: 519 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    goto handler;
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  myFileS = call_tmp9;
#line 519 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  handler:;
#line 518 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (error != nil) /* ZLINE: 518 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 518 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 518 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 518 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 521 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp10 = _ln;
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(err, _ln, _fn);
#line 524 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp11 = chpl_get_Error_thrownFileId(err, _ln, _fn);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  error2 = NULL;
#line 527 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp12 = ((c_ptrConst_int8_t)(chpl_lookupFilename(*(call_tmp11))));
#line 527 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  default_arg_length2 = createCopyingBuffer_default_length(call_tmp12, &error2, _ln, _fn);
#line 527 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (error2 != nil) /* ZLINE: 527 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 527 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 527 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    goto handler2;
#line 527 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 527 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp13 = createCopyingBuffer(call_tmp12, default_arg_length2, decodePolicy_strict, &error2, _ln, _fn);
#line 527 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (error2 != nil) /* ZLINE: 527 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 527 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 527 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    goto handler2;
#line 527 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 527 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  thrownFileS = call_tmp13;
#line 527 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  handler2:;
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (error2 != nil) /* ZLINE: 526 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_uncaught_error(error2, _ln, _fn);
#line 526 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 529 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  coerce_tmp2 = err;
#line 529 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 529 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp14 = chpl_get_Error_thrownLine(coerce_tmp2, _ln, _fn);
#line 529 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  coerce_tmp3 = *(call_tmp14);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp15 = chpl_describe_error(err, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp16 = chpl___PLUS_9(&_str_literal_584, &call_tmp15, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp17 = chpl___PLUS_9(&call_tmp16, &_str_literal_585, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp18 = chpl___PLUS_9(&call_tmp17, &thrownFileS, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp19 = chpl___PLUS_9(&call_tmp18, &_str_literal_586, _ln, _fn);
#line 532 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp20 = chpl___COLON_48(coerce_tmp3, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp21 = chpl___PLUS_9(&call_tmp19, &call_tmp20, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp22 = chpl___PLUS_9(&call_tmp21, &_str_literal_587, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp23 = chpl___PLUS_9(&call_tmp22, &_str_literal_585, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp24 = chpl___PLUS_9(&call_tmp23, &myFileS, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp25 = chpl___PLUS_9(&call_tmp24, &_str_literal_586, _ln, _fn);
#line 533 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp26 = chpl___COLON_48(call_tmp10, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp27 = chpl___PLUS_9(&call_tmp25, &call_tmp26, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  s = chpl___PLUS_9(&call_tmp27, &_str_literal_588, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp27, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp26, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp25, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp24, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp23, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp22, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp21, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp20, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp19, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp18, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp17, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp15, _ln, _fn);
#line 534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp28 = c_str(&s, _ln, _fn);
#line 534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_error_preformatted(call_tmp28);
#line 512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&s, _ln, _fn);
#line 512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&thrownFileS, _ln, _fn);
#line 512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&myFileS, _ln, _fn);
#line 512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 541 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:541 */
#line 541 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void chpl_propagate_error(Error err,
#line 541 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                 int64_t _ln,
#line 541 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                 int32_t _fn) {
#line 542 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_uncaught_error(err, _ln, _fn);
#line 541 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 541 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:548 */
#line 548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static Error chpl_forall_error(Error err,
#line 548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                               int64_t _ln,
#line 548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                               int32_t _fn) {
#line 548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error ret = NULL;
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors call_tmp8 = NULL;
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp9;
#line 552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  TaskErrors new_temp = NULL;
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl___COLON_20(err, _ln, _fn);
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = _cond_test2(call_tmp8, _ln, _fn);
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (call_tmp9) /* ZLINE: 549 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    ret = err;
#line 550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    goto _end_chpl_forall_error;
#line 550 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  new_temp = _new18(err, _ln, _fn);
#line 552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  ret = ((Error)(new_temp));
#line 552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _end_chpl_forall_error:;
#line 548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return ret;
#line 548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:568 */
#line 568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void chpl_enum_cast_error(uint8_t casted,
#line 568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                 string * enumName,
#line 568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                 Error * error_out,
#line 568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                 int64_t _ln,
#line 568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                                 int32_t _fn) {
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp9;
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp10;
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp11;
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp12;
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _owned_IllegalArgumentError call_tmp13;
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  IllegalArgumentError new_temp = NULL;
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _owned_IllegalArgumentError initTemp;
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  Error call_tmp14 = NULL;
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _owned_Error _formal_tmp_in_err;
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl___COLON_47(casted, _ln, _fn);
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = chpl___PLUS_9(&_str_literal_591, &call_tmp8, _ln, _fn);
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp10 = chpl___PLUS_9(&call_tmp9, &_str_literal_590, _ln, _fn);
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp11 = chpl___PLUS_9(&call_tmp10, enumName, _ln, _fn);
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp12 = chpl___PLUS_9(&call_tmp11, &_str_literal_37, _ln, _fn);
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  new_temp = _new15(&call_tmp12, _ln, _fn);
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  init75(&initTemp, new_temp);
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp13 = initTemp;
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  _formal_tmp_in_err = chpl___COLON_35(&call_tmp13, _ln, _fn);
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp14 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  *(error_out) = call_tmp14;
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp10, _ln, _fn);
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:605 */
#line 605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void assert2(chpl_bool test,
#line 605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int64_t _ln,
#line 605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int32_t _fn) {
#line 606 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp8;
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 606 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl___EXCLAMATION_(test);
#line 606 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (call_tmp8) /* ZLINE: 606 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 606 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp9 = c_str(&_str_literal_596, _ln, _fn);
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_error(call_tmp9, _ln, _fn);
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:626 */
#line 626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void assert3(chpl_bool test,
#line 626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    string * _e0_args,
#line 626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int32_t _e1_args,
#line 626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    string * _e2_args,
#line 626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int64_t _e3_args,
#line 626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int64_t _ln,
#line 626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                    int32_t _fn) {
#line 627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_bool call_tmp8;
#line 628 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp9;
#line 628 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string tmpstring;
#line 629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp10 = NULL;
#line 627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl___EXCLAMATION_(test);
#line 627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  if (call_tmp8) /* ZLINE: 627 /Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl */
#line 627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  {
#line 628 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp9 = chpl_stringify_wrapper4(_e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
#line 628 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    tmpstring = chpl___PLUS_9(&_str_literal_597, &call_tmp9, _ln, _fn);
#line 628 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    call_tmp10 = c_str(&tmpstring, _ln, _fn);
#line 629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl_error(call_tmp10, _ln, _fn);
#line 629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
    chpl__autoDestroy23(&tmpstring, _ln, _fn);
#line 629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  }
#line 626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 674 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:674 */
#line 674 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void compilerWarning(void) {
#line 674 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 674 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:681 */
#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void compilerAssert(void) {
#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 699 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:699 */
#line 699 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void compilerAssert2(void) {
#line 699 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 699 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 748 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:748 */
#line 748 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void halt(string * msg,
#line 748 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                 int64_t _ln,
#line 748 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                 int32_t _fn) {
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = localize(msg, _ln, _fn);
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = c_str(&call_tmp8, _ln, _fn);
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  halt10(call_tmp9, _ln, _fn);
#line 748 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 748 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 748 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:762 */
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void halt10(c_string_rehook _e0_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int64_t _ln,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int32_t _fn) {
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string tmpstring;
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_stringify_wrapper15(_e0_args, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  tmpstring = chpl___PLUS_9(&_str_literal_599, &call_tmp8, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = c_str(&tmpstring, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_error(call_tmp9, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&tmpstring, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:762 */
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void halt11(string * _e0_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int64_t _e1_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   string * _e2_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int64_t _ln,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int32_t _fn) {
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string tmpstring;
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_stringify_wrapper11(_e0_args, _e1_args, _e2_args, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  tmpstring = chpl___PLUS_9(&_str_literal_599, &call_tmp8, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = c_str(&tmpstring, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_error(call_tmp9, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&tmpstring, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:762 */
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void halt13(string * _e0_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   ArrayInit _e1_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   string * _e2_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int64_t _ln,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int32_t _fn) {
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string tmpstring;
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_stringify_wrapper10(_e0_args, _e1_args, _e2_args, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  tmpstring = chpl___PLUS_9(&_str_literal_599, &call_tmp8, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = c_str(&tmpstring, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_error(call_tmp9, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&tmpstring, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:762 */
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void halt5(string * _e0_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int64_t _e1_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  string * _e2_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int64_t _e3_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  string * _e4_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int64_t _ln,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int32_t _fn) {
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string tmpstring;
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_stringify_wrapper7(_e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  tmpstring = chpl___PLUS_9(&_str_literal_599, &call_tmp8, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = c_str(&tmpstring, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_error(call_tmp9, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&tmpstring, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:762 */
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void halt7(string * _e0_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  string * _e1_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int64_t _e2_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  string * _e3_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  range_int64_t_both_one _e4_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int64_t _ln,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int32_t _fn) {
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string tmpstring;
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_stringify_wrapper5(_e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  tmpstring = chpl___PLUS_9(&_str_literal_599, &call_tmp8, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = c_str(&tmpstring, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_error(call_tmp9, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&tmpstring, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:762 */
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void halt4(string * _e0_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  range_int64_t_both_one _e1_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  string * _e2_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int64_t _e3_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int64_t _ln,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int32_t _fn) {
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string tmpstring;
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_stringify_wrapper6(_e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  tmpstring = chpl___PLUS_9(&_str_literal_599, &call_tmp8, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = c_str(&tmpstring, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_error(call_tmp9, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&tmpstring, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:762 */
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void halt14(string * _e0_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   range_byteIndex_both_one _e1_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   string * _e2_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int64_t _e3_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int64_t _ln,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int32_t _fn) {
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string tmpstring;
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_stringify_wrapper(_e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  tmpstring = chpl___PLUS_9(&_str_literal_599, &call_tmp8, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = c_str(&tmpstring, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_error(call_tmp9, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&tmpstring, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:762 */
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void halt15(string * _e0_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int64_t _e1_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   string * _e2_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int64_t _e3_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int64_t _ln,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int32_t _fn) {
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string tmpstring;
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_stringify_wrapper9(_e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  tmpstring = chpl___PLUS_9(&_str_literal_599, &call_tmp8, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = c_str(&tmpstring, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_error(call_tmp9, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&tmpstring, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:762 */
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void halt6(string * _e0_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  range_int64_t_low_one _e1_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  string * _e2_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int64_t _e3_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int64_t _ln,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int32_t _fn) {
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string tmpstring;
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_stringify_wrapper12(_e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  tmpstring = chpl___PLUS_9(&_str_literal_599, &call_tmp8, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = c_str(&tmpstring, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_error(call_tmp9, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&tmpstring, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:762 */
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void halt8(string * _e0_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  range_byteIndex_low_one _e1_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  string * _e2_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int64_t _e3_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int64_t _ln,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int32_t _fn) {
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string tmpstring;
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_stringify_wrapper13(_e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  tmpstring = chpl___PLUS_9(&_str_literal_599, &call_tmp8, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = c_str(&tmpstring, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_error(call_tmp9, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&tmpstring, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:762 */
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void halt12(string * _e0_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   range_byteIndex_high_one _e1_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   string * _e2_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int64_t _e3_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int64_t _ln,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                   int32_t _fn) {
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string tmpstring;
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_stringify_wrapper2(_e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  tmpstring = chpl___PLUS_9(&_str_literal_599, &call_tmp8, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = c_str(&tmpstring, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_error(call_tmp9, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&tmpstring, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:762 */
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void halt3(string * _e0_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  string * _e1_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  string * _e2_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  string * _e3_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int64_t _ln,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int32_t _fn) {
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string tmpstring;
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_stringify_wrapper14(_e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  tmpstring = chpl___PLUS_9(&_str_literal_599, &call_tmp8, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = c_str(&tmpstring, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_error(call_tmp9, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&tmpstring, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:762 */
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void halt9(string * _e0_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  uint64_t _e1_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int64_t _ln,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int32_t _fn) {
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string tmpstring;
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_stringify_wrapper8(_e0_args, _e1_args, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  tmpstring = chpl___PLUS_9(&_str_literal_599, &call_tmp8, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = c_str(&tmpstring, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_error(call_tmp9, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&tmpstring, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
/* Errors.chpl:762 */
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
static void halt2(string * _e0_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int64_t _e1_args,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int64_t _ln,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
                  int32_t _fn) {
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string call_tmp8;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  string tmpstring;
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp8 = chpl_stringify_wrapper3(_e0_args, _e1_args, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  tmpstring = chpl___PLUS_9(&_str_literal_599, &call_tmp8, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  call_tmp9 = c_str(&tmpstring, _ln, _fn);
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl_error(call_tmp9, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  chpl__autoDestroy23(&tmpstring, _ln, _fn);
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
  return;
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Errors.chpl"
}

