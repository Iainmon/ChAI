#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:30 */
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static void chpl__init_LocaleModel(int64_t _ln,
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                                   int32_t _fn) {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  range_int64_t_both_one call_tmp8;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one call_tmp9;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl___RuntimeTypeInfo call_tmp10;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl___RuntimeTypeInfo2 call_tmp11;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one _runtime_type_tmp_;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t ret_tmp;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  if (chpl__init_LocaleModel_p) /* ZLINE: 30 /Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
    goto _exit_chpl__init_LocaleModel;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  }
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  printModuleInit("%*s\n", "LocaleModel", INT64(11), _ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  refIndentLevel = &moduleInitLevel;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  *(refIndentLevel) += INT64(1);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl__init_LocaleModel_p = UINT8(true);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
    chpl__init_LocaleModelHelpFlat(_ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
    chpl__init_LocaleModelHelpMem(_ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
    chpl__init_IO(_ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  }
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_addModule("LocaleModel", ((c_fn_ptr_rehook)(deinit17)), _ln, _fn);
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp8 = chpl_build_bounded_range2();
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp9 = chpl__buildDomainExpr(call_tmp8, UINT8(true), _ln, _fn);
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp10 = chpl__buildDomainRuntimeType(&defaultDist);
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_emptyLocaleSpace = chpl__coerceMove(&call_tmp10, &call_tmp9, UINT8(true), _ln, _fn);
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl__autoDestroy59(call_tmp8);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp = chpl__ensureDomainExpr(&chpl_emptyLocaleSpace);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp11 = chpl__buildArrayRuntimeType(call_tmp);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _runtime_type_tmp_ = (&call_tmp11)->dom;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  ret_tmp = chpl__convertRuntimeTypeToValue(&_runtime_type_tmp_, UINT8(true), _ln, _fn);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_emptyLocales = ret_tmp;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  *(refIndentLevel) -= INT64(1);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _exit_chpl__init_LocaleModel:;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:42 */
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
int32_t chpl_localeModel_sublocToExecutionSubloc(int32_t full_subloc) {
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return full_subloc;
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:48 */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
int32_t chpl_localeModel_sublocMerge(int32_t full_subloc,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                                     int32_t execution_subloc) {
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return execution_subloc;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:62 */
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static void chpl__auto_destroy_LocaleModel(LocaleModel this24,
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                                           int64_t _ln,
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                                           int32_t _fn) {
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref_string _field_destructor_tmp_ = NULL;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _field_destructor_tmp_ = &((this24)->local_name);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  deinit52(_field_destructor_tmp_, _ln, _fn);
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl__auto_destroy_AbstractLocaleModel(((AbstractLocaleModel)(this24)), _ln, _fn);
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return;
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:64 */
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static string * chpl_get_LocaleModel_local_name(LocaleModel this24,
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                                                int64_t _ln,
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                                                int32_t _fn) {
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref_string call_tmp8 = NULL;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp8 = &((this24)->local_name);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return call_tmp8;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:81 */
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static void init55(LocaleModel this24,
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                   locale * parent_loc,
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                   int64_t _ln,
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                   int32_t _fn) {
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  AbstractLocaleModel super_tmp = NULL;
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  int32_t call_tmp8;
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  int64_t call_tmp9;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  string local_name;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  if (rootLocaleInitialized) /* ZLINE: 82 /Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  {
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
    halt(&_str_literal_2512, _ln, _fn);
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  }
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  super_tmp = &((this24)->super);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  init32(super_tmp, parent_loc, _ln, _fn);
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  ((RootClass)(((AbstractLocaleModel)(this24))))->chpl__cid = chpl__cid_AbstractLocaleModel;
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp8 = get_chpl_nodeID();
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp9 = ((int64_t)(call_tmp8));
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  (this24)->_node_id = call_tmp9;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  init96(&local_name, _ln, _fn);
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  (this24)->local_name = local_name;
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_LocaleModel;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  setup(this24, _ln, _fn);
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return;
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:81 */
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static LocaleModel _new9(locale * parent_loc,
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                         int64_t _ln,
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                         int32_t _fn) {
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  LocaleModel initTemp = NULL;
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  c_ptr_void cast_tmp = NULL;
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  LocaleModel T = NULL;
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_LocaleModel_object), INT16(55), _ln, _fn);
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  initTemp = ((LocaleModel)(cast_tmp));
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_LocaleModel;
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  init55(initTemp, parent_loc, _ln, _fn);
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  T = initTemp;
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return T;
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:105 */
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static int64_t _getChildCount4(LocaleModel this24,
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                               int64_t _ln,
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                               int32_t _fn) {
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return INT64(0);
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:112 */
#line 112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static void _getChild3(LocaleModel this24,
#line 112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                       int64_t idx,
#line 112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                       locale * _retArg,
#line 112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                       int64_t _ln,
#line 112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                       int32_t _fn) {
#line 112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  locale ret;
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  halt(&_str_literal_2513, _ln, _fn);
#line 112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  *(_retArg) = ret;
#line 112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return;
#line 112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:128 */
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static void setup(LocaleModel this24,
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                  int64_t _ln,
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                  int32_t _fn) {
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref_string call_tmp8 = NULL;
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  string _formal_tmp_out_local_name;
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp8 = chpl_get_LocaleModel_local_name(this24, _ln, _fn);
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  helpSetupLocaleFlat(this24, &_formal_tmp_out_local_name, _ln, _fn);
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl___ASSIGN_71(call_tmp8, &_formal_tmp_out_local_name, _ln, _fn);
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl__autoDestroy23(&_formal_tmp_out_local_name, _ln, _fn);
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return;
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:143 */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static _domain_DefaultRectangularDom_1_int64_t_one * chpl_get_RootLocale_myLocaleSpace(RootLocale this24,
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                                                                                       int64_t _ln,
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                                                                                       int32_t _fn) {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref__domain_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp8 = &((this24)->myLocaleSpace);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:145 */
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * chpl_get_RootLocale_myLocales(RootLocale this24,
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                                                                                                 int64_t _ln,
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                                                                                                 int32_t _fn) {
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp8 = NULL;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp8 = &((this24)->myLocales);
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return call_tmp8;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:147 */
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static void init56(RootLocale this24,
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                   int64_t _ln,
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                   int32_t _fn) {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  int64_t local_numLocales;
#line 148 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  locale local_nilLocale;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  AbstractRootLocale super_tmp = NULL;
#line 149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 150 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref_int64_t call_tmp12 = NULL;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  int64_t call_tmp13;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  range_int64_t_both_one call_tmp14;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one call_tmp15;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl___RuntimeTypeInfo call_tmp16;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one init_coerce_tmp;
#line 639 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one myLocaleSpace;
#line 639 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one _instance = NULL;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t myLocales;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref__domain_DefaultRectangularDom_1_int64_t_one call_tmp17 = NULL;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref__domain_DefaultRectangularDom_1_int64_t_one call_tmp18 = NULL;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl___RuntimeTypeInfo2 call_tmp19;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one _runtime_type_tmp_;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  local_numLocales = numLocales;
#line 148 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  local_nilLocale = nilLocale;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  super_tmp = &((this24)->super);
#line 148 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 148 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  init33(super_tmp, &local_nilLocale, _ln, _fn);
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  ((RootClass)(((AbstractRootLocale)(this24))))->chpl__cid = chpl__cid_AbstractRootLocale;
#line 149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp8 = &(((BaseLocale)(this24))->nPUsPhysAcc);
#line 149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl___ASSIGN_3(call_tmp8, INT64(0));
#line 150 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 150 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp9 = &(((BaseLocale)(this24))->nPUsPhysAll);
#line 150 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl___ASSIGN_3(call_tmp9, INT64(0));
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp10 = &(((BaseLocale)(this24))->nPUsLogAcc);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl___ASSIGN_3(call_tmp10, INT64(0));
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp11 = &(((BaseLocale)(this24))->nPUsLogAll);
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl___ASSIGN_3(call_tmp11, INT64(0));
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp12 = &(((BaseLocale)(this24))->maxTaskPar);
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl___ASSIGN_3(call_tmp12, INT64(0));
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp13 = chpl___HYPHEN_6(local_numLocales);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp14 = chpl_build_bounded_range3(INT64(0), call_tmp13);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp15 = chpl__buildDomainExpr(call_tmp14, UINT8(true), _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp16 = chpl__buildDomainRuntimeType(&defaultDist);
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  init_coerce_tmp = chpl__coerceMove(&call_tmp16, &call_tmp15, UINT8(false), _ln, _fn);
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  (this24)->myLocaleSpace = init_coerce_tmp;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl__autoDestroy59(call_tmp14);
#line 639 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 639 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  myLocaleSpace = (this24)->myLocaleSpace;
#line 639 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _instance = &((&myLocaleSpace)->_instance);
#line 639 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(_instance, _ln, _fn);
#line 639 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  ((BaseDom)(*(_instance)))->definedConst = UINT8(true);
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp17 = &((this24)->myLocaleSpace);
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp18 = chpl__ensureDomainExpr(call_tmp17);
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp19 = chpl__buildArrayRuntimeType(call_tmp18);
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _runtime_type_tmp_ = (&call_tmp19)->dom;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  myLocales = chpl__convertRuntimeTypeToValue(&_runtime_type_tmp_, UINT8(false), _ln, _fn);
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  (this24)->myLocales = myLocales;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_RootLocale;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:147 */
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static RootLocale _new10(int64_t _ln,
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                         int32_t _fn) {
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  RootLocale initTemp = NULL;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  c_ptr_void cast_tmp = NULL;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  RootLocale T = NULL;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_RootLocale_object), INT16(50), _ln, _fn);
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  initTemp = ((RootLocale)(cast_tmp));
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_RootLocale;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  init56(initTemp, _ln, _fn);
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  T = initTemp;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return T;
#line 147 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:159 */
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static void setup2(RootLocale this24,
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                   int64_t _ln,
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                   int32_t _fn) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  helpSetupRootLocaleFlat(this24, _ln, _fn);
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return;
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:178 */
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static int64_t _getChildCount5(RootLocale this24,
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                               int64_t _ln,
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                               int32_t _fn) {
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref__domain_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  int64_t call_tmp9;
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp8 = chpl_get_RootLocale_myLocaleSpace(this24, _ln, _fn);
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp9 = size2(call_tmp8, _ln, _fn);
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return call_tmp9;
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:187 */
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static void _getChild4(RootLocale this24,
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                       int64_t idx,
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                       locale * _retArg,
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                       int64_t _ln,
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                       int32_t _fn) {
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  locale ret;
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref_locale call_tmp8 = NULL;
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t _this_tmp_ = NULL;
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _this_tmp_ = chpl_get_RootLocale_myLocales(this24, _ln, _fn);
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp8 = this5(_this_tmp_, idx, _ln, _fn);
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  ret = chpl__initCopy5(call_tmp8, UINT8(false));
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  *(_retArg) = ret;
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return;
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 195 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:195 */
#line 195 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t * getDefaultLocaleArray(RootLocale this24,
#line 195 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                                                                                         int64_t _ln,
#line 195 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                                                                                         int32_t _fn) {
#line 195 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp8 = NULL;
#line 195 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 195 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp8 = chpl_get_RootLocale_myLocales(this24, _ln, _fn);
#line 195 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return call_tmp8;
#line 195 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static void localeIDtoLocale2(RootLocale this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                              chpl_localeID_t * id3,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                              locale * _retArg,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                              int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                              int32_t _fn) {
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  locale ret;
#line 202 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  int32_t call_tmp8;
#line 202 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref_locale call_tmp9 = NULL;
#line 202 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t _this_tmp_ = NULL;
#line 202 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp8 = chpl_rt_nodeFromLocaleID(*(id3));
#line 202 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 202 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _this_tmp_ = chpl_get_RootLocale_myLocales(this24, _ln, _fn);
#line 202 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp9 = this5(_this_tmp_, ((int64_t)(call_tmp8)), _ln, _fn);
#line 202 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  ret = chpl__initCopy5(call_tmp9, UINT8(false));
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  *(_retArg) = ret;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 205 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:205 */
#line 205 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static void deinit16(RootLocale this24,
#line 205 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                     int64_t _ln,
#line 205 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                     int32_t _fn) {
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ic_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t _iterator = NULL;
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp8 = NULL;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  _ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t _iterator2 = NULL;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp9 = NULL;
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t this25;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  _ir_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp10;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t coerce_tmp2 = NULL;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  int64_t default_arg_tasksPerLocale;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  chpl_bool default_arg_ignoreRunning;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  int64_t default_arg_minIndicesPerTask;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  _ir_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t ret_tmp;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_chpl__serialViewIter _iterator3 = NULL;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp11 = NULL;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t this26 = NULL;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_chpl__serialViewIter call_tmp12;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp3 = NULL;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_chpl__serialViewIter ret_tmp2;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t this27 = NULL;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_chpl__serialViewIter1D _iterator4 = NULL;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp13;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one viewDom = NULL;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_chpl__serialViewIter1D call_tmp14;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_chpl__serialViewIter1D ret_tmp3;
#line 1630 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t info = NULL;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t arr = NULL;
#line 1646 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp15;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one viewRange;
#line 1646 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp16;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t arr2 = NULL;
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp17;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one viewRange2;
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp18;
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp19;
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp20;
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp21;
#line 1648 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp22;
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp23;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one viewRange3;
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp24;
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp25;
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp26;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_chpl_direct_pos_stride_range_iter _iterator5 = NULL;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_chpl_direct_pos_stride_range_iter call_tmp27;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_chpl_direct_pos_stride_range_iter ret_tmp4;
#line 3274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t low3;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t high2;
#line 3276 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t high3;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t stride;
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_locale call_tmp28 = NULL;
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale _this_tmp_ = NULL;
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_locale coerce_tmp4 = NULL;
#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref_BaseLocale call_tmp29 = NULL;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t _field_destructor_tmp_;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one _field_destructor_tmp_2;
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  call_tmp8 = chpl_get_RootLocale_myLocales(this24, _ln, _fn);
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _iterator = _getIterator6(call_tmp8, _ln, _fn);
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  this25 = (_iterator)->F0_this;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  call_tmp9 = _value(&this25);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  coerce_tmp2 = call_tmp9;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  chpl_check_nil(call_tmp9, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  default_arg_tasksPerLocale = these_default_tasksPerLocale3(call_tmp9);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  default_arg_ignoreRunning = these_default_ignoreRunning3(coerce_tmp2);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  default_arg_minIndicesPerTask = these_default_minIndicesPerTask3(coerce_tmp2);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  these4(coerce_tmp2, default_arg_tasksPerLocale, default_arg_ignoreRunning, default_arg_minIndicesPerTask, &ret_tmp);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  call_tmp10 = ret_tmp;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  _iterator2 = _getIterator17(&call_tmp10, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  this26 = (_iterator2)->F0_this;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this26, _ln, _fn);
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp11 = chpl_get_DefaultRectangularArr_dom2(this26, _ln, _fn);
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp3 = *(call_tmp11);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  this27 = (_iterator2)->F0_this;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__serialViewIter(this27, coerce_tmp3, &ret_tmp2);
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp12 = ret_tmp2;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator3 = _getIterator19(&call_tmp12, _ln, _fn);
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator3, _ln, _fn);
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  viewDom = (_iterator3)->F1_viewDom;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(viewDom, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp13 = dsiDim2(viewDom, _ln, _fn);
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator3, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__serialViewIter1D((_iterator3)->F0_arr, call_tmp13, &ret_tmp3);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp14 = ret_tmp3;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator4 = _getIterator18(&call_tmp14, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator4, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  arr = (_iterator4)->F0_arr;
#line 1630 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  info = arr;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator4, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  viewRange = (_iterator4)->F1_viewRange;
#line 1646 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp15 = low2(viewRange);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator4, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  arr2 = (_iterator4)->F0_arr;
#line 1646 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(arr2, _ln, _fn);
#line 1646 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  getDataIndex_default_getShifted(arr2);
#line 1646 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(arr, _ln, _fn);
#line 1646 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp16 = getDataIndex(arr, call_tmp15, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator4, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  viewRange2 = (_iterator4)->F1_viewRange;
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp17 = low2(viewRange2);
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp18 = chpl__idxToInt(call_tmp17);
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp19 = chpl___PLUS_7(call_tmp18);
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp20 = chpl__intToIdx(call_tmp19);
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(info, _ln, _fn);
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  getDataIndex_default_getShifted(info);
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(info, _ln, _fn);
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp21 = getDataIndex(info, call_tmp20, _ln, _fn);
#line 1648 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp22 = chpl___HYPHEN_3(call_tmp21, call_tmp16);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator4, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  viewRange3 = (_iterator4)->F1_viewRange;
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp23 = size3(viewRange3, _ln, _fn);
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp24 = chpl___HYPHEN_6(call_tmp23);
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp25 = chpl___ASTERISK_2(call_tmp24, call_tmp22);
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp26 = chpl___PLUS_3(call_tmp16, call_tmp25);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_direct_pos_stride_range_iter(call_tmp16, call_tmp26, call_tmp22, &ret_tmp4);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp27 = ret_tmp4;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator5 = _getIterator12(&call_tmp27, _ln, _fn);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 3271 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_range_check_stride((_iterator5)->F2_stride, _ln, _fn);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 3274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator5)->F0_low);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 3274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator5)->F1_high);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  low3 = (_iterator5)->F0_low;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  high2 = (_iterator5)->F1_high;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 3274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_checkIfRangeIterWillOverflow(low3, high2, (_iterator5)->F2_stride, default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 3276 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  high3 = (_iterator5)->F1_high;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  stride = (_iterator5)->F2_stride;
#line 3277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (chpl_check_nil(_iterator5, _ln, _fn),i = (_iterator5)->F0_low; ((i <= high3)); i += stride) {
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(info, _ln, _fn);
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    _this_tmp_ = theData3(info, _ln, _fn);
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp4 = *(_this_tmp_);
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp28 = this7(coerce_tmp4, i);
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
    _value4(call_tmp28, _ln, _fn);
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
    chpl___ASSIGN_(&rootLocaleInitialized, UINT8(false));
#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
    call_tmp29 = chpl_get_locale__instance(call_tmp28);
#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
    chpl__delete22(*(call_tmp29), _ln, _fn);
#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  }
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator6(_iterator5, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator5(_iterator4, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp13);
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator4(_iterator3, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  _freeIterator2(_iterator2, _ln, _fn);
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _freeIterator3(_iterator, _ln, _fn);
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _field_destructor_tmp_ = (this24)->myLocales;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl__autoDestroy68(&_field_destructor_tmp_, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _field_destructor_tmp_2 = (this24)->myLocaleSpace;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl__autoDestroy67(&_field_destructor_tmp_2, _ln, _fn);
#line 205 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl__auto_destroy_AbstractRootLocale(((AbstractRootLocale)(this24)), _ln, _fn);
#line 205 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return;
#line 205 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
/* LocaleModel.chpl:225 */
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
static void deinit17(int64_t _ln,
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
                     int32_t _fn) {
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one local_chpl_emptyLocaleSpace;
#line 226 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t local_chpl_emptyLocales;
#line 226 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ic_these__ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t _iterator = NULL;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  _ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t _iterator2 = NULL;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp8 = NULL;
#line 226 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t this24;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  _ir_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp9;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t coerce_tmp2 = NULL;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  int64_t default_arg_tasksPerLocale;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  chpl_bool default_arg_ignoreRunning;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  int64_t default_arg_minIndicesPerTask;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  _ir_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t ret_tmp;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_chpl__serialViewIter _iterator3 = NULL;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp10 = NULL;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t this25 = NULL;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_chpl__serialViewIter call_tmp11;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp3 = NULL;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_chpl__serialViewIter ret_tmp2;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t this26 = NULL;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_chpl__serialViewIter1D _iterator4 = NULL;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp12;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one viewDom = NULL;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_chpl__serialViewIter1D call_tmp13;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_chpl__serialViewIter1D ret_tmp3;
#line 1630 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t info = NULL;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t arr = NULL;
#line 1646 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp14;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one viewRange;
#line 1646 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp15;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t arr2 = NULL;
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp16;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one viewRange2;
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp17;
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp18;
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp19;
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp20;
#line 1648 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp21;
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp22;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one viewRange3;
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp23;
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp24;
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp25;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_chpl_direct_pos_stride_range_iter _iterator5 = NULL;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_chpl_direct_pos_stride_range_iter call_tmp26;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_chpl_direct_pos_stride_range_iter ret_tmp4;
#line 3274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t low3;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t high2;
#line 3276 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t high3;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t stride;
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_locale call_tmp27 = NULL;
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale _this_tmp_ = NULL;
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_locale coerce_tmp4 = NULL;
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _ref_BaseLocale call_tmp28 = NULL;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  local_chpl_emptyLocaleSpace = chpl_emptyLocaleSpace;
#line 226 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  local_chpl_emptyLocales = chpl_emptyLocales;
#line 226 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _iterator = _getIterator6(&local_chpl_emptyLocales, _ln, _fn);
#line 226 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 226 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  this24 = (_iterator)->F0_this;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  call_tmp8 = _value(&this24);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  coerce_tmp2 = call_tmp8;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  default_arg_tasksPerLocale = these_default_tasksPerLocale3(call_tmp8);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  default_arg_ignoreRunning = these_default_ignoreRunning3(coerce_tmp2);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  default_arg_minIndicesPerTask = these_default_minIndicesPerTask3(coerce_tmp2);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  these4(coerce_tmp2, default_arg_tasksPerLocale, default_arg_ignoreRunning, default_arg_minIndicesPerTask, &ret_tmp);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  call_tmp9 = ret_tmp;
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  _iterator2 = _getIterator17(&call_tmp9, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  this25 = (_iterator2)->F0_this;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this25, _ln, _fn);
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = chpl_get_DefaultRectangularArr_dom2(this25, _ln, _fn);
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp3 = *(call_tmp10);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  this26 = (_iterator2)->F0_this;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__serialViewIter(this26, coerce_tmp3, &ret_tmp2);
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp11 = ret_tmp2;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator3 = _getIterator19(&call_tmp11, _ln, _fn);
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator3, _ln, _fn);
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  viewDom = (_iterator3)->F1_viewDom;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(viewDom, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp12 = dsiDim2(viewDom, _ln, _fn);
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator3, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__serialViewIter1D((_iterator3)->F0_arr, call_tmp12, &ret_tmp3);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp13 = ret_tmp3;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator4 = _getIterator18(&call_tmp13, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator4, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  arr = (_iterator4)->F0_arr;
#line 1630 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  info = arr;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator4, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  viewRange = (_iterator4)->F1_viewRange;
#line 1646 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp14 = low2(viewRange);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator4, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  arr2 = (_iterator4)->F0_arr;
#line 1646 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(arr2, _ln, _fn);
#line 1646 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  getDataIndex_default_getShifted(arr2);
#line 1646 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(arr, _ln, _fn);
#line 1646 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp15 = getDataIndex(arr, call_tmp14, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator4, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  viewRange2 = (_iterator4)->F1_viewRange;
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp16 = low2(viewRange2);
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp17 = chpl__idxToInt(call_tmp16);
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp18 = chpl___PLUS_7(call_tmp17);
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp19 = chpl__intToIdx(call_tmp18);
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(info, _ln, _fn);
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  getDataIndex_default_getShifted(info);
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(info, _ln, _fn);
#line 1647 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp20 = getDataIndex(info, call_tmp19, _ln, _fn);
#line 1648 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp21 = chpl___HYPHEN_3(call_tmp20, call_tmp15);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator4, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  viewRange3 = (_iterator4)->F1_viewRange;
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp22 = size3(viewRange3, _ln, _fn);
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp23 = chpl___HYPHEN_6(call_tmp22);
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp24 = chpl___ASTERISK_2(call_tmp23, call_tmp21);
#line 1649 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp25 = chpl___PLUS_3(call_tmp15, call_tmp24);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_direct_pos_stride_range_iter(call_tmp15, call_tmp25, call_tmp21, &ret_tmp4);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp26 = ret_tmp4;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator5 = _getIterator12(&call_tmp26, _ln, _fn);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 3271 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_range_check_stride((_iterator5)->F2_stride, _ln, _fn);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 3274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator5)->F0_low);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 3274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator5)->F1_high);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  low3 = (_iterator5)->F0_low;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  high2 = (_iterator5)->F1_high;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 3274 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_checkIfRangeIterWillOverflow(low3, high2, (_iterator5)->F2_stride, default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 3276 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  high3 = (_iterator5)->F1_high;
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator5, _ln, _fn);
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  stride = (_iterator5)->F2_stride;
#line 3277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (chpl_check_nil(_iterator5, _ln, _fn),i = (_iterator5)->F0_low; ((i <= high3)); i += stride) {
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(info, _ln, _fn);
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    _this_tmp_ = theData3(info, _ln, _fn);
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp4 = *(_this_tmp_);
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 1652 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp27 = this7(coerce_tmp4, i);
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
    call_tmp28 = chpl_get_locale__instance(call_tmp27);
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
    chpl__delete22(*(call_tmp28), _ln, _fn);
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  }
#line 1650 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator6(_iterator5, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator5(_iterator4, _ln, _fn);
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp12);
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator4(_iterator3, _ln, _fn);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelArray.chpl"
  _freeIterator2(_iterator2, _ln, _fn);
#line 226 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  _freeIterator3(_iterator, _ln, _fn);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl__autoDestroy68(&local_chpl_emptyLocales, _ln, _fn);
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  chpl__autoDestroy67(&local_chpl_emptyLocaleSpace, _ln, _fn);
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
  return;
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/localeModels/flat/LocaleModel.chpl"
}

