#line 1 "Remote.chpl"
/* Remote.chpl:1 */
#line 1 "Remote.chpl"
static void chpl__init_Remote(int64_t _ln,
#line 1 "Remote.chpl"
                              int32_t _fn) {
#line 1 "Remote.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 1 "Remote.chpl"
  if (chpl__init_Remote_p) /* ZLINE: 1 Remote.chpl */
#line 1 "Remote.chpl"
  {
#line 1 "Remote.chpl"
    goto _exit_chpl__init_Remote;
#line 1 "Remote.chpl"
  }
#line 1 "Remote.chpl"
  printModuleInit("%*s\n", "Remote", INT64(6), INT64(1), INT32(92));
#line 1 "Remote.chpl"
  refIndentLevel = &moduleInitLevel;
#line 1 "Remote.chpl"
  *(refIndentLevel) += INT64(1);
#line 1 "Remote.chpl"
  chpl__init_Remote_p = UINT8(true);
#line 1 "Remote.chpl"
  {
#line 1 "Remote.chpl"
    chpl__init_Debugger(INT64(1), INT32(92));
#line 1 "Remote.chpl"
    chpl__init_OwnedObject(INT64(1), INT32(92));
#line 1 "Remote.chpl"
    chpl__init_ChapelIteratorSupport(INT64(1), INT32(92));
#line 1 "Remote.chpl"
  }
#line 1 "Remote.chpl"
  *(refIndentLevel) -= INT64(1);
#line 1 "Remote.chpl"
  _exit_chpl__init_Remote:;
#line 1 "Remote.chpl"
  return;
#line 1 "Remote.chpl"
}

#line 5 "Remote.chpl"
/* Remote.chpl:5 */
#line 5 "Remote.chpl"
static void init148(chpl___RemoteVarContainer_R this24,
#line 5 "Remote.chpl"
                    R * containedValue,
#line 5 "Remote.chpl"
                    int64_t _ln,
#line 5 "Remote.chpl"
                    int32_t _fn) {
#line 6 "Remote.chpl"
  R _formal_tmp_containedValue;
#line 5 "Remote.chpl"
  RootClass super_tmp = NULL;
#line 6 "Remote.chpl"
  _formal_tmp_containedValue = *(containedValue);
#line 5 "Remote.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 5 "Remote.chpl"
  super_tmp = &((this24)->super);
#line 5 "Remote.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 5 "Remote.chpl"
  init5(super_tmp);
#line 5 "Remote.chpl"
  ((RootClass)(((RootClass)(this24))))->chpl__cid = chpl__cid_RootClass;
#line 6 "Remote.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 6 "Remote.chpl"
  (this24)->containedValue = _formal_tmp_containedValue;
#line 5 "Remote.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_chpl___RemoteVarContainer_R;
#line 5 "Remote.chpl"
  return;
#line 5 "Remote.chpl"
}

#line 5 "Remote.chpl"
/* Remote.chpl:5 */
#line 5 "Remote.chpl"
static void chpl__auto_destroy__RemoteVarContainer(chpl___RemoteVarContainer_R this24,
#line 5 "Remote.chpl"
                                                   int64_t _ln,
#line 5 "Remote.chpl"
                                                   int32_t _fn) {
#line 6 "Remote.chpl"
  _ref_R _field_destructor_tmp_ = NULL;
#line 6 "Remote.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 6 "Remote.chpl"
  _field_destructor_tmp_ = &((this24)->containedValue);
#line 6 "Remote.chpl"
  chpl__auto_destroy_R(_field_destructor_tmp_);
#line 5 "Remote.chpl"
  chpl__auto_destroy_RootClass(((RootClass)(this24)), _ln, _fn);
#line 5 "Remote.chpl"
  return;
#line 5 "Remote.chpl"
}

#line 5 "Remote.chpl"
/* Remote.chpl:5 */
#line 5 "Remote.chpl"
static void _auto__RemoteVarContainer_serialize(chpl___RemoteVarContainer_R this24,
#line 5 "Remote.chpl"
                                                fileWriter_F_defaultSerializer * writer3,
#line 5 "Remote.chpl"
                                                defaultSerializer * serializer2,
#line 5 "Remote.chpl"
                                                Error * error_out,
#line 5 "Remote.chpl"
                                                int64_t _ln,
#line 5 "Remote.chpl"
                                                int32_t _fn) {
#line 1 "<internal>"
  Error error = NULL;
#line 5 "Remote.chpl"
  error = NULL;
#line 5 "Remote.chpl"
  serializeDefaultImpl(writer3, serializer2, this24, &error, _ln, _fn);
#line 5 "Remote.chpl"
  if (error != nil) {
#line 5 "Remote.chpl"
    *(error_out) = error;
#line 5 "Remote.chpl"
    goto _endserialize;
#line 5 "Remote.chpl"
  }
#line 5 "Remote.chpl"
  _endserialize:;
#line 5 "Remote.chpl"
  return;
#line 5 "Remote.chpl"
}

#line 5 "Remote.chpl"
/* Remote.chpl:5 */
#line 5 "Remote.chpl"
static chpl___RemoteVarContainer_R _new40(R * containedValue,
#line 5 "Remote.chpl"
                                          int64_t _ln,
#line 5 "Remote.chpl"
                                          int32_t _fn) {
#line 6 "Remote.chpl"
  R _formal_tmp_containedValue;
#line 5 "Remote.chpl"
  chpl___RemoteVarContainer_R initTemp = NULL;
#line 5 "Remote.chpl"
  c_ptr_void cast_tmp = NULL;
#line 5 "Remote.chpl"
  chpl___RemoteVarContainer_R T = NULL;
#line 6 "Remote.chpl"
  _formal_tmp_containedValue = *(containedValue);
#line 5 "Remote.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___RemoteVarContainer_R_object), INT16(57), _ln, _fn);
#line 5 "Remote.chpl"
  initTemp = ((chpl___RemoteVarContainer_R)(cast_tmp));
#line 5 "Remote.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_chpl___RemoteVarContainer_R;
#line 5 "Remote.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 5 "Remote.chpl"
  init148(initTemp, &_formal_tmp_containedValue, _ln, _fn);
#line 5 "Remote.chpl"
  T = initTemp;
#line 5 "Remote.chpl"
  return T;
#line 5 "Remote.chpl"
}

#line 6 "Remote.chpl"
/* Remote.chpl:6 */
#line 6 "Remote.chpl"
static R * chpl_get__RemoteVarContainer_containedValue(chpl___RemoteVarContainer_R this24,
#line 6 "Remote.chpl"
                                                       int64_t _ln,
#line 6 "Remote.chpl"
                                                       int32_t _fn) {
#line 6 "Remote.chpl"
  _ref_R call_tmp8 = NULL;
#line 6 "Remote.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 6 "Remote.chpl"
  call_tmp8 = &((this24)->containedValue);
#line 6 "Remote.chpl"
  return call_tmp8;
#line 6 "Remote.chpl"
}

#line 25 "Remote.chpl"
/* Remote.chpl:25 */
#line 25 "Remote.chpl"
static void chpl__auto_destroy_Remote(Remote_R this24,
#line 25 "Remote.chpl"
                                      int64_t _ln,
#line 25 "Remote.chpl"
                                      int32_t _fn) {
#line 27 "Remote.chpl"
  _ref__owned__RemoteVarContainer_R _field_destructor_tmp_ = NULL;
#line 27 "Remote.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 27 "Remote.chpl"
  _field_destructor_tmp_ = &((this24)->value);
#line 27 "Remote.chpl"
  deinit40(_field_destructor_tmp_, _ln, _fn);
#line 25 "Remote.chpl"
  chpl__auto_destroy_RootClass(((RootClass)(this24)), _ln, _fn);
#line 25 "Remote.chpl"
  return;
#line 25 "Remote.chpl"
}

#line 25 "Remote.chpl"
/* Remote.chpl:25 */
#line 25 "Remote.chpl"
static void _auto_Remote_serialize(Remote_R this24,
#line 25 "Remote.chpl"
                                   fileWriter_F_defaultSerializer * writer3,
#line 25 "Remote.chpl"
                                   defaultSerializer * serializer2,
#line 25 "Remote.chpl"
                                   Error * error_out,
#line 25 "Remote.chpl"
                                   int64_t _ln,
#line 25 "Remote.chpl"
                                   int32_t _fn) {
#line 1 "<internal>"
  Error error = NULL;
#line 25 "Remote.chpl"
  error = NULL;
#line 25 "Remote.chpl"
  serializeDefaultImpl2(writer3, serializer2, this24, &error, _ln, _fn);
#line 25 "Remote.chpl"
  if (error != nil) {
#line 25 "Remote.chpl"
    *(error_out) = error;
#line 25 "Remote.chpl"
    goto _endserialize;
#line 25 "Remote.chpl"
  }
#line 25 "Remote.chpl"
  _endserialize:;
#line 25 "Remote.chpl"
  return;
#line 25 "Remote.chpl"
}

#line 27 "Remote.chpl"
/* Remote.chpl:27 */
#line 27 "Remote.chpl"
static _owned__RemoteVarContainer_R * chpl_get_Remote_value(Remote_R this24,
#line 27 "Remote.chpl"
                                                            int64_t _ln,
#line 27 "Remote.chpl"
                                                            int32_t _fn) {
#line 27 "Remote.chpl"
  _ref__owned__RemoteVarContainer_R call_tmp8 = NULL;
#line 27 "Remote.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 27 "Remote.chpl"
  call_tmp8 = &((this24)->value);
#line 27 "Remote.chpl"
  return call_tmp8;
#line 27 "Remote.chpl"
}

#line 31 "Remote.chpl"
/* Remote.chpl:31 */
#line 31 "Remote.chpl"
static Remote_R * get2(Remote_R * this24) {
#line 32 "Remote.chpl"
  _ref__owned__RemoteVarContainer_R call_tmp8 = NULL;
#line 32 "Remote.chpl"
  Remote_R coerce_tmp2 = NULL;
#line 32 "Remote.chpl"
  _ref_R call_tmp9 = NULL;
#line 32 "Remote.chpl"
  chpl___RemoteVarContainer_R coerce_tmp3 = NULL;
#line 32 "Remote.chpl"
  coerce_tmp2 = *(this24);
#line 32 "Remote.chpl"
  chpl_check_nil(coerce_tmp2, INT64(32), INT32(92));
#line 32 "Remote.chpl"
  call_tmp8 = chpl_get_Remote_value(coerce_tmp2, INT64(32), INT32(92));
#line 32 "Remote.chpl"
  coerce_tmp3 = borrow3(call_tmp8, INT64(32), INT32(92));
#line 32 "Remote.chpl"
  chpl_check_nil(coerce_tmp3, INT64(32), INT32(92));
#line 32 "Remote.chpl"
  call_tmp9 = chpl_get__RemoteVarContainer_containedValue(coerce_tmp3, INT64(32), INT32(92));
#line 32 "Remote.chpl"
  writeln2(&_str_literal_2563, &_str_literal_3361, &_str_literal_2564, *(this24), &_str_literal_108, call_tmp9, INT64(32), INT32(92));
#line 33 "Remote.chpl"
  breakpoint();
#line 31 "Remote.chpl"
  return this24;
#line 31 "Remote.chpl"
}

#line 52 "Remote.chpl"
/* Remote.chpl:52 */
#line 52 "Remote.chpl"
static void init149(Remote_R this24,
#line 52 "Remote.chpl"
                    _owned__RemoteVarContainer_R * value) {
#line 52 "Remote.chpl"
  _owned__RemoteVarContainer_R _formal_tmp_value;
#line 52 "Remote.chpl"
  RootClass super_tmp = NULL;
#line 53 "Remote.chpl"
  chpl_localeID_t call_tmp8;
#line 53 "Remote.chpl"
  chpl___RemoteVarContainer_R _locale_tmp_ = NULL;
#line 53 "Remote.chpl"
  locale loc;
#line 52 "Remote.chpl"
  chpl___RemoteVarContainer_R coerce_tmp2 = NULL;
#line 55 "Remote.chpl"
  _owned__RemoteVarContainer_R value2;
#line 52 "Remote.chpl"
  _formal_tmp_value = *(value);
#line 52 "Remote.chpl"
  chpl_check_nil(this24, INT64(52), INT32(92));
#line 52 "Remote.chpl"
  super_tmp = &((this24)->super);
#line 52 "Remote.chpl"
  chpl_check_nil(super_tmp, INT64(52), INT32(92));
#line 52 "Remote.chpl"
  init5(super_tmp);
#line 52 "Remote.chpl"
  ((RootClass)(((RootClass)(this24))))->chpl__cid = chpl__cid_RootClass;
#line 53 "Remote.chpl"
  _locale_tmp_ = borrow3(&_formal_tmp_value, INT64(53), INT32(92));
#line 53 "Remote.chpl"
  call_tmp8 = chpl_gen_getLocaleID();
#line 53 "Remote.chpl"
  loc = chpl_localeID_to_locale(&call_tmp8, INT64(53), INT32(92));
#line 52 "Remote.chpl"
  coerce_tmp2 = borrow3(&_formal_tmp_value, INT64(52), INT32(92));
#line 52 "Remote.chpl"
  chpl_check_nil(coerce_tmp2, INT64(52), INT32(92));
#line 52 "Remote.chpl"
  chpl_get__RemoteVarContainer_containedValue(coerce_tmp2, INT64(52), INT32(92));
#line 55 "Remote.chpl"
  value2 = _formal_tmp_value;
#line 55 "Remote.chpl"
  chpl_check_nil(this24, INT64(55), INT32(92));
#line 55 "Remote.chpl"
  (this24)->value = value2;
#line 52 "Remote.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_Remote_R;
#line 52 "Remote.chpl"
  chpl__autoDestroy45(&loc);
#line 52 "Remote.chpl"
  return;
#line 52 "Remote.chpl"
}

#line 52 "Remote.chpl"
/* Remote.chpl:52 */
#line 52 "Remote.chpl"
static Remote_R _new41(_owned__RemoteVarContainer_R * value,
#line 52 "Remote.chpl"
                       int64_t _ln,
#line 52 "Remote.chpl"
                       int32_t _fn) {
#line 52 "Remote.chpl"
  _owned__RemoteVarContainer_R _formal_tmp_value;
#line 52 "Remote.chpl"
  Remote_R initTemp = NULL;
#line 52 "Remote.chpl"
  c_ptr_void cast_tmp = NULL;
#line 52 "Remote.chpl"
  Remote_R T = NULL;
#line 52 "Remote.chpl"
  _formal_tmp_value = *(value);
#line 52 "Remote.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_Remote_R_object), INT16(59), _ln, _fn);
#line 52 "Remote.chpl"
  initTemp = ((Remote_R)(cast_tmp));
#line 52 "Remote.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_Remote_R;
#line 52 "Remote.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 52 "Remote.chpl"
  init149(initTemp, &_formal_tmp_value);
#line 52 "Remote.chpl"
  T = initTemp;
#line 52 "Remote.chpl"
  return T;
#line 52 "Remote.chpl"
}

#line 81 "Remote.chpl"
/* Remote.chpl:81 */
#line 81 "Remote.chpl"
static locale defaultDevice(void) {
#line 82 "Remote.chpl"
  locale T;
#line 82 "Remote.chpl"
  locale call_tmp8;
#line 82 "Remote.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp9 = NULL;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale _chpl_forward_tgt2 = NULL;
#line 82 "Remote.chpl"
  int64_t call_tmp10;
#line 82 "Remote.chpl"
  chpl_bool call_tmp11;
#line 82 "Remote.chpl"
  _ref_locale T2 = NULL;
#line 82 "Remote.chpl"
  locale call_tmp12;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale _chpl_forward_tgt3 = NULL;
#line 82 "Remote.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t _this_tmp_ = NULL;
#line 82 "Remote.chpl"
  call_tmp8 = here(INT64(82), INT32(92));
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _chpl_forward_tgt2 = chpl_forwarding_expr12(&call_tmp8, INT64(92), INT32(42));
#line 82 "Remote.chpl"
  chpl_check_nil(_chpl_forward_tgt2, INT64(82), INT32(92));
#line 82 "Remote.chpl"
  call_tmp9 = gpus(_chpl_forward_tgt2, INT64(82), INT32(92));
#line 82 "Remote.chpl"
  call_tmp10 = size(call_tmp9, INT64(82), INT32(92));
#line 82 "Remote.chpl"
  call_tmp11 = chpl___GREATER__ASSIGN_6(call_tmp10);
#line 82 "Remote.chpl"
  if (call_tmp11) /* ZLINE: 82 Remote.chpl */
#line 82 "Remote.chpl"
  {
#line 82 "Remote.chpl"
    call_tmp12 = here(INT64(82), INT32(92));
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    _chpl_forward_tgt3 = chpl_forwarding_expr12(&call_tmp12, INT64(92), INT32(42));
#line 82 "Remote.chpl"
    chpl_check_nil(_chpl_forward_tgt3, INT64(82), INT32(92));
#line 82 "Remote.chpl"
    _this_tmp_ = gpus(_chpl_forward_tgt3, INT64(82), INT32(92));
#line 82 "Remote.chpl"
    T2 = this5(_this_tmp_, INT64(0), INT64(82), INT32(92));
#line 82 "Remote.chpl"
    T = chpl__autoCopy(T2, UINT8(false));
#line 82 "Remote.chpl"
    chpl__autoDestroy45(&call_tmp12);
#line 82 "Remote.chpl"
  } else /* ZLINE: 82 Remote.chpl */
#line 82 "Remote.chpl"
  {
#line 82 "Remote.chpl"
    T = here(INT64(82), INT32(92));
#line 82 "Remote.chpl"
  }
#line 81 "Remote.chpl"
  chpl__autoDestroy45(&call_tmp8);
#line 81 "Remote.chpl"
  return T;
#line 81 "Remote.chpl"
}

#line 103 "Remote.chpl"
/* Remote.chpl:103 */
#line 103 "Remote.chpl"
static _owned_Remote_R chpl__buildRemoteWrapper(locale * loc,
#line 103 "Remote.chpl"
                                                _tr_chpl__thunk2 * tr,
#line 103 "Remote.chpl"
                                                int64_t _ln,
#line 103 "Remote.chpl"
                                                int32_t _fn) {
#line 103 "Remote.chpl"
  _tr_chpl__thunk2 _formal_tmp_tr;
#line 103 "Remote.chpl"
  _owned_Remote_R ret;
#line 106 "Remote.chpl"
  _owned__RemoteVarContainer_R2 c;
#line 108 "Remote.chpl"
  R call_tmp8;
#line 109 "Remote.chpl"
  _owned__RemoteVarContainer_R call_tmp9;
#line 109 "Remote.chpl"
  chpl___RemoteVarContainer_R new_temp = NULL;
#line 109 "Remote.chpl"
  R _formal_tmp_in_containedValue;
#line 109 "Remote.chpl"
  _owned__RemoteVarContainer_R initTemp;
#line 111 "Remote.chpl"
  _owned__RemoteVarContainer_R call_tmp10;
#line 111 "Remote.chpl"
  _owned__RemoteVarContainer_R2 _formal_tmp_in_x;
#line 111 "Remote.chpl"
  Error error = NULL;
#line 111 "Remote.chpl"
  Remote_R new_temp2 = NULL;
#line 111 "Remote.chpl"
  _owned_Remote_R initTemp2;
#line 103 "Remote.chpl"
  _formal_tmp_tr = *(tr);
#line 105 "Remote.chpl"
  compilerWarning();
#line 106 "Remote.chpl"
  init60(&c, _ln, _fn);
#line 107 "Remote.chpl"
  _value4(loc, _ln, _fn);
#line 108 "Remote.chpl"
  call_tmp8 = invoke(&_formal_tmp_tr);
#line 109 "Remote.chpl"
  _formal_tmp_in_containedValue = call_tmp8;
#line 109 "Remote.chpl"
  new_temp = _new40(&_formal_tmp_in_containedValue, _ln, _fn);
#line 109 "Remote.chpl"
  init69(&initTemp, new_temp);
#line 109 "Remote.chpl"
  call_tmp9 = initTemp;
#line 109 "Remote.chpl"
  chpl___ASSIGN_65(&c, &call_tmp9, _ln, _fn);
#line 109 "Remote.chpl"
  chpl__autoDestroy88(&call_tmp9, _ln, _fn);
#line 111 "Remote.chpl"
  _formal_tmp_in_x = c;
#line 111 "Remote.chpl"
  error = NULL;
#line 111 "Remote.chpl"
  call_tmp10 = chpl___COLON_39(&_formal_tmp_in_x, &error, _ln, _fn);
#line 111 "Remote.chpl"
  if (error != nil) /* ZLINE: 111 Remote.chpl */
#line 111 "Remote.chpl"
  {
#line 111 "Remote.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 111 "Remote.chpl"
  }
#line 111 "Remote.chpl"
  new_temp2 = _new41(&call_tmp10, _ln, _fn);
#line 111 "Remote.chpl"
  init64(&initTemp2, new_temp2);
#line 111 "Remote.chpl"
  ret = initTemp2;
#line 111 "Remote.chpl"
  chpl__autoDestroy30(&_formal_tmp_tr);
#line 103 "Remote.chpl"
  return ret;
#line 103 "Remote.chpl"
}

