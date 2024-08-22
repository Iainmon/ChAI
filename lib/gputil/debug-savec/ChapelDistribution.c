#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:21 */
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void chpl__init_ChapelDistribution(int64_t _ln,
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                          int32_t _fn) {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  if (chpl__init_ChapelDistribution_p) /* ZLINE: 21 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    goto _exit_chpl__init_ChapelDistribution;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  printModuleInit("%*s\n", "ChapelDistribution", INT64(18), _ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  refIndentLevel = &moduleInitLevel;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  *(refIndentLevel) += INT64(1);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl__init_ChapelDistribution_p = UINT8(true);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl__init_ChapelArray(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl__init_ChapelRange(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl__init_ChapelLocks(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl__init_ChapelHashtable(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl__init_Math(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl__init_Sort(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  *(refIndentLevel) -= INT64(1);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _exit_chpl__init_ChapelDistribution:;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:36 */
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static DefaultDist * chpl_get__distribution__instance(_distribution_DefaultDist * this24) {
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_DefaultDist call_tmp8 = NULL;
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = &((this24)->_instance);
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp8;
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:37 */
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_bool * chpl_get__distribution__unowned(_distribution_DefaultDist * this24) {
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = &((this24)->_unowned);
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp8;
#line 37 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:41 */
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void init10(_distribution_DefaultDist * this24,
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int64_t _pid,
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   DefaultDist _instance,
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   chpl_bool _unowned) {
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->_pid = _pid;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->_instance = _instance;
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->_unowned = _unowned;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:47 */
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void init11(_distribution_DefaultDist * this24,
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   DefaultDist value) {
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  DefaultDist call_tmp8 = NULL;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->_pid = INT64(-1);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = _to_unmanaged41(value);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->_instance = call_tmp8;
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->_unowned = UINT8(false);
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:60 */
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static DefaultDist _value2(_distribution_DefaultDist * this24) {
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  DefaultDist ret = NULL;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_DefaultDist call_tmp8 = NULL;
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_get__distribution__instance(this24);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = chpl_get__distribution__instance(this24);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ret = *(call_tmp8);
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return ret;
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:70 */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void _do_destroy(_distribution_DefaultDist * this24,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                        int64_t _ln,
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                        int32_t _fn) {
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool T;
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool T2;
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_DefaultDist call_tmp9 = NULL;
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDist call_tmp10 = NULL;
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDist coerce_tmp2 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp11;
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = chpl_get__distribution__unowned(this24);
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  T = chpl___EXCLAMATION_(*(call_tmp8));
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  if (T) /* ZLINE: 71 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_get__distribution__instance(this24);
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    T2 = UINT8(false);
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  } else /* ZLINE: 71 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    T2 = UINT8(false);
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  if (T2) /* ZLINE: 71 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_get__distribution__instance(this24);
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp9 = chpl_get__distribution__instance(this24);
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    coerce_tmp2 = ((BaseDist)(*(call_tmp9)));
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp10 = remove2(coerce_tmp2, _ln, _fn);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp11 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(call_tmp10)), nil);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    if (call_tmp11) /* ZLINE: 78 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    {
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl_get__distribution__instance(this24);
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      _delete_dist(call_tmp10, UINT8(false), _ln, _fn);
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    }
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:85 */
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void deinit4(_distribution_DefaultDist * this24,
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                    int64_t _ln,
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                    int32_t _fn) {
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _do_destroy(this24, _ln, _fn);
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:89 */
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static _distribution_DefaultDist clone2(_distribution_DefaultDist * this24,
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                        int64_t _ln,
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                        int32_t _fn) {
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  DefaultDist call_tmp8 = NULL;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  DefaultDist call_tmp9 = NULL;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _distribution_DefaultDist call_tmp10;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _distribution_DefaultDist initTemp;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = _value2(this24);
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp9 = dsiClone(call_tmp8);
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  init11(&initTemp, call_tmp9);
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp10 = initTemp;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp10;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:93 */
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static DefaultRectangularDom_1_int64_t_one newRectangularDom(_distribution_DefaultDist * this24,
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                             _tuple_1_star_range_int64_t_both_one * ranges,
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                             chpl_bool definedConst,
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                             int64_t _ln,
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                             int32_t _fn) {
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  DefaultDist call_tmp8 = NULL;
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp9 = NULL;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_bool call_tmp10 = NULL;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom coerce_tmp2 = NULL;
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = _value2(this24);
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp9 = dsiNewRectangularDom(call_tmp8, ranges, _ln, _fn);
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  coerce_tmp2 = ((BaseDom)(call_tmp9));
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp10 = chpl_get_BaseDom_definedConst(coerce_tmp2, _ln, _fn);
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl___ASSIGN_(call_tmp10, definedConst);
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp9;
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:107 */
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static DefaultRectangularDom_1_int64_t_one newRectangularDom2(_distribution_DefaultDist * this24,
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                              chpl_bool definedConst,
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                              int64_t _ln,
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                              int32_t _fn) {
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _tuple_1_star_range_int64_t_both_one ranges;
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp;
#line 111 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 111 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _tuple_1_star_range_int64_t_both_one coerce_tmp2;
#line 111 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp2;
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _defaultOf2(&ret_tmp);
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  *(ranges + INT64(0)) = *(ret_tmp + INT64(0));
#line 111 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl___COLON_30(&ranges, &ret_tmp2);
#line 111 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  *(coerce_tmp2 + INT64(0)) = *(ret_tmp2 + INT64(0));
#line 111 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = newRectangularDom(this24, &coerce_tmp2, definedConst, _ln, _fn);
#line 111 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl__autoDestroy2(&coerce_tmp2);
#line 111 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl__autoDestroy2(&ranges);
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp8;
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:164 */
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void init12(BaseDist this24,
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int64_t _doms_containing_dist,
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   chpl_LocalSpinlock * _domsLock,
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   chpl_bool _free_when_no_doms,
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int64_t pid,
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int64_t _ln,
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int32_t _fn) {
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_LocalSpinlock _formal_tmp__domsLock;
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  RootClass super_tmp = NULL;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _formal_tmp__domsLock = *(_domsLock);
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  super_tmp = &((this24)->super);
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  init5(super_tmp);
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(((RootClass)(this24))))->chpl__cid = chpl__cid_RootClass;
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->_doms_containing_dist = _doms_containing_dist;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->_domsLock = _formal_tmp__domsLock;
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->_free_when_no_doms = _free_when_no_doms;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->pid = pid;
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_BaseDist;
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:165 */
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static int64_t * chpl_get_BaseDist__doms_containing_dist(BaseDist this24,
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                         int64_t _ln,
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                         int32_t _fn) {
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = &((this24)->_doms_containing_dist);
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp8;
#line 165 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:166 */
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_LocalSpinlock * chpl_get_BaseDist__domsLock(BaseDist this24,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                        int64_t _ln,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                        int32_t _fn) {
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_LocalSpinlock call_tmp8 = NULL;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = &((this24)->_domsLock);
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp8;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:167 */
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_bool * chpl_get_BaseDist__free_when_no_doms(BaseDist this24,
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                        int64_t _ln,
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                        int32_t _fn) {
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = &((this24)->_free_when_no_doms);
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp8;
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:170 */
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void deinit5(BaseDist this24,
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                    int64_t _ln,
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                    int32_t _fn) {
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_LocalSpinlock _field_destructor_tmp_ = NULL;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _field_destructor_tmp_ = &((this24)->_domsLock);
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl__auto_destroy_chpl_LocalSpinlock(_field_destructor_tmp_);
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl__auto_destroy_RootClass(((RootClass)(this24)), _ln, _fn);
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:175 */
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static BaseDist remove2(BaseDist this24,
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                        int64_t _ln,
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                        int32_t _fn) {
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDist ret = NULL;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool free_dist;
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp8;
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  int64_t dom_count;
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_LocalSpinlock call_tmp9 = NULL;
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_bool call_tmp10 = NULL;
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_LocalSpinlock call_tmp12 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp13;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDist call_tmp14 = NULL;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  free_dist = UINT8(false);
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = ((chpl_bool(*)(BaseDist))chpl_vmtable[((INT64(6) * ((RootClass)(this24))->chpl__cid) + INT64(1))])(this24);
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  if (call_tmp8) /* ZLINE: 177 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 179 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    dom_count = INT64(-1);
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp9 = chpl_get_BaseDist__domsLock(this24, _ln, _fn);
#line 181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    lock(call_tmp9, _ln, _fn);
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp10 = chpl_get_BaseDist__free_when_no_doms(this24, _ln, _fn);
#line 184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl___ASSIGN_(call_tmp10, UINT8(true));
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp11 = chpl_get_BaseDist__doms_containing_dist(this24, _ln, _fn);
#line 185 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl___ASSIGN_3(&dom_count, *(call_tmp11));
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp12 = chpl_get_BaseDist__domsLock(this24, _ln, _fn);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    unlock(call_tmp12, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp13 = chpl___EQUALS_3(dom_count, INT64(0));
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    if (call_tmp13) /* ZLINE: 188 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    {
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl___ASSIGN_(&free_dist, UINT8(true));
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    }
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  } else /* ZLINE: 191 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 194 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl___ASSIGN_(&free_dist, UINT8(true));
#line 194 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 196 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  if (free_dist) /* ZLINE: 196 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 196 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp14 = _to_unmanaged48(this24);
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    ret = call_tmp14;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    goto _end_remove;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  } else /* ZLINE: 196 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    ret = ((BaseDist)(nil));
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    goto _end_remove;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _end_remove:;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return ret;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:203 */
#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_bool remove_dom(BaseDist this24,
#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                            BaseDom x2,
#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                            int64_t _ln,
#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                            int32_t _fn) {
#line 204 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  int64_t count;
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  int64_t cnt;
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_LocalSpinlock call_tmp8 = NULL;
#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_bool call_tmp11 = NULL;
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp12;
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_LocalSpinlock call_tmp13 = NULL;
#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp14;
#line 204 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  count = INT64(-1);
#line 206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  cnt = INT64(-1);
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = chpl_get_BaseDist__domsLock(this24, _ln, _fn);
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  lock(call_tmp8, _ln, _fn);
#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp9 = chpl_get_BaseDist__doms_containing_dist(this24, _ln, _fn);
#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl___HYPHEN__ASSIGN_(call_tmp9, INT64(1));
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp10 = chpl_get_BaseDist__doms_containing_dist(this24, _ln, _fn);
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl___ASSIGN_3(&cnt, *(call_tmp10));
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp11 = chpl_get_BaseDist__free_when_no_doms(this24, _ln, _fn);
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp12 = chpl___EXCLAMATION_(*(call_tmp11));
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  if (call_tmp12) /* ZLINE: 213 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl___PLUS__ASSIGN_(&cnt, INT64(1));
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp13 = chpl_get_BaseDist__domsLock(this24, _ln, _fn);
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  unlock(call_tmp13, _ln, _fn);
#line 218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl___ASSIGN_3(&count, cnt);
#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp14 = chpl___EQUALS_3(count, INT64(0));
#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp14;
#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:266 */
#line 266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void dsiDestroyDist(BaseDist this24) {
#line 266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:273 */
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_bool dsiTrackDomains(BaseDist this24) {
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return UINT8(true);
#line 273 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:293 */
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static BaseArr * chpl_get_BaseDom__arrs_head(BaseDom this24,
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                             int64_t _ln,
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                             int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp8 = NULL;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = &((this24)->_arrs_head);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:294 */
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static int64_t * chpl_get_BaseDom__arrs_containing_dom(BaseDom this24,
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                       int64_t _ln,
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                       int32_t _fn) {
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = &((this24)->_arrs_containing_dom);
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp8;
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:297 */
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_LocalSpinlock * chpl_get_BaseDom__arrsLock(BaseDom this24,
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                       int64_t _ln,
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                       int32_t _fn) {
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_LocalSpinlock call_tmp8 = NULL;
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = &((this24)->_arrsLock);
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp8;
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:298 */
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_bool * chpl_get_BaseDom__free_when_no_arrs(BaseDom this24,
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                       int64_t _ln,
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                       int32_t _fn) {
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = &((this24)->_free_when_no_arrs);
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp8;
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:301 */
#line 301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_bool * chpl_get_BaseDom_definedConst(BaseDom this24,
#line 301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                 int64_t _ln,
#line 301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                 int32_t _fn) {
#line 301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = &((this24)->definedConst);
#line 301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp8;
#line 301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:303 */
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void init13(BaseDom this24,
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int64_t _ln,
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int32_t _fn) {
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  RootClass super_tmp = NULL;
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr _arrs_head = NULL;
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_LocalSpinlock _arrsLock;
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  super_tmp = &((this24)->super);
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  init5(super_tmp);
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(((RootClass)(this24))))->chpl__cid = chpl__cid_RootClass;
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _arrs_head = ((BaseArr)(nil));
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->_arrs_head = _arrs_head;
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->_arrs_containing_dom = INT64(0);
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  init34(&_arrsLock);
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->_arrsLock = _arrsLock;
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->_free_when_no_arrs = UINT8(false);
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->pid = INT64(-1);
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->definedConst = UINT8(false);
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_BaseDom;
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:306 */
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void deinit6(BaseDom this24,
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                    int64_t _ln,
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                    int32_t _fn) {
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_LocalSpinlock _field_destructor_tmp_ = NULL;
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _field_destructor_tmp_ = &((this24)->_arrsLock);
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl__auto_destroy_chpl_LocalSpinlock(_field_destructor_tmp_);
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl__auto_destroy_RootClass(((RootClass)(this24)), _ln, _fn);
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:309 */
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static _ic__arrs_BaseDom _getIterator2(_ir__arrs_BaseDom * ir,
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                       int64_t _ln,
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                       int32_t _fn) {
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ic__arrs_BaseDom _ic_ = NULL;
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  c_ptr_void cast_tmp = NULL;
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom T = NULL;
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic__arrs_BaseDom_object), INT16(41), _ln, _fn);
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ic_ = ((_ic__arrs_BaseDom)(cast_tmp));
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic__arrs_BaseDom;
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (_ic_)->more = INT64(1);
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  T = (ir)->F0_this;
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (_ic_)->F0_this = T;
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return _ic_;
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:309 */
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void _arrs(BaseDom this24,
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                  _ir__arrs_BaseDom * _retArg) {
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (_retArg)->F0_this = this24;
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 309 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:317 */
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static BaseDist dsiMyDist(BaseDom this24,
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                          int64_t _ln,
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                          int32_t _fn) {
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDist ret = NULL;
#line 318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  halt(&_str_literal_2178, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return ret;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 359 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:359 */
#line 359 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_bool trackArrays(BaseDom this24,
#line 359 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                             int64_t _ln,
#line 359 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                             int32_t _fn) {
#line 360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp9;
#line 360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = chpl_get_BaseDom_definedConst(this24, _ln, _fn);
#line 360 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp9 = chpl___EXCLAMATION_(*(call_tmp8));
#line 359 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp9;
#line 359 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:367 */
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static _tuple_2_BaseDom_BaseDist remove3(BaseDom this24,
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                         int64_t _ln,
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                         int32_t _fn) {
#line 371 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDist call_tmp8 = NULL;
#line 371 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp9;
#line 371 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp10;
#line 371 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp11;
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom ret_dom = NULL;
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom init_coerce_tmp = NULL;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDist ret_dist = NULL;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDist init_coerce_tmp2 = NULL;
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDist call_tmp12 = NULL;
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDist dist = NULL;
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool free_dom;
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool remove_dist;
#line 380 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  int64_t arr_count;
#line 384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_LocalSpinlock call_tmp13 = NULL;
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_int64_t call_tmp14 = NULL;
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_bool call_tmp15 = NULL;
#line 387 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_LocalSpinlock call_tmp16 = NULL;
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp17;
#line 393 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp18;
#line 396 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom call_tmp19 = NULL;
#line 396 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp20;
#line 401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom call_tmp21 = NULL;
#line 404 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _tuple_2_BaseDom_BaseDist call_tmp22;
#line 371 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 371 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = ((BaseDist(*)(BaseDom,
#line 371 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                 int64_t,
#line 371 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                 int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(this24))->chpl__cid) + INT64(2))])(this24, _ln, _fn);
#line 371 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 371 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp9 = ((chpl_bool(*)(BaseDist))chpl_vmtable[((INT64(6) * ((RootClass)(call_tmp8))->chpl__cid) + INT64(1))])(call_tmp8);
#line 371 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 371 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp10 = ((chpl_bool(*)(BaseDom))chpl_vmtable[((INT64(6) * ((RootClass)(this24))->chpl__cid) + INT64(1))])(this24);
#line 371 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp11 = chpl___EQUALS_(call_tmp9, call_tmp10);
#line 371 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  assert2(call_tmp11, _ln, _fn);
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  init_coerce_tmp = ((BaseDom)(nil));
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ret_dom = init_coerce_tmp;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  init_coerce_tmp2 = ((BaseDist)(nil));
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ret_dist = init_coerce_tmp2;
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp12 = ((BaseDist(*)(BaseDom,
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                  int64_t,
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                  int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(this24))->chpl__cid) + INT64(2))])(this24, _ln, _fn);
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  dist = call_tmp12;
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  free_dom = UINT8(false);
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  remove_dist = UINT8(false);
#line 380 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  arr_count = INT64(0);
#line 384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp13 = chpl_get_BaseDom__arrsLock(this24, _ln, _fn);
#line 384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  lock(call_tmp13, _ln, _fn);
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp14 = chpl_get_BaseDom__arrs_containing_dom(this24, _ln, _fn);
#line 385 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl___ASSIGN_3(&arr_count, *(call_tmp14));
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp15 = chpl_get_BaseDom__free_when_no_arrs(this24, _ln, _fn);
#line 386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl___ASSIGN_(call_tmp15, UINT8(true));
#line 387 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 387 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp16 = chpl_get_BaseDom__arrsLock(this24, _ln, _fn);
#line 387 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  unlock(call_tmp16, _ln, _fn);
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp17 = chpl___EQUALS_3(arr_count, INT64(0));
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  if (call_tmp17) /* ZLINE: 390 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 390 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 391 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl___ASSIGN_(&free_dom, UINT8(true));
#line 393 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 393 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp18 = ((chpl_bool(*)(BaseDom))chpl_vmtable[((INT64(6) * ((RootClass)(this24))->chpl__cid) + INT64(1))])(this24);
#line 393 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    if (call_tmp18) /* ZLINE: 393 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 393 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    {
#line 396 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      call_tmp19 = _to_unmanaged8(this24);
#line 396 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl_check_nil(call_tmp12, _ln, _fn);
#line 396 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      call_tmp20 = remove_dom(call_tmp12, call_tmp19, _ln, _fn);
#line 396 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl___ASSIGN_(&remove_dist, call_tmp20);
#line 396 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    }
#line 396 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 400 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  if (free_dom) /* ZLINE: 400 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 400 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp21 = _to_unmanaged8(this24);
#line 401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl___ASSIGN_49(&ret_dom, call_tmp21);
#line 401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  if (remove_dist) /* ZLINE: 402 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 403 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl___ASSIGN_40(&ret_dist, dist);
#line 403 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 404 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp22 = _build_tuple8(ret_dom, ret_dist);
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp22;
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:411 */
#line 411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_bool remove_arr(BaseDom this24,
#line 411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                            BaseArr x2,
#line 411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                            int64_t _ln,
#line 411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                            int32_t _fn) {
#line 412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  int64_t count;
#line 414 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  int64_t cnt;
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_LocalSpinlock call_tmp8 = NULL;
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp10;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp11 = NULL;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp12;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp13 = NULL;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp14 = NULL;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp15 = NULL;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr coerce_tmp2 = NULL;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr ifvar_borrow = NULL;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp16;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp17 = NULL;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp18 = NULL;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr coerce_tmp3 = NULL;
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp19 = NULL;
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr coerce_tmp4 = NULL;
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr ifvar_borrow2 = NULL;
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp20;
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp21 = NULL;
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp22 = NULL;
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr coerce_tmp5 = NULL;
#line 422 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_int64_t call_tmp23 = NULL;
#line 424 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_bool call_tmp24 = NULL;
#line 424 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp25;
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_LocalSpinlock call_tmp26 = NULL;
#line 429 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp27;
#line 412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  count = INT64(-1);
#line 414 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  cnt = INT64(-1);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = chpl_get_BaseDom__arrsLock(this24, _ln, _fn);
#line 415 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  lock(call_tmp8, _ln, _fn);
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp9 = chpl_get_BaseDom__arrs_containing_dom(this24, _ln, _fn);
#line 416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl___HYPHEN__ASSIGN_(call_tmp9, INT64(1));
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp10 = trackArrays(this24, _ln, _fn);
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  if (call_tmp10) /* ZLINE: 417 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp11 = chpl_get_BaseDom__arrs_head(this24, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp12 = chpl___EQUALS_7(((RootClass)(*(call_tmp11))), ((RootClass)(x2)));
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    if (call_tmp12) /* ZLINE: 418 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    {
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      call_tmp13 = chpl_get_BaseDom__arrs_head(this24, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl_check_nil(x2, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      call_tmp14 = chpl_get_BaseArr_next(x2, _ln, _fn);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl___ASSIGN_50(call_tmp13, *(call_tmp14));
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    }
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    coerce_tmp2 = x2;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp15 = chpl_get_BaseArr_next(coerce_tmp2, _ln, _fn);
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    ifvar_borrow = chpl_checkBorrowIfVar4(*(call_tmp15));
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp16 = _cond_test5(ifvar_borrow, _ln, _fn);
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    if (call_tmp16) /* ZLINE: 419 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    {
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl_check_nil(ifvar_borrow, _ln, _fn);
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      call_tmp17 = chpl_get_BaseArr_prev(ifvar_borrow, _ln, _fn);
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      coerce_tmp3 = x2;
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      call_tmp18 = chpl_get_BaseArr_prev(coerce_tmp3, _ln, _fn);
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl___ASSIGN_50(call_tmp17, *(call_tmp18));
#line 419 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    }
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    coerce_tmp4 = x2;
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp19 = chpl_get_BaseArr_prev(coerce_tmp4, _ln, _fn);
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    ifvar_borrow2 = chpl_checkBorrowIfVar4(*(call_tmp19));
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp20 = _cond_test5(ifvar_borrow2, _ln, _fn);
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    if (call_tmp20) /* ZLINE: 420 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    {
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl_check_nil(ifvar_borrow2, _ln, _fn);
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      call_tmp21 = chpl_get_BaseArr_next(ifvar_borrow2, _ln, _fn);
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      coerce_tmp5 = x2;
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl_check_nil(coerce_tmp5, _ln, _fn);
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      call_tmp22 = chpl_get_BaseArr_next(coerce_tmp5, _ln, _fn);
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl___ASSIGN_50(call_tmp21, *(call_tmp22));
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    }
#line 420 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 422 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 422 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp23 = chpl_get_BaseDom__arrs_containing_dom(this24, _ln, _fn);
#line 422 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl___ASSIGN_3(&cnt, *(call_tmp23));
#line 424 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 424 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp24 = chpl_get_BaseDom__free_when_no_arrs(this24, _ln, _fn);
#line 424 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp25 = chpl___EXCLAMATION_(*(call_tmp24));
#line 424 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  if (call_tmp25) /* ZLINE: 424 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 424 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 425 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl___PLUS__ASSIGN_(&cnt, INT64(1));
#line 425 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp26 = chpl_get_BaseDom__arrsLock(this24, _ln, _fn);
#line 426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  unlock(call_tmp26, _ln, _fn);
#line 427 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl___ASSIGN_3(&count, cnt);
#line 429 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp27 = chpl___EQUALS_3(count, INT64(0));
#line 411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp27;
#line 411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 436 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:436 */
#line 436 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void add_arr(BaseDom this24,
#line 436 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                    BaseArr x2,
#line 436 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                    int64_t _ln,
#line 436 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                    int32_t _fn) {
#line 440 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_LocalSpinlock call_tmp8 = NULL;
#line 441 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp10;
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool T;
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp11 = NULL;
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool T2;
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp12 = NULL;
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr coerce_tmp2 = NULL;
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp13 = NULL;
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr ifvar_borrow = NULL;
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp14;
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp15 = NULL;
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr coerce_tmp3 = NULL;
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp16 = NULL;
#line 448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp17 = NULL;
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_LocalSpinlock call_tmp18 = NULL;
#line 440 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 440 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = chpl_get_BaseDom__arrsLock(this24, _ln, _fn);
#line 440 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  lock(call_tmp8, _ln, _fn);
#line 441 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 441 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp9 = chpl_get_BaseDom__arrs_containing_dom(this24, _ln, _fn);
#line 441 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl___PLUS__ASSIGN_(call_tmp9, INT64(1));
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp10 = trackArrays(this24, _ln, _fn);
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  if (call_tmp10) /* ZLINE: 442 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_check_nil(x2, _ln, _fn);
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp11 = chpl_get_BaseArr_prev(x2, _ln, _fn);
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    T = chpl___EQUALS_8(((RootClass)(*(call_tmp11))), nil);
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    if (T) /* ZLINE: 443 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    {
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      coerce_tmp2 = x2;
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      call_tmp12 = chpl_get_BaseArr_next(coerce_tmp2, _ln, _fn);
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      T2 = chpl___EQUALS_8(((RootClass)(*(call_tmp12))), nil);
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    } else /* ZLINE: 443 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    {
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      T2 = UINT8(false);
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    }
#line 443 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    assert2(T2, _ln, _fn);
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp13 = chpl_get_BaseDom__arrs_head(this24, _ln, _fn);
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    ifvar_borrow = chpl_checkBorrowIfVar4(*(call_tmp13));
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp14 = _cond_test5(ifvar_borrow, _ln, _fn);
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    if (call_tmp14) /* ZLINE: 444 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    {
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      coerce_tmp3 = x2;
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      call_tmp15 = chpl_get_BaseArr_next(coerce_tmp3, _ln, _fn);
#line 445 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl___ASSIGN_50(call_tmp15, ifvar_borrow);
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl_check_nil(ifvar_borrow, _ln, _fn);
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      call_tmp16 = chpl_get_BaseArr_prev(ifvar_borrow, _ln, _fn);
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl___ASSIGN_50(call_tmp16, x2);
#line 446 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    }
#line 448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp17 = chpl_get_BaseDom__arrs_head(this24, _ln, _fn);
#line 448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl___ASSIGN_50(call_tmp17, x2);
#line 448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp18 = chpl_get_BaseDom__arrsLock(this24, _ln, _fn);
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  unlock(call_tmp18, _ln, _fn);
#line 436 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 436 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 436 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:436 */
#line 436 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_bool add_arr_default_locking(BaseDom this24) {
#line 436 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return UINT8(true);
#line 436 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:437 */
#line 437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_bool add_arr_default_addToList(BaseDom this24) {
#line 437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return UINT8(true);
#line 437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:490 */
#line 490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_bool dsiLinksDistribution(BaseDom this24) {
#line 490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return UINT8(true);
#line 490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:493 */
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void dsiDestroyDom(BaseDom this24) {
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:542 */
#line 542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void init14(BaseRectangularDom_1_int64_t_one this24,
#line 542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int64_t _ln,
#line 542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int32_t _fn) {
#line 542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom super_tmp = NULL;
#line 542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  super_tmp = &((this24)->super);
#line 542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  init13(super_tmp, _ln, _fn);
#line 542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(((BaseDom)(this24))))->chpl__cid = chpl__cid_BaseDom;
#line 542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_BaseRectangularDom_1_int64_t_one;
#line 542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:557 */
#line 557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void deinit7(BaseRectangularDom_1_int64_t_one this24,
#line 557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                    int64_t _ln,
#line 557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                    int32_t _fn) {
#line 557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  deinit6(((BaseDom)(this24)), _ln, _fn);
#line 557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:875 */
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void init15(BaseArr this24,
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   BaseArr prev,
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   BaseArr next,
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int64_t pid,
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   chpl_bool _decEltRefCounts,
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   chpl_ddataResizePolicy _resizePolicy,
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int64_t _ln,
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int32_t _fn) {
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  RootClass super_tmp = NULL;
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  super_tmp = &((this24)->super);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  init5(super_tmp);
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(((RootClass)(this24))))->chpl__cid = chpl__cid_RootClass;
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->prev = prev;
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->next = next;
#line 879 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 879 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->pid = pid;
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->_decEltRefCounts = _decEltRefCounts;
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  (this24)->_resizePolicy = _resizePolicy;
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_BaseArr;
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 875 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:876 */
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static BaseArr init_default_prev(int64_t _ln,
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                 int32_t _fn) {
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr prev = NULL;
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  prev = ((BaseArr)(nil));
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return prev;
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:876 */
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static BaseArr init_default_prev3(int64_t _ln,
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                  int32_t _fn) {
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr prev = NULL;
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  prev = ((BaseArr)(nil));
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return prev;
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:876 */
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static BaseArr * chpl_get_BaseArr_prev(BaseArr this24,
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                       int64_t _ln,
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                       int32_t _fn) {
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp8 = NULL;
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = &((this24)->prev);
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp8;
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:876 */
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static BaseArr init_default_prev2(int64_t _ln,
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                  int32_t _fn) {
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr prev = NULL;
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  prev = ((BaseArr)(nil));
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return prev;
#line 876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:877 */
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static BaseArr init_default_next3(int64_t _ln,
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                  int32_t _fn) {
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr next = NULL;
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  next = ((BaseArr)(nil));
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return next;
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:877 */
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static BaseArr init_default_next(int64_t _ln,
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                 int32_t _fn) {
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr next = NULL;
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  next = ((BaseArr)(nil));
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return next;
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:877 */
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static BaseArr * chpl_get_BaseArr_next(BaseArr this24,
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                       int64_t _ln,
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                       int32_t _fn) {
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp8 = NULL;
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = &((this24)->next);
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp8;
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:877 */
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static BaseArr init_default_next2(int64_t _ln,
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                  int32_t _fn) {
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr next = NULL;
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  next = ((BaseArr)(nil));
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return next;
#line 877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 879 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:879 */
#line 879 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static int64_t init_default_pid(void) {
#line 879 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return INT64(-1);
#line 879 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 879 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:879 */
#line 879 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static int64_t init_default_pid3(void) {
#line 879 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return INT64(-1);
#line 879 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 879 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:879 */
#line 879 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static int64_t init_default_pid2(void) {
#line 879 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return INT64(-1);
#line 879 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:880 */
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_bool init_default__decEltRefCounts2(void) {
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return UINT8(false);
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:880 */
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_bool init_default__decEltRefCounts(void) {
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return UINT8(false);
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:880 */
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_bool init_default__decEltRefCounts3(void) {
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return UINT8(false);
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:880 */
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_bool * chpl_get_BaseArr__decEltRefCounts(BaseArr this24,
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                     int64_t _ln,
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                     int32_t _fn) {
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = &((this24)->_decEltRefCounts);
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp8;
#line 880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:881 */
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_ddataResizePolicy init_default__resizePolicy2(void) {
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_ddataResizePolicy _resizePolicy;
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _resizePolicy = chpl_ddataResizePolicy_normalInit;
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return _resizePolicy;
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:881 */
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_ddataResizePolicy * chpl_get_BaseArr__resizePolicy(BaseArr this24,
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                               int64_t _ln,
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                                               int32_t _fn) {
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_ddataResizePolicy call_tmp8 = NULL;
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = &((this24)->_resizePolicy);
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp8;
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:881 */
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_ddataResizePolicy init_default__resizePolicy(void) {
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_ddataResizePolicy _resizePolicy;
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _resizePolicy = chpl_ddataResizePolicy_normalInit;
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return _resizePolicy;
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:881 */
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_ddataResizePolicy init_default__resizePolicy3(void) {
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_ddataResizePolicy _resizePolicy;
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _resizePolicy = chpl_ddataResizePolicy_normalInit;
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return _resizePolicy;
#line 881 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 899 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:899 */
#line 899 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void deinit8(BaseArr this24,
#line 899 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                    int64_t _ln,
#line 899 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                    int32_t _fn) {
#line 899 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl__auto_destroy_RootClass(((RootClass)(this24)), _ln, _fn);
#line 899 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 899 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 904 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:904 */
#line 904 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static BaseDom dsiGetBaseDom(BaseArr this24,
#line 904 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                             int64_t _ln,
#line 904 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                             int32_t _fn) {
#line 904 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom ret = NULL;
#line 905 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  halt(&_str_literal_2206, _ln, _fn);
#line 904 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return ret;
#line 904 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 916 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:916 */
#line 916 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static _tuple_2_BaseArr_BaseDom remove4(BaseArr this24,
#line 916 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                        int64_t _ln,
#line 916 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                        int32_t _fn) {
#line 917 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr ret_arr = NULL;
#line 918 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom ret_dom = NULL;
#line 918 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom init_coerce_tmp = NULL;
#line 919 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool rm_dom;
#line 921 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom call_tmp8 = NULL;
#line 921 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom dom = NULL;
#line 924 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr call_tmp9 = NULL;
#line 924 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp10;
#line 929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _tuple_2_BaseArr_BaseDom call_tmp11;
#line 917 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ret_arr = this24;
#line 918 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  init_coerce_tmp = ((BaseDom)(nil));
#line 918 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ret_dom = init_coerce_tmp;
#line 919 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  rm_dom = UINT8(false);
#line 921 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 921 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = ((BaseDom(*)(BaseArr,
#line 921 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                 int64_t,
#line 921 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                 int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(this24))->chpl__cid) + INT64(2))])(this24, _ln, _fn);
#line 921 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  dom = call_tmp8;
#line 924 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp9 = _to_unmanaged34(this24);
#line 924 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 924 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp10 = remove_arr(call_tmp8, call_tmp9, _ln, _fn);
#line 924 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl___ASSIGN_(&rm_dom, call_tmp10);
#line 926 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  if (rm_dom) /* ZLINE: 926 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 926 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 927 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl___ASSIGN_49(&ret_dom, dom);
#line 927 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp11 = _build_tuple7(ret_arr, ret_dom);
#line 916 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return call_tmp11;
#line 916 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 960 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:960 */
#line 960 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void dsiDestroyArr(BaseArr this24,
#line 960 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                          chpl_bool deinitElts,
#line 960 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                          int64_t _ln,
#line 960 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                          int32_t _fn) {
#line 961 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  halt(&_str_literal_2214, _ln, _fn);
#line 960 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 960 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1040 */
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void decEltCountsIfNeeded(BaseArr this24,
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                 int64_t _ln,
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                 int32_t _fn) {
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1077 */
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void init16(BaseArrOverRectangularDom_1_int64_t_one this24,
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   BaseArr prev,
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   BaseArr next,
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int64_t pid,
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   chpl_bool _decEltRefCounts,
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   chpl_ddataResizePolicy _resizePolicy,
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int64_t _ln,
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int32_t _fn) {
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr super_tmp = NULL;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  super_tmp = &((this24)->super);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  init15(super_tmp, prev, next, pid, _decEltRefCounts, _resizePolicy, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(((BaseArr)(this24))))->chpl__cid = chpl__cid_BaseArr;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_BaseArrOverRectangularDom_1_int64_t_one;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1089 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1089 */
#line 1089 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void dsiReallocate(BaseArrOverRectangularDom_1_int64_t_one this24,
#line 1089 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                          _tuple_1_star_range_int64_t_both_one * bounds,
#line 1089 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                          int64_t _ln,
#line 1089 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                          int32_t _fn) {
#line 1090 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  halt(&_str_literal_2215, _ln, _fn);
#line 1089 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1089 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1093 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1093 */
#line 1093 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void dsiPostReallocate(BaseArrOverRectangularDom_1_int64_t_one this24) {
#line 1093 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1093 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1096 */
#line 1096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void deinit9(BaseArrOverRectangularDom_1_int64_t_one this24,
#line 1096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                    int64_t _ln,
#line 1096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                    int32_t _fn) {
#line 1096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  deinit8(((BaseArr)(this24)), _ln, _fn);
#line 1096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1096 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1102 */
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void init19(BaseRectangularArr_1_int64_t_one_locale this24,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   BaseArr prev,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   BaseArr next,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int64_t pid,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   chpl_bool _decEltRefCounts,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   chpl_ddataResizePolicy _resizePolicy,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int64_t _ln,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int32_t _fn) {
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArrOverRectangularDom_1_int64_t_one super_tmp = NULL;
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  super_tmp = &((this24)->super);
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  init16(super_tmp, prev, next, pid, _decEltRefCounts, _resizePolicy, _ln, _fn);
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(((BaseArrOverRectangularDom_1_int64_t_one)(this24))))->chpl__cid = chpl__cid_BaseArrOverRectangularDom_1_int64_t_one;
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_BaseRectangularArr_1_int64_t_one_locale;
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1102 */
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void init18(BaseRectangularArr_1_int64_t_one_int64_t this24,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   BaseArr prev,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   BaseArr next,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int64_t pid,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   chpl_bool _decEltRefCounts,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   chpl_ddataResizePolicy _resizePolicy,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int64_t _ln,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int32_t _fn) {
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArrOverRectangularDom_1_int64_t_one super_tmp = NULL;
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  super_tmp = &((this24)->super);
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  init16(super_tmp, prev, next, pid, _decEltRefCounts, _resizePolicy, _ln, _fn);
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(((BaseArrOverRectangularDom_1_int64_t_one)(this24))))->chpl__cid = chpl__cid_BaseArrOverRectangularDom_1_int64_t_one;
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_BaseRectangularArr_1_int64_t_one_int64_t;
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1102 */
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void init17(BaseRectangularArr_1_int64_t_one_uint64_t this24,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   BaseArr prev,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   BaseArr next,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int64_t pid,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   chpl_bool _decEltRefCounts,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   chpl_ddataResizePolicy _resizePolicy,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int64_t _ln,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                   int32_t _fn) {
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArrOverRectangularDom_1_int64_t_one super_tmp = NULL;
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  super_tmp = &((this24)->super);
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  init16(super_tmp, prev, next, pid, _decEltRefCounts, _resizePolicy, _ln, _fn);
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(((BaseArrOverRectangularDom_1_int64_t_one)(this24))))->chpl__cid = chpl__cid_BaseArrOverRectangularDom_1_int64_t_one;
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_BaseRectangularArr_1_int64_t_one_uint64_t;
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1106 */
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void deinit12(BaseRectangularArr_1_int64_t_one_uint64_t this24,
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                     int64_t _ln,
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                     int32_t _fn) {
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  deinit9(((BaseArrOverRectangularDom_1_int64_t_one)(this24)), _ln, _fn);
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1106 */
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void deinit10(BaseRectangularArr_1_int64_t_one_int64_t this24,
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                     int64_t _ln,
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                     int32_t _fn) {
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  deinit9(((BaseArrOverRectangularDom_1_int64_t_one)(this24)), _ln, _fn);
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1106 */
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void deinit11(BaseRectangularArr_1_int64_t_one_locale this24,
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                     int64_t _ln,
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                     int32_t _fn) {
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  deinit9(((BaseArrOverRectangularDom_1_int64_t_one)(this24)), _ln, _fn);
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1126 */
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void decEltCountsIfNeeded3(BaseRectangularArr_1_int64_t_one_uint64_t this24,
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                  int64_t _ln,
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                  int32_t _fn) {
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr coerce_tmp2 = NULL;
#line 1129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseRectangularArr_1_int64_t_one_uint64_t call_tmp9 = NULL;
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  coerce_tmp2 = ((BaseArr)(this24));
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = chpl_get_BaseArr__decEltRefCounts(coerce_tmp2, _ln, _fn);
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  if (*(call_tmp8)) /* ZLINE: 1127 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 1129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp9 = _to_unmanaged15(this24);
#line 1129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_decRefCountsForDomainsInArrayEltTypes(((BaseArr)(call_tmp9)));
#line 1129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1126 */
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void decEltCountsIfNeeded2(BaseRectangularArr_1_int64_t_one_int64_t this24,
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                  int64_t _ln,
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                  int32_t _fn) {
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr coerce_tmp2 = NULL;
#line 1129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseRectangularArr_1_int64_t_one_int64_t call_tmp9 = NULL;
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  coerce_tmp2 = ((BaseArr)(this24));
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = chpl_get_BaseArr__decEltRefCounts(coerce_tmp2, _ln, _fn);
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  if (*(call_tmp8)) /* ZLINE: 1127 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 1129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp9 = _to_unmanaged11(this24);
#line 1129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_decRefCountsForDomainsInArrayEltTypes2(((BaseArr)(call_tmp9)));
#line 1129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1126 */
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void decEltCountsIfNeeded4(BaseRectangularArr_1_int64_t_one_locale this24,
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                  int64_t _ln,
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                  int32_t _fn) {
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr coerce_tmp2 = NULL;
#line 1129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseRectangularArr_1_int64_t_one_locale call_tmp9 = NULL;
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  coerce_tmp2 = ((BaseArr)(this24));
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = chpl_get_BaseArr__decEltRefCounts(coerce_tmp2, _ln, _fn);
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  if (*(call_tmp8)) /* ZLINE: 1127 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 1127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  {
#line 1129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp9 = _to_unmanaged9(this24);
#line 1129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_decRefCountsForDomainsInArrayEltTypes3(((BaseArr)(call_tmp9)));
#line 1129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1247 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1247 */
#line 1247 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void _delete_dist(BaseDist dist,
#line 1247 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                         chpl_bool privatized,
#line 1247 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                         int64_t _ln,
#line 1247 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                         int32_t _fn) {
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(dist, _ln, _fn);
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  dsiDestroyDist(dist);
#line 1254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl__delete7(dist, _ln, _fn);
#line 1247 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1247 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1257 */
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void _delete_dom2(BaseDom dom,
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                         chpl_bool privatized,
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                         int64_t _ln,
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                         int32_t _fn) {
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(dom, _ln, _fn);
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  dsiDestroyDom(dom);
#line 1265 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl__delete19(dom, _ln, _fn);
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1257 */
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void _delete_dom(DefaultRectangularDom_1_int64_t_one dom,
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                        chpl_bool privatized,
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                        int64_t _ln,
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                        int32_t _fn) {
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom coerce_tmp2 = NULL;
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  coerce_tmp2 = ((BaseDom)(dom));
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  dsiDestroyDom(coerce_tmp2);
#line 1265 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl__delete35(dom, _ln, _fn);
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1268 */
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void _delete_arr(BaseArr arr,
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                        chpl_bool deinitElts,
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                        int64_t _ln,
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                        int32_t _fn) {
#line 1278 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr coerce_tmp2 = NULL;
#line 1271 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(arr, _ln, _fn);
#line 1271 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((void(*)(BaseArr,
#line 1271 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
     chpl_bool,
#line 1271 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
     int64_t,
#line 1271 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
     int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(arr))->chpl__cid) + INT64(3))])(arr, deinitElts, _ln, _fn);
#line 1278 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  coerce_tmp2 = arr;
#line 1278 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1278 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ((void(*)(BaseArr,
#line 1278 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
     int64_t,
#line 1278 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
     int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(coerce_tmp2))->chpl__cid) + INT64(1))])(coerce_tmp2, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl__delete24(arr, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1290 */
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void castIndices(_tuple_1_star_range_int64_t_both_one * from,
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                        DefaultRectangularDom_1_int64_t_one lhs,
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                        _tuple_1_star_range_int64_t_both_one * _retArg) {
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _tuple_1_star_range_int64_t_both_one ret;
#line 1292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  compilerAssert();
#line 1296 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  *(ret + INT64(0)) = *(*(from) + INT64(0));
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  *(*(_retArg) + INT64(0)) = *(ret + INT64(0));
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 1310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:1310 */
#line 1310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static void chpl_assignDomainWithGetSetIndices(DefaultRectangularDom_1_int64_t_one lhs,
#line 1310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                               _domain_DefaultRectangularDom_1_int64_t_one * rhs,
#line 1310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                               int64_t _ln,
#line 1310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
                                               int32_t _fn) {
#line 1313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp;
#line 1313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _tuple_1_star_range_int64_t_both_one rhsInds;
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ic__arrs_BaseDom _iterator = NULL;
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ir__arrs_BaseDom call_tmp8;
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom coerce_tmp2 = NULL;
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ir__arrs_BaseDom ret_tmp2;
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp9 = NULL;
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom this24 = NULL;
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr tmp = NULL;
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr coerce_tmp3 = NULL;
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool T;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr call_tmp10 = NULL;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArrOverRectangularDom_1_int64_t_one call_tmp11 = NULL;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArrOverRectangularDom_1_int64_t_one ifvar_borrow = NULL;
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool call_tmp12;
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _tuple_1_star_range_int64_t_both_one call_tmp13;
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _tuple_1_star_range_int64_t_both_one coerce_tmp4;
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp3;
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp4;
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr call_tmp14 = NULL;
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp15 = NULL;
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _tuple_1_star_range_int64_t_both_one coerce_tmp5;
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp5;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ic__arrs_BaseDom _iterator2 = NULL;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ir__arrs_BaseDom call_tmp16;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom coerce_tmp6 = NULL;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ir__arrs_BaseDom ret_tmp6;
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp17 = NULL;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseDom this25 = NULL;
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr tmp2 = NULL;
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr coerce_tmp7 = NULL;
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_bool T2;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr call_tmp18 = NULL;
#line 1331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArrOverRectangularDom_1_int64_t_one call_tmp19 = NULL;
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArrOverRectangularDom_1_int64_t_one call_tmp20 = NULL;
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  BaseArr call_tmp21 = NULL;
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _ref_BaseArr call_tmp22 = NULL;
#line 1313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  getIndices(rhs, &ret_tmp, _ln, _fn);
#line 1313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  *(rhsInds + INT64(0)) = *(ret_tmp + INT64(0));
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  coerce_tmp2 = ((BaseDom)(lhs));
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _arrs(coerce_tmp2, &ret_tmp2);
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp8 = ret_tmp2;
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _iterator = _getIterator2(&call_tmp8, _ln, _fn);
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  this24 = (_iterator)->F0_this;
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp9 = chpl_get_BaseDom__arrs_head(this24, _ln, _fn);
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  coerce_tmp3 = *(call_tmp9);
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  tmp = coerce_tmp3;
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  T = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(coerce_tmp3)), nil);
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  while (T) {
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp10 = postfix_EXCLAMATION_9(tmp, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp11 = chpl___COLON_19(call_tmp10, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    ifvar_borrow = chpl_checkBorrowIfVar(call_tmp11);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp12 = _cond_test9(ifvar_borrow, _ln, _fn);
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    if (call_tmp12) /* ZLINE: 1318 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 1318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    {
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl___COLON_30(&rhsInds, &ret_tmp3);
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      *(coerce_tmp4 + INT64(0)) = *(ret_tmp3 + INT64(0));
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      castIndices(&coerce_tmp4, lhs, &ret_tmp4);
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      *(call_tmp13 + INT64(0)) = *(ret_tmp4 + INT64(0));
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl_check_nil(ifvar_borrow, _ln, _fn);
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      ((void(*)(BaseArrOverRectangularDom_1_int64_t_one,
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
         _tuple_1_star_range_int64_t_both_one *,
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
         int64_t,
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
         int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(ifvar_borrow))->chpl__cid) + INT64(5))])(ifvar_borrow, &call_tmp13, _ln, _fn);
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl__autoDestroy2(&call_tmp13);
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      chpl__autoDestroy2(&coerce_tmp4);
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    } else /* ZLINE: 1318 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl */
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    {
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
      halt3(&_str_literal_2236, &_str_literal_3330, &_str_literal_2237, &_str_literal_3331, _ln, _fn);
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    }
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp14 = postfix_EXCLAMATION_9(tmp, _ln, _fn);
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_check_nil(call_tmp14, _ln, _fn);
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp15 = chpl_get_BaseArr_next(call_tmp14, _ln, _fn);
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl___ASSIGN_50(&tmp, *(call_tmp15));
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    T = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(tmp)), nil);
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _freeIterator15(_iterator, _ln, _fn);
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl___COLON_30(&rhsInds, &ret_tmp5);
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  *(coerce_tmp5 + INT64(0)) = *(ret_tmp5 + INT64(0));
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(lhs, _ln, _fn);
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  dsiSetIndices(lhs, &coerce_tmp5, _ln, _fn);
#line 1328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl__autoDestroy2(&coerce_tmp5);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  coerce_tmp6 = ((BaseDom)(lhs));
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(coerce_tmp6, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _arrs(coerce_tmp6, &ret_tmp6);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp16 = ret_tmp6;
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _iterator2 = _getIterator2(&call_tmp16, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  this25 = (_iterator2)->F0_this;
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_check_nil(this25, _ln, _fn);
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  call_tmp17 = chpl_get_BaseDom__arrs_head(this25, _ln, _fn);
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  coerce_tmp7 = *(call_tmp17);
#line 310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  tmp2 = coerce_tmp7;
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  T2 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(coerce_tmp7)), nil);
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  while (T2) {
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp18 = postfix_EXCLAMATION_9(tmp2, _ln, _fn);
#line 1331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp19 = chpl___COLON_19(call_tmp18, _ln, _fn);
#line 1332 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp20 = postfix_EXCLAMATION_7(call_tmp19, _ln, _fn);
#line 1333 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_check_nil(call_tmp20, _ln, _fn);
#line 1333 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    ((void(*)(BaseArrOverRectangularDom_1_int64_t_one))chpl_vmtable[((INT64(6) * ((RootClass)(call_tmp20))->chpl__cid) + INT64(4))])(call_tmp20);
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp21 = postfix_EXCLAMATION_9(tmp2, _ln, _fn);
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl_check_nil(call_tmp21, _ln, _fn);
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    call_tmp22 = chpl_get_BaseArr_next(call_tmp21, _ln, _fn);
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    chpl___ASSIGN_50(&tmp2, *(call_tmp22));
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
    T2 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(tmp2)), nil);
#line 311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  }
#line 1330 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _freeIterator15(_iterator2, _ln, _fn);
#line 1310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl__autoDestroy2(&rhsInds);
#line 1310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return;
#line 1310 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

