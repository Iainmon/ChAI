#line 1 "<internal>"
/* <internal>:0 */
static chpl_bool chpl___EQUALS_19(locale * _arg1,
                                  locale * _arg2,
                                  int64_t _ln,
                                  int32_t _fn) {
#line 1 "<internal>"
  chpl_bool ret;
#line 1 "<internal>"
  _ref_BaseLocale call_tmp8 = NULL;
#line 1 "<internal>"
  _ref_BaseLocale call_tmp9 = NULL;
#line 1 "<internal>"
  chpl_bool call_tmp10;
  call_tmp8 = chpl_get_locale__instance(_arg1);
  call_tmp9 = chpl_get_locale__instance(_arg2);
  call_tmp10 = chpl_field_neq(*(call_tmp8), *(call_tmp9), _ln, _fn);
  if (call_tmp10) {
    ret = UINT8(false);
    goto _end__EQUALS_;
  }
  ret = UINT8(true);
  _end__EQUALS_:;
  return ret;
}

#line 1 "<internal>"
/* <internal>:0 */
static chpl_bool chpl___EXCLAMATION__ASSIGN_9(locale * _arg1,
                                              locale * _arg2,
                                              int64_t _ln,
                                              int32_t _fn) {
#line 1 "<internal>"
  chpl_bool ret;
#line 1 "<internal>"
  _ref_BaseLocale call_tmp8 = NULL;
#line 1 "<internal>"
  _ref_BaseLocale call_tmp9 = NULL;
#line 1 "<internal>"
  chpl_bool call_tmp10;
  call_tmp8 = chpl_get_locale__instance(_arg1);
  call_tmp9 = chpl_get_locale__instance(_arg2);
  call_tmp10 = chpl_field_neq(*(call_tmp8), *(call_tmp9), _ln, _fn);
  if (call_tmp10) {
    ret = UINT8(true);
    goto _end__EXCLAMATION__ASSIGN_;
  }
  ret = UINT8(false);
  _end__EXCLAMATION__ASSIGN_:;
  return ret;
}

#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:27 */
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void chpl__init_ChapelLocale(int64_t _ln,
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                    int32_t _fn) {
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale initTemp;
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale initTemp2;
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale initTemp3;
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  if (chpl__init_ChapelLocale_p) /* ZLINE: 27 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    goto _exit_chpl__init_ChapelLocale;
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  printModuleInit("%*s\n", "ChapelLocale", INT64(12), _ln, _fn);
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  refIndentLevel = &moduleInitLevel;
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  *(refIndentLevel) += INT64(1);
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__init_ChapelLocale_p = UINT8(true);
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl__init_LocaleModel(_ln, _fn);
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl__init_HaltWrappers(_ln, _fn);
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_addModule("ChapelLocale", ((c_fn_ptr_rehook)(deinit15)), _ln, _fn);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  compilerAssert2();
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  init29(&initTemp, _ln, _fn);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  nilLocale = initTemp;
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  init28(&initTemp2, _ln, _fn);
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  defaultLocale = initTemp2;
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  init27(&initTemp3, _ln, _fn);
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  dummyLocale = initTemp3;
#line 528 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  init_ASSIGN_(&rootLocale, &nilLocale);
#line 543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  init_ASSIGN_(&origRootLocale, &nilLocale);
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  *(refIndentLevel) -= INT64(1);
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _exit_chpl__init_ChapelLocale:;
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:86 */
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static BaseLocale * chpl_get_locale__instance(locale * this24) {
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp8 = NULL;
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = &((this24)->_instance);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return call_tmp8;
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:88 */
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static BaseLocale _value4(locale * this24,
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                          int64_t _ln,
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                          int32_t _fn) {
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp8 = NULL;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale call_tmp9 = NULL;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl_get_locale__instance(this24);
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = postfix_EXCLAMATION_10(*(call_tmp8), _ln, _fn);
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return call_tmp9;
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:92 */
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static BaseLocale chpl_forwarding_expr12(locale * this24,
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                         int64_t _ln,
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                         int32_t _fn) {
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale ret = NULL;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  ret = _value4(this24, _ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return ret;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:95 */
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void init24(locale * this24,
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int64_t _ln,
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int32_t _fn) {
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp8 = NULL;
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale init_coerce_tmp = NULL;
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  if (rootLocaleInitialized) /* ZLINE: 96 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp8 = chpl_get_locale__instance(&defaultLocale);
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (this24)->_instance = *(call_tmp8);
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  } else /* ZLINE: 99 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    init_coerce_tmp = ((BaseLocale)(nil));
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (this24)->_instance = init_coerce_tmp;
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:106 */
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void init25(locale * this24,
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   BaseLocale _instance) {
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale call_tmp8 = NULL;
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = _to_unmanaged55(_instance);
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  (this24)->_instance = call_tmp8;
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:106 */
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void init26(locale * this24,
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   BaseLocale _instance) {
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale call_tmp8 = NULL;
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = _to_unmanaged18(_instance);
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  (this24)->_instance = call_tmp8;
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:110 */
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void init29(locale * this24,
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int64_t _ln,
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int32_t _fn) {
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  (this24)->_instance = ((BaseLocale)(nil));
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:110 */
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void init28(locale * this24,
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int64_t _ln,
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int32_t _fn) {
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale init_coerce_tmp = NULL;
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  init_coerce_tmp = ((BaseLocale)(nil));
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  (this24)->_instance = init_coerce_tmp;
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:110 */
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void init27(locale * this24,
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int64_t _ln,
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int32_t _fn) {
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  DummyLocale new_temp = NULL;
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale init_coerce_tmp = NULL;
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  new_temp = _new3(_ln, _fn);
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  init_coerce_tmp = ((BaseLocale)(new_temp));
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  (this24)->_instance = init_coerce_tmp;
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:120 */
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void init_ASSIGN_(locale * this24,
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                         locale * other) {
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp8 = NULL;
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl_get_locale__instance(other);
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  (this24)->_instance = *(call_tmp8);
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:124 */
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void deinit14(locale * this24) {
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:145 */
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static int64_t _getChildCount(locale * this24,
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                              int64_t _ln,
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                              int32_t _fn) {
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale call_tmp8 = NULL;
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t call_tmp9;
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = _value4(this24, _ln, _fn);
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = ((int64_t(*)(BaseLocale,
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                 int64_t,
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                 int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(call_tmp8))->chpl__cid) + INT64(2))])(call_tmp8, _ln, _fn);
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return call_tmp9;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:159 */
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static locale here(int64_t _ln,
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int32_t _fn) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_localeID_t call_tmp8;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale call_tmp9;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = here_id();
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = chpl_localeID_to_locale(&call_tmp8, _ln, _fn);
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return call_tmp9;
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:206 */
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static int64_t id(locale * this24,
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                  int64_t _ln,
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                  int32_t _fn) {
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale call_tmp8 = NULL;
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t call_tmp9;
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = _value4(this24, _ln, _fn);
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = id2(call_tmp8, _ln, _fn);
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return call_tmp9;
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 223 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:223 */
#line 223 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static int64_t maxTaskPar(locale * this24,
#line 223 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                          int64_t _ln,
#line 223 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                          int32_t _fn) {
#line 223 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t ret;
#line 223 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale call_tmp8 = NULL;
#line 223 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 223 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = _value4(this24, _ln, _fn);
#line 223 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 223 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = chpl_get_BaseLocale_maxTaskPar(call_tmp8, _ln, _fn);
#line 223 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  ret = *(call_tmp9);
#line 223 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return ret;
#line 223 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:277 */
#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static int64_t runningTasks(locale * this24,
#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                            int64_t _ln,
#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                            int32_t _fn) {
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t call_tmp8;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale _chpl_forward_tgt2 = NULL;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _chpl_forward_tgt2 = chpl_forwarding_expr12(this24, _ln, _fn);
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(_chpl_forward_tgt2, _ln, _fn);
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = runningTaskCnt(_chpl_forward_tgt2, _ln, _fn);
#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return call_tmp8;
#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:282 */
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void chpl___ASSIGN_58(locale * l1,
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                             locale * l2) {
#line 283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp8 = NULL;
#line 283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp9 = NULL;
#line 283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl_get_locale__instance(l1);
#line 283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = chpl_get_locale__instance(l2);
#line 283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl___ASSIGN_41(call_tmp8, *(call_tmp9));
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:293 */
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void chpl__auto_destroy_BaseLocale(BaseLocale this24,
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                          int64_t _ln,
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                          int32_t _fn) {
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_AtomicT_int64_t _field_destructor_tmp_ = NULL;
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_locale _field_destructor_tmp_2 = NULL;
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _field_destructor_tmp_ = &((this24)->runningTaskCounter);
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  deinit2(_field_destructor_tmp_);
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _field_destructor_tmp_2 = &((this24)->parent);
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  deinit14(_field_destructor_tmp_2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__auto_destroy_RootClass(((RootClass)(this24)), _ln, _fn);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:299 */
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void init30(BaseLocale this24,
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   locale * parent,
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int64_t _ln,
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int32_t _fn) {
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  RootClass super_tmp = NULL;
#line 300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale parent2;
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  AtomicT_int64_t runningTaskCounter;
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  super_tmp = &((this24)->super);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  init5(super_tmp);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  ((RootClass)(((RootClass)(this24))))->chpl__cid = chpl__cid_RootClass;
#line 300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  init_ASSIGN_(&parent2, parent);
#line 300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 300 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  (this24)->parent = parent2;
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  (this24)->nPUsLogAcc = INT64(0);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  (this24)->nPUsLogAll = INT64(0);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  (this24)->nPUsPhysAcc = INT64(0);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  (this24)->nPUsPhysAll = INT64(0);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  (this24)->maxTaskPar = INT64(0);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  init2(&runningTaskCounter);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  (this24)->runningTaskCounter = runningTaskCounter;
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_BaseLocale;
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:312 */
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static int64_t * chpl_get_BaseLocale_nPUsLogAcc(BaseLocale this24,
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                int64_t _ln,
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                int32_t _fn) {
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = &((this24)->nPUsLogAcc);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return call_tmp8;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:313 */
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static int64_t * chpl_get_BaseLocale_nPUsLogAll(BaseLocale this24,
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                int64_t _ln,
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                int32_t _fn) {
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = &((this24)->nPUsLogAll);
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return call_tmp8;
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:314 */
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static int64_t * chpl_get_BaseLocale_nPUsPhysAcc(BaseLocale this24,
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                 int64_t _ln,
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                 int32_t _fn) {
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = &((this24)->nPUsPhysAcc);
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return call_tmp8;
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:315 */
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static int64_t * chpl_get_BaseLocale_nPUsPhysAll(BaseLocale this24,
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                 int64_t _ln,
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                 int32_t _fn) {
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = &((this24)->nPUsPhysAll);
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return call_tmp8;
#line 315 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:323 */
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static int64_t * chpl_get_BaseLocale_maxTaskPar(BaseLocale this24,
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                int64_t _ln,
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                int32_t _fn) {
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = &((this24)->maxTaskPar);
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return call_tmp8;
#line 323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:325 */
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static int64_t id2(BaseLocale this24,
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int64_t _ln,
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int32_t _fn) {
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t ret;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_localeID_t call_tmp8;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int32_t call_tmp9;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl_gen_getLocaleID();
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = chpl_nodeFromLocaleID(call_tmp8, _ln, _fn);
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  ret = ((int64_t)(call_tmp9));
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return ret;
#line 325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:365 */
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static AtomicT_int64_t * chpl_get_BaseLocale_runningTaskCounter(BaseLocale this24,
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                                int64_t _ln,
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                                int32_t _fn) {
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = &((this24)->runningTaskCounter);
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return call_tmp8;
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:368 */
#line 368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void runningTaskCntSet(BaseLocale this24,
#line 368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                              int64_t val,
#line 368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                              int64_t _ln,
#line 368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                              int32_t _fn) {
#line 369 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 369 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 369 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl_get_BaseLocale_runningTaskCounter(this24, _ln, _fn);
#line 369 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  write4(call_tmp8, val, _ln, _fn);
#line 368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 368 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:373 */
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void runningTaskCntAdd(BaseLocale this24,
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                              int64_t val,
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                              int64_t _ln,
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                              int32_t _fn) {
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl_get_BaseLocale_runningTaskCounter(this24, _ln, _fn);
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  add2(call_tmp8, val, _ln, _fn);
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 373 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:378 */
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void runningTaskCntSub(BaseLocale this24,
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                              int64_t val,
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                              int64_t _ln,
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                              int32_t _fn) {
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl_get_BaseLocale_runningTaskCounter(this24, _ln, _fn);
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  sub2(call_tmp8, val, _ln, _fn);
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:383 */
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static int64_t runningTaskCnt(BaseLocale this24,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                              int64_t _ln,
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                              int32_t _fn) {
#line 384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t call_tmp9;
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t T;
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_bool call_tmp10;
#line 384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl_get_BaseLocale_runningTaskCounter(this24, _ln, _fn);
#line 384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = read3(call_tmp8, _ln, _fn);
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp10 = chpl___LESS__ASSIGN_(call_tmp9, INT64(0));
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  if (call_tmp10) /* ZLINE: 385 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    T = INT64(1);
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  } else /* ZLINE: 385 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    T = call_tmp9;
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return T;
#line 383 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:408 */
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static int64_t _getChildCount2(BaseLocale this24,
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                               int64_t _ln,
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                               int32_t _fn) {
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t ret;
#line 409 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  pureVirtualMethodHalt(_ln, _fn);
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return ret;
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:426 */
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void _getChild(BaseLocale this24,
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                      int64_t idx,
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                      locale * _retArg,
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                      int64_t _ln,
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                      int32_t _fn) {
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale ret;
#line 427 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  pureVirtualMethodHalt(_ln, _fn);
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  *(_retArg) = ret;
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:431 */
#line 431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * gpus(BaseLocale this24,
#line 431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                                        int64_t _ln,
#line 431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                                        int32_t _fn) {
#line 432 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp8 = NULL;
#line 432 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 432 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = gpusImpl(this24);
#line 431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return call_tmp8;
#line 431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 436 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:436 */
#line 436 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * gpusImpl(BaseLocale this24) {
#line 436 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t ret = NULL;
#line 437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  ret = &chpl_emptyLocales;
#line 436 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return ret;
#line 436 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:460 */
#line 460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void chpl__auto_destroy_DummyLocale(DummyLocale this24,
#line 460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                           int64_t _ln,
#line 460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                           int32_t _fn) {
#line 460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__auto_destroy_BaseLocale(((BaseLocale)(this24)), _ln, _fn);
#line 460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:461 */
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void init31(DummyLocale this24,
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int64_t _ln,
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int32_t _fn) {
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale local_nilLocale;
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale super_tmp = NULL;
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  local_nilLocale = nilLocale;
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  super_tmp = &((this24)->super);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  init30(super_tmp, &local_nilLocale, _ln, _fn);
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  ((RootClass)(((BaseLocale)(this24))))->chpl__cid = chpl__cid_BaseLocale;
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_DummyLocale;
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:461 */
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static DummyLocale _new3(int64_t _ln,
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                         int32_t _fn) {
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  DummyLocale initTemp = NULL;
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  c_ptr_void cast_tmp = NULL;
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  DummyLocale T = NULL;
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_DummyLocale_object), INT16(7), _ln, _fn);
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  initTemp = ((DummyLocale)(cast_tmp));
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_DummyLocale;
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  init31(initTemp, _ln, _fn);
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  T = initTemp;
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return T;
#line 461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:474 */
#line 474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static int64_t _getChildCount3(DummyLocale this24,
#line 474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                               int64_t _ln,
#line 474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                               int32_t _fn) {
#line 474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return INT64(0);
#line 474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:477 */
#line 477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void _getChild2(DummyLocale this24,
#line 477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                       int64_t idx,
#line 477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                       locale * _retArg,
#line 477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                       int64_t _ln,
#line 477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                       int32_t _fn) {
#line 478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale call_tmp8;
#line 478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale initTemp;
#line 478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  init25(&initTemp, ((BaseLocale)(this24)));
#line 478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = initTemp;
#line 477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  *(_retArg) = call_tmp8;
#line 477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:505 */
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void chpl__auto_destroy_AbstractLocaleModel(AbstractLocaleModel this24,
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                   int64_t _ln,
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                   int32_t _fn) {
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t _field_destructor_tmp_;
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _field_destructor_tmp_ = (this24)->chpl_singletonThisLocaleArray;
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__autoDestroy68(&_field_destructor_tmp_, _ln, _fn);
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__auto_destroy_BaseLocale(((BaseLocale)(this24)), _ln, _fn);
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:507 */
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * chpl_get_AbstractLocaleModel_chpl_singletonThisLocaleArray(AbstractLocaleModel this24,
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                                                                                              int64_t _ln,
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                                                                                              int32_t _fn) {
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp8 = NULL;
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = &((this24)->chpl_singletonThisLocaleArray);
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return call_tmp8;
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:511 */
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void init32(AbstractLocaleModel this24,
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   locale * parent_loc,
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int64_t _ln,
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int32_t _fn) {
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale super_tmp = NULL;
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t chpl_singletonThisLocaleArray;
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_both_one call_tmp8;
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one call_tmp9;
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl___RuntimeTypeInfo2 call_tmp10;
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one _runtime_type_tmp_;
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  super_tmp = &((this24)->super);
#line 512 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 512 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  init30(super_tmp, parent_loc, _ln, _fn);
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  ((RootClass)(((BaseLocale)(this24))))->chpl__cid = chpl__cid_BaseLocale;
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl_build_bounded_range();
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = chpl__ensureDomainExpr2(call_tmp8, _ln, _fn);
#line 507 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp10 = chpl__buildArrayRuntimeType(&call_tmp9);
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _runtime_type_tmp_ = (&call_tmp10)->dom;
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_singletonThisLocaleArray = chpl__convertRuntimeTypeToValue(&_runtime_type_tmp_, UINT8(false), _ln, _fn);
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  (this24)->chpl_singletonThisLocaleArray = chpl_singletonThisLocaleArray;
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_AbstractLocaleModel;
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__autoDestroy67(&call_tmp9, _ln, _fn);
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__autoDestroy59(call_tmp8);
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 511 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:546 */
#line 546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void chpl__auto_destroy_AbstractRootLocale(AbstractRootLocale this24,
#line 546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                  int64_t _ln,
#line 546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                  int32_t _fn) {
#line 546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__auto_destroy_BaseLocale(((BaseLocale)(this24)), _ln, _fn);
#line 546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:549 */
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void init33(AbstractRootLocale this24,
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   locale * parent_loc,
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int64_t _ln,
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                   int32_t _fn) {
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale super_tmp = NULL;
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  super_tmp = &((this24)->super);
#line 550 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 550 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  init30(super_tmp, parent_loc, _ln, _fn);
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  ((RootClass)(((BaseLocale)(this24))))->chpl__cid = chpl__cid_BaseLocale;
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_AbstractRootLocale;
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 567 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:567 */
#line 567 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void localeIDtoLocale(AbstractRootLocale this24,
#line 567 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                             chpl_localeID_t * id3,
#line 567 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                             locale * _retArg,
#line 567 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                             int64_t _ln,
#line 567 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                             int32_t _fn) {
#line 567 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale ret;
#line 568 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  pureVirtualMethodHalt(_ln, _fn);
#line 567 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  *(_retArg) = ret;
#line 567 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 567 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 619 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:619 */
#line 619 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void warmupRuntime(int64_t _ln,
#line 619 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                          int32_t _fn) {
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_both_one tmpIter;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_low_one call_tmp8;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  uint32_t call_tmp9;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount = NULL;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t numTasks;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ic_these_range_int64_t_both_one _iterator = NULL;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_both_one this24;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp10;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_both_one this25;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp11;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp12;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_both_one this26;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp13;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp14;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_both_one this27;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _class_localscoforall_fn5 _args_forcoforall_fn = NULL;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  raw_c_void_ptr _args_vforcoforall_fn;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t _args_sizecoforall_fn;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  Error error = NULL;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__class_localscoforall_fn5_object chpl_macro_tmp_10;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl_build_low_bounded_range(INT64(0));
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = chpl_task_getFixedNumThreads();
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  tmpIter = chpl___POUND_2(call_tmp8, call_tmp9, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _coforallCount = _endCountAlloc2(_ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  numTasks = chpl_boundedCoforallSize(tmpIter, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _upEndCount(_coforallCount, numTasks, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_resetTaskSpawn(numTasks, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _iterator = _getIterator3(&tmpIter, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  this24 = (_iterator)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkIfIterWillOverflow(this24, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  this25 = (_iterator)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = lowBoundForIter(this25);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = chpl__idxToInt(call_tmp10);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  this26 = (_iterator)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = highBoundForIter(this26);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp13 = chpl__idxToInt(call_tmp12);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  end = call_tmp13;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (i = call_tmp11; ((i <= end)); i += INT64(1)) {
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(_iterator, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    this27 = (_iterator)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp14 = chpl_intToIdx3(this27, i);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    _args_forcoforall_fn = ((_class_localscoforall_fn5)(&chpl_macro_tmp_10));
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (_args_forcoforall_fn)->_0_i = call_tmp14;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (_args_forcoforall_fn)->_1__coforallCount = _coforallCount;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    _args_sizecoforall_fn = sizeof(chpl__class_localscoforall_fn5_object);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (_args_forcoforall_fn)->_ln = _ln;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (_args_forcoforall_fn)->_fn = _fn;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    /*** wrapcoforall_fn5 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(4), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), _args_sizecoforall_fn, INT64(621), INT32(42));
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  error = NULL;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _waitEndCount2(_coforallCount, numTasks, &error, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  if (error != nil) /* ZLINE: 621 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _endCountFree(_coforallCount, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _freeIterator17(_iterator, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__autoDestroy59(tmpIter);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__autoDestroy19(call_tmp8);
#line 619 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 619 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:621 */
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void coforall_fn5(int64_t i,
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                         chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                         int64_t _ln,
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                         int32_t _fn) {
#line 622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  c_ptr_int64_t call_tmp8 = NULL;
#line 622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  uint64_t coerce_tmp2;
#line 622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  uint64_t default_arg_alignment;
#line 622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  c_ptr_int64_t p = NULL;
#line 623 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  coerce_tmp2 = ((uint64_t)(INT64(1)));
#line 622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  default_arg_alignment = allocate_default_alignment2();
#line 622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = allocate2(coerce_tmp2, UINT8(false), default_arg_alignment, _ln, _fn);
#line 622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  p = call_tmp8;
#line 623 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 623 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = this22(call_tmp8, INT64(0));
#line 623 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl___ASSIGN_3(call_tmp9, i);
#line 624 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  deallocate(((c_ptr_void)(p)), _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:621 */
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void wrapcoforall_fn5(_class_localscoforall_fn5 c) {
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int32_t _fn;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t _ln;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t _0_i;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _fn = (c)->_fn;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ln = (c)->_ln;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_rmem_consist_acquire(_ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _0_i = (c)->_0_i;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  coforall_fn5(_0_i, (c)->_1__coforallCount, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _downEndCount((c)->_1__coforallCount, nil, _ln, _fn);
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:635 */
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void chpl_init_rootLocale(int64_t _ln,
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                 int32_t _fn) {
#line 636 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_bool T;
#line 636 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_bool T2;
#line 639 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp8 = NULL;
#line 639 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  RootLocale new_temp = NULL;
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp9 = NULL;
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  RootLocale call_tmp10 = NULL;
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  RootLocale call_tmp11 = NULL;
#line 636 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  T = chpl___GREATER_(numLocales, INT64(1));
#line 636 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  if (T) /* ZLINE: 636 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 636 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 636 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    T2 = UINT8(true);
#line 636 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  } else /* ZLINE: 636 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 636 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 636 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    T2 = UINT8(false);
#line 636 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 636 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  if (T2) /* ZLINE: 636 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 636 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 637 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    halt(&_str_literal_1004, _ln, _fn);
#line 637 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 639 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl_get_locale__instance(&origRootLocale);
#line 639 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  new_temp = _new10(_ln, _fn);
#line 639 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl___ASSIGN_43(call_tmp8, new_temp, _ln, _fn);
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = chpl_get_locale__instance(&origRootLocale);
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp10 = chpl___COLON_17(*(call_tmp9), _ln, _fn);
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp11 = postfix_EXCLAMATION_28(call_tmp10, _ln, _fn);
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(call_tmp11, _ln, _fn);
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  setup2(call_tmp11, _ln, _fn);
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:647 */
#line 647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void chpl_rootLocaleInitPrivate(int64_t locIdx,
#line 647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                       int64_t _ln,
#line 647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                       int32_t _fn) {
#line 669 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t local_numLocales;
#line 652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_bool call_tmp8;
#line 654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  RootLocale new_temp = NULL;
#line 654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  RootLocale newRootLocale = NULL;
#line 659 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp9 = NULL;
#line 659 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  RootLocale call_tmp10 = NULL;
#line 659 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  RootLocale call_tmp11 = NULL;
#line 659 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp12 = NULL;
#line 660 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp13 = NULL;
#line 660 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref__ddata_locale call_tmp14 = NULL;
#line 660 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ddata_locale origRL = NULL;
#line 661 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp15 = NULL;
#line 661 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp16 = NULL;
#line 661 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref__ddata_locale call_tmp17 = NULL;
#line 661 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ddata_locale newRL = NULL;
#line 666 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_locale call_tmp18 = NULL;
#line 668 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_locale call_tmp19 = NULL;
#line 671 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp20 = NULL;
#line 673 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_bool call_tmp21;
#line 677 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp22 = NULL;
#line 677 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  RootLocale call_tmp23 = NULL;
#line 677 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  RootLocale call_tmp24 = NULL;
#line 677 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp25 = NULL;
#line 669 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  local_numLocales = numLocales;
#line 651 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl___ASSIGN_58(&rootLocale, &origRootLocale);
#line 652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_2(locIdx, INT64(0));
#line 652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  if (call_tmp8) /* ZLINE: 652 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    new_temp = _new10(_ln, _fn);
#line 654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    newRootLocale = new_temp;
#line 659 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp9 = chpl_get_locale__instance(&origRootLocale);
#line 659 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp10 = chpl___COLON_17(*(call_tmp9), _ln, _fn);
#line 659 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp11 = postfix_EXCLAMATION_28(call_tmp10, _ln, _fn);
#line 659 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(call_tmp11, _ln, _fn);
#line 659 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp12 = getDefaultLocaleArray(call_tmp11, _ln, _fn);
#line 660 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp13 = _value(call_tmp12);
#line 660 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(call_tmp13, _ln, _fn);
#line 660 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp14 = theData3(call_tmp13, _ln, _fn);
#line 660 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    origRL = *(call_tmp14);
#line 661 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(new_temp, _ln, _fn);
#line 661 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp15 = getDefaultLocaleArray(new_temp, _ln, _fn);
#line 661 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp16 = _value(call_tmp15);
#line 661 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(call_tmp16, _ln, _fn);
#line 661 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp17 = theData3(call_tmp16, _ln, _fn);
#line 661 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    newRL = *(call_tmp17);
#line 666 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp18 = (newRL + INT64(0));
#line 668 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp19 = (origRL + INT64(0));
#line 665 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_gen_comm_get(((void*)(call_tmp18)), INT64(0), call_tmp19, (sizeof(locale) * ((uint64_t)(local_numLocales))), COMMID(0), _ln, _fn);
#line 671 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp20 = chpl_get_locale__instance(&rootLocale);
#line 671 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl___ASSIGN_43(call_tmp20, newRootLocale, _ln, _fn);
#line 671 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 673 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp21 = chpl___EXCLAMATION__ASSIGN_2(locIdx, INT64(0));
#line 673 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  if (call_tmp21) /* ZLINE: 673 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 673 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 677 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp22 = chpl_get_locale__instance(&rootLocale);
#line 677 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp23 = chpl___COLON_17(*(call_tmp22), _ln, _fn);
#line 677 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp24 = postfix_EXCLAMATION_28(call_tmp23, _ln, _fn);
#line 677 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(call_tmp24, _ln, _fn);
#line 677 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp25 = getDefaultLocaleArray(call_tmp24, _ln, _fn);
#line 678 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    Locales = call_tmp25;
#line 678 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 680 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl___ASSIGN_(&rootLocaleInitialized, UINT8(true));
#line 647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 683 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:683 */
#line 683 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void chpl_defaultLocaleInitPrivate(int64_t _ln,
#line 683 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                          int32_t _fn) {
#line 685 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp8 = NULL;
#line 685 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  RootLocale call_tmp9 = NULL;
#line 685 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  RootLocale call_tmp10 = NULL;
#line 685 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp11 = NULL;
#line 686 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp12 = NULL;
#line 686 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_locale call_tmp13 = NULL;
#line 686 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp14 = NULL;
#line 685 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl_get_locale__instance(&rootLocale);
#line 685 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = chpl___COLON_17(*(call_tmp8), _ln, _fn);
#line 685 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp10 = postfix_EXCLAMATION_28(call_tmp9, _ln, _fn);
#line 685 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(call_tmp10, _ln, _fn);
#line 685 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp11 = getDefaultLocaleArray(call_tmp10, _ln, _fn);
#line 686 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp12 = chpl_get_locale__instance(&defaultLocale);
#line 686 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp13 = this4(call_tmp11, INT64(0), _ln, _fn);
#line 686 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp14 = chpl_get_locale__instance(call_tmp13);
#line 686 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl___ASSIGN_41(call_tmp12, *(call_tmp14));
#line 683 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 683 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:689 */
#line 689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void chpl_singletonCurrentLocaleInitPrivateSublocs(locale * arg,
#line 689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                          int64_t _ln,
#line 689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                          int32_t _fn) {
#line 690 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ic_chpl_direct_counted_range_iter _iterator = NULL;
#line 690 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t call_tmp8;
#line 690 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ir_chpl_direct_counted_range_iter call_tmp9;
#line 690 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ir_chpl_direct_counted_range_iter ret_tmp;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_counted_range_iter_helper _iterator2 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper call_tmp10;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper ret_tmp2;
#line 690 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t low3;
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp11;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp12;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp13;
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp14;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator3 = NULL;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp15;
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
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale _chpl_forward_tgt2 = NULL;
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale ret_tmp4;
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale subloc;
#line 693 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp16 = NULL;
#line 693 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  AbstractLocaleModel call_tmp17 = NULL;
#line 694 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_bool call_tmp18;
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  AbstractLocaleModel call_tmp19 = NULL;
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_locale call_tmp20 = NULL;
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t _this_tmp_ = NULL;
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp21 = NULL;
#line 690 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = _getChildCount(arg, _ln, _fn);
#line 690 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_direct_counted_range_iter(INT64(0), call_tmp8, &ret_tmp);
#line 690 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = ret_tmp;
#line 690 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _iterator = _getIterator10(&call_tmp9, _ln, _fn);
#line 690 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 690 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  low3 = (_iterator)->F0_low;
#line 690 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_counted_range_iter_helper(low3, (_iterator)->F1_count, &ret_tmp2);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = ret_tmp2;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator2 = _getIterator11(&call_tmp10, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = chpl___LESS_3((_iterator2)->F1_count, INT64(0));
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp11) /* ZLINE: 3252 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
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
  call_tmp12 = chpl___EQUALS_3((_iterator2)->F1_count, INT64(0));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp12) /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator2, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp13 = chpl___HYPHEN_5(((uint64_t)((_iterator2)->F0_low)));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T = chpl___COLON_6(call_tmp13, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator2, _ln, _fn);
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp14 = chpl___HYPHEN_6((_iterator2)->F1_count);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(_iterator2, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T = chpl___PLUS_3((_iterator2)->F0_low, call_tmp14);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_param_stride_range_iter(low4, T, &ret_tmp3);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp15 = ret_tmp3;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator3 = _getIterator13(&call_tmp15, _ln, _fn);
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
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    _chpl_forward_tgt2 = chpl_forwarding_expr12(arg, _ln, _fn);
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(_chpl_forward_tgt2, _ln, _fn);
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    ((void(*)(BaseLocale,
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
       int64_t,
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
       locale *,
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
       int64_t,
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(_chpl_forward_tgt2))->chpl__cid) + INT64(1))])(_chpl_forward_tgt2, i, &ret_tmp4, _ln, _fn);
#line 691 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    subloc = ret_tmp4;
#line 693 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp16 = chpl_get_locale__instance(&subloc);
#line 693 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp17 = chpl___COLON_18(*(call_tmp16), _ln, _fn);
#line 694 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp18 = chpl___EQUALS_8(((RootClass)(call_tmp17)), nil);
#line 694 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    if (call_tmp18) /* ZLINE: 694 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 694 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    {
#line 695 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
      halt(&_str_literal_1008, _ln, _fn);
#line 695 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    }
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp19 = postfix_EXCLAMATION_(call_tmp17, _ln, _fn);
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(call_tmp19, _ln, _fn);
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    _this_tmp_ = chpl_get_AbstractLocaleModel_chpl_singletonThisLocaleArray(call_tmp19, _ln, _fn);
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp20 = this4(_this_tmp_, INT64(0), _ln, _fn);
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp21 = chpl_get_locale__instance(call_tmp20);
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl___ASSIGN_42(call_tmp21, call_tmp17, _ln, _fn);
#line 699 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_singletonCurrentLocaleInitPrivateSublocs(&subloc, _ln, _fn);
#line 699 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl__autoDestroy45(&subloc);
#line 699 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator19(_iterator3, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator20(_iterator2, _ln, _fn);
#line 690 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _freeIterator(_iterator, _ln, _fn);
#line 689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 702 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:702 */
#line 702 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void chpl_singletonCurrentLocaleInitPrivate(int64_t locIdx,
#line 702 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                   int64_t _ln,
#line 702 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                                   int32_t _fn) {
#line 704 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp8 = NULL;
#line 704 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  RootLocale call_tmp9 = NULL;
#line 704 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  RootLocale call_tmp10 = NULL;
#line 704 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp11 = NULL;
#line 705 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_locale call_tmp12 = NULL;
#line 705 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale loc;
#line 706 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp13 = NULL;
#line 706 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  AbstractLocaleModel call_tmp14 = NULL;
#line 707 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_bool call_tmp15;
#line 710 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  AbstractLocaleModel call_tmp16 = NULL;
#line 710 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_locale call_tmp17 = NULL;
#line 710 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t _this_tmp_ = NULL;
#line 710 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp18 = NULL;
#line 704 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl_get_locale__instance(&rootLocale);
#line 704 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = chpl___COLON_17(*(call_tmp8), _ln, _fn);
#line 704 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp10 = postfix_EXCLAMATION_28(call_tmp9, _ln, _fn);
#line 704 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(call_tmp10, _ln, _fn);
#line 704 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp11 = getDefaultLocaleArray(call_tmp10, _ln, _fn);
#line 705 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp12 = this5(call_tmp11, locIdx, _ln, _fn);
#line 705 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  init_ASSIGN_(&loc, call_tmp12);
#line 706 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp13 = chpl_get_locale__instance(&loc);
#line 706 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp14 = chpl___COLON_18(*(call_tmp13), _ln, _fn);
#line 707 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp15 = chpl___EQUALS_8(((RootClass)(call_tmp14)), nil);
#line 707 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  if (call_tmp15) /* ZLINE: 707 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 707 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    halt(&_str_literal_1008, _ln, _fn);
#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 710 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp16 = postfix_EXCLAMATION_(call_tmp14, _ln, _fn);
#line 710 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(call_tmp16, _ln, _fn);
#line 710 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _this_tmp_ = chpl_get_AbstractLocaleModel_chpl_singletonThisLocaleArray(call_tmp16, _ln, _fn);
#line 710 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp17 = this4(_this_tmp_, INT64(0), _ln, _fn);
#line 710 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp18 = chpl_get_locale__instance(call_tmp17);
#line 710 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl___ASSIGN_42(call_tmp18, call_tmp14, _ln, _fn);
#line 711 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_singletonCurrentLocaleInitPrivateSublocs(&loc, _ln, _fn);
#line 702 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__autoDestroy45(&loc);
#line 702 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 702 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 719 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:719 */
#line 719 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
void chpl_getLocaleID(chpl_localeID_t * localeID,
#line 719 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                      int64_t _ln,
#line 719 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                      int32_t _fn) {
#line 721 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_localeID_t call_tmp8;
#line 721 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = here_id();
#line 721 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl___ASSIGN_62(localeID, &call_tmp8);
#line 719 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 719 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:726 */
#line 726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static chpl_localeID_t here_id(void) {
#line 730 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int32_t call_tmp8;
#line 730 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_localeID_t call_tmp9;
#line 730 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = get_chpl_nodeID();
#line 730 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = chpl_rt_buildLocaleID(call_tmp8, c_sublocid_any);
#line 726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return call_tmp9;
#line 726 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:735 */
#line 735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static locale chpl_localeID_to_locale(chpl_localeID_t * id3,
#line 735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                      int64_t _ln,
#line 735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                                      int32_t _fn) {
#line 735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale ret;
#line 736 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp8 = NULL;
#line 736 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_bool call_tmp9;
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp10 = NULL;
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  AbstractRootLocale call_tmp11 = NULL;
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  AbstractRootLocale call_tmp12 = NULL;
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale call_tmp13;
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale ret_tmp;
#line 744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp14 = NULL;
#line 744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_bool call_tmp15;
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp16 = NULL;
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  DummyLocale new_temp = NULL;
#line 736 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl_get_locale__instance(&rootLocale);
#line 736 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 736 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  if (call_tmp9) /* ZLINE: 736 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 736 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp10 = chpl_get_locale__instance(&rootLocale);
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp11 = chpl___COLON_16(*(call_tmp10), _ln, _fn);
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp12 = postfix_EXCLAMATION_27(call_tmp11, _ln, _fn);
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(call_tmp12, _ln, _fn);
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    ((void(*)(AbstractRootLocale,
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
       chpl_localeID_t *,
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
       locale *,
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
       int64_t,
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(call_tmp12))->chpl__cid) + INT64(3))])(call_tmp12, id3, &ret_tmp, _ln, _fn);
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp13 = ret_tmp;
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    ret = call_tmp13;
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    goto _end_chpl_localeID_to_locale;
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  } else /* ZLINE: 738 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 737 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp14 = chpl_get_locale__instance(&dummyLocale);
#line 744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp15 = chpl___EQUALS_8(((RootClass)(*(call_tmp14))), nil);
#line 744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    if (call_tmp15) /* ZLINE: 744 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    {
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
      call_tmp16 = chpl_get_locale__instance(&dummyLocale);
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
      new_temp = _new3(_ln, _fn);
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
      chpl___ASSIGN_44(call_tmp16, new_temp, _ln, _fn);
#line 745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    }
#line 747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    ret = chpl__initCopy5(&dummyLocale, UINT8(false));
#line 747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    goto _end_chpl_localeID_to_locale;
#line 747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _end_chpl_localeID_to_locale:;
#line 735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return ret;
#line 735 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:762 */
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
void chpl_taskRunningCntInc(int64_t _ln,
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                            int32_t _fn) {
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale call_tmp8;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale _chpl_forward_tgt2 = NULL;
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  if (rootLocaleInitialized) /* ZLINE: 764 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp8 = here(_ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    _chpl_forward_tgt2 = chpl_forwarding_expr12(&call_tmp8, _ln, _fn);
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(_chpl_forward_tgt2, _ln, _fn);
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    runningTaskCntAdd(_chpl_forward_tgt2, INT64(1), _ln, _fn);
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl__autoDestroy45(&call_tmp8);
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 762 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:771 */
#line 771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
void chpl_taskRunningCntDec(int64_t _ln,
#line 771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                            int32_t _fn) {
#line 774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale call_tmp8;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale _chpl_forward_tgt2 = NULL;
#line 773 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  if (rootLocaleInitialized) /* ZLINE: 773 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 773 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    call_tmp8 = here(_ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    _chpl_forward_tgt2 = chpl_forwarding_expr12(&call_tmp8, _ln, _fn);
#line 774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(_chpl_forward_tgt2, _ln, _fn);
#line 774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    runningTaskCntSub(_chpl_forward_tgt2, INT64(1), _ln, _fn);
#line 774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl__autoDestroy45(&call_tmp8);
#line 774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:779 */
#line 779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
void chpl_taskRunningCntReset(int64_t _ln,
#line 779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                              int32_t _fn) {
#line 781 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale call_tmp8;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale _chpl_forward_tgt2 = NULL;
#line 781 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = here(_ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _chpl_forward_tgt2 = chpl_forwarding_expr12(&call_tmp8, _ln, _fn);
#line 781 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(_chpl_forward_tgt2, _ln, _fn);
#line 781 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  runningTaskCntSet(_chpl_forward_tgt2, INT64(0), _ln, _fn);
#line 779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__autoDestroy45(&call_tmp8);
#line 779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 785 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:785 */
#line 785 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void deinit15(int64_t _ln,
#line 785 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                     int32_t _fn) {
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  locale local_nilLocale;
#line 786 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp8 = NULL;
#line 787 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_BaseLocale call_tmp9 = NULL;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  local_nilLocale = nilLocale;
#line 786 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl_get_locale__instance(&origRootLocale);
#line 786 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__delete22(*(call_tmp8), _ln, _fn);
#line 787 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp9 = chpl_get_locale__instance(&dummyLocale);
#line 787 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__delete22(*(call_tmp9), _ln, _fn);
#line 543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__autoDestroy45(&origRootLocale);
#line 528 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__autoDestroy45(&rootLocale);
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__autoDestroy45(&dummyLocale);
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__autoDestroy45(&defaultLocale);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__autoDestroy45(&local_nilLocale);
#line 785 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 785 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

