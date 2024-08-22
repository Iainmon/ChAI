#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
/* LocaleModelHelpSetup.chpl:31 */
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
static void chpl__init_LocaleModelHelpSetup(int64_t _ln,
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
                                            int32_t _fn) {
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  if (chpl__init_LocaleModelHelpSetup_p) /* ZLINE: 31 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl */
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  {
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
    goto _exit_chpl__init_LocaleModelHelpSetup;
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  }
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  printModuleInit("%*s\n", "LocaleModelHelpSetup", INT64(20), _ln, _fn);
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  refIndentLevel = &moduleInitLevel;
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  *(refIndentLevel) += INT64(1);
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl__init_LocaleModelHelpSetup_p = UINT8(true);
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  {
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
    chpl__init_ChapelLocale(_ln, _fn);
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
    chpl__init_DefaultRectangular(_ln, _fn);
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
    chpl__init_ChapelNumLocales(_ln, _fn);
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
    chpl__init_POSIX(_ln, _fn);
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
    chpl__init_String(_ln, _fn);
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  }
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  *(refIndentLevel) -= INT64(1);
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _exit_chpl__init_LocaleModelHelpSetup:;
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  return;
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
}

#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
/* LocaleModelHelpSetup.chpl:44 */
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
static void chpl__auto_destroy_chpl_root_locale_accum(chpl_root_locale_accum * this24) {
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t _field_destructor_tmp_ = NULL;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t _field_destructor_tmp_2 = NULL;
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t _field_destructor_tmp_3 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t _field_destructor_tmp_4 = NULL;
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t _field_destructor_tmp_5 = NULL;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _field_destructor_tmp_ = &((this24)->maxTaskPar);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  deinit2(_field_destructor_tmp_);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _field_destructor_tmp_2 = &((this24)->nPUsLogAll);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  deinit2(_field_destructor_tmp_2);
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _field_destructor_tmp_3 = &((this24)->nPUsLogAcc);
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  deinit2(_field_destructor_tmp_3);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _field_destructor_tmp_4 = &((this24)->nPUsPhysAll);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  deinit2(_field_destructor_tmp_4);
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _field_destructor_tmp_5 = &((this24)->nPUsPhysAcc);
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  deinit2(_field_destructor_tmp_5);
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  return;
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
}

#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
/* LocaleModelHelpSetup.chpl:45 */
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
static AtomicT_int64_t * chpl_get_chpl_root_locale_accum_nPUsPhysAcc(chpl_root_locale_accum * this24) {
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp8 = &((this24)->nPUsPhysAcc);
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  return call_tmp8;
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
/* LocaleModelHelpSetup.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
static AtomicT_int64_t * chpl_get_chpl_root_locale_accum_nPUsPhysAll(chpl_root_locale_accum * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp8 = &((this24)->nPUsPhysAll);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
}

#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
/* LocaleModelHelpSetup.chpl:47 */
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
static AtomicT_int64_t * chpl_get_chpl_root_locale_accum_nPUsLogAcc(chpl_root_locale_accum * this24) {
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp8 = &((this24)->nPUsLogAcc);
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  return call_tmp8;
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
}

#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
/* LocaleModelHelpSetup.chpl:48 */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
static AtomicT_int64_t * chpl_get_chpl_root_locale_accum_nPUsLogAll(chpl_root_locale_accum * this24) {
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp8 = &((this24)->nPUsLogAll);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  return call_tmp8;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
}

#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
/* LocaleModelHelpSetup.chpl:49 */
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
static AtomicT_int64_t * chpl_get_chpl_root_locale_accum_maxTaskPar(chpl_root_locale_accum * this24) {
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp8 = &((this24)->maxTaskPar);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  return call_tmp8;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
}

#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
/* LocaleModelHelpSetup.chpl:55 */
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
static void init57(chpl_root_locale_accum * this24) {
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  AtomicT_int64_t nPUsPhysAcc;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  AtomicT_int64_t nPUsPhysAll;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  AtomicT_int64_t nPUsLogAcc;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  AtomicT_int64_t nPUsLogAll;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  AtomicT_int64_t maxTaskPar2;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  init2(&nPUsPhysAcc);
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  (this24)->nPUsPhysAcc = nPUsPhysAcc;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  init2(&nPUsPhysAll);
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  (this24)->nPUsPhysAll = nPUsPhysAll;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  init2(&nPUsLogAcc);
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  (this24)->nPUsLogAcc = nPUsLogAcc;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  init2(&nPUsLogAll);
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  (this24)->nPUsLogAll = nPUsLogAll;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  init2(&maxTaskPar2);
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  (this24)->maxTaskPar = maxTaskPar2;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  return;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
}

#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
/* LocaleModelHelpSetup.chpl:66 */
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
static void accum(chpl_root_locale_accum * this24,
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
                  locale * loc,
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
                  int64_t _ln,
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
                  int32_t _fn) {
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t call_tmp8 = NULL;
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale _chpl_forward_tgt2 = NULL;
#line 68 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t call_tmp10 = NULL;
#line 68 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale _chpl_forward_tgt3 = NULL;
#line 69 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t call_tmp12 = NULL;
#line 69 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_int64_t call_tmp13 = NULL;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale _chpl_forward_tgt4 = NULL;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t call_tmp14 = NULL;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_int64_t call_tmp15 = NULL;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  BaseLocale _chpl_forward_tgt5 = NULL;
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t call_tmp16 = NULL;
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  int64_t call_tmp17;
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp8 = chpl_get_chpl_root_locale_accum_nPUsPhysAcc(this24);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _chpl_forward_tgt2 = chpl_forwarding_expr12(loc, _ln, _fn);
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_check_nil(_chpl_forward_tgt2, _ln, _fn);
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp9 = chpl_get_BaseLocale_nPUsPhysAcc(_chpl_forward_tgt2, _ln, _fn);
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  add3(call_tmp8, *(call_tmp9), _ln, _fn);
#line 68 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp10 = chpl_get_chpl_root_locale_accum_nPUsPhysAll(this24);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _chpl_forward_tgt3 = chpl_forwarding_expr12(loc, _ln, _fn);
#line 68 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_check_nil(_chpl_forward_tgt3, _ln, _fn);
#line 68 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp11 = chpl_get_BaseLocale_nPUsPhysAll(_chpl_forward_tgt3, _ln, _fn);
#line 68 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  add3(call_tmp10, *(call_tmp11), _ln, _fn);
#line 69 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp12 = chpl_get_chpl_root_locale_accum_nPUsLogAcc(this24);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _chpl_forward_tgt4 = chpl_forwarding_expr12(loc, _ln, _fn);
#line 69 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_check_nil(_chpl_forward_tgt4, _ln, _fn);
#line 69 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp13 = chpl_get_BaseLocale_nPUsLogAcc(_chpl_forward_tgt4, _ln, _fn);
#line 69 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  add3(call_tmp12, *(call_tmp13), _ln, _fn);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp14 = chpl_get_chpl_root_locale_accum_nPUsLogAll(this24);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _chpl_forward_tgt5 = chpl_forwarding_expr12(loc, _ln, _fn);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_check_nil(_chpl_forward_tgt5, _ln, _fn);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp15 = chpl_get_BaseLocale_nPUsLogAll(_chpl_forward_tgt5, _ln, _fn);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  add3(call_tmp14, *(call_tmp15), _ln, _fn);
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp16 = chpl_get_chpl_root_locale_accum_maxTaskPar(this24);
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp17 = maxTaskPar(loc, _ln, _fn);
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  add3(call_tmp16, call_tmp17, _ln, _fn);
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  return;
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
}

#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
/* LocaleModelHelpSetup.chpl:73 */
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
static void setRootLocaleValues(chpl_root_locale_accum * this24,
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
                                RootLocale dst,
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
                                int64_t _ln,
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
                                int32_t _fn) {
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  BaseLocale coerce_tmp2 = NULL;
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t call_tmp9 = NULL;
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  int64_t call_tmp10;
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  BaseLocale coerce_tmp3 = NULL;
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t call_tmp12 = NULL;
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  int64_t call_tmp13;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_int64_t call_tmp14 = NULL;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  BaseLocale coerce_tmp4 = NULL;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t call_tmp15 = NULL;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  int64_t call_tmp16;
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_int64_t call_tmp17 = NULL;
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  BaseLocale coerce_tmp5 = NULL;
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t call_tmp18 = NULL;
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  int64_t call_tmp19;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_int64_t call_tmp20 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  BaseLocale coerce_tmp6 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_AtomicT_int64_t call_tmp21 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  int64_t call_tmp22;
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  coerce_tmp2 = ((BaseLocale)(dst));
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp8 = chpl_get_BaseLocale_nPUsPhysAcc(coerce_tmp2, _ln, _fn);
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp9 = chpl_get_chpl_root_locale_accum_nPUsPhysAcc(this24);
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp10 = read4(call_tmp9, _ln, _fn);
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl___ASSIGN_3(call_tmp8, call_tmp10);
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  coerce_tmp3 = ((BaseLocale)(dst));
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp11 = chpl_get_BaseLocale_nPUsPhysAll(coerce_tmp3, _ln, _fn);
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp12 = chpl_get_chpl_root_locale_accum_nPUsPhysAll(this24);
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp13 = read4(call_tmp12, _ln, _fn);
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl___ASSIGN_3(call_tmp11, call_tmp13);
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  coerce_tmp4 = ((BaseLocale)(dst));
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp14 = chpl_get_BaseLocale_nPUsLogAcc(coerce_tmp4, _ln, _fn);
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp15 = chpl_get_chpl_root_locale_accum_nPUsLogAcc(this24);
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp16 = read4(call_tmp15, _ln, _fn);
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl___ASSIGN_3(call_tmp14, call_tmp16);
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  coerce_tmp5 = ((BaseLocale)(dst));
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_check_nil(coerce_tmp5, _ln, _fn);
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp17 = chpl_get_BaseLocale_nPUsLogAll(coerce_tmp5, _ln, _fn);
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp18 = chpl_get_chpl_root_locale_accum_nPUsLogAll(this24);
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp19 = read4(call_tmp18, _ln, _fn);
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl___ASSIGN_3(call_tmp17, call_tmp19);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  coerce_tmp6 = ((BaseLocale)(dst));
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_check_nil(coerce_tmp6, _ln, _fn);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp20 = chpl_get_BaseLocale_maxTaskPar(coerce_tmp6, _ln, _fn);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp21 = chpl_get_chpl_root_locale_accum_maxTaskPar(this24);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp22 = read4(call_tmp21, _ln, _fn);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl___ASSIGN_3(call_tmp20, call_tmp22);
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  return;
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
}

#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
/* LocaleModelHelpSetup.chpl:82 */
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
static void helpSetupRootLocaleFlat(RootLocale dst,
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
                                    int64_t _ln,
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
                                    int32_t _fn) {
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t local_numLocales;
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_root_locale_accum root_accum;
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  RootLocale dst2 = NULL;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_both_one tmpIter;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_low_one call_tmp8;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount = NULL;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t numTasks;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ic_these_range_int64_t_both_one _iterator = NULL;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_both_one this24;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_both_one this25;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp10;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp11;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_both_one this26;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp12;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp13;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_both_one this27;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _class_localscoforall_fn11 _args_forcoforall_fn = NULL;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_chpl_root_locale_accum T = NULL;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  raw_c_void_ptr _args_vforcoforall_fn;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t _args_sizecoforall_fn;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  Error error = NULL;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_both_one tmpIter2;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_low_one call_tmp14;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount2 = NULL;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t numTasks2;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ic_these_range_int64_t_both_one _iterator2 = NULL;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_both_one this28;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i2;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp15;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_both_one this29;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp16;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp17;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_both_one this30;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp18;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end2;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp19;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  range_int64_t_both_one this31;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _class_localscoforall_fn12 _args_forcoforall_fn2 = NULL;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  raw_c_void_ptr _args_vforcoforall_fn2;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t _args_sizecoforall_fn2;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  Error error2 = NULL;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__class_localscoforall_fn11_object chpl_macro_tmp_16;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__class_localscoforall_fn12_object chpl_macro_tmp_17;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  local_numLocales = numLocales;
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  init57(&root_accum);
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  dst2 = dst;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl_build_low_bounded_range(INT64(0));
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  tmpIter = chpl___POUND_(call_tmp8, local_numLocales, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _coforallCount = _endCountAlloc2(_ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  numTasks = chpl_boundedCoforallSize(tmpIter, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _upEndCount(_coforallCount, numTasks, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_resetTaskSpawn(numTasks, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _iterator = _getIterator3(&tmpIter, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  this24 = (_iterator)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkIfIterWillOverflow(this24, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  this25 = (_iterator)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = lowBoundForIter(this25);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl__idxToInt(call_tmp9);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  this26 = (_iterator)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = highBoundForIter(this26);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = chpl__idxToInt(call_tmp11);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  end = call_tmp12;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (i = call_tmp10; ((i <= end)); i += INT64(1)) {
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(_iterator, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    this27 = (_iterator)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp13 = chpl_intToIdx3(this27, i);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    _args_forcoforall_fn = ((_class_localscoforall_fn11)(&chpl_macro_tmp_16));
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (_args_forcoforall_fn)->_0__coforallCount = _coforallCount;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (_args_forcoforall_fn)->_1_locIdx = call_tmp13;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (_args_forcoforall_fn)->_2_dst = dst2;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    T = &root_accum;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (_args_forcoforall_fn)->_3_root_accum = T;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    _args_sizecoforall_fn = sizeof(chpl__class_localscoforall_fn11_object);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (_args_forcoforall_fn)->_ln = _ln;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (_args_forcoforall_fn)->_fn = _fn;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    /*** wrapcoforall_fn11 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(10), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), _args_sizecoforall_fn, INT64(594), INT32(42));
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  error = NULL;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _waitEndCount2(_coforallCount, numTasks, &error, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  if (error != nil) /* ZLINE: 594 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_propagate_error(error, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _endCountFree(_coforallCount, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _freeIterator17(_iterator, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__autoDestroy59(tmpIter);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__autoDestroy19(call_tmp8);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp14 = chpl_build_low_bounded_range(INT64(0));
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  tmpIter2 = chpl___POUND_(call_tmp14, local_numLocales, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _coforallCount2 = _endCountAlloc2(_ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  numTasks2 = chpl_boundedCoforallSize(tmpIter2, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _upEndCount(_coforallCount2, numTasks2, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_resetTaskSpawn(numTasks2, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _iterator2 = _getIterator3(&tmpIter2, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  this28 = (_iterator2)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkIfIterWillOverflow(this28, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i2 = INT64(0);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  this29 = (_iterator2)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp15 = lowBoundForIter(this29);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp16 = chpl__idxToInt(call_tmp15);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  this30 = (_iterator2)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp17 = highBoundForIter(this30);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp18 = chpl__idxToInt(call_tmp17);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  end2 = call_tmp18;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (i2 = call_tmp16; ((i2 <= end2)); i2 += INT64(1)) {
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(_iterator2, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    this31 = (_iterator2)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp19 = chpl_intToIdx3(this31, i2);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    _args_forcoforall_fn2 = ((_class_localscoforall_fn12)(&chpl_macro_tmp_17));
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(_args_forcoforall_fn2, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (_args_forcoforall_fn2)->_0__coforallCount = _coforallCount2;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(_args_forcoforall_fn2, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (_args_forcoforall_fn2)->_1_locIdx = call_tmp19;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_check_nil(_args_forcoforall_fn2, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (_args_forcoforall_fn2)->_2_dst = dst2;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    _args_vforcoforall_fn2 = ((void*)(_args_forcoforall_fn2));
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    _args_sizecoforall_fn2 = sizeof(chpl__class_localscoforall_fn12_object);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (_args_forcoforall_fn2)->_ln = _ln;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    (_args_forcoforall_fn2)->_fn = _fn;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    /*** wrapcoforall_fn12 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(11), ((chpl_task_bundle_p)(_args_vforcoforall_fn2)), _args_sizecoforall_fn2, INT64(602), INT32(42));
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  error2 = NULL;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _waitEndCount2(_coforallCount2, numTasks2, &error2, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  if (error2 != nil) /* ZLINE: 602 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl */
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  {
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
    chpl_propagate_error(error2, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  }
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _endCountFree(_coforallCount2, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _freeIterator17(_iterator2, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__autoDestroy59(tmpIter2);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl__autoDestroy19(call_tmp14);
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl__autoDestroy(((RootClass)(dst2)));
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_after_forall_fence();
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  setRootLocaleValues(&root_accum, dst, _ln, _fn);
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl__autoDestroy5(&root_accum);
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  return;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
}

#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
/* LocaleModelHelpSetup.chpl:141 */
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
static chpl_bool localSpawn(void) {
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  return UINT8(false);
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
}

#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
/* LocaleModelHelpSetup.chpl:159 */
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
static string getNodeName(int64_t _ln,
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
                          int32_t _fn) {
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  string _node_name;
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  Error error = NULL;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  c_ptrConst_int8_t call_tmp8 = NULL;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  string call_tmp9;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  int64_t default_arg_length;
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  int32_t call_tmp10;
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  string _node_id;
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  string T;
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_bool call_tmp11;
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  string call_tmp12;
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_string _fold_tmp = NULL;
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  error = NULL;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp8 = chpl_nodeName();
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  default_arg_length = createCopyingBuffer_default_length(call_tmp8, &error, _ln, _fn);
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  if (error != nil) /* ZLINE: 168 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl */
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  {
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
    goto handler;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  }
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp9 = createCopyingBuffer(call_tmp8, default_arg_length, decodePolicy_strict, &error, _ln, _fn);
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  if (error != nil) /* ZLINE: 168 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl */
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  {
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
    goto handler;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  }
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _node_name = call_tmp9;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  handler:;
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  if (error != nil) /* ZLINE: 167 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl */
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  {
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  }
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp10 = get_chpl_nodeID();
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _node_id = chpl___COLON_48(((int64_t)(call_tmp10)), _ln, _fn);
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp11 = localSpawn();
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  if (call_tmp11) /* ZLINE: 172 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl */
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  {
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
    call_tmp12 = chpl___PLUS_9(&_node_name, &_str_literal_2506, _ln, _fn);
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
    T = chpl___PLUS_9(&call_tmp12, &_node_id, _ln, _fn);
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
    chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  } else /* ZLINE: 172 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl */
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  {
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
    _fold_tmp = &_node_name;
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
    T = chpl__autoCopy2(_fold_tmp, UINT8(false), _ln, _fn);
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  }
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl__autoDestroy23(&_node_id, _ln, _fn);
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl__autoDestroy23(&_node_name, _ln, _fn);
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  return T;
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
}

#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
/* LocaleModelHelpSetup.chpl:175 */
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
static void helpSetupLocaleFlat(LocaleModel dst,
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
                                string * local_name,
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
                                int64_t _ln,
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
                                int32_t _fn) {
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  string call_tmp8;
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  BaseLocale coerce_tmp2 = NULL;
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  int32_t call_tmp10;
#line 180 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 180 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  BaseLocale coerce_tmp3 = NULL;
#line 180 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  int32_t call_tmp12;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_int64_t call_tmp13 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  BaseLocale coerce_tmp4 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  int32_t call_tmp14;
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_int64_t call_tmp15 = NULL;
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  BaseLocale coerce_tmp5 = NULL;
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  int32_t call_tmp16;
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_int64_t call_tmp17 = NULL;
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  BaseLocale coerce_tmp6 = NULL;
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  uint32_t call_tmp18;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp8 = getNodeName(_ln, _fn);
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  coerce_tmp2 = ((BaseLocale)(dst));
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp9 = chpl_get_BaseLocale_nPUsPhysAcc(coerce_tmp2, _ln, _fn);
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp10 = chpl_topo_getNumCPUsPhysical(UINT8(true));
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl___ASSIGN_3(call_tmp9, ((int64_t)(call_tmp10)));
#line 180 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  coerce_tmp3 = ((BaseLocale)(dst));
#line 180 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 180 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp11 = chpl_get_BaseLocale_nPUsPhysAll(coerce_tmp3, _ln, _fn);
#line 180 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp12 = chpl_topo_getNumCPUsPhysical(UINT8(false));
#line 180 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl___ASSIGN_3(call_tmp11, ((int64_t)(call_tmp12)));
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  coerce_tmp4 = ((BaseLocale)(dst));
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp13 = chpl_get_BaseLocale_nPUsLogAcc(coerce_tmp4, _ln, _fn);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp14 = chpl_topo_getNumCPUsLogical(UINT8(true));
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl___ASSIGN_3(call_tmp13, ((int64_t)(call_tmp14)));
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  coerce_tmp5 = ((BaseLocale)(dst));
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_check_nil(coerce_tmp5, _ln, _fn);
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp15 = chpl_get_BaseLocale_nPUsLogAll(coerce_tmp5, _ln, _fn);
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp16 = chpl_topo_getNumCPUsLogical(UINT8(false));
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl___ASSIGN_3(call_tmp15, ((int64_t)(call_tmp16)));
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  coerce_tmp6 = ((BaseLocale)(dst));
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_check_nil(coerce_tmp6, _ln, _fn);
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp17 = chpl_get_BaseLocale_maxTaskPar(coerce_tmp6, _ln, _fn);
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp18 = chpl_task_getMaxPar();
#line 187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl___ASSIGN_3(call_tmp17, ((int64_t)(call_tmp18)));
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  *(local_name) = call_tmp8;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  return;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
}

#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:594 */
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void coforall_fn11(chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                          int64_t locIdx,
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                          RootLocale dst,
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                          chpl_root_locale_accum * root_accum,
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                          int64_t _ln,
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                          int32_t _fn) {
#line 596 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int32_t call_tmp8;
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  locale call_tmp9;
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  locale initTemp;
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  LocaleModel new_temp = NULL;
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  locale initTemp2;
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  locale node;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref_locale call_tmp10 = NULL;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _ref__array_DefaultRectangularArr_1_int64_t_one_locale_int64_t _this_tmp_ = NULL;
#line 596 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl___COLON_4(locIdx, _ln, _fn);
#line 596 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_buildLocaleID(call_tmp8, c_sublocid_any, _ln, _fn);
#line 598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_defaultDistInitPrivate(_ln, _fn);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  init25(&initTemp, ((BaseLocale)(dst)));
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp9 = initTemp;
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  new_temp = _new9(&call_tmp9, _ln, _fn);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  init26(&initTemp2, ((BaseLocale)(new_temp)));
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  node = initTemp2;
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl__autoDestroy45(&call_tmp9);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl_check_nil(dst, _ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  _this_tmp_ = chpl_get_RootLocale_myLocales(dst, _ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  call_tmp10 = this4(_this_tmp_, locIdx, _ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl___ASSIGN_58(call_tmp10, &node);
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  accum(root_accum, &node, _ln, _fn);
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl__autoDestroy45(&node);
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl__autoDestroy(((RootClass)(dst)));
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:594 */
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void wrapcoforall_fn11(_class_localscoforall_fn11 c) {
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int32_t _fn;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t _ln;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _0__coforallCount = NULL;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t _1_locIdx;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  RootLocale _2_dst = NULL;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ref_chpl_root_locale_accum _3_root_accum = NULL;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _fn = (c)->_fn;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ln = (c)->_ln;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_rmem_consist_acquire(_ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _0__coforallCount = (c)->_0__coforallCount;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _1_locIdx = (c)->_1_locIdx;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _2_dst = (c)->_2_dst;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _3_root_accum = (c)->_3_root_accum;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  coforall_fn11(_0__coforallCount, _1_locIdx, _2_dst, _3_root_accum, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _downEndCount((c)->_0__coforallCount, nil, _ln, _fn);
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 594 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:602 */
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void coforall_fn12(chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                          int64_t locIdx,
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                          RootLocale dst,
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                          int64_t _ln,
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
                          int32_t _fn) {
#line 604 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int32_t call_tmp8;
#line 604 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  call_tmp8 = chpl___COLON_4(locIdx, _ln, _fn);
#line 604 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_buildLocaleID(call_tmp8, c_sublocid_any, _ln, _fn);
#line 606 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_rootLocaleInitPrivate(locIdx, _ln, _fn);
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_defaultLocaleInitPrivate(_ln, _fn);
#line 608 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_singletonCurrentLocaleInitPrivate(locIdx, _ln, _fn);
#line 609 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  warmupRuntime(_ln, _fn);
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpSetup.chpl"
  chpl__autoDestroy(((RootClass)(dst)));
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
/* ChapelLocale.chpl:602 */
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
static void wrapcoforall_fn12(_class_localscoforall_fn12 c) {
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int32_t _fn;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t _ln;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _0__coforallCount = NULL;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  int64_t _1_locIdx;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _fn = (c)->_fn;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _ln = (c)->_ln;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_rmem_consist_acquire(_ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _0__coforallCount = (c)->_0__coforallCount;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _1_locIdx = (c)->_1_locIdx;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  coforall_fn12(_0__coforallCount, _1_locIdx, (c)->_2_dst, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  _downEndCount((c)->_0__coforallCount, nil, _ln, _fn);
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
  return;
#line 602 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocale.chpl"
}

