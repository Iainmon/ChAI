#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:23 */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void chpl__init_DefaultRectangular(int64_t _ln,
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                          int32_t _fn) {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp8;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp9;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptrConst_int8_t call_tmp10 = NULL;
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T2;
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp11;
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp12;
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptrConst_int8_t call_tmp13 = NULL;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T3;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp14;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp15;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptrConst_int8_t call_tmp16 = NULL;
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp17;
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp18;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultDist new_temp = NULL;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_LocalSpinlock default_arg__domsLock;
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t default_arg_pid;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (chpl__init_DefaultRectangular_p) /* ZLINE: 23 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    goto _exit_chpl__init_DefaultRectangular;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  printModuleInit("%*s\n", "DefaultRectangular", INT64(18), _ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  refIndentLevel = &moduleInitLevel;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(refIndentLevel) += INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__init_DefaultRectangular_p = UINT8(true);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_HaltWrappers(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_DSIUtil(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_ChapelArray(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_ChapelDistribution(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_ChapelRange(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_OS(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_ChapelDebugPrint(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_ChapelLocks(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_OwnedObject(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_IO(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_ExternalArray(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_Reflection(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_RangeChunk(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_String(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_Search(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_Sort(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_ChapelBase(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__init_ChapelHashtable(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_addModule("DefaultRectangular", ((c_fn_ptr_rehook)(chpl__deinit_DefaultRectangular)), _ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_config_has_value(((c_ptrConst_int8_t)("dataParTasksPerLocale")), ((c_ptrConst_int8_t)("Built-in")));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = chpl___EXCLAMATION_(call_tmp8);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp9) /* ZLINE: 26 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    T = INT64(0);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  } else /* ZLINE: 26 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp10 = chpl_config_get_value(((c_ptrConst_int8_t)("dataParTasksPerLocale")), ((c_ptrConst_int8_t)("Built-in")));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    T = _command_line_cast5(call_tmp10, _ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  dataParTasksPerLocale = T;
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp11 = chpl_config_has_value(((c_ptrConst_int8_t)("dataParIgnoreRunningTasks")), ((c_ptrConst_int8_t)("Built-in")));
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp12 = chpl___EXCLAMATION_(call_tmp11);
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp12) /* ZLINE: 28 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    T2 = UINT8(false);
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  } else /* ZLINE: 28 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp13 = chpl_config_get_value(((c_ptrConst_int8_t)("dataParIgnoreRunningTasks")), ((c_ptrConst_int8_t)("Built-in")));
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    T2 = _command_line_cast2(call_tmp13, _ln, _fn);
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  dataParIgnoreRunningTasks = T2;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp14 = chpl_config_has_value(((c_ptrConst_int8_t)("dataParMinGranularity")), ((c_ptrConst_int8_t)("Built-in")));
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp15 = chpl___EXCLAMATION_(call_tmp14);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp15) /* ZLINE: 30 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    T3 = INT64(1);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  } else /* ZLINE: 30 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp16 = chpl_config_get_value(((c_ptrConst_int8_t)("dataParMinGranularity")), ((c_ptrConst_int8_t)("Built-in")));
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    T3 = _command_line_cast3(call_tmp16, _ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  dataParMinGranularity = T3;
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp17 = chpl___LESS_3(dataParTasksPerLocale, INT64(0));
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp17) /* ZLINE: 32 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    halt(&_str_literal_2367, _ln, _fn);
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp18 = chpl___LESS__ASSIGN_(dataParMinGranularity, INT64(0));
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp18) /* ZLINE: 33 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    halt(&_str_literal_2368, _ln, _fn);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg__domsLock = _new_default__domsLock();
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg_pid = _new_default_pid();
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  new_temp = _new4(INT64(0), &default_arg__domsLock, UINT8(false), default_arg_pid, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  defaultDist = chpl__buildDistDMapValue(new_temp);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(refIndentLevel) -= INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _exit_chpl__init_DefaultRectangular:;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:23 */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void chpl__deinit_DefaultRectangular(int64_t _ln,
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                            int32_t _fn) {
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy66(&defaultDist, _ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:100 */
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void init50(DefaultDist this24,
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   int64_t _doms_containing_dist,
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   chpl_LocalSpinlock * _domsLock,
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   chpl_bool _free_when_no_doms,
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   int64_t pid,
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   int64_t _ln,
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   int32_t _fn) {
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_LocalSpinlock _formal_tmp__domsLock;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseDist super_tmp = NULL;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _formal_tmp__domsLock = *(_domsLock);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  super_tmp = &((this24)->super);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  init12(super_tmp, _doms_containing_dist, &_formal_tmp__domsLock, _free_when_no_doms, pid, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(((BaseDist)(this24))))->chpl__cid = chpl__cid_BaseDist;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_DefaultDist;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:100 */
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void chpl__auto_destroy_DefaultDist(DefaultDist this24,
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                           int64_t _ln,
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                           int32_t _fn) {
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  deinit5(((BaseDist)(this24)), _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:100 */
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static DefaultDist _new4(int64_t _doms_containing_dist,
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         chpl_LocalSpinlock * _domsLock,
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         chpl_bool _free_when_no_doms,
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int64_t pid,
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int64_t _ln,
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int32_t _fn) {
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_LocalSpinlock _formal_tmp__domsLock;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultDist initTemp = NULL;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void cast_tmp = NULL;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultDist T = NULL;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  _formal_tmp__domsLock = *(_domsLock);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_DefaultDist_object), INT16(37), _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  initTemp = ((DefaultDist)(cast_tmp));
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_DefaultDist;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  init50(initTemp, _doms_containing_dist, &_formal_tmp__domsLock, _free_when_no_doms, pid, _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = initTemp;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return T;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:101 */
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_one dsiNewRectangularDom(DefaultDist this24,
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                _tuple_1_star_range_int64_t_both_one * inds,
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                int64_t _ln,
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultDist call_tmp8 = NULL;
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one new_temp = NULL;
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one dom = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = _to_unmanaged6(this24);
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  new_temp = _new5(call_tmp8, _ln, _fn);
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  dom = new_temp;
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(new_temp, _ln, _fn);
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  dsiSetIndices(new_temp, inds, _ln, _fn);
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return dom;
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:122 */
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static DefaultDist dsiClone(DefaultDist this24) {
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultDist call_tmp8 = NULL;
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = _to_unmanaged6(this24);
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:130 */
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool dsiTrackDomains2(DefaultDist this24) {
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return UINT8(false);
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:144 */
#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void chpl_defaultDistInitPrivate(int64_t _ln,
#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                        int32_t _fn) {
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultDist call_tmp8 = NULL;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp9;
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultDist new_temp = NULL;
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_LocalSpinlock default_arg__domsLock;
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t default_arg_pid;
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _distribution_DefaultDist nd;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = _value2(&defaultDist);
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = chpl___EQUALS_8(((RootClass)(call_tmp8)), nil);
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp9) /* ZLINE: 145 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    default_arg__domsLock = _new_default__domsLock();
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    default_arg_pid = _new_default_pid();
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    new_temp = _new4(INT64(0), &default_arg__domsLock, UINT8(false), default_arg_pid, _ln, _fn);
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    nd = chpl__buildDistDMapValue(new_temp);
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    defaultDist = clone2(&nd, _ln, _fn);
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy66(&nd, _ln, _fn);
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:158 */
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void chpl__auto_destroy_DefaultRectangularDom(DefaultRectangularDom_1_int64_t_one this24,
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                     int64_t _ln,
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                     int32_t _fn) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one _field_destructor_tmp_ = NULL;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((this24)->ranges);
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__auto_destroy__tuple_1_star_range_int64_t_both_one(_field_destructor_tmp_);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  deinit7(((BaseRectangularDom_1_int64_t_one)(this24)), _ln, _fn);
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:159 */
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static DefaultDist * chpl_get_DefaultRectangularDom_dist(DefaultRectangularDom_1_int64_t_one this24,
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                         int64_t _ln,
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                         int32_t _fn) {
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultDist call_tmp8 = NULL;
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->dist);
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:160 */
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _tuple_1_star_range_int64_t_both_one * chpl_get_DefaultRectangularDom_ranges(DefaultRectangularDom_1_int64_t_one this24,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                                    int64_t _ln,
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                                    int32_t _fn) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one call_tmp8 = NULL;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->ranges);
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:163 */
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool dsiLinksDistribution2(DefaultRectangularDom_1_int64_t_one this24) {
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return UINT8(false);
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:166 */
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static chpl_LocalSpinlock _new_default__domsLock(void) {
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_LocalSpinlock ret;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  chpl_LocalSpinlock _domsLock;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  init34(&_domsLock);
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  ret = _domsLock;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return ret;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:168 */
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void init51(DefaultRectangularDom_1_int64_t_one this24,
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   DefaultDist dist,
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   int64_t _ln,
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   int32_t _fn) {
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseRectangularDom_1_int64_t_one super_tmp = NULL;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one ranges;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  super_tmp = &((this24)->super);
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  init14(super_tmp, _ln, _fn);
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(((BaseRectangularDom_1_int64_t_one)(this24))))->chpl__cid = chpl__cid_BaseRectangularDom_1_int64_t_one;
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->dist = dist;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _defaultOf2(&ret_tmp);
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(ranges + INT64(0)) = *(ret_tmp + INT64(0));
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *((this24)->ranges + INT64(0)) = *(ranges + INT64(0));
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_DefaultRectangularDom_1_int64_t_one;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:168 */
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_one _new5(DefaultDist dist,
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                 int64_t _ln,
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                 int32_t _fn) {
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one initTemp = NULL;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void cast_tmp = NULL;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one T = NULL;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_DefaultRectangularDom_1_int64_t_one_object), INT16(38), _ln, _fn);
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  initTemp = ((DefaultRectangularDom_1_int64_t_one)(cast_tmp));
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_DefaultRectangularDom_1_int64_t_one;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  init51(initTemp, dist, _ln, _fn);
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = initTemp;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return T;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
/* ChapelDistribution.chpl:168 */
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
static int64_t _new_default_pid(void) {
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
  return INT64(-1);
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDistribution.chpl"
}

#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:177 */
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static DefaultDist dsiMyDist2(DefaultRectangularDom_1_int64_t_one this24,
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                              int64_t _ln,
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                              int32_t _fn) {
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultDist ret = NULL;
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultDist call_tmp8 = NULL;
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularDom_dist(this24, _ln, _fn);
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ret = *(call_tmp8);
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return ret;
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:207 */
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void dsiGetIndices(DefaultRectangularDom_1_int64_t_one this24,
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                          _tuple_1_star_range_int64_t_both_one * _retArg,
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                          int64_t _ln,
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                          int32_t _fn) {
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one ret;
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one call_tmp8 = NULL;
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularDom_ranges(this24, _ln, _fn);
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(ret + INT64(0)) = *(*(call_tmp8) + INT64(0));
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(*(_retArg) + INT64(0)) = *(ret + INT64(0));
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 207 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:209 */
#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void dsiSetIndices(DefaultRectangularDom_1_int64_t_one this24,
#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                          _tuple_1_star_range_int64_t_both_one * x2,
#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                          int64_t _ln,
#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                          int32_t _fn) {
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one call_tmp8 = NULL;
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularDom_ranges(this24, _ln, _fn);
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_61(call_tmp8, x2);
#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 209 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:213 */
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void dsiAssignDomain(DefaultRectangularDom_1_int64_t_one this24,
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            _domain_DefaultRectangularDom_1_int64_t_one * rhs,
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            chpl_bool lhsPrivate,
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int64_t _ln,
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int32_t _fn) {
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_assignDomainWithGetSetIndices(this24, rhs, _ln, _fn);
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:249 */
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ic_these_help_DefaultRectangularDom_1_int64_t_one _getIterator15(_ir_these_help_DefaultRectangularDom_1_int64_t_one * ir,
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                         int64_t _ln,
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                         int32_t _fn) {
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_help_DefaultRectangularDom_1_int64_t_one _ic_ = NULL;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void cast_tmp = NULL;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one T = NULL;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one T2 = NULL;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic_these_help_DefaultRectangularDom_1_int64_t_one_object), INT16(86), _ln, _fn);
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_ = ((_ic_these_help_DefaultRectangularDom_1_int64_t_one)(cast_tmp));
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic_these_help_DefaultRectangularDom_1_int64_t_one;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->more = INT64(1);
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = (ir)->F0_this;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->F0_this = T;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T2 = (ir)->F1_block;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->F1_block = T2;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return _ic_;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:249 */
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void these_help(DefaultRectangularDom_1_int64_t_one this24,
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                       _tuple_1_star_range_int64_t_both_one * block,
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                       _ir_these_help_DefaultRectangularDom_1_int64_t_one * _retArg) {
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_retArg)->F0_this = this24;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_retArg)->F1_block = block;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:282 */
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void these3(DefaultRectangularDom_1_int64_t_one this24,
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   int64_t tasksPerLocale,
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   chpl_bool ignoreRunning,
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   int64_t minIndicesPerTask,
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   _tuple_1_star_int64_t * offset2,
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   _ir_these_DefaultRectangularDom_1_int64_t_one * _retArg) {
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_retArg)->F0_this = this24;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_retArg)->F1_tasksPerLocale = tasksPerLocale;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_retArg)->F2_ignoreRunning = ignoreRunning;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_retArg)->F3_minIndicesPerTask = minIndicesPerTask;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_retArg)->F4_offset = offset2;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:282 */
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ic_these_DefaultRectangularDom_1_int64_t_one _getIterator16(_ir_these_DefaultRectangularDom_1_int64_t_one * ir,
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                    int64_t _ln,
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                    int32_t _fn) {
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_DefaultRectangularDom_1_int64_t_one _ic_ = NULL;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void cast_tmp = NULL;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one T = NULL;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T2;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T3;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T4;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t T5 = NULL;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic_these_DefaultRectangularDom_1_int64_t_one_object), INT16(51), _ln, _fn);
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_ = ((_ic_these_DefaultRectangularDom_1_int64_t_one)(cast_tmp));
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic_these_DefaultRectangularDom_1_int64_t_one;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->more = INT64(1);
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = (ir)->F0_this;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->F0_this = T;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T2 = (ir)->F1_tasksPerLocale;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->F1_tasksPerLocale = T2;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T3 = (ir)->F2_ignoreRunning;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->F2_ignoreRunning = T3;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T4 = (ir)->F3_minIndicesPerTask;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->F3_minIndicesPerTask = T4;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T5 = (ir)->F4_offset;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->F4_offset = T5;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return _ic_;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:282 */
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t these_default_tasksPerLocale(DefaultRectangularDom_1_int64_t_one this24) {
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t tasksPerLocale;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  tasksPerLocale = dataParTasksPerLocale;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return tasksPerLocale;
#line 282 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:283 */
#line 283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool these_default_ignoreRunning(DefaultRectangularDom_1_int64_t_one this24) {
#line 283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool ignoreRunning;
#line 283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ignoreRunning = dataParIgnoreRunningTasks;
#line 283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return ignoreRunning;
#line 283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:284 */
#line 284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t these_default_minIndicesPerTask(DefaultRectangularDom_1_int64_t_one this24) {
#line 284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t minIndicesPerTask;
#line 284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  minIndicesPerTask = dataParMinGranularity;
#line 284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return minIndicesPerTask;
#line 284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:285 */
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void these_default_offset(DefaultRectangularDom_1_int64_t_one this24,
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                 _tuple_1_star_int64_t * _retArg) {
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t offset2;
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  createTuple(INT64(0), &ret_tmp);
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(offset2 + INT64(0)) = *(ret_tmp + INT64(0));
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(*(_retArg) + INT64(0)) = *(offset2 + INT64(0));
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 296 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:296 */
#line 296 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t these_default_tasksPerLocale2(DefaultRectangularDom_1_int64_t_one this24) {
#line 296 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t tasksPerLocale;
#line 296 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  tasksPerLocale = dataParTasksPerLocale;
#line 296 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return tasksPerLocale;
#line 296 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:297 */
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool these_default_ignoreRunning2(DefaultRectangularDom_1_int64_t_one this24) {
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool ignoreRunning;
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ignoreRunning = dataParIgnoreRunningTasks;
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return ignoreRunning;
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:298 */
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t these_default_minIndicesPerTask2(DefaultRectangularDom_1_int64_t_one this24) {
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t minIndicesPerTask;
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  minIndicesPerTask = dataParMinGranularity;
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return minIndicesPerTask;
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:299 */
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void these_default_offset2(DefaultRectangularDom_1_int64_t_one this24,
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                  _tuple_1_star_int64_t * _retArg) {
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t offset2;
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  createTuple(INT64(0), &ret_tmp);
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(offset2 + INT64(0)) = *(ret_tmp + INT64(0));
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(*(_retArg) + INT64(0)) = *(offset2 + INT64(0));
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 299 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:337 */
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void wrapcoforall_fn9(_class_localscoforall_fn7 c) {
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int32_t _fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _ln;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _0_numChunks;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _1_parDim;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one _2_coerce_tmp = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _4_chunk;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t _5_copy = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _fn = (c)->_fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ln = (c)->_ln;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_rmem_consist_acquire(_ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _0_numChunks = (c)->_0_numChunks;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _1_parDim = (c)->_1_parDim;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _2_coerce_tmp = (c)->_2_coerce_tmp;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _3__coforallCount = (c)->_3__coforallCount;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _4_chunk = (c)->_4_chunk;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _5_copy = (c)->_5_copy;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coforall_fn8(_0_numChunks, _1_parDim, _2_coerce_tmp, _3__coforallCount, _4_chunk, _5_copy, (c)->_6_this, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _downEndCount((c)->_3__coforallCount, nil, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:337 */
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void wrapcoforall_fn8(_class_localscoforall_fn6 c) {
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int32_t _fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _ln;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  Error error = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _0_numChunks;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _1_parDim;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one _2_coerce_tmp = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _4_chunk;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t _6_copy = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _fn = (c)->_fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ln = (c)->_ln;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_rmem_consist_acquire(_ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _0_numChunks = (c)->_0_numChunks;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _1_parDim = (c)->_1_parDim;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _2_coerce_tmp = (c)->_2_coerce_tmp;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _3__coforallCount = (c)->_3__coforallCount;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _4_chunk = (c)->_4_chunk;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _6_copy = (c)->_6_copy;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coforall_fn6(_0_numChunks, _1_parDim, _2_coerce_tmp, _3__coforallCount, _4_chunk, &error, _6_copy, (c)->_7_this, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _downEndCount((c)->_3__coforallCount, error, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:337 */
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void wrapcoforall_fn6(_class_localscoforall_fn9 c) {
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int32_t _fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _ln;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _0_numChunks;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _1_parDim;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one _2_coerce_tmp = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _4_chunk;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one _5_eaAddrOf;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _fn = (c)->_fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ln = (c)->_ln;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_rmem_consist_acquire(_ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _0_numChunks = (c)->_0_numChunks;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _1_parDim = (c)->_1_parDim;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _2_coerce_tmp = (c)->_2_coerce_tmp;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _3__coforallCount = (c)->_3__coforallCount;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _4_chunk = (c)->_4_chunk;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _5_eaAddrOf = (c)->_5_eaAddrOf;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coforall_fn9(_0_numChunks, _1_parDim, _2_coerce_tmp, _3__coforallCount, _4_chunk, &_5_eaAddrOf, (c)->_6_this, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _downEndCount((c)->_3__coforallCount, nil, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:337 */
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void coforall_fn8(int64_t numChunks,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int64_t parDim,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         DefaultRectangularDom_1_int64_t_one this24,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int64_t chunk,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         DefaultRectangularArr_1_int64_t_one_locale_int64_t copy,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         DefaultRectangularArr_1_int64_t_one_locale_int64_t this25,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int64_t _ln,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int32_t _fn) {
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one call_tmp8 = NULL;
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one ranges;
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp9 = NULL;
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  uint64_t call_tmp10;
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp2;
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  uint64_t call_tmp11;
#line 343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp12 = NULL;
#line 343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp13 = NULL;
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp14 = NULL;
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp15 = NULL;
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp16 = NULL;
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp17 = NULL;
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t ret_tmp;
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t T;
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t coerce_tmp3;
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t coerce_tmp4;
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one block;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp18 = NULL;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp19 = NULL;
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp20 = NULL;
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp21 = NULL;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_help_DefaultRectangularDom_1_int64_t_one _iterator = NULL;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_these_help_DefaultRectangularDom_1_int64_t_one call_tmp22;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one coerce_tmp5;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp2;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_these_help_DefaultRectangularDom_1_int64_t_one ret_tmp3;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_range_int64_t_both_one _iterator2 = NULL;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp23 = NULL;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one block2 = NULL;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this26;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp24;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this27;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp25;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp26;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this28;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp27;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp28;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this29;
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_locale dst = NULL;
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_locale call_tmp29 = NULL;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_locale call_tmp30 = NULL;
#line 1531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t optinfo;
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularDom_ranges(this24, _ln, _fn);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(ranges + INT64(0)) = *(*(call_tmp8) + INT64(0));
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = this13(&ranges, parDim, _ln, _fn);
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(call_tmp9);
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = sizeAs3(coerce_tmp2, _ln, _fn);
#line 340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this13(&ranges, parDim, _ln, _fn);
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp11 = chpl___ASTERISK_5(call_tmp10);
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(coerce_tmp2);
#line 343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp12 = this13(&ranges, parDim, _ln, _fn);
#line 343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp13 = chpl_get_range__high3(call_tmp12);
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp14 = this13(&ranges, parDim, _ln, _fn);
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp15 = chpl_get_range__low2(call_tmp14);
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp16 = this13(&ranges, parDim, _ln, _fn);
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp17 = chpl_get_range__low2(call_tmp16);
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _computeBlock(call_tmp11, numChunks, chunk, *(call_tmp13), *(call_tmp15), *(call_tmp17), &ret_tmp, _ln, _fn);
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(T + INT64(0)) = *(ret_tmp + INT64(0));
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(T + INT64(1)) = *(ret_tmp + INT64(1));
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp3 = *(T + INT64(0));
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp4 = *(T + INT64(1));
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(block + INT64(0)) = *(ranges + INT64(0));
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp18 = this13(&block, parDim, _ln, _fn);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp19 = chpl_get_range__low2(call_tmp18);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp19, coerce_tmp3);
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp20 = this13(&block, parDim, _ln, _fn);
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp21 = chpl_get_range__high3(call_tmp20);
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp21, coerce_tmp4);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___COLON_30(&block, &ret_tmp2);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(coerce_tmp5 + INT64(0)) = *(ret_tmp2 + INT64(0));
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  these_help(this24, &coerce_tmp5, &ret_tmp3);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp22 = ret_tmp3;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator = _getIterator15(&call_tmp22, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  block2 = (_iterator)->F1_block;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp23 = (*(block2) + INT64(0));
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator2 = _getIterator3(call_tmp23, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this26 = (_iterator2)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkIfIterWillOverflow(this26, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this27 = (_iterator2)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp24 = lowBoundForIter(this27);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp25 = chpl__idxToInt(call_tmp24);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this28 = (_iterator2)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp26 = highBoundForIter(this28);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp27 = chpl__idxToInt(call_tmp26);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  end = call_tmp27;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (i = call_tmp25; ((i <= end)); i += INT64(1)) {
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(_iterator2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    this29 = (_iterator2)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp28 = chpl_intToIdx3(this29, i);
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(copy, _ln, _fn);
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp29 = dsiAccess2(copy, call_tmp28, _ln, _fn);
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    dst = call_tmp29;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this25, _ln, _fn);
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp30 = dsiAccess4(this25, call_tmp28, _ln, _fn);
#line 1531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    *(dst) = *(call_tmp30);
#line 1531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator17(_iterator2, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator14(_iterator, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy2(&coerce_tmp5);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy2(&block);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy58(&T);
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy(((RootClass)(this25)));
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy(((RootClass)(copy)));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:337 */
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void coforall_fn6(int64_t numChunks,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int64_t parDim,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         DefaultRectangularDom_1_int64_t_one this24,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int64_t chunk,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         Error * error_out,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t copy,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this25,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int64_t _ln,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int32_t _fn) {
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one call_tmp8 = NULL;
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one ranges;
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp9 = NULL;
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  uint64_t call_tmp10;
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp2;
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  uint64_t call_tmp11;
#line 343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp12 = NULL;
#line 343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp13 = NULL;
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp14 = NULL;
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp15 = NULL;
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp16 = NULL;
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp17 = NULL;
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t ret_tmp;
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t T;
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t coerce_tmp3;
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t coerce_tmp4;
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one block;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp18 = NULL;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp19 = NULL;
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp20 = NULL;
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp21 = NULL;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_help_DefaultRectangularDom_1_int64_t_one _iterator = NULL;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_these_help_DefaultRectangularDom_1_int64_t_one call_tmp22;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one coerce_tmp5;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp2;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_these_help_DefaultRectangularDom_1_int64_t_one ret_tmp3;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_range_int64_t_both_one _iterator2 = NULL;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp23 = NULL;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one block2 = NULL;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this26;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp24;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this27;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp25;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp26;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this28;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp27;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp28;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this29;
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_uint64_t dst = NULL;
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_uint64_t call_tmp29 = NULL;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_uint64_t call_tmp30 = NULL;
#line 1531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t optinfo;
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularDom_ranges(this24, _ln, _fn);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(ranges + INT64(0)) = *(*(call_tmp8) + INT64(0));
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = this13(&ranges, parDim, _ln, _fn);
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(call_tmp9);
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = sizeAs3(coerce_tmp2, _ln, _fn);
#line 340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this13(&ranges, parDim, _ln, _fn);
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp11 = chpl___ASTERISK_5(call_tmp10);
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(coerce_tmp2);
#line 343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp12 = this13(&ranges, parDim, _ln, _fn);
#line 343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp13 = chpl_get_range__high3(call_tmp12);
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp14 = this13(&ranges, parDim, _ln, _fn);
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp15 = chpl_get_range__low2(call_tmp14);
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp16 = this13(&ranges, parDim, _ln, _fn);
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp17 = chpl_get_range__low2(call_tmp16);
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _computeBlock(call_tmp11, numChunks, chunk, *(call_tmp13), *(call_tmp15), *(call_tmp17), &ret_tmp, _ln, _fn);
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(T + INT64(0)) = *(ret_tmp + INT64(0));
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(T + INT64(1)) = *(ret_tmp + INT64(1));
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp3 = *(T + INT64(0));
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp4 = *(T + INT64(1));
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(block + INT64(0)) = *(ranges + INT64(0));
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp18 = this13(&block, parDim, _ln, _fn);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp19 = chpl_get_range__low2(call_tmp18);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp19, coerce_tmp3);
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp20 = this13(&block, parDim, _ln, _fn);
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp21 = chpl_get_range__high3(call_tmp20);
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp21, coerce_tmp4);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___COLON_30(&block, &ret_tmp2);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(coerce_tmp5 + INT64(0)) = *(ret_tmp2 + INT64(0));
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  these_help(this24, &coerce_tmp5, &ret_tmp3);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp22 = ret_tmp3;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator = _getIterator15(&call_tmp22, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  block2 = (_iterator)->F1_block;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp23 = (*(block2) + INT64(0));
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator2 = _getIterator3(call_tmp23, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this26 = (_iterator2)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkIfIterWillOverflow(this26, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this27 = (_iterator2)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp24 = lowBoundForIter(this27);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp25 = chpl__idxToInt(call_tmp24);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this28 = (_iterator2)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp26 = highBoundForIter(this28);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp27 = chpl__idxToInt(call_tmp26);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  end = call_tmp27;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (i = call_tmp25; ((i <= end)); i += INT64(1)) {
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(_iterator2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    this29 = (_iterator2)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp28 = chpl_intToIdx3(this29, i);
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(copy, _ln, _fn);
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp29 = dsiAccess(copy, call_tmp28, _ln, _fn);
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    dst = call_tmp29;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this25, _ln, _fn);
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp30 = dsiAccess6(this25, call_tmp28, _ln, _fn);
#line 1531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    *(dst) = *(call_tmp30);
#line 1531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator17(_iterator2, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator14(_iterator, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy2(&coerce_tmp5);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy2(&block);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy58(&T);
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy(((RootClass)(this25)));
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy(((RootClass)(copy)));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:337 */
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void coforall_fn7(int64_t numChunks,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int64_t parDim,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         DefaultRectangularDom_1_int64_t_one this24,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int64_t chunk,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         Error * error_out,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         DefaultRectangularArr_1_int64_t_one_int64_t_int64_t copy,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this25,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int64_t _ln,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int32_t _fn) {
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one call_tmp8 = NULL;
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one ranges;
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp9 = NULL;
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  uint64_t call_tmp10;
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp2;
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  uint64_t call_tmp11;
#line 343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp12 = NULL;
#line 343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp13 = NULL;
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp14 = NULL;
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp15 = NULL;
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp16 = NULL;
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp17 = NULL;
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t ret_tmp;
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t T;
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t coerce_tmp3;
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t coerce_tmp4;
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one block;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp18 = NULL;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp19 = NULL;
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp20 = NULL;
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp21 = NULL;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_help_DefaultRectangularDom_1_int64_t_one _iterator = NULL;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_these_help_DefaultRectangularDom_1_int64_t_one call_tmp22;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one coerce_tmp5;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp2;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_these_help_DefaultRectangularDom_1_int64_t_one ret_tmp3;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_range_int64_t_both_one _iterator2 = NULL;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp23 = NULL;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one block2 = NULL;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this26;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp24;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this27;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp25;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp26;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this28;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp27;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp28;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this29;
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t dst = NULL;
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp29 = NULL;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp30 = NULL;
#line 1531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t optinfo;
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularDom_ranges(this24, _ln, _fn);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(ranges + INT64(0)) = *(*(call_tmp8) + INT64(0));
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = this13(&ranges, parDim, _ln, _fn);
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(call_tmp9);
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = sizeAs3(coerce_tmp2, _ln, _fn);
#line 340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this13(&ranges, parDim, _ln, _fn);
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp11 = chpl___ASTERISK_5(call_tmp10);
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(coerce_tmp2);
#line 343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp12 = this13(&ranges, parDim, _ln, _fn);
#line 343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp13 = chpl_get_range__high3(call_tmp12);
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp14 = this13(&ranges, parDim, _ln, _fn);
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp15 = chpl_get_range__low2(call_tmp14);
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp16 = this13(&ranges, parDim, _ln, _fn);
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp17 = chpl_get_range__low2(call_tmp16);
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _computeBlock(call_tmp11, numChunks, chunk, *(call_tmp13), *(call_tmp15), *(call_tmp17), &ret_tmp, _ln, _fn);
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(T + INT64(0)) = *(ret_tmp + INT64(0));
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(T + INT64(1)) = *(ret_tmp + INT64(1));
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp3 = *(T + INT64(0));
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp4 = *(T + INT64(1));
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(block + INT64(0)) = *(ranges + INT64(0));
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp18 = this13(&block, parDim, _ln, _fn);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp19 = chpl_get_range__low2(call_tmp18);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp19, coerce_tmp3);
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp20 = this13(&block, parDim, _ln, _fn);
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp21 = chpl_get_range__high3(call_tmp20);
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp21, coerce_tmp4);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___COLON_30(&block, &ret_tmp2);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(coerce_tmp5 + INT64(0)) = *(ret_tmp2 + INT64(0));
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  these_help(this24, &coerce_tmp5, &ret_tmp3);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp22 = ret_tmp3;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator = _getIterator15(&call_tmp22, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  block2 = (_iterator)->F1_block;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp23 = (*(block2) + INT64(0));
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator2 = _getIterator3(call_tmp23, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this26 = (_iterator2)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkIfIterWillOverflow(this26, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this27 = (_iterator2)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp24 = lowBoundForIter(this27);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp25 = chpl__idxToInt(call_tmp24);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this28 = (_iterator2)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp26 = highBoundForIter(this28);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp27 = chpl__idxToInt(call_tmp26);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  end = call_tmp27;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (i = call_tmp25; ((i <= end)); i += INT64(1)) {
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(_iterator2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    this29 = (_iterator2)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp28 = chpl_intToIdx3(this29, i);
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(copy, _ln, _fn);
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp29 = dsiAccess3(copy, call_tmp28, _ln, _fn);
#line 1529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    dst = call_tmp29;
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this25, _ln, _fn);
#line 1530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp30 = dsiAccess5(this25, call_tmp28, _ln, _fn);
#line 1531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    *(dst) = *(call_tmp30);
#line 1531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator17(_iterator2, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator14(_iterator, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy2(&coerce_tmp5);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy2(&block);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy58(&T);
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy(((RootClass)(this25)));
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy(((RootClass)(copy)));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:337 */
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void coforall_fn9(int64_t numChunks,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int64_t parDim,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         DefaultRectangularDom_1_int64_t_one this24,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int64_t chunk,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         _domain_DefaultRectangularDom_1_int64_t_one * keep,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         DefaultRectangularArr_1_int64_t_one_locale_int64_t this25,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int64_t _ln,
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int32_t _fn) {
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one call_tmp8 = NULL;
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one ranges;
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp9 = NULL;
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  uint64_t call_tmp10;
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp2;
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  uint64_t call_tmp11;
#line 343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp12 = NULL;
#line 343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp13 = NULL;
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp14 = NULL;
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp15 = NULL;
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp16 = NULL;
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp17 = NULL;
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t ret_tmp;
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t T;
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t coerce_tmp3;
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t coerce_tmp4;
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one block;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp18 = NULL;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp19 = NULL;
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp20 = NULL;
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp21 = NULL;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_help_DefaultRectangularDom_1_int64_t_one _iterator = NULL;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_these_help_DefaultRectangularDom_1_int64_t_one call_tmp22;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one coerce_tmp5;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp2;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_these_help_DefaultRectangularDom_1_int64_t_one ret_tmp3;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_range_int64_t_both_one _iterator2 = NULL;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp23 = NULL;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one block2 = NULL;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this26;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp24;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this27;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp25;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp26;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this28;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp27;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp28;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this29;
#line 1542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp29;
#line 1542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp30;
#line 1543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_locale call_tmp31 = NULL;
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularDom_ranges(this24, _ln, _fn);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(ranges + INT64(0)) = *(*(call_tmp8) + INT64(0));
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = this13(&ranges, parDim, _ln, _fn);
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(call_tmp9);
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = sizeAs3(coerce_tmp2, _ln, _fn);
#line 340 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this13(&ranges, parDim, _ln, _fn);
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp11 = chpl___ASTERISK_5(call_tmp10);
#line 339 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(coerce_tmp2);
#line 343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp12 = this13(&ranges, parDim, _ln, _fn);
#line 343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp13 = chpl_get_range__high3(call_tmp12);
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp14 = this13(&ranges, parDim, _ln, _fn);
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp15 = chpl_get_range__low2(call_tmp14);
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp16 = this13(&ranges, parDim, _ln, _fn);
#line 345 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp17 = chpl_get_range__low2(call_tmp16);
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _computeBlock(call_tmp11, numChunks, chunk, *(call_tmp13), *(call_tmp15), *(call_tmp17), &ret_tmp, _ln, _fn);
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(T + INT64(0)) = *(ret_tmp + INT64(0));
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(T + INT64(1)) = *(ret_tmp + INT64(1));
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp3 = *(T + INT64(0));
#line 341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp4 = *(T + INT64(1));
#line 346 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(block + INT64(0)) = *(ranges + INT64(0));
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp18 = this13(&block, parDim, _ln, _fn);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp19 = chpl_get_range__low2(call_tmp18);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp19, coerce_tmp3);
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp20 = this13(&block, parDim, _ln, _fn);
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp21 = chpl_get_range__high3(call_tmp20);
#line 348 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp21, coerce_tmp4);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___COLON_30(&block, &ret_tmp2);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(coerce_tmp5 + INT64(0)) = *(ret_tmp2 + INT64(0));
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  these_help(this24, &coerce_tmp5, &ret_tmp3);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp22 = ret_tmp3;
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator = _getIterator15(&call_tmp22, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  block2 = (_iterator)->F1_block;
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp23 = (*(block2) + INT64(0));
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator2 = _getIterator3(call_tmp23, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this26 = (_iterator2)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkIfIterWillOverflow(this26, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this27 = (_iterator2)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp24 = lowBoundForIter(this27);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp25 = chpl__idxToInt(call_tmp24);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this28 = (_iterator2)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp26 = highBoundForIter(this28);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp27 = chpl__idxToInt(call_tmp26);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  end = call_tmp27;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (i = call_tmp25; ((i <= end)); i += INT64(1)) {
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(_iterator2, _ln, _fn);
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    this29 = (_iterator2)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp28 = chpl_intToIdx3(this29, i);
#line 1542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp29 = contains2(keep, call_tmp28, _ln, _fn);
#line 1542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp30 = chpl___EXCLAMATION_(call_tmp29);
#line 1542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (call_tmp30) /* ZLINE: 1542 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1542 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this25, _ln, _fn);
#line 1543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp31 = dsiAccess4(this25, call_tmp28, _ln, _fn);
#line 1543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy45(call_tmp31);
#line 1543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1543 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator17(_iterator2, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator14(_iterator, _ln, _fn);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy2(&coerce_tmp5);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy2(&block);
#line 352 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy58(&T);
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy(((RootClass)(this25)));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:337 */
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void wrapcoforall_fn7(_class_localscoforall_fn8 c) {
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int32_t _fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _ln;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  Error error = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _0_numChunks;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _1_parDim;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one _2_coerce_tmp = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _4_chunk;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_int64_t_int64_t _6_copy = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _fn = (c)->_fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ln = (c)->_ln;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_rmem_consist_acquire(_ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _0_numChunks = (c)->_0_numChunks;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _1_parDim = (c)->_1_parDim;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _2_coerce_tmp = (c)->_2_coerce_tmp;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _3__coforallCount = (c)->_3__coforallCount;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _4_chunk = (c)->_4_chunk;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _6_copy = (c)->_6_copy;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coforall_fn7(_0_numChunks, _1_parDim, _2_coerce_tmp, _3__coforallCount, _4_chunk, &error, _6_copy, (c)->_7_this, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _downEndCount((c)->_3__coforallCount, error, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:569 */
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool dsiMember(DefaultRectangularDom_1_int64_t_one this24,
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           _tuple_1_star_int64_t * ind,
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int64_t _ln,
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int32_t _fn) {
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool ret;
#line 571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one _this_tmp_ = NULL;
#line 571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp8;
#line 571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp2;
#line 571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp9;
#line 571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = chpl_get_DefaultRectangularDom_ranges(this24, _ln, _fn);
#line 571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(*(_this_tmp_) + INT64(0));
#line 571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = contains3(coerce_tmp2, *(*(ind) + INT64(0)));
#line 571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = chpl___EXCLAMATION_(call_tmp8);
#line 571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp9) /* ZLINE: 571 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    ret = UINT8(false);
#line 572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy59(coerce_tmp2);
#line 572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    goto _end_dsiMember;
#line 572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 571 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(coerce_tmp2);
#line 573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ret = UINT8(true);
#line 573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _end_dsiMember:;
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return ret;
#line 569 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 589 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:589 */
#line 589 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void dsiDims(DefaultRectangularDom_1_int64_t_one this24,
#line 589 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                    _tuple_1_star_range_int64_t_both_one * _retArg,
#line 589 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                    int64_t _ln,
#line 589 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                    int32_t _fn) {
#line 589 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_both_one ret;
#line 590 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one call_tmp8 = NULL;
#line 590 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 590 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularDom_ranges(this24, _ln, _fn);
#line 590 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(ret + INT64(0)) = *(*(call_tmp8) + INT64(0));
#line 589 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(*(_retArg) + INT64(0)) = *(ret + INT64(0));
#line 589 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 589 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 592 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:592 */
#line 592 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static range_int64_t_both_one dsiDim(DefaultRectangularDom_1_int64_t_one this24,
#line 592 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                     int64_t d,
#line 592 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                     int64_t _ln,
#line 592 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                     int32_t _fn) {
#line 592 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one ret;
#line 593 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp8 = NULL;
#line 593 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one _this_tmp_ = NULL;
#line 593 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 593 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = chpl_get_DefaultRectangularDom_ranges(this24, _ln, _fn);
#line 593 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = this13(_this_tmp_, d, _ln, _fn);
#line 593 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ret = *(call_tmp8);
#line 592 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return ret;
#line 592 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 597 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:597 */
#line 597 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static range_int64_t_both_one dsiDim2(DefaultRectangularDom_1_int64_t_one this24,
#line 597 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                      int64_t _ln,
#line 597 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                      int32_t _fn) {
#line 597 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one ret;
#line 598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one _this_tmp_ = NULL;
#line 598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = chpl_get_DefaultRectangularDom_ranges(this24, _ln, _fn);
#line 598 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ret = *(*(_this_tmp_) + INT64(0));
#line 597 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return ret;
#line 597 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 600 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:600 */
#line 600 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t dsiNumIndices(DefaultRectangularDom_1_int64_t_one this24,
#line 600 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             int64_t _ln,
#line 600 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             int32_t _fn) {
#line 600 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t ret;
#line 601 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t sum;
#line 603 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one _this_tmp_ = NULL;
#line 603 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 603 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp2;
#line 601 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  sum = INT64(1);
#line 603 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 603 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = chpl_get_DefaultRectangularDom_ranges(this24, _ln, _fn);
#line 603 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(*(_this_tmp_) + INT64(0));
#line 603 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = sizeAs4(coerce_tmp2, _ln, _fn);
#line 603 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASTERISK__ASSIGN_(&sum, call_tmp8);
#line 603 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(coerce_tmp2);
#line 604 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ret = sum;
#line 600 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return ret;
#line 600 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 610 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:610 */
#line 610 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t dsiLow(DefaultRectangularDom_1_int64_t_one this24,
#line 610 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                      int64_t _ln,
#line 610 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                      int32_t _fn) {
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one _this_tmp_ = NULL;
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp2;
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = chpl_get_DefaultRectangularDom_ranges(this24, _ln, _fn);
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(*(_this_tmp_) + INT64(0));
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = lowBound4(coerce_tmp2);
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(coerce_tmp2);
#line 610 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 610 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:654 */
#line 654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t dsiStride(DefaultRectangularDom_1_int64_t_one this24,
#line 654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int64_t _ln,
#line 654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                         int32_t _fn) {
#line 656 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 656 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_get_DefaultRectangularDom_ranges(this24, _ln, _fn);
#line 654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return INT64(1);
#line 654 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 698 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:698 */
#line 698 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static DefaultRectangularArr_1_int64_t_one_locale_int64_t dsiBuildArray(DefaultRectangularDom_1_int64_t_one this24,
#line 698 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                        int64_t _ln,
#line 698 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                        int32_t _fn) {
#line 702 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 699 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t new_temp = NULL;
#line 699 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_locale default_arg_data = NULL;
#line 699 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void default_arg_externFreeFunc = NULL;
#line 702 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = _to_unmanaged24(this24);
#line 699 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg_data = _new_default_data3(_ln, _fn);
#line 699 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg_externFreeFunc = _new_default_externFreeFunc3(_ln, _fn);
#line 699 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  new_temp = _new8(call_tmp8, default_arg_data, UINT8(false), UINT8(false), default_arg_externFreeFunc, _ln, _fn);
#line 698 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return new_temp;
#line 698 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1031 */
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void chpl__auto_destroy_DefaultRectangularArr(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                     int64_t _ln,
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                     int32_t _fn) {
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _field_destructor_tmp_ = NULL;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _field_destructor_tmp_2 = NULL;
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _field_destructor_tmp_3 = NULL;
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _field_destructor_tmp_4 = NULL;
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((this24)->str);
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__auto_destroy__tuple_1_star_int64_t(_field_destructor_tmp_);
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((this24)->sizesPerDim);
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__auto_destroy__tuple_1_star_int64_t(_field_destructor_tmp_2);
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _field_destructor_tmp_3 = &((this24)->blk);
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__auto_destroy__tuple_1_star_int64_t(_field_destructor_tmp_3);
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _field_destructor_tmp_4 = &((this24)->off);
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__auto_destroy__tuple_1_star_int64_t(_field_destructor_tmp_4);
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  deinit12(((BaseRectangularArr_1_int64_t_one_uint64_t)(this24)), _ln, _fn);
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1031 */
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void chpl__auto_destroy_DefaultRectangularArr2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                      int64_t _ln,
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                      int32_t _fn) {
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _field_destructor_tmp_ = NULL;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _field_destructor_tmp_2 = NULL;
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _field_destructor_tmp_3 = NULL;
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _field_destructor_tmp_4 = NULL;
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((this24)->str);
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__auto_destroy__tuple_1_star_int64_t(_field_destructor_tmp_);
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((this24)->sizesPerDim);
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__auto_destroy__tuple_1_star_int64_t(_field_destructor_tmp_2);
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _field_destructor_tmp_3 = &((this24)->blk);
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__auto_destroy__tuple_1_star_int64_t(_field_destructor_tmp_3);
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _field_destructor_tmp_4 = &((this24)->off);
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__auto_destroy__tuple_1_star_int64_t(_field_destructor_tmp_4);
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  deinit10(((BaseRectangularArr_1_int64_t_one_int64_t)(this24)), _ln, _fn);
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1031 */
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void chpl__auto_destroy_DefaultRectangularArr3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                      int64_t _ln,
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                      int32_t _fn) {
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _field_destructor_tmp_ = NULL;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _field_destructor_tmp_2 = NULL;
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _field_destructor_tmp_3 = NULL;
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _field_destructor_tmp_4 = NULL;
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((this24)->str);
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__auto_destroy__tuple_1_star_int64_t(_field_destructor_tmp_);
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((this24)->sizesPerDim);
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__auto_destroy__tuple_1_star_int64_t(_field_destructor_tmp_2);
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _field_destructor_tmp_3 = &((this24)->blk);
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__auto_destroy__tuple_1_star_int64_t(_field_destructor_tmp_3);
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _field_destructor_tmp_4 = &((this24)->off);
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__auto_destroy__tuple_1_star_int64_t(_field_destructor_tmp_4);
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  deinit11(((BaseRectangularArr_1_int64_t_one_locale)(this24)), _ln, _fn);
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1031 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1036 */
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_one * chpl_get_DefaultRectangularArr_dom3(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                                 int64_t _ln,
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                                 int32_t _fn) {
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->dom);
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1036 */
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_one * chpl_get_DefaultRectangularArr_dom2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                                 int64_t _ln,
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                                 int32_t _fn) {
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->dom);
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1036 */
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_one * chpl_get_DefaultRectangularArr_dom(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                                int64_t _ln,
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                                int32_t _fn) {
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->dom);
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1036 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1038 */
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_off3(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int64_t _ln,
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int32_t _fn) {
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp8 = NULL;
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->off);
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1038 */
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_off(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                  int64_t _ln,
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                  int32_t _fn) {
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp8 = NULL;
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->off);
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1038 */
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_off2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int64_t _ln,
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int32_t _fn) {
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp8 = NULL;
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->off);
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1038 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1039 */
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_blk3(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int64_t _ln,
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int32_t _fn) {
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp8 = NULL;
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->blk);
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1039 */
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_blk2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int64_t _ln,
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int32_t _fn) {
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp8 = NULL;
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->blk);
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1039 */
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_blk(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                  int64_t _ln,
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                  int32_t _fn) {
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp8 = NULL;
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->blk);
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1039 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1040 */
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_sizesPerDim(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                          int64_t _ln,
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                          int32_t _fn) {
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp8 = NULL;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->sizesPerDim);
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1040 */
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_sizesPerDim3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                           int64_t _ln,
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                           int32_t _fn) {
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp8 = NULL;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->sizesPerDim);
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1040 */
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_sizesPerDim2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                           int64_t _ln,
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                           int32_t _fn) {
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp8 = NULL;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->sizesPerDim);
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1041 */
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_str3(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int64_t _ln,
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int32_t _fn) {
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp8 = NULL;
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->str);
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1041 */
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_str(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                  int64_t _ln,
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                  int32_t _fn) {
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp8 = NULL;
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->str);
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1041 */
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _tuple_1_star_int64_t * chpl_get_DefaultRectangularArr_str2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int64_t _ln,
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int32_t _fn) {
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp8 = NULL;
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->str);
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1041 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1042 */
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t * chpl_get_DefaultRectangularArr_factoredOffs(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                             int64_t _ln,
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                             int32_t _fn) {
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->factoredOffs);
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1042 */
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t * chpl_get_DefaultRectangularArr_factoredOffs3(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                              int64_t _ln,
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                              int32_t _fn) {
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->factoredOffs);
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1042 */
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t * chpl_get_DefaultRectangularArr_factoredOffs2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                              int64_t _ln,
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                              int32_t _fn) {
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->factoredOffs);
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1042 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1046 */
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ddata_locale * chpl_get_DefaultRectangularArr_data3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                            int64_t _ln,
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                            int32_t _fn) {
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp8 = NULL;
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->data);
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1046 */
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ddata_int64_t * chpl_get_DefaultRectangularArr_data(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                            int64_t _ln,
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                            int32_t _fn) {
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp8 = NULL;
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->data);
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1046 */
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ddata_uint64_t * chpl_get_DefaultRectangularArr_data2(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                              int64_t _ln,
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                              int32_t _fn) {
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp8 = NULL;
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->data);
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1046 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1050 */
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ddata_locale * chpl_get_DefaultRectangularArr_shiftedData3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int64_t _ln,
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int32_t _fn) {
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp8 = NULL;
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->shiftedData);
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1050 */
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ddata_uint64_t * chpl_get_DefaultRectangularArr_shiftedData2(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                     int64_t _ln,
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                     int32_t _fn) {
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp8 = NULL;
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->shiftedData);
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1050 */
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ddata_int64_t * chpl_get_DefaultRectangularArr_shiftedData(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int64_t _ln,
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int32_t _fn) {
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp8 = NULL;
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->shiftedData);
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1050 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1053 */
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static c_ptr_void * chpl_get_DefaultRectangularArr_externFreeFunc(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                  int64_t _ln,
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                  int32_t _fn) {
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_c_ptr_void call_tmp8 = NULL;
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->externFreeFunc);
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1053 */
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static c_ptr_void * chpl_get_DefaultRectangularArr_externFreeFunc3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int64_t _ln,
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int32_t _fn) {
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_c_ptr_void call_tmp8 = NULL;
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->externFreeFunc);
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1053 */
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static c_ptr_void * chpl_get_DefaultRectangularArr_externFreeFunc2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int64_t _ln,
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                   int32_t _fn) {
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_c_ptr_void call_tmp8 = NULL;
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->externFreeFunc);
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1053 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1054 */
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool * chpl_get_DefaultRectangularArr_externArr(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                            int64_t _ln,
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                            int32_t _fn) {
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->externArr);
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1054 */
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool * chpl_get_DefaultRectangularArr_externArr3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                             int64_t _ln,
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                             int32_t _fn) {
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->externArr);
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1054 */
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool * chpl_get_DefaultRectangularArr_externArr2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                             int64_t _ln,
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                             int32_t _fn) {
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->externArr);
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1054 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1055 */
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool * chpl_get_DefaultRectangularArr__borrowed3(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                             int64_t _ln,
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                             int32_t _fn) {
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->_borrowed);
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1055 */
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool * chpl_get_DefaultRectangularArr__borrowed2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                             int64_t _ln,
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                             int32_t _fn) {
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->_borrowed);
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1055 */
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool * chpl_get_DefaultRectangularArr__borrowed(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                            int64_t _ln,
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                            int32_t _fn) {
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->_borrowed);
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1055 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1057 */
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool * chpl_get_DefaultRectangularArr_callPostAlloc3(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                 int64_t _ln,
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                 int32_t _fn) {
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->callPostAlloc);
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1057 */
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool * chpl_get_DefaultRectangularArr_callPostAlloc2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                 int64_t _ln,
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                 int32_t _fn) {
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->callPostAlloc);
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1057 */
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool * chpl_get_DefaultRectangularArr_callPostAlloc(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                int64_t _ln,
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                int32_t _fn) {
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->callPostAlloc);
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1057 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1059 */
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool * chpl_get_DefaultRectangularArr_deinitElts(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                             int64_t _ln,
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                             int32_t _fn) {
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->deinitElts);
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1059 */
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool * chpl_get_DefaultRectangularArr_deinitElts3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                              int64_t _ln,
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                              int32_t _fn) {
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->deinitElts);
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1059 */
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool * chpl_get_DefaultRectangularArr_deinitElts2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                              int64_t _ln,
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                              int32_t _fn) {
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = &((this24)->deinitElts);
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1059 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1064 */
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static DefaultRectangularArr_1_int64_t_one_locale_int64_t _new8(DefaultRectangularDom_1_int64_t_one dom,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                _ddata_locale data,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                chpl_bool externArr,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                chpl_bool _borrowed,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                void * externFreeFunc,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                int64_t _ln,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                int32_t _fn) {
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t initTemp = NULL;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t T = NULL;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_DefaultRectangularArr_1_int64_t_one_locale_int64_t_object), INT16(39), _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  initTemp = ((DefaultRectangularArr_1_int64_t_one_locale_int64_t)(cast_tmp));
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_DefaultRectangularArr_1_int64_t_one_locale_int64_t;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  init52(initTemp, dom, data, externArr, _borrowed, externFreeFunc, _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = initTemp;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return T;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1064 */
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static DefaultRectangularArr_1_int64_t_one_int64_t_int64_t _new7(DefaultRectangularDom_1_int64_t_one dom,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                 _ddata_int64_t data,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                 chpl_bool externArr,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                 chpl_bool _borrowed,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                 void * externFreeFunc,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                 int64_t _ln,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                 int32_t _fn) {
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_int64_t_int64_t initTemp = NULL;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_int64_t_int64_t T = NULL;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_DefaultRectangularArr_1_int64_t_one_int64_t_int64_t_object), INT16(63), _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  initTemp = ((DefaultRectangularArr_1_int64_t_one_int64_t_int64_t)(cast_tmp));
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_DefaultRectangularArr_1_int64_t_one_int64_t_int64_t;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  init53(initTemp, dom, data, externArr, _borrowed, externFreeFunc, _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = initTemp;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return T;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1064 */
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t _new6(DefaultRectangularDom_1_int64_t_one dom,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                  _ddata_uint64_t data,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                  chpl_bool externArr,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                  chpl_bool _borrowed,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                  void * externFreeFunc,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                  int64_t _ln,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                  int32_t _fn) {
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t initTemp = NULL;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t T = NULL;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl_DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t_object), INT16(66), _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  initTemp = ((DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t)(cast_tmp));
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid_DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  init54(initTemp, dom, data, externArr, _borrowed, externFreeFunc, _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = initTemp;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return T;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1064 */
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void init54(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   DefaultRectangularDom_1_int64_t_one dom,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   _ddata_uint64_t data,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   chpl_bool externArr,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   chpl_bool _borrowed,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   void * externFreeFunc,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   int64_t _ln,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   int32_t _fn) {
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseRectangularArr_1_int64_t_one_uint64_t super_tmp = NULL;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseArr default_arg_prev = NULL;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseArr default_arg_next = NULL;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t default_arg_pid;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool default_arg__decEltRefCounts;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_ddataResizePolicy default_arg__resizePolicy;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t off;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t blk;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp2;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t sizesPerDim;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp3;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t str;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp4;
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_uint64_t shiftedData = NULL;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  super_tmp = &((this24)->super);
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg_prev = init_default_prev3(_ln, _fn);
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg_next = init_default_next(_ln, _fn);
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg_pid = init_default_pid2();
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg__decEltRefCounts = init_default__decEltRefCounts();
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg__resizePolicy = init_default__resizePolicy2();
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  init17(super_tmp, default_arg_prev, default_arg_next, default_arg_pid, default_arg__decEltRefCounts, default_arg__resizePolicy, _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(((BaseRectangularArr_1_int64_t_one_uint64_t)(this24))))->chpl__cid = chpl__cid_BaseRectangularArr_1_int64_t_one_uint64_t;
#line 1076 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1076 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->dom = dom;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _defaultOf(&ret_tmp);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(off + INT64(0)) = *(ret_tmp + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *((this24)->off + INT64(0)) = *(off + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _defaultOf(&ret_tmp2);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(blk + INT64(0)) = *(ret_tmp2 + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *((this24)->blk + INT64(0)) = *(blk + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _defaultOf(&ret_tmp3);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(sizesPerDim + INT64(0)) = *(ret_tmp3 + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *((this24)->sizesPerDim + INT64(0)) = *(sizesPerDim + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _defaultOf(&ret_tmp4);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(str + INT64(0)) = *(ret_tmp4 + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *((this24)->str + INT64(0)) = *(str + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->factoredOffs = INT64(0);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->data = data;
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  shiftedData = ((_ddata_uint64_t)(nil));
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->shiftedData = shiftedData;
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->externFreeFunc = externFreeFunc;
#line 1079 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1079 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->externArr = externArr;
#line 1080 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1080 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->_borrowed = _borrowed;
#line 1081 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1081 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->callPostAlloc = UINT8(false);
#line 1082 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1082 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->deinitElts = UINT8(true);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t;
#line 1085 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1085 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  setupFieldsAndAllocate2(this24, _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1064 */
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void init53(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   DefaultRectangularDom_1_int64_t_one dom,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   _ddata_int64_t data,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   chpl_bool externArr,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   chpl_bool _borrowed,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   void * externFreeFunc,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   int64_t _ln,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   int32_t _fn) {
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseRectangularArr_1_int64_t_one_int64_t super_tmp = NULL;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseArr default_arg_prev = NULL;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseArr default_arg_next = NULL;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t default_arg_pid;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool default_arg__decEltRefCounts;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_ddataResizePolicy default_arg__resizePolicy;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t off;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t blk;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp2;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t sizesPerDim;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp3;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t str;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp4;
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_int64_t shiftedData = NULL;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  super_tmp = &((this24)->super);
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg_prev = init_default_prev(_ln, _fn);
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg_next = init_default_next2(_ln, _fn);
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg_pid = init_default_pid();
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg__decEltRefCounts = init_default__decEltRefCounts3();
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg__resizePolicy = init_default__resizePolicy();
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  init18(super_tmp, default_arg_prev, default_arg_next, default_arg_pid, default_arg__decEltRefCounts, default_arg__resizePolicy, _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(((BaseRectangularArr_1_int64_t_one_int64_t)(this24))))->chpl__cid = chpl__cid_BaseRectangularArr_1_int64_t_one_int64_t;
#line 1076 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1076 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->dom = dom;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _defaultOf(&ret_tmp);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(off + INT64(0)) = *(ret_tmp + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *((this24)->off + INT64(0)) = *(off + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _defaultOf(&ret_tmp2);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(blk + INT64(0)) = *(ret_tmp2 + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *((this24)->blk + INT64(0)) = *(blk + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _defaultOf(&ret_tmp3);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(sizesPerDim + INT64(0)) = *(ret_tmp3 + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *((this24)->sizesPerDim + INT64(0)) = *(sizesPerDim + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _defaultOf(&ret_tmp4);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(str + INT64(0)) = *(ret_tmp4 + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *((this24)->str + INT64(0)) = *(str + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->factoredOffs = INT64(0);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->data = data;
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  shiftedData = ((_ddata_int64_t)(nil));
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->shiftedData = shiftedData;
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->externFreeFunc = externFreeFunc;
#line 1079 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1079 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->externArr = externArr;
#line 1080 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1080 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->_borrowed = _borrowed;
#line 1081 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1081 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->callPostAlloc = UINT8(false);
#line 1082 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1082 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->deinitElts = UINT8(true);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_DefaultRectangularArr_1_int64_t_one_int64_t_int64_t;
#line 1085 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1085 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  setupFieldsAndAllocate(this24, _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1064 */
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void init52(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   DefaultRectangularDom_1_int64_t_one dom,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   _ddata_locale data,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   chpl_bool externArr,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   chpl_bool _borrowed,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   void * externFreeFunc,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   int64_t _ln,
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   int32_t _fn) {
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseRectangularArr_1_int64_t_one_locale super_tmp = NULL;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseArr default_arg_prev = NULL;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseArr default_arg_next = NULL;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t default_arg_pid;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool default_arg__decEltRefCounts;
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_ddataResizePolicy default_arg__resizePolicy;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t off;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t blk;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp2;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t sizesPerDim;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp3;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t str;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp4;
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_locale shiftedData = NULL;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  super_tmp = &((this24)->super);
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg_prev = init_default_prev2(_ln, _fn);
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg_next = init_default_next3(_ln, _fn);
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg_pid = init_default_pid3();
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg__decEltRefCounts = init_default__decEltRefCounts2();
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  default_arg__resizePolicy = init_default__resizePolicy3();
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 1074 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  init19(super_tmp, default_arg_prev, default_arg_next, default_arg_pid, default_arg__decEltRefCounts, default_arg__resizePolicy, _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(((BaseRectangularArr_1_int64_t_one_locale)(this24))))->chpl__cid = chpl__cid_BaseRectangularArr_1_int64_t_one_locale;
#line 1076 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1076 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->dom = dom;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _defaultOf(&ret_tmp);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(off + INT64(0)) = *(ret_tmp + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *((this24)->off + INT64(0)) = *(off + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _defaultOf(&ret_tmp2);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(blk + INT64(0)) = *(ret_tmp2 + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *((this24)->blk + INT64(0)) = *(blk + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _defaultOf(&ret_tmp3);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(sizesPerDim + INT64(0)) = *(ret_tmp3 + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *((this24)->sizesPerDim + INT64(0)) = *(sizesPerDim + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _defaultOf(&ret_tmp4);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(str + INT64(0)) = *(ret_tmp4 + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *((this24)->str + INT64(0)) = *(str + INT64(0));
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->factoredOffs = INT64(0);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->data = data;
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  shiftedData = ((_ddata_locale)(nil));
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->shiftedData = shiftedData;
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1078 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->externFreeFunc = externFreeFunc;
#line 1079 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1079 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->externArr = externArr;
#line 1080 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1080 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->_borrowed = _borrowed;
#line 1081 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1081 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->callPostAlloc = UINT8(false);
#line 1082 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1082 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (this24)->deinitElts = UINT8(true);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid_DefaultRectangularArr_1_int64_t_one_locale_int64_t;
#line 1085 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1085 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  setupFieldsAndAllocate3(this24, _ln, _fn);
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1070 */
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ddata_locale _new_default_data3(int64_t _ln,
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                        int32_t _fn) {
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_locale T = NULL;
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = ((_ddata_locale)(nil));
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return T;
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1070 */
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ddata_int64_t _new_default_data(int64_t _ln,
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                        int32_t _fn) {
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_int64_t T = NULL;
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = ((_ddata_int64_t)(nil));
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return T;
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1070 */
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ddata_uint64_t _new_default_data2(int64_t _ln,
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                          int32_t _fn) {
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_uint64_t T = NULL;
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = ((_ddata_uint64_t)(nil));
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return T;
#line 1070 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1073 */
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void * _new_default_externFreeFunc3(int64_t _ln,
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                           int32_t _fn) {
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void T = NULL;
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = ((c_ptr_void)(nil));
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return T;
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1073 */
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void * _new_default_externFreeFunc(int64_t _ln,
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                          int32_t _fn) {
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void T = NULL;
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = ((c_ptr_void)(nil));
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return T;
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1073 */
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void * _new_default_externFreeFunc2(int64_t _ln,
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                           int32_t _fn) {
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void T = NULL;
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = ((c_ptr_void)(nil));
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return T;
#line 1073 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1100 */
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_one dsiGetBaseDom4(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                          int64_t _ln,
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                          int32_t _fn) {
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one ret = NULL;
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_dom3(this24, _ln, _fn);
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ret = *(call_tmp8);
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return ret;
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1100 */
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_one dsiGetBaseDom2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                          int64_t _ln,
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                          int32_t _fn) {
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one ret = NULL;
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_dom(this24, _ln, _fn);
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ret = *(call_tmp8);
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return ret;
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1100 */
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_one dsiGetBaseDom3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                          int64_t _ln,
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                          int32_t _fn) {
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one ret = NULL;
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ret = *(call_tmp8);
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return ret;
#line 1100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1102 */
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void dsiElementInitializationComplete2(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                              int64_t _ln,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                              int32_t _fn) {
#line 1103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp9;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp10;
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp11 = NULL;
#line 1113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp12 = NULL;
#line 1114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp13 = NULL;
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp14 = NULL;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = chpl_get_DefaultRectangularArr_blk3(this24, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_dom3(this24, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = dsiDim2(coerce_tmp2, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = sizeAs4(call_tmp9, _ln, _fn);
#line 1103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = chpl___ASTERISK_2(*(*(_this_tmp_) + INT64(0)), call_tmp10);
#line 1103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp9);
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp11 = chpl_get_DefaultRectangularArr_callPostAlloc3(this24, _ln, _fn);
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (*(call_tmp11)) /* ZLINE: 1112 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp12 = chpl_get_DefaultRectangularArr_data2(this24, _ln, _fn);
#line 1113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    _ddata_allocate_postalloc3(*(call_tmp12), T, _ln, _fn);
#line 1114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp13 = chpl_get_DefaultRectangularArr_callPostAlloc3(this24, _ln, _fn);
#line 1114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl___ASSIGN_(call_tmp13, UINT8(false));
#line 1114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp14 = chpl_get_DefaultRectangularArr_deinitElts(this24, _ln, _fn);
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_(call_tmp14, UINT8(true));
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1102 */
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void dsiElementInitializationComplete3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                              int64_t _ln,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                              int32_t _fn) {
#line 1103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp9;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp10;
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp11 = NULL;
#line 1113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp12 = NULL;
#line 1114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp13 = NULL;
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp14 = NULL;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = chpl_get_DefaultRectangularArr_blk2(this24, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_dom(this24, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = dsiDim2(coerce_tmp2, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = sizeAs4(call_tmp9, _ln, _fn);
#line 1103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = chpl___ASTERISK_2(*(*(_this_tmp_) + INT64(0)), call_tmp10);
#line 1103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp9);
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp11 = chpl_get_DefaultRectangularArr_callPostAlloc2(this24, _ln, _fn);
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (*(call_tmp11)) /* ZLINE: 1112 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp12 = chpl_get_DefaultRectangularArr_data(this24, _ln, _fn);
#line 1113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    _ddata_allocate_postalloc(*(call_tmp12), T, _ln, _fn);
#line 1114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp13 = chpl_get_DefaultRectangularArr_callPostAlloc2(this24, _ln, _fn);
#line 1114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl___ASSIGN_(call_tmp13, UINT8(false));
#line 1114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp14 = chpl_get_DefaultRectangularArr_deinitElts3(this24, _ln, _fn);
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_(call_tmp14, UINT8(true));
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1102 */
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void dsiElementInitializationComplete(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                             int64_t _ln,
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                             int32_t _fn) {
#line 1103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp9;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp10;
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp11 = NULL;
#line 1113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp12 = NULL;
#line 1114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp13 = NULL;
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp14 = NULL;
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = chpl_get_DefaultRectangularArr_blk(this24, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = dsiDim2(coerce_tmp2, _ln, _fn);
#line 1104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = sizeAs4(call_tmp9, _ln, _fn);
#line 1103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = chpl___ASTERISK_2(*(*(_this_tmp_) + INT64(0)), call_tmp10);
#line 1103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp9);
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp11 = chpl_get_DefaultRectangularArr_callPostAlloc(this24, _ln, _fn);
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (*(call_tmp11)) /* ZLINE: 1112 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp12 = chpl_get_DefaultRectangularArr_data3(this24, _ln, _fn);
#line 1113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    _ddata_allocate_postalloc2(*(call_tmp12), T, _ln, _fn);
#line 1114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp13 = chpl_get_DefaultRectangularArr_callPostAlloc(this24, _ln, _fn);
#line 1114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl___ASSIGN_(call_tmp13, UINT8(false));
#line 1114 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp14 = chpl_get_DefaultRectangularArr_deinitElts2(this24, _ln, _fn);
#line 1117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_(call_tmp14, UINT8(true));
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1139 */
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void dsiDestroyArr4(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           chpl_bool deinitElts,
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int64_t _ln,
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int32_t _fn) {
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp9 = NULL;
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp10;
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_c_ptr_void call_tmp11 = NULL;
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp12 = NULL;
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr__ddata_uint64_t call_tmp13 = NULL;
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp14 = NULL;
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp15;
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T;
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp16 = NULL;
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T2;
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t _this_tmp_ = NULL;
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_uint64_t coerce_tmp3 = NULL;
#line 1167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp17 = NULL;
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_externArr(this24, _ln, _fn);
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (*(call_tmp8)) /* ZLINE: 1144 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp9 = chpl_get_DefaultRectangularArr__borrowed3(this24, _ln, _fn);
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp10 = chpl___EXCLAMATION_(*(call_tmp9));
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (call_tmp10) /* ZLINE: 1145 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp11 = chpl_get_DefaultRectangularArr_externFreeFunc(this24, _ln, _fn);
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp12 = chpl_get_DefaultRectangularArr_data2(this24, _ln, _fn);
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp13 = c_ptrTo4(call_tmp12);
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_call_free_func(*(call_tmp11), ((c_ptr_void)(call_tmp13)));
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  } else /* ZLINE: 1148 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp14 = chpl_get_DefaultRectangularArr_dom3(this24, _ln, _fn);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp2 = *(call_tmp14);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp15 = dsiNumIndices(coerce_tmp2, _ln, _fn);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (deinitElts) /* ZLINE: 1151 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp16 = chpl_get_DefaultRectangularArr_deinitElts(this24, _ln, _fn);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T = *(call_tmp16);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1151 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T = UINT8(false);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T) /* ZLINE: 1151 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T2 = chpl___GREATER_(call_tmp15, INT64(0));
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1151 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T2 = UINT8(false);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T2) /* ZLINE: 1151 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _this_tmp_ = chpl_get_DefaultRectangularArr_data2(this24, _ln, _fn);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp3 = *(_this_tmp_);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      this8(coerce_tmp3, INT64(0));
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp17 = chpl_get_DefaultRectangularArr_data2(this24, _ln, _fn);
#line 1167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    _ddata_free(*(call_tmp17), call_tmp15, _ln, _fn);
#line 1167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1139 */
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void dsiDestroyArr2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           chpl_bool deinitElts,
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int64_t _ln,
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int32_t _fn) {
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp9 = NULL;
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp10;
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_c_ptr_void call_tmp11 = NULL;
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp12 = NULL;
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr__ddata_locale call_tmp13 = NULL;
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp14 = NULL;
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp15;
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t numInd;
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T;
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp16 = NULL;
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T2;
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale _this_tmp_ = NULL;
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_locale coerce_tmp3 = NULL;
#line 1156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp17;
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp18;
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_low_one call_tmp19;
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t this25 = NULL;
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp20;
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t len;
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t numChunks;
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T3;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one tmpIter;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_low_one call_tmp21;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t numTasks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_these_range_int64_t_both_one _iterator = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this26;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp22;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this27;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp23;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp24;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this28;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp25;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp26;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one this29;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _class_localscoforall_fn10 _args_forcoforall_fn = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  raw_c_void_ptr _args_vforcoforall_fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _args_sizecoforall_fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  Error error = NULL;
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_chpl_direct_counted_range_iter _iterator2 = NULL;
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_chpl_direct_counted_range_iter call_tmp27;
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_chpl_direct_counted_range_iter ret_tmp;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_counted_range_iter_helper _iterator3 = NULL;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper call_tmp28;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_counted_range_iter_helper ret_tmp2;
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t low3;
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp29;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T4;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp30;
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp31;
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp32;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator4 = NULL;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp33;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp3;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i2;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low5;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 1162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_locale call_tmp34 = NULL;
#line 1162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale _this_tmp_2 = NULL;
#line 1162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_locale coerce_tmp4 = NULL;
#line 1167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp35 = NULL;
#line 1167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__class_localscoforall_fn10_object chpl_macro_tmp_11;
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_externArr2(this24, _ln, _fn);
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (*(call_tmp8)) /* ZLINE: 1144 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp9 = chpl_get_DefaultRectangularArr__borrowed(this24, _ln, _fn);
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp10 = chpl___EXCLAMATION_(*(call_tmp9));
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (call_tmp10) /* ZLINE: 1145 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp11 = chpl_get_DefaultRectangularArr_externFreeFunc2(this24, _ln, _fn);
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp12 = chpl_get_DefaultRectangularArr_data3(this24, _ln, _fn);
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp13 = c_ptrTo3(call_tmp12);
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_call_free_func(*(call_tmp11), ((c_ptr_void)(call_tmp13)));
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  } else /* ZLINE: 1148 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp14 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp2 = *(call_tmp14);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp15 = dsiNumIndices(coerce_tmp2, _ln, _fn);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    numInd = call_tmp15;
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (deinitElts) /* ZLINE: 1151 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp16 = chpl_get_DefaultRectangularArr_deinitElts2(this24, _ln, _fn);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T = *(call_tmp16);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1151 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T = UINT8(false);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T) /* ZLINE: 1151 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T2 = chpl___GREATER_(call_tmp15, INT64(0));
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1151 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T2 = UINT8(false);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T2) /* ZLINE: 1151 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _this_tmp_ = chpl_get_DefaultRectangularArr_data3(this24, _ln, _fn);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp3 = *(_this_tmp_);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      this7(coerce_tmp3, INT64(0));
#line 1156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp17 = _deinitElementsIsParallel(call_tmp15, _ln, _fn);
#line 1156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      if (call_tmp17) /* ZLINE: 1156 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp19 = chpl_build_low_bounded_range(INT64(0));
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp18 = chpl___POUND_(call_tmp19, call_tmp15, _ln, _fn);
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        this25 = this24;
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp20 = sizeAs4(call_tmp18, _ln, _fn);
#line 3529 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        len = call_tmp20;
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        if (chpl_task_getSerial()) /* ZLINE: 3530 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        {
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          T3 = INT64(1);
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        } else /* ZLINE: 3530 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        {
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          T3 = _computeNumChunks3(call_tmp20, _ln, _fn);
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        }
#line 3530 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        numChunks = T3;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp21 = chpl_build_low_bounded_range(INT64(0));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        tmpIter = chpl___POUND_(call_tmp21, T3, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _coforallCount = _endCountAlloc2(_ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        numTasks = chpl_boundedCoforallSize(tmpIter, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _upEndCount(_coforallCount, numTasks, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_resetTaskSpawn(numTasks, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _iterator = _getIterator3(&tmpIter, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        this26 = (_iterator)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        checkIfIterWillOverflow(this26, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        i = INT64(0);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        this27 = (_iterator)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp22 = lowBoundForIter(this27);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp23 = chpl__idxToInt(call_tmp22);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        this28 = (_iterator)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp24 = highBoundForIter(this28);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp25 = chpl__idxToInt(call_tmp24);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        end = call_tmp25;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        for (i = call_tmp23; ((i <= end)); i += INT64(1)) {
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_iterator, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          this29 = (_iterator)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp26 = chpl_intToIdx3(this29, i);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _args_forcoforall_fn = ((_class_localscoforall_fn10)(&chpl_macro_tmp_11));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          (_args_forcoforall_fn)->_0_len = len;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          (_args_forcoforall_fn)->_1_numChunks = numChunks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          (_args_forcoforall_fn)->_2_call_tmp = call_tmp18;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          (_args_forcoforall_fn)->_3__coforallCount = _coforallCount;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          (_args_forcoforall_fn)->_4_chunk = call_tmp26;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          (_args_forcoforall_fn)->_5_this = this25;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          _args_sizecoforall_fn = sizeof(chpl__class_localscoforall_fn10_object);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          (_args_forcoforall_fn)->_ln = _ln;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          (_args_forcoforall_fn)->_fn = _fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          /*** wrapcoforall_fn10 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(9), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), _args_sizecoforall_fn, INT64(3537), INT32(38));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        }
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        error = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _waitEndCount2(_coforallCount, numTasks, &error, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        if (error != nil) /* ZLINE: 3537 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        {
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_propagate_error(error, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        }
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _endCountFree(_coforallCount, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _freeIterator17(_iterator, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl__autoDestroy59(tmpIter);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl__autoDestroy19(call_tmp21);
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl__autoDestroy(((RootClass)(this25)));
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_after_forall_fence();
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl__autoDestroy59(call_tmp18);
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl__autoDestroy19(call_tmp19);
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      } else /* ZLINE: 1160 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_direct_counted_range_iter(INT64(0), call_tmp15, &ret_tmp);
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp27 = ret_tmp;
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _iterator2 = _getIterator10(&call_tmp27, _ln, _fn);
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_iterator2, _ln, _fn);
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        low3 = (_iterator2)->F0_low;
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_iterator2, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_direct_counted_range_iter_helper(low3, (_iterator2)->F1_count, &ret_tmp2);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp28 = ret_tmp2;
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _iterator3 = _getIterator11(&call_tmp28, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_check_nil(_iterator3, _ln, _fn);
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp29 = chpl___LESS_3((_iterator3)->F1_count, INT64(0));
#line 3252 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        if (call_tmp29) /* ZLINE: 3252 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
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
        call_tmp30 = chpl___EQUALS_3((_iterator3)->F1_count, INT64(0));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        if (call_tmp30) /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_iterator3, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp31 = chpl___HYPHEN_5(((uint64_t)((_iterator3)->F0_low)));
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          T4 = chpl___COLON_6(call_tmp31, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        } else /* ZLINE: 3258 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        {
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_iterator3, _ln, _fn);
#line 3259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp32 = chpl___HYPHEN_6((_iterator3)->F1_count);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          chpl_check_nil(_iterator3, _ln, _fn);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          T4 = chpl___PLUS_3((_iterator3)->F0_low, call_tmp32);
#line 3258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_direct_param_stride_range_iter(low4, T4, &ret_tmp3);
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp33 = ret_tmp3;
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _iterator4 = _getIterator13(&call_tmp33, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        i2 = INT64(0);
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
        for (chpl_check_nil(_iterator4, _ln, _fn),i2 = (_iterator4)->F0_low; ((i2 <= high2)); i2 += INT64(1)) {
#line 1162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_check_nil(this24, _ln, _fn);
#line 1162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          _this_tmp_2 = chpl_get_DefaultRectangularArr_data3(this24, _ln, _fn);
#line 1162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          coerce_tmp4 = *(_this_tmp_2);
#line 1162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 1162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          call_tmp34 = this7(coerce_tmp4, i2);
#line 1162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl__autoDestroy45(call_tmp34);
#line 1162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        }
#line 3261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _freeIterator19(_iterator4, _ln, _fn);
#line 3215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        _freeIterator20(_iterator3, _ln, _fn);
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _freeIterator(_iterator2, _ln, _fn);
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      }
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp35 = chpl_get_DefaultRectangularArr_data3(this24, _ln, _fn);
#line 1167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    _ddata_free3(*(call_tmp35), numInd, _ln, _fn);
#line 1167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1139 */
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void dsiDestroyArr3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           chpl_bool deinitElts,
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int64_t _ln,
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int32_t _fn) {
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp9 = NULL;
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp10;
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_c_ptr_void call_tmp11 = NULL;
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp12 = NULL;
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr__ddata_int64_t call_tmp13 = NULL;
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp14 = NULL;
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp15;
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T;
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp16 = NULL;
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T2;
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t _this_tmp_ = NULL;
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_int64_t coerce_tmp3 = NULL;
#line 1167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp17 = NULL;
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_externArr3(this24, _ln, _fn);
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (*(call_tmp8)) /* ZLINE: 1144 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp9 = chpl_get_DefaultRectangularArr__borrowed2(this24, _ln, _fn);
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp10 = chpl___EXCLAMATION_(*(call_tmp9));
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (call_tmp10) /* ZLINE: 1145 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp11 = chpl_get_DefaultRectangularArr_externFreeFunc3(this24, _ln, _fn);
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp12 = chpl_get_DefaultRectangularArr_data(this24, _ln, _fn);
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp13 = c_ptrTo(call_tmp12);
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_call_free_func(*(call_tmp11), ((c_ptr_void)(call_tmp13)));
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  } else /* ZLINE: 1148 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp14 = chpl_get_DefaultRectangularArr_dom(this24, _ln, _fn);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp2 = *(call_tmp14);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp15 = dsiNumIndices(coerce_tmp2, _ln, _fn);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (deinitElts) /* ZLINE: 1151 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp16 = chpl_get_DefaultRectangularArr_deinitElts3(this24, _ln, _fn);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T = *(call_tmp16);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1151 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T = UINT8(false);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T) /* ZLINE: 1151 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T2 = chpl___GREATER_(call_tmp15, INT64(0));
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1151 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T2 = UINT8(false);
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T2) /* ZLINE: 1151 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _this_tmp_ = chpl_get_DefaultRectangularArr_data(this24, _ln, _fn);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp3 = *(_this_tmp_);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      this6(coerce_tmp3, INT64(0));
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp17 = chpl_get_DefaultRectangularArr_data(this24, _ln, _fn);
#line 1167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    _ddata_free2(*(call_tmp17), call_tmp15, _ln, _fn);
#line 1167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1171 */
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ddata_int64_t * theData2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                 int64_t _ln,
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                 int32_t _fn) {
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp8 = NULL;
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_shiftedData(this24, _ln, _fn);
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1171 */
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ddata_locale * theData3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                int64_t _ln,
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                int32_t _fn) {
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp8 = NULL;
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_shiftedData3(this24, _ln, _fn);
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1171 */
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ddata_uint64_t * theData(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                 int64_t _ln,
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                 int32_t _fn) {
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp8 = NULL;
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_shiftedData2(this24, _ln, _fn);
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1181 */
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void these4(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   int64_t tasksPerLocale,
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   chpl_bool ignoreRunning,
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   int64_t minIndicesPerTask,
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                   _ir_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t * _retArg) {
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_retArg)->F0_this = this24;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_retArg)->F1_tasksPerLocale = tasksPerLocale;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_retArg)->F2_ignoreRunning = ignoreRunning;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_retArg)->F3_minIndicesPerTask = minIndicesPerTask;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1181 */
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t _getIterator17(_ir_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t * ir,
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                                   int64_t _ln,
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                                                   int32_t _fn) {
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t _ic_ = NULL;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t T = NULL;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T2;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T3;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T4;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t_object), INT16(48), _ln, _fn);
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_ = ((_ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t)(cast_tmp));
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic_these_DefaultRectangularArr_1_int64_t_one_locale_int64_t;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->more = INT64(1);
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = (ir)->F0_this;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->F0_this = T;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T2 = (ir)->F1_tasksPerLocale;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->F1_tasksPerLocale = T2;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T3 = (ir)->F2_ignoreRunning;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->F2_ignoreRunning = T3;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T4 = (ir)->F3_minIndicesPerTask;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->F3_minIndicesPerTask = T4;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return _ic_;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1181 */
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t these_default_tasksPerLocale3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24) {
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t tasksPerLocale;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  tasksPerLocale = dataParTasksPerLocale;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return tasksPerLocale;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1182 */
#line 1182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool these_default_ignoreRunning3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24) {
#line 1182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool ignoreRunning;
#line 1182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ignoreRunning = dataParIgnoreRunningTasks;
#line 1182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return ignoreRunning;
#line 1182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1183 */
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t these_default_minIndicesPerTask3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24) {
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t minIndicesPerTask;
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  minIndicesPerTask = dataParMinGranularity;
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return minIndicesPerTask;
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1241 */
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void computeFactoredOffs3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                 int64_t _ln,
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                 int32_t _fn) {
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp11;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp13;
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_factoredOffs(this24, _ln, _fn);
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp8, INT64(0));
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = chpl_get_DefaultRectangularArr_factoredOffs(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = chpl_get_DefaultRectangularArr_factoredOffs(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = chpl_get_DefaultRectangularArr_blk(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_2 = chpl_get_DefaultRectangularArr_off2(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp11 = chpl__idxToInt(*(*(_this_tmp_2) + INT64(0)));
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp12 = chpl___ASTERISK_2(*(*(_this_tmp_) + INT64(0)), call_tmp11);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp13 = chpl___PLUS_3(*(call_tmp10), call_tmp12);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp9, call_tmp13);
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1241 */
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void computeFactoredOffs2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                 int64_t _ln,
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                 int32_t _fn) {
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp11;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp13;
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_factoredOffs2(this24, _ln, _fn);
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp8, INT64(0));
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = chpl_get_DefaultRectangularArr_factoredOffs2(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = chpl_get_DefaultRectangularArr_factoredOffs2(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = chpl_get_DefaultRectangularArr_blk2(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_2 = chpl_get_DefaultRectangularArr_off(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp11 = chpl__idxToInt(*(*(_this_tmp_2) + INT64(0)));
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp12 = chpl___ASTERISK_2(*(*(_this_tmp_) + INT64(0)), call_tmp11);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp13 = chpl___PLUS_3(*(call_tmp10), call_tmp12);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp9, call_tmp13);
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1241 */
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void computeFactoredOffs(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                int64_t _ln,
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                int32_t _fn) {
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp11;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp13;
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_factoredOffs3(this24, _ln, _fn);
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp8, INT64(0));
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = chpl_get_DefaultRectangularArr_factoredOffs3(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = chpl_get_DefaultRectangularArr_factoredOffs3(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = chpl_get_DefaultRectangularArr_blk3(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_2 = chpl_get_DefaultRectangularArr_off3(this24, _ln, _fn);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp11 = chpl__idxToInt(*(*(_this_tmp_2) + INT64(0)));
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp12 = chpl___ASTERISK_2(*(*(_this_tmp_) + INT64(0)), call_tmp11);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp13 = chpl___PLUS_3(*(call_tmp10), call_tmp12);
#line 1244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp9, call_tmp13);
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1248 */
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void initShiftedData2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             int64_t _ln,
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             int32_t _fn) {
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp10;
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T;
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp12 = NULL;
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp13 = NULL;
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_locale call_tmp14 = NULL;
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = dsiNumIndices(coerce_tmp2, _ln, _fn);
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = chpl___GREATER_(call_tmp9, INT64(0));
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp10) /* ZLINE: 1255 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp11 = chpl_get_DefaultRectangularArr_factoredOffs(this24, _ln, _fn);
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    T = chpl___HYPHEN_9(*(call_tmp11));
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp12 = chpl_get_DefaultRectangularArr_shiftedData3(this24, _ln, _fn);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp13 = chpl_get_DefaultRectangularArr_data3(this24, _ln, _fn);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp14 = _ddata_shift3(*(call_tmp13), T, _ln, _fn);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl___ASSIGN_56(call_tmp12, call_tmp14);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1248 */
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void initShiftedData3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             int64_t _ln,
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             int32_t _fn) {
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp10;
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T;
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp12 = NULL;
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp13 = NULL;
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_int64_t call_tmp14 = NULL;
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_dom(this24, _ln, _fn);
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = dsiNumIndices(coerce_tmp2, _ln, _fn);
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = chpl___GREATER_(call_tmp9, INT64(0));
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp10) /* ZLINE: 1255 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp11 = chpl_get_DefaultRectangularArr_factoredOffs2(this24, _ln, _fn);
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    T = chpl___HYPHEN_9(*(call_tmp11));
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp12 = chpl_get_DefaultRectangularArr_shiftedData(this24, _ln, _fn);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp13 = chpl_get_DefaultRectangularArr_data(this24, _ln, _fn);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp14 = _ddata_shift(*(call_tmp13), T, _ln, _fn);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl___ASSIGN_55(call_tmp12, call_tmp14);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1248 */
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void initShiftedData(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int64_t _ln,
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int32_t _fn) {
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp10;
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T;
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp12 = NULL;
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp13 = NULL;
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_uint64_t call_tmp14 = NULL;
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_dom3(this24, _ln, _fn);
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = dsiNumIndices(coerce_tmp2, _ln, _fn);
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = chpl___GREATER_(call_tmp9, INT64(0));
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp10) /* ZLINE: 1255 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp11 = chpl_get_DefaultRectangularArr_factoredOffs3(this24, _ln, _fn);
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    T = chpl___HYPHEN_9(*(call_tmp11));
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp12 = chpl_get_DefaultRectangularArr_shiftedData2(this24, _ln, _fn);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp13 = chpl_get_DefaultRectangularArr_data2(this24, _ln, _fn);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp14 = _ddata_shift2(*(call_tmp13), T, _ln, _fn);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl___ASSIGN_54(call_tmp12, call_tmp14);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1266 */
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void setupFieldsAndAllocate3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                    int64_t _ln,
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                    int32_t _fn) {
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp9 = NULL;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp10;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp11;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp12 = NULL;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp13 = NULL;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp14;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp3 = NULL;
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp15 = NULL;
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
#line 1284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_4 = NULL;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp16 = NULL;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp17;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp4 = NULL;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp18;
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp19 = NULL;
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp20;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp21 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp22 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_locale call_tmp23 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int32_t default_arg_subloc;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool _formal_tmp_out_callPostAlloc;
#line 1311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp24 = NULL;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = chpl_get_DefaultRectangularArr_off2(this24, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = (*(_this_tmp_) + INT64(0));
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(call_tmp9);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = dsiDim2(coerce_tmp2, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp11 = low2(call_tmp10);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp8, call_tmp11);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp10);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_2 = chpl_get_DefaultRectangularArr_str2(this24, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp12 = (*(_this_tmp_2) + INT64(0));
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp13 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp3 = *(call_tmp13);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp14 = dsiDim2(coerce_tmp3, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp12, INT64(1));
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp14);
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_3 = chpl_get_DefaultRectangularArr_blk(this24, _ln, _fn);
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp15 = (*(_this_tmp_3) + INT64(0));
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp15, INT64(1));
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  computeFactoredOffs3(this24, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_4 = chpl_get_DefaultRectangularArr_blk(this24, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp16 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp4 = *(call_tmp16);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp17 = dsiDim2(coerce_tmp4, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp18 = sizeAs4(call_tmp17, _ln, _fn);
#line 1284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = chpl___ASTERISK_2(*(*(_this_tmp_4) + INT64(0)), call_tmp18);
#line 1284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp17);
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp19 = chpl_get_DefaultRectangularArr_data3(this24, _ln, _fn);
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp20 = chpl___EQUALS_15(*(call_tmp19), nil);
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp20) /* ZLINE: 1295 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp21 = chpl_get_DefaultRectangularArr_data3(this24, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp22 = chpl_get_DefaultRectangularArr_callPostAlloc(this24, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    default_arg_subloc = _ddata_allocate_noinit_default_subloc3();
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp23 = _ddata_allocate_noinit2(T, &_formal_tmp_out_callPostAlloc, default_arg_subloc, UINT8(true), _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl___ASSIGN_(call_tmp22, _formal_tmp_out_callPostAlloc);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl___ASSIGN_56(call_tmp21, call_tmp23);
#line 1311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp24 = chpl_get_DefaultRectangularArr_data3(this24, _ln, _fn);
#line 1311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    init_elts2(*(call_tmp24), T, INT64(0), _ln, _fn);
#line 1312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    dsiElementInitializationComplete(this24, _ln, _fn);
#line 1312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  initShiftedData2(this24, _ln, _fn);
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1266 */
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void setupFieldsAndAllocate2(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                    int64_t _ln,
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                    int32_t _fn) {
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp9 = NULL;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp10;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp11;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp12 = NULL;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp13 = NULL;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp14;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp3 = NULL;
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp15 = NULL;
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
#line 1284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_4 = NULL;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp16 = NULL;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp17;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp4 = NULL;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp18;
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp19 = NULL;
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp20;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp21 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp22 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_uint64_t call_tmp23 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int32_t default_arg_subloc;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool _formal_tmp_out_callPostAlloc;
#line 1311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp24 = NULL;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = chpl_get_DefaultRectangularArr_off3(this24, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = (*(_this_tmp_) + INT64(0));
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = chpl_get_DefaultRectangularArr_dom3(this24, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(call_tmp9);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = dsiDim2(coerce_tmp2, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp11 = low2(call_tmp10);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp8, call_tmp11);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp10);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_2 = chpl_get_DefaultRectangularArr_str3(this24, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp12 = (*(_this_tmp_2) + INT64(0));
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp13 = chpl_get_DefaultRectangularArr_dom3(this24, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp3 = *(call_tmp13);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp14 = dsiDim2(coerce_tmp3, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp12, INT64(1));
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp14);
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_3 = chpl_get_DefaultRectangularArr_blk3(this24, _ln, _fn);
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp15 = (*(_this_tmp_3) + INT64(0));
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp15, INT64(1));
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  computeFactoredOffs(this24, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_4 = chpl_get_DefaultRectangularArr_blk3(this24, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp16 = chpl_get_DefaultRectangularArr_dom3(this24, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp4 = *(call_tmp16);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp17 = dsiDim2(coerce_tmp4, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp18 = sizeAs4(call_tmp17, _ln, _fn);
#line 1284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = chpl___ASTERISK_2(*(*(_this_tmp_4) + INT64(0)), call_tmp18);
#line 1284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp17);
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp19 = chpl_get_DefaultRectangularArr_data2(this24, _ln, _fn);
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp20 = chpl___EQUALS_13(*(call_tmp19), nil);
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp20) /* ZLINE: 1295 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp21 = chpl_get_DefaultRectangularArr_data2(this24, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp22 = chpl_get_DefaultRectangularArr_callPostAlloc3(this24, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    default_arg_subloc = _ddata_allocate_noinit_default_subloc();
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp23 = _ddata_allocate_noinit3(T, &_formal_tmp_out_callPostAlloc, default_arg_subloc, UINT8(true), _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl___ASSIGN_(call_tmp22, _formal_tmp_out_callPostAlloc);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl___ASSIGN_54(call_tmp21, call_tmp23);
#line 1311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp24 = chpl_get_DefaultRectangularArr_data2(this24, _ln, _fn);
#line 1311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    init_elts3(*(call_tmp24), T, INT64(0), _ln, _fn);
#line 1312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    dsiElementInitializationComplete2(this24, _ln, _fn);
#line 1312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  initShiftedData(this24, _ln, _fn);
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1266 */
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void setupFieldsAndAllocate(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                   int64_t _ln,
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                   int32_t _fn) {
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp9 = NULL;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp10;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp11;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp12 = NULL;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp13 = NULL;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp14;
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp3 = NULL;
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp15 = NULL;
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
#line 1284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_4 = NULL;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp16 = NULL;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp17;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp4 = NULL;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp18;
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp19 = NULL;
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp20;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp21 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_bool call_tmp22 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_int64_t call_tmp23 = NULL;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int32_t default_arg_subloc;
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool _formal_tmp_out_callPostAlloc;
#line 1311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp24 = NULL;
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = chpl_get_DefaultRectangularArr_off(this24, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = (*(_this_tmp_) + INT64(0));
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = chpl_get_DefaultRectangularArr_dom(this24, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(call_tmp9);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp10 = dsiDim2(coerce_tmp2, _ln, _fn);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp11 = low2(call_tmp10);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp8, call_tmp11);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp10);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_2 = chpl_get_DefaultRectangularArr_str(this24, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp12 = (*(_this_tmp_2) + INT64(0));
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp13 = chpl_get_DefaultRectangularArr_dom(this24, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp3 = *(call_tmp13);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp14 = dsiDim2(coerce_tmp3, _ln, _fn);
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp12, INT64(1));
#line 1269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp14);
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_3 = chpl_get_DefaultRectangularArr_blk2(this24, _ln, _fn);
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp15 = (*(_this_tmp_3) + INT64(0));
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___ASSIGN_3(call_tmp15, INT64(1));
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  computeFactoredOffs2(this24, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_4 = chpl_get_DefaultRectangularArr_blk2(this24, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp16 = chpl_get_DefaultRectangularArr_dom(this24, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp4 = *(call_tmp16);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp17 = dsiDim2(coerce_tmp4, _ln, _fn);
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp18 = sizeAs4(call_tmp17, _ln, _fn);
#line 1284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = chpl___ASTERISK_2(*(*(_this_tmp_4) + INT64(0)), call_tmp18);
#line 1284 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp17);
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp19 = chpl_get_DefaultRectangularArr_data(this24, _ln, _fn);
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp20 = chpl___EQUALS_14(*(call_tmp19), nil);
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp20) /* ZLINE: 1295 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp21 = chpl_get_DefaultRectangularArr_data(this24, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp22 = chpl_get_DefaultRectangularArr_callPostAlloc2(this24, _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    default_arg_subloc = _ddata_allocate_noinit_default_subloc2();
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp23 = _ddata_allocate_noinit(T, &_formal_tmp_out_callPostAlloc, default_arg_subloc, UINT8(true), _ln, _fn);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl___ASSIGN_(call_tmp22, _formal_tmp_out_callPostAlloc);
#line 1301 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl___ASSIGN_55(call_tmp21, call_tmp23);
#line 1311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp24 = chpl_get_DefaultRectangularArr_data(this24, _ln, _fn);
#line 1311 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    init_elts(*(call_tmp24), T, INT64(0), _ln, _fn);
#line 1312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    dsiElementInitializationComplete3(this24, _ln, _fn);
#line 1312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1316 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  initShiftedData3(this24, _ln, _fn);
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1319 */
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t getDataIndex(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int64_t _e0_ind,
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int64_t _ln,
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int32_t _fn) {
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__init_tuple9(_e0_ind, &ret_tmp);
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(ind + INT64(0)) = *(ret_tmp + INT64(0));
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1322 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = getDataIndex4(this24, &ind);
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy50(&ind);
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1320 */
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool getDataIndex_default_getShifted(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24) {
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return UINT8(true);
#line 1320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1324 */
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t getDataIndex2(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             _tuple_1_star_int64_t * ind) {
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl__idxToInt(*(*(ind) + INT64(0)));
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1324 */
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t getDataIndex3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             _tuple_1_star_int64_t * ind) {
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl__idxToInt(*(*(ind) + INT64(0)));
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1324 */
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t getDataIndex4(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             _tuple_1_star_int64_t * ind) {
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 1336 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl__idxToInt(*(*(ind) + INT64(0)));
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1324 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1325 */
#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool getDataIndex_default_getShifted2(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24) {
#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return UINT8(true);
#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1325 */
#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool getDataIndex_default_getShifted3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24) {
#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return UINT8(true);
#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1325 */
#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool getDataIndex_default_getShifted4(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24) {
#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return UINT8(true);
#line 1325 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1374 */
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static uint64_t * dsiAccess(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int64_t _e0_ind,
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int64_t _ln,
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int32_t _fn) {
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_uint64_t call_tmp8 = NULL;
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__init_tuple9(_e0_ind, &ret_tmp);
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(ind + INT64(0)) = *(ret_tmp + INT64(0));
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = dsiAccess9(this24, &ind, _ln, _fn);
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1374 */
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t * dsiAccess3(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int64_t _e0_ind,
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int64_t _ln,
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int32_t _fn) {
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__init_tuple9(_e0_ind, &ret_tmp);
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(ind + INT64(0)) = *(ret_tmp + INT64(0));
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = dsiAccess8(this24, &ind, _ln, _fn);
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1374 */
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static locale * dsiAccess2(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int64_t _e0_ind,
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int64_t _ln,
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int32_t _fn) {
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_locale call_tmp8 = NULL;
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__init_tuple9(_e0_ind, &ret_tmp);
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(ind + INT64(0)) = *(ret_tmp + INT64(0));
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1376 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = dsiAccess7(this24, &ind, _ln, _fn);
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1374 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1382 */
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t * dsiAccess5(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int64_t _e0_ind,
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int64_t _ln,
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int32_t _fn) {
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 1384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__init_tuple9(_e0_ind, &ret_tmp);
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(ind + INT64(0)) = *(ret_tmp + INT64(0));
#line 1384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = dsiAccess10(this24, &ind, _ln, _fn);
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1382 */
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static uint64_t * dsiAccess6(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             int64_t _e0_ind,
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             int64_t _ln,
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             int32_t _fn) {
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 1384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_uint64_t call_tmp8 = NULL;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__init_tuple9(_e0_ind, &ret_tmp);
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(ind + INT64(0)) = *(ret_tmp + INT64(0));
#line 1384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = dsiAccess11(this24, &ind, _ln, _fn);
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1382 */
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static locale * dsiAccess4(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int64_t _e0_ind,
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int64_t _ln,
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int32_t _fn) {
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 1384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_locale call_tmp8 = NULL;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__init_tuple9(_e0_ind, &ret_tmp);
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(ind + INT64(0)) = *(ret_tmp + INT64(0));
#line 1384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1384 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = dsiAccess12(this24, &ind, _ln, _fn);
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp8;
#line 1382 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1386 */
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static locale * dsiAccess7(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           _tuple_1_star_int64_t * ind,
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int64_t _ln,
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int32_t _fn) {
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t _formal_tmp_ind;
#line 1388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_locale call_tmp9 = NULL;
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale _this_tmp_ = NULL;
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_locale coerce_tmp2 = NULL;
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(_formal_tmp_ind + INT64(0)) = *(*(ind) + INT64(0));
#line 1388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  getDataIndex_default_getShifted4(this24);
#line 1388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = getDataIndex4(this24, &_formal_tmp_ind);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = theData3(this24, _ln, _fn);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(_this_tmp_);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = this7(coerce_tmp2, call_tmp8);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy50(&_formal_tmp_ind);
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp9;
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1386 */
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t * dsiAccess8(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            _tuple_1_star_int64_t * ind,
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int64_t _ln,
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int32_t _fn) {
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t _formal_tmp_ind;
#line 1388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t _this_tmp_ = NULL;
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_int64_t coerce_tmp2 = NULL;
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(_formal_tmp_ind + INT64(0)) = *(*(ind) + INT64(0));
#line 1388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  getDataIndex_default_getShifted3(this24);
#line 1388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = getDataIndex3(this24, &_formal_tmp_ind);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = theData2(this24, _ln, _fn);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(_this_tmp_);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = this6(coerce_tmp2, call_tmp8);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy50(&_formal_tmp_ind);
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp9;
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1386 */
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static uint64_t * dsiAccess9(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             _tuple_1_star_int64_t * ind,
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             int64_t _ln,
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             int32_t _fn) {
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t _formal_tmp_ind;
#line 1388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_uint64_t call_tmp9 = NULL;
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t _this_tmp_ = NULL;
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_uint64_t coerce_tmp2 = NULL;
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(_formal_tmp_ind + INT64(0)) = *(*(ind) + INT64(0));
#line 1388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  getDataIndex_default_getShifted2(this24);
#line 1388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = getDataIndex2(this24, &_formal_tmp_ind);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = theData(this24, _ln, _fn);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(_this_tmp_);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = this8(coerce_tmp2, call_tmp8);
#line 1389 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy50(&_formal_tmp_ind);
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp9;
#line 1386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1399 */
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static locale * dsiAccess12(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            _tuple_1_star_int64_t * ind,
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int64_t _ln,
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                            int32_t _fn) {
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t _formal_tmp_ind;
#line 1401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_locale call_tmp9 = NULL;
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale _this_tmp_ = NULL;
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_locale coerce_tmp2 = NULL;
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(_formal_tmp_ind + INT64(0)) = *(*(ind) + INT64(0));
#line 1401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  getDataIndex_default_getShifted4(this24);
#line 1401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = getDataIndex4(this24, &_formal_tmp_ind);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = theData3(this24, _ln, _fn);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(_this_tmp_);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = this7(coerce_tmp2, call_tmp8);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy50(&_formal_tmp_ind);
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp9;
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1399 */
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static int64_t * dsiAccess10(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             _tuple_1_star_int64_t * ind,
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             int64_t _ln,
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                             int32_t _fn) {
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t _formal_tmp_ind;
#line 1401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t _this_tmp_ = NULL;
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_int64_t coerce_tmp2 = NULL;
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(_formal_tmp_ind + INT64(0)) = *(*(ind) + INT64(0));
#line 1401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  getDataIndex_default_getShifted3(this24);
#line 1401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = getDataIndex3(this24, &_formal_tmp_ind);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = theData2(this24, _ln, _fn);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(_this_tmp_);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = this6(coerce_tmp2, call_tmp8);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy50(&_formal_tmp_ind);
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp9;
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1399 */
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static uint64_t * dsiAccess11(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                              _tuple_1_star_int64_t * ind,
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                              int64_t _ln,
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                              int32_t _fn) {
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t _formal_tmp_ind;
#line 1401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_uint64_t call_tmp9 = NULL;
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t _this_tmp_ = NULL;
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_uint64_t coerce_tmp2 = NULL;
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  *(_formal_tmp_ind + INT64(0)) = *(*(ind) + INT64(0));
#line 1401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  getDataIndex_default_getShifted2(this24);
#line 1401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1401 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = getDataIndex2(this24, &_formal_tmp_ind);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = theData(this24, _ln, _fn);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(_this_tmp_);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = this8(coerce_tmp2, call_tmp8);
#line 1402 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy50(&_formal_tmp_ind);
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp9;
#line 1399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1406 */
#line 1406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static chpl_bool dsiBoundsCheck(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                _tuple_1_star_int64_t * i,
#line 1406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                int64_t _ln,
#line 1406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                int32_t _fn) {
#line 1407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp9;
#line 1407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 1407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1407 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = dsiMember(coerce_tmp2, i, _ln, _fn);
#line 1406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return call_tmp9;
#line 1406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1442 */
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void dsiReallocate3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24,
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           _tuple_1_star_range_int64_t_both_one * bounds,
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int64_t _ln,
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int32_t _fn) {
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool actuallyResizing;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_range_int64_t_both_one _iterator = NULL;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp8;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this25;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this26;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp10;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp11;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this27;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp12;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp13;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this28;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp14 = NULL;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp15 = NULL;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp16;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp17;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp3;
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp18;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_ddataResizePolicy call_tmp19 = NULL;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseArr coerce_tmp4 = NULL;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp20;
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_localeID_t call_tmp21;
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  locale call_tmp22;
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  locale call_tmp23;
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp24;
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp5;
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one reallocD;
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one _instance = NULL;
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp25 = NULL;
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp26;
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp6 = NULL;
#line 1475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp27;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp28;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp29 = NULL;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp30;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp7 = NULL;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp31;
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp32 = NULL;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp33;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp8 = NULL;
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T2;
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp34 = NULL;
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp35;
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp9 = NULL;
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T3;
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp36;
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T4;
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp37 = NULL;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp38 = NULL;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp39;
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one _chpl_forward_tgt2 = NULL;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp40;
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp41 = NULL;
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp42 = NULL;
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_ddataResizePolicy call_tmp43 = NULL;
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseArr coerce_tmp10 = NULL;
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_locale call_tmp44 = NULL;
#line 1502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp45 = NULL;
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t new_temp = NULL;
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_locale default_arg_data = NULL;
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void default_arg_externFreeFunc = NULL;
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t copy = NULL;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp46 = NULL;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one call_tmp47 = NULL;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp11 = NULL;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp12;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one keep;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one _instance2 = NULL;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__domain_DefaultRectangularDom_1_int64_t_one i_this = NULL;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t copy2 = NULL;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t this29 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp13 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  int64_t default_arg_tasksPerLocale;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_bool default_arg_ignoreRunning;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  int64_t default_arg_minIndicesPerTask;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_int64_t default_arg_offset;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  Error error = NULL;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t copy3 = NULL;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t this30 = NULL;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T5;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp48;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  locale call_tmp49;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t T6;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t T7;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t ret_tmp2;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one call_tmp50 = NULL;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t ret_tmp3;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t numChunks;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t coerce_tmp14;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t parDim;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one tmpIter;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_low_one call_tmp51;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t numTasks;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_range_int64_t_both_one _iterator2 = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this31;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i2;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp52;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this32;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp53;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp54;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this33;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp55;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end2;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp56;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this34;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _class_localscoforall_fn7 _args_forcoforall_fn = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  raw_c_void_ptr _args_vforcoforall_fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _args_sizecoforall_fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  Error error2 = NULL;
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp57;
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp58 = NULL;
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp59;
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp15 = NULL;
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp60;
#line 1540 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp61 = NULL;
#line 1540 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp62;
#line 1540 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp16 = NULL;
#line 1540 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp63;
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp64 = NULL;
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp17 = NULL;
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t default_arg_tasksPerLocale2;
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool default_arg_ignoreRunning2;
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t default_arg_minIndicesPerTask2;
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t default_arg_offset2;
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_1_star_int64_t ret_tmp4;
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t this35 = NULL;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T8;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp65;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  locale call_tmp66;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t T9;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t T10;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t ret_tmp5;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one call_tmp67 = NULL;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t ret_tmp6;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t numChunks2;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t coerce_tmp18;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t parDim2;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one tmpIter2;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_low_one call_tmp68;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount2 = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t numTasks2;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_range_int64_t_both_one _iterator3 = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this36;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i3;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp69;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this37;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp70;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp71;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this38;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp72;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end3;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp73;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this39;
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__domain_DefaultRectangularDom_1_int64_t_one eaAddrOf = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _class_localscoforall_fn9 _args_forcoforall_fn2 = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  raw_c_void_ptr _args_vforcoforall_fn2;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _args_sizecoforall_fn2;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  Error error3 = NULL;
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_DefaultRectangularDom_1_int64_t_one _iterator4 = NULL;
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp74 = NULL;
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_range_int64_t_both_one _iterator5 = NULL;
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp75 = NULL;
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one _this_tmp_2 = NULL;
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one this40 = NULL;
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this41;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i4;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp76;
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this42;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp77;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp78;
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this43;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp79;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end4;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp80;
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this44;
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp81;
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp82;
#line 1549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_locale call_tmp83 = NULL;
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp84 = NULL;
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp85 = NULL;
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp86 = NULL;
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp87 = NULL;
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t coerce_tmp19 = NULL;
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp88 = NULL;
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp89 = NULL;
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t coerce_tmp20 = NULL;
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp90 = NULL;
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp91 = NULL;
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t coerce_tmp21 = NULL;
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp92 = NULL;
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp93 = NULL;
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t coerce_tmp22 = NULL;
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  uint64_t call_tmp94;
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp95;
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp96 = NULL;
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp97 = NULL;
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t coerce_tmp23 = NULL;
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__class_localscoforall_fn7_object chpl_macro_tmp_12;
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__class_localscoforall_fn9_object chpl_macro_tmp_13;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  actuallyResizing = UINT8(false);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = indices(bounds);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator = _getIterator3(&call_tmp8, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this25 = (_iterator)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkIfIterWillOverflow(this25, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this26 = (_iterator)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = lowBoundForIter(this26);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl__idxToInt(call_tmp9);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this27 = (_iterator)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = highBoundForIter(this27);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = chpl__idxToInt(call_tmp11);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  end = call_tmp12;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (i = call_tmp10; ((i <= end)); i += INT64(1)) {
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(_iterator, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    this28 = (_iterator)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp13 = chpl_intToIdx3(this28, i);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp14 = this13(bounds, call_tmp13, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp15 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp2 = *(call_tmp15);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp16 = dsiDim(coerce_tmp2, call_tmp13, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp3 = *(call_tmp14);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp17 = chpl___EXCLAMATION__ASSIGN_10(coerce_tmp3, call_tmp16, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (call_tmp17) /* ZLINE: 1450 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_(&actuallyResizing, UINT8(true));
#line 1452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy59(coerce_tmp3);
#line 1452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy59(call_tmp16);
#line 1452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      goto _breakLabel;
#line 1452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy59(coerce_tmp3);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy59(call_tmp16);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _breakLabel:;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator17(_iterator, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp8);
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp18 = chpl___EXCLAMATION_(actuallyResizing);
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp18) /* ZLINE: 1456 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    goto _end_dsiReallocate;
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp4 = ((BaseArr)(this24));
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp19 = chpl_get_BaseArr__resizePolicy(coerce_tmp4, _ln, _fn);
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp20 = chpl___EQUALS_11(*(call_tmp19), chpl_ddataResizePolicy_normalInit);
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp20) /* ZLINE: 1459 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp21 = chpl_gen_getLocaleID();
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp22 = chpl_localeID_to_locale(&call_tmp21, _ln, _fn);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp23 = here(_ln, _fn);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp24 = chpl___EXCLAMATION__ASSIGN_9(&call_tmp22, &call_tmp23, _ln, _fn);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp24) /* ZLINE: 1464 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1465 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    halt(&_str_literal_3419, _ln, _fn);
#line 1465 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  } else /* ZLINE: 1467 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1465 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp5 = *(*(bounds) + INT64(0));
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    reallocD = chpl__buildDomainExpr(coerce_tmp5, UINT8(true), _ln, _fn);
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    _instance = &((&reallocD)->_instance);
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(_instance, _ln, _fn);
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    ((BaseDom)(*(_instance)))->definedConst = UINT8(true);
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy59(coerce_tmp5);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp25 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp6 = *(call_tmp25);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp6, _ln, _fn);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp26 = dsiNumIndices(coerce_tmp6, _ln, _fn);
#line 1475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp27 = sizeAs(&reallocD, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp28 = lowBound(&reallocD, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp29 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp7 = *(call_tmp29);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp7, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp30 = dsiLow(coerce_tmp7, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp31 = chpl___EQUALS_3(call_tmp28, call_tmp30);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (call_tmp31) /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp32 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp8 = *(call_tmp32);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp8, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp33 = dsiStride(coerce_tmp8, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T = chpl___EQUALS_3(INT64(1), call_tmp33);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T = UINT8(false);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T) /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp34 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp9 = *(call_tmp34);
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp9, _ln, _fn);
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp35 = dsiNumIndices(coerce_tmp9, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T2 = chpl___GREATER_(call_tmp35, INT64(0));
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T2 = UINT8(false);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T2) /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp36 = size2(&reallocD, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T3 = chpl___GREATER_(call_tmp36, INT64(0));
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T3 = UINT8(false);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T3) /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp37 = chpl_get_DefaultRectangularArr_data3(this24, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T4 = _ddata_supports_reallocate2(*(call_tmp37), call_tmp26, call_tmp27, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T4 = UINT8(false);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T4) /* ZLINE: 1479 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _this_tmp_ = chpl_get_DefaultRectangularArr_sizesPerDim3(this24, _ln, _fn);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp38 = (*(_this_tmp_) + INT64(0));
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      _chpl_forward_tgt2 = chpl_forwarding_expr1(&reallocD);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(_chpl_forward_tgt2, _ln, _fn);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp39 = dsiDim2(_chpl_forward_tgt2, _ln, _fn);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp40 = sizeAs4(call_tmp39, _ln, _fn);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_3(call_tmp38, call_tmp40);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy59(call_tmp39);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp41 = chpl_get_DefaultRectangularArr_data3(this24, _ln, _fn);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp42 = chpl_get_DefaultRectangularArr_data3(this24, _ln, _fn);
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp10 = ((BaseArr)(this24));
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp10, _ln, _fn);
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp43 = chpl_get_BaseArr__resizePolicy(coerce_tmp10, _ln, _fn);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp44 = _ddata_reallocate(*(call_tmp42), call_tmp26, call_tmp27, c_sublocid_none, *(call_tmp43), _ln, _fn);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_56(call_tmp41, call_tmp44);
#line 1491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      initShiftedData2(this24, _ln, _fn);
#line 1491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1492 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _value3(&reallocD);
#line 1502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp45 = _value3(&reallocD);
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      default_arg_data = _new_default_data3(_ln, _fn);
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      default_arg_externFreeFunc = _new_default_externFreeFunc3(_ln, _fn);
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      new_temp = _new8(call_tmp45, default_arg_data, UINT8(false), UINT8(false), default_arg_externFreeFunc, _ln, _fn);
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      copy = new_temp;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp46 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp11 = *(call_tmp46);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp11, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp47 = chpl_get_DefaultRectangularDom_ranges(coerce_tmp11, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp12 = *(*(call_tmp47) + INT64(0));
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      keep = this9(&reallocD, coerce_tmp12, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _instance2 = &((&keep)->_instance);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(_instance2, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      ((BaseDom)(*(_instance2)))->definedConst = UINT8(false);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy59(coerce_tmp12);
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      i_this = &keep;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      copy2 = new_temp;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      this29 = this24;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      coerce_tmp13 = _value3(i_this);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_check_nil(coerce_tmp13, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      default_arg_tasksPerLocale = these_default_tasksPerLocale2(coerce_tmp13);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_check_nil(coerce_tmp13, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      default_arg_ignoreRunning = these_default_ignoreRunning2(coerce_tmp13);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_check_nil(coerce_tmp13, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      default_arg_minIndicesPerTask = these_default_minIndicesPerTask2(coerce_tmp13);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_check_nil(coerce_tmp13, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      these_default_offset2(coerce_tmp13, &ret_tmp);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      *(default_arg_offset + INT64(0)) = *(ret_tmp + INT64(0));
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      error = NULL;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      copy3 = new_temp;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      this30 = this29;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp48 = chpl___EQUALS_3(default_arg_tasksPerLocale, INT64(0));
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      if (call_tmp48) /* ZLINE: 306 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp49 = here(_ln, _fn);
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        T5 = maxTaskPar(&call_tmp49, _ln, _fn);
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl__autoDestroy45(&call_tmp49);
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      } else /* ZLINE: 306 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        T5 = default_arg_tasksPerLocale;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      }
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      if (chpl_task_getSerial()) /* ZLINE: 312 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _build_tuple6(INT64(1), INT64(0), &ret_tmp2);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        *(T7 + INT64(0)) = *(ret_tmp2 + INT64(0));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        *(T7 + INT64(1)) = *(ret_tmp2 + INT64(1));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      } else /* ZLINE: 312 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(coerce_tmp13, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp50 = chpl_get_DefaultRectangularDom_ranges(coerce_tmp13, _ln, _fn);
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _computeChunkStuff(T5, default_arg_ignoreRunning, default_arg_minIndicesPerTask, call_tmp50, &ret_tmp3, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        *(T7 + INT64(0)) = *(ret_tmp3 + INT64(0));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        *(T7 + INT64(1)) = *(ret_tmp3 + INT64(1));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      }
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      *(T6 + INT64(0)) = *(T7 + INT64(0));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      *(T6 + INT64(1)) = *(T7 + INT64(1));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp14 = *(T6 + INT64(0));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      numChunks = coerce_tmp14;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      parDim = *(T6 + INT64(1));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp51 = chpl_build_low_bounded_range(INT64(0));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      tmpIter = chpl___POUND_(call_tmp51, coerce_tmp14, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _coforallCount = _endCountAlloc2(_ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      numTasks = chpl_boundedCoforallSize(tmpIter, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _upEndCount(_coforallCount, numTasks, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_resetTaskSpawn(numTasks, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _iterator2 = _getIterator3(&tmpIter, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      this31 = (_iterator2)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      checkIfIterWillOverflow(this31, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      i2 = INT64(0);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      this32 = (_iterator2)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp52 = lowBoundForIter(this32);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp53 = chpl__idxToInt(call_tmp52);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      this33 = (_iterator2)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp54 = highBoundForIter(this33);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp55 = chpl__idxToInt(call_tmp54);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      end2 = call_tmp55;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      for (i2 = call_tmp53; ((i2 <= end2)); i2 += INT64(1)) {
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_iterator2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        this34 = (_iterator2)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp56 = chpl_intToIdx3(this34, i2);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _args_forcoforall_fn = ((_class_localscoforall_fn7)(&chpl_macro_tmp_12));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_0_numChunks = numChunks;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_1_parDim = parDim;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_2_coerce_tmp = coerce_tmp13;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_3__coforallCount = _coforallCount;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_4_chunk = call_tmp56;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_5_copy = copy3;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_6_this = this30;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _args_sizecoforall_fn = sizeof(chpl__class_localscoforall_fn7_object);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_ln = _ln;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_fn = _fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        /*** wrapcoforall_fn9 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(8), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), _args_sizecoforall_fn, INT64(337), INT32(67));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      }
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      error2 = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _waitEndCount2(_coforallCount, numTasks, &error2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      if (error2 != nil) /* ZLINE: 337 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _endCountFree(_coforallCount, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
        error = error2;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
        goto forall_IBB_break_label;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      }
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _endCountFree(_coforallCount, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _freeIterator17(_iterator2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy59(tmpIter);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy19(call_tmp51);
#line 295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy58(&T6);
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy(((RootClass)(this30)));
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy(((RootClass)(copy3)));
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_after_forall_fence();
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl__autoDestroy50(&default_arg_offset);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      forall_IBB_break_label:;
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      if (error != nil) /* ZLINE: 1303 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl */
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      {
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
        chpl_propagate_error(error, _ln, _fn);
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      }
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy(((RootClass)(this29)));
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy(((RootClass)(copy2)));
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_after_forall_fence();
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp57 = size2(&reallocD, _ln, _fn);
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp58 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp15 = *(call_tmp58);
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp15, _ln, _fn);
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp59 = dsiNumIndices(coerce_tmp15, _ln, _fn);
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp60 = chpl___LESS_3(call_tmp57, call_tmp59);
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      if (call_tmp60) /* ZLINE: 1539 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1539 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 1540 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(this24, _ln, _fn);
#line 1540 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp61 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1540 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        coerce_tmp16 = *(call_tmp61);
#line 1540 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(coerce_tmp16, _ln, _fn);
#line 1540 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp62 = dsiNumIndices(coerce_tmp16, _ln, _fn);
#line 1540 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp63 = _deinitElementsIsParallel(call_tmp62, _ln, _fn);
#line 1540 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        if (call_tmp63) /* ZLINE: 1540 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1540 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        {
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_check_nil(this24, _ln, _fn);
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          call_tmp64 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          coerce_tmp17 = *(call_tmp64);
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_check_nil(coerce_tmp17, _ln, _fn);
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          default_arg_tasksPerLocale2 = these_default_tasksPerLocale2(coerce_tmp17);
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_check_nil(coerce_tmp17, _ln, _fn);
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          default_arg_ignoreRunning2 = these_default_ignoreRunning2(coerce_tmp17);
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_check_nil(coerce_tmp17, _ln, _fn);
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          default_arg_minIndicesPerTask2 = these_default_minIndicesPerTask2(coerce_tmp17);
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_check_nil(coerce_tmp17, _ln, _fn);
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          these_default_offset2(coerce_tmp17, &ret_tmp4);
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          *(default_arg_offset2 + INT64(0)) = *(ret_tmp4 + INT64(0));
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          this35 = this24;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          call_tmp65 = chpl___EQUALS_3(default_arg_tasksPerLocale2, INT64(0));
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          if (call_tmp65) /* ZLINE: 306 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          {
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            call_tmp66 = here(_ln, _fn);
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            T8 = maxTaskPar(&call_tmp66, _ln, _fn);
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            chpl__autoDestroy45(&call_tmp66);
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          } else /* ZLINE: 306 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          {
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            T8 = default_arg_tasksPerLocale2;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          }
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          if (chpl_task_getSerial()) /* ZLINE: 312 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          {
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            _build_tuple6(INT64(1), INT64(0), &ret_tmp5);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            *(T10 + INT64(0)) = *(ret_tmp5 + INT64(0));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            *(T10 + INT64(1)) = *(ret_tmp5 + INT64(1));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          } else /* ZLINE: 312 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          {
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            chpl_check_nil(coerce_tmp17, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            call_tmp67 = chpl_get_DefaultRectangularDom_ranges(coerce_tmp17, _ln, _fn);
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            _computeChunkStuff(T8, default_arg_ignoreRunning2, default_arg_minIndicesPerTask2, call_tmp67, &ret_tmp6, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            *(T10 + INT64(0)) = *(ret_tmp6 + INT64(0));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            *(T10 + INT64(1)) = *(ret_tmp6 + INT64(1));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          }
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          *(T9 + INT64(0)) = *(T10 + INT64(0));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          *(T9 + INT64(1)) = *(T10 + INT64(1));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          coerce_tmp18 = *(T9 + INT64(0));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          numChunks2 = coerce_tmp18;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          parDim2 = *(T9 + INT64(1));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          call_tmp68 = chpl_build_low_bounded_range(INT64(0));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          tmpIter2 = chpl___POUND_(call_tmp68, coerce_tmp18, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          _coforallCount2 = _endCountAlloc2(_ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          numTasks2 = chpl_boundedCoforallSize(tmpIter2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          _upEndCount(_coforallCount2, numTasks2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_resetTaskSpawn(numTasks2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          _iterator3 = _getIterator3(&tmpIter2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_check_nil(_iterator3, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          this36 = (_iterator3)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          checkIfIterWillOverflow(this36, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          i3 = INT64(0);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_check_nil(_iterator3, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          this37 = (_iterator3)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp69 = lowBoundForIter(this37);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp70 = chpl__idxToInt(call_tmp69);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_check_nil(_iterator3, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          this38 = (_iterator3)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp71 = highBoundForIter(this38);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp72 = chpl__idxToInt(call_tmp71);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          end3 = call_tmp72;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          for (i3 = call_tmp70; ((i3 <= end3)); i3 += INT64(1)) {
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            chpl_check_nil(_iterator3, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            this39 = (_iterator3)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            call_tmp73 = chpl_intToIdx3(this39, i3);
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            eaAddrOf = &keep;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            _args_forcoforall_fn2 = ((_class_localscoforall_fn9)(&chpl_macro_tmp_13));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            chpl_check_nil(_args_forcoforall_fn2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            (_args_forcoforall_fn2)->_0_numChunks = numChunks2;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            chpl_check_nil(_args_forcoforall_fn2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            (_args_forcoforall_fn2)->_1_parDim = parDim2;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            chpl_check_nil(_args_forcoforall_fn2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            (_args_forcoforall_fn2)->_2_coerce_tmp = coerce_tmp17;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            chpl_check_nil(_args_forcoforall_fn2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            (_args_forcoforall_fn2)->_3__coforallCount = _coforallCount2;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            chpl_check_nil(_args_forcoforall_fn2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            (_args_forcoforall_fn2)->_4_chunk = call_tmp73;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            chpl_check_nil(_args_forcoforall_fn2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            (_args_forcoforall_fn2)->_5_eaAddrOf = *(eaAddrOf);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            chpl_check_nil(_args_forcoforall_fn2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            (_args_forcoforall_fn2)->_6_this = this35;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            _args_vforcoforall_fn2 = ((void*)(_args_forcoforall_fn2));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            _args_sizecoforall_fn2 = sizeof(chpl__class_localscoforall_fn9_object);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            (_args_forcoforall_fn2)->_ln = _ln;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            (_args_forcoforall_fn2)->_fn = _fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            /*** wrapcoforall_fn6 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(5), ((chpl_task_bundle_p)(_args_vforcoforall_fn2)), _args_sizecoforall_fn2, INT64(337), INT32(67));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          }
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          error3 = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          _waitEndCount2(_coforallCount2, numTasks2, &error3, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          if (error3 != nil) /* ZLINE: 337 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          {
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            chpl_propagate_error(error3, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          }
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          _endCountFree(_coforallCount2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          _freeIterator17(_iterator3, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl__autoDestroy59(tmpIter2);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl__autoDestroy19(call_tmp68);
#line 295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl__autoDestroy58(&T9);
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl__autoDestroy(((RootClass)(this35)));
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_after_forall_fence();
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl__autoDestroy50(&default_arg_offset2);
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        } else /* ZLINE: 1546 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1541 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        {
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_check_nil(this24, _ln, _fn);
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          call_tmp74 = chpl_get_DefaultRectangularArr_dom2(this24, _ln, _fn);
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          _iterator4 = _getIterator5(call_tmp74, _ln, _fn);
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_check_nil(_iterator4, _ln, _fn);
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          this40 = (_iterator4)->F0_this;
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_check_nil(this40, _ln, _fn);
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          _this_tmp_2 = chpl_get_DefaultRectangularDom_ranges(this40, _ln, _fn);
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          call_tmp75 = (*(_this_tmp_2) + INT64(0));
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          _iterator5 = _getIterator3(call_tmp75, _ln, _fn);
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_check_nil(_iterator5, _ln, _fn);
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          this41 = (_iterator5)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          checkIfIterWillOverflow(this41, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          i4 = INT64(0);
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_check_nil(_iterator5, _ln, _fn);
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          this42 = (_iterator5)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp76 = lowBoundForIter(this42);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp77 = chpl__idxToInt(call_tmp76);
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          chpl_check_nil(_iterator5, _ln, _fn);
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          this43 = (_iterator5)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp78 = highBoundForIter(this43);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          call_tmp79 = chpl__idxToInt(call_tmp78);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          end4 = call_tmp79;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
          for (i4 = call_tmp77; ((i4 <= end4)); i4 += INT64(1)) {
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            chpl_check_nil(_iterator5, _ln, _fn);
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            this44 = (_iterator5)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
            call_tmp80 = chpl_intToIdx3(this44, i4);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            call_tmp81 = contains2(&keep, call_tmp80, _ln, _fn);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            call_tmp82 = chpl___EXCLAMATION_(call_tmp81);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            if (call_tmp82) /* ZLINE: 1548 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            {
#line 1549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
              chpl_check_nil(this24, _ln, _fn);
#line 1549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
              call_tmp83 = dsiAccess4(this24, call_tmp80, _ln, _fn);
#line 1549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
              chpl__autoDestroy45(call_tmp83);
#line 1549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
            }
#line 1549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          }
#line 287 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          _freeIterator17(_iterator5, _ln, _fn);
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
          _freeIterator7(_iterator4, _ln, _fn);
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        }
#line 1547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      }
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp84 = chpl_get_DefaultRectangularArr_off2(this24, _ln, _fn);
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(copy, _ln, _fn);
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp85 = chpl_get_DefaultRectangularArr_off2(copy, _ln, _fn);
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_60(call_tmp84, call_tmp85);
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp86 = chpl_get_DefaultRectangularArr_blk(this24, _ln, _fn);
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp19 = copy;
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp19, _ln, _fn);
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp87 = chpl_get_DefaultRectangularArr_blk(coerce_tmp19, _ln, _fn);
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_60(call_tmp86, call_tmp87);
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp88 = chpl_get_DefaultRectangularArr_str2(this24, _ln, _fn);
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp20 = copy;
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp20, _ln, _fn);
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp89 = chpl_get_DefaultRectangularArr_str2(coerce_tmp20, _ln, _fn);
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_60(call_tmp88, call_tmp89);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp90 = chpl_get_DefaultRectangularArr_factoredOffs(this24, _ln, _fn);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp21 = copy;
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp21, _ln, _fn);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp91 = chpl_get_DefaultRectangularArr_factoredOffs(coerce_tmp21, _ln, _fn);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_3(call_tmp90, *(call_tmp91));
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      dsiDestroyArr2(this24, UINT8(false), _ln, _fn);
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp92 = chpl_get_DefaultRectangularArr_data3(this24, _ln, _fn);
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp22 = copy;
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp22, _ln, _fn);
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp93 = chpl_get_DefaultRectangularArr_data3(coerce_tmp22, _ln, _fn);
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_56(call_tmp92, *(call_tmp93));
#line 1566 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _value3(&reallocD);
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp94 = sizeAs2(&reallocD, _ln, _fn);
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp95 = chpl___GREATER_5(call_tmp94, INT64(0), _ln, _fn);
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      if (call_tmp95) /* ZLINE: 1572 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(this24, _ln, _fn);
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp96 = chpl_get_DefaultRectangularArr_shiftedData3(this24, _ln, _fn);
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        coerce_tmp23 = copy;
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(coerce_tmp23, _ln, _fn);
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp97 = chpl_get_DefaultRectangularArr_shiftedData3(coerce_tmp23, _ln, _fn);
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl___ASSIGN_56(call_tmp96, *(call_tmp97));
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      }
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__delete36(copy, _ln, _fn);
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy67(&keep, _ln, _fn);
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy67(&reallocD, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy45(&call_tmp23);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy45(&call_tmp22);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _end_dsiReallocate:;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1442 */
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void dsiReallocate2(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24,
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           _tuple_1_star_range_int64_t_both_one * bounds,
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int64_t _ln,
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int32_t _fn) {
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool actuallyResizing;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_range_int64_t_both_one _iterator = NULL;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp8;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this25;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this26;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp10;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp11;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this27;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp12;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp13;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this28;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp14 = NULL;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp15 = NULL;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp16;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp17;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp3;
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp18;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_ddataResizePolicy call_tmp19 = NULL;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseArr coerce_tmp4 = NULL;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp20;
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_localeID_t call_tmp21;
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  locale call_tmp22;
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  locale call_tmp23;
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp24;
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp5;
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one reallocD;
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one _instance = NULL;
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp25 = NULL;
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp26;
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp6 = NULL;
#line 1475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp27;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp28;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp29 = NULL;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp30;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp7 = NULL;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp31;
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp32 = NULL;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp33;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp8 = NULL;
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T2;
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp34 = NULL;
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp35;
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp9 = NULL;
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T3;
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp36;
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T4;
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp37 = NULL;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp38 = NULL;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp39;
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one _chpl_forward_tgt2 = NULL;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp40;
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp41 = NULL;
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp42 = NULL;
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_ddataResizePolicy call_tmp43 = NULL;
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseArr coerce_tmp10 = NULL;
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_int64_t call_tmp44 = NULL;
#line 1502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp45 = NULL;
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_int64_t_int64_t new_temp = NULL;
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_int64_t default_arg_data = NULL;
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void default_arg_externFreeFunc = NULL;
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_int64_t_int64_t copy = NULL;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp46 = NULL;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one call_tmp47 = NULL;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp11 = NULL;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp12;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one keep;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one _instance2 = NULL;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__domain_DefaultRectangularDom_1_int64_t_one i_this = NULL;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_int64_t_int64_t copy2 = NULL;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this29 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp13 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  int64_t default_arg_tasksPerLocale;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_bool default_arg_ignoreRunning;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  int64_t default_arg_minIndicesPerTask;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_int64_t default_arg_offset;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  Error error = NULL;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T5;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp48;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  locale call_tmp49;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t T6;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t T7;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t ret_tmp2;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one call_tmp50 = NULL;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t ret_tmp3;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t numChunks;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t coerce_tmp14;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t parDim;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one tmpIter;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_low_one call_tmp51;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t numTasks;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_range_int64_t_both_one _iterator2 = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this30;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i2;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp52;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this31;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp53;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp54;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this32;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp55;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end2;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp56;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this33;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _class_localscoforall_fn8 _args_forcoforall_fn = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  raw_c_void_ptr _args_vforcoforall_fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _args_sizecoforall_fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  Error error2 = NULL;
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp57 = NULL;
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp58 = NULL;
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp59 = NULL;
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp60 = NULL;
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_int64_t_int64_t coerce_tmp15 = NULL;
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp61 = NULL;
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp62 = NULL;
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_int64_t_int64_t coerce_tmp16 = NULL;
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp63 = NULL;
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp64 = NULL;
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_int64_t_int64_t coerce_tmp17 = NULL;
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp65 = NULL;
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp66 = NULL;
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_int64_t_int64_t coerce_tmp18 = NULL;
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  uint64_t call_tmp67;
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp68;
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp69 = NULL;
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp70 = NULL;
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_int64_t_int64_t coerce_tmp19 = NULL;
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__class_localscoforall_fn8_object chpl_macro_tmp_14;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  actuallyResizing = UINT8(false);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = indices(bounds);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator = _getIterator3(&call_tmp8, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this25 = (_iterator)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkIfIterWillOverflow(this25, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this26 = (_iterator)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = lowBoundForIter(this26);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl__idxToInt(call_tmp9);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this27 = (_iterator)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = highBoundForIter(this27);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = chpl__idxToInt(call_tmp11);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  end = call_tmp12;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (i = call_tmp10; ((i <= end)); i += INT64(1)) {
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(_iterator, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    this28 = (_iterator)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp13 = chpl_intToIdx3(this28, i);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp14 = this13(bounds, call_tmp13, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp15 = chpl_get_DefaultRectangularArr_dom(this24, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp2 = *(call_tmp15);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp16 = dsiDim(coerce_tmp2, call_tmp13, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp3 = *(call_tmp14);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp17 = chpl___EXCLAMATION__ASSIGN_10(coerce_tmp3, call_tmp16, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (call_tmp17) /* ZLINE: 1450 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_(&actuallyResizing, UINT8(true));
#line 1452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy59(coerce_tmp3);
#line 1452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy59(call_tmp16);
#line 1452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      goto _breakLabel;
#line 1452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy59(coerce_tmp3);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy59(call_tmp16);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _breakLabel:;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator17(_iterator, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp8);
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp18 = chpl___EXCLAMATION_(actuallyResizing);
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp18) /* ZLINE: 1456 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    goto _end_dsiReallocate;
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp4 = ((BaseArr)(this24));
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp19 = chpl_get_BaseArr__resizePolicy(coerce_tmp4, _ln, _fn);
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp20 = chpl___EQUALS_11(*(call_tmp19), chpl_ddataResizePolicy_normalInit);
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp20) /* ZLINE: 1459 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp21 = chpl_gen_getLocaleID();
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp22 = chpl_localeID_to_locale(&call_tmp21, _ln, _fn);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp23 = here(_ln, _fn);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp24 = chpl___EXCLAMATION__ASSIGN_9(&call_tmp22, &call_tmp23, _ln, _fn);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp24) /* ZLINE: 1464 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1465 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    halt(&_str_literal_3419, _ln, _fn);
#line 1465 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  } else /* ZLINE: 1467 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1465 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp5 = *(*(bounds) + INT64(0));
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    reallocD = chpl__buildDomainExpr(coerce_tmp5, UINT8(true), _ln, _fn);
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    _instance = &((&reallocD)->_instance);
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(_instance, _ln, _fn);
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    ((BaseDom)(*(_instance)))->definedConst = UINT8(true);
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy59(coerce_tmp5);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp25 = chpl_get_DefaultRectangularArr_dom(this24, _ln, _fn);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp6 = *(call_tmp25);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp6, _ln, _fn);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp26 = dsiNumIndices(coerce_tmp6, _ln, _fn);
#line 1475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp27 = sizeAs(&reallocD, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp28 = lowBound(&reallocD, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp29 = chpl_get_DefaultRectangularArr_dom(this24, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp7 = *(call_tmp29);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp7, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp30 = dsiLow(coerce_tmp7, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp31 = chpl___EQUALS_3(call_tmp28, call_tmp30);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (call_tmp31) /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp32 = chpl_get_DefaultRectangularArr_dom(this24, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp8 = *(call_tmp32);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp8, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp33 = dsiStride(coerce_tmp8, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T = chpl___EQUALS_3(INT64(1), call_tmp33);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T = UINT8(false);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T) /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp34 = chpl_get_DefaultRectangularArr_dom(this24, _ln, _fn);
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp9 = *(call_tmp34);
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp9, _ln, _fn);
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp35 = dsiNumIndices(coerce_tmp9, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T2 = chpl___GREATER_(call_tmp35, INT64(0));
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T2 = UINT8(false);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T2) /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp36 = size2(&reallocD, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T3 = chpl___GREATER_(call_tmp36, INT64(0));
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T3 = UINT8(false);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T3) /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp37 = chpl_get_DefaultRectangularArr_data(this24, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T4 = _ddata_supports_reallocate3(*(call_tmp37), call_tmp26, call_tmp27, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T4 = UINT8(false);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T4) /* ZLINE: 1479 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _this_tmp_ = chpl_get_DefaultRectangularArr_sizesPerDim2(this24, _ln, _fn);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp38 = (*(_this_tmp_) + INT64(0));
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      _chpl_forward_tgt2 = chpl_forwarding_expr1(&reallocD);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(_chpl_forward_tgt2, _ln, _fn);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp39 = dsiDim2(_chpl_forward_tgt2, _ln, _fn);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp40 = sizeAs4(call_tmp39, _ln, _fn);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_3(call_tmp38, call_tmp40);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy59(call_tmp39);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp41 = chpl_get_DefaultRectangularArr_data(this24, _ln, _fn);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp42 = chpl_get_DefaultRectangularArr_data(this24, _ln, _fn);
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp10 = ((BaseArr)(this24));
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp10, _ln, _fn);
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp43 = chpl_get_BaseArr__resizePolicy(coerce_tmp10, _ln, _fn);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp44 = _ddata_reallocate2(*(call_tmp42), call_tmp26, call_tmp27, c_sublocid_none, *(call_tmp43), _ln, _fn);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_55(call_tmp41, call_tmp44);
#line 1491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      initShiftedData3(this24, _ln, _fn);
#line 1491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1492 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _value3(&reallocD);
#line 1502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp45 = _value3(&reallocD);
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      default_arg_data = _new_default_data(_ln, _fn);
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      default_arg_externFreeFunc = _new_default_externFreeFunc(_ln, _fn);
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      new_temp = _new7(call_tmp45, default_arg_data, UINT8(false), UINT8(false), default_arg_externFreeFunc, _ln, _fn);
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      copy = new_temp;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp46 = chpl_get_DefaultRectangularArr_dom(this24, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp11 = *(call_tmp46);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp11, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp47 = chpl_get_DefaultRectangularDom_ranges(coerce_tmp11, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp12 = *(*(call_tmp47) + INT64(0));
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      keep = this9(&reallocD, coerce_tmp12, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _instance2 = &((&keep)->_instance);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(_instance2, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      ((BaseDom)(*(_instance2)))->definedConst = UINT8(false);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy59(coerce_tmp12);
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      i_this = &keep;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      copy2 = new_temp;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      this29 = this24;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      coerce_tmp13 = _value3(i_this);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_check_nil(coerce_tmp13, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      default_arg_tasksPerLocale = these_default_tasksPerLocale2(coerce_tmp13);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_check_nil(coerce_tmp13, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      default_arg_ignoreRunning = these_default_ignoreRunning2(coerce_tmp13);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_check_nil(coerce_tmp13, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      default_arg_minIndicesPerTask = these_default_minIndicesPerTask2(coerce_tmp13);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_check_nil(coerce_tmp13, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      these_default_offset2(coerce_tmp13, &ret_tmp);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      *(default_arg_offset + INT64(0)) = *(ret_tmp + INT64(0));
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      error = NULL;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp48 = chpl___EQUALS_3(default_arg_tasksPerLocale, INT64(0));
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      if (call_tmp48) /* ZLINE: 306 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp49 = here(_ln, _fn);
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        T5 = maxTaskPar(&call_tmp49, _ln, _fn);
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl__autoDestroy45(&call_tmp49);
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      } else /* ZLINE: 306 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        T5 = default_arg_tasksPerLocale;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      }
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      if (chpl_task_getSerial()) /* ZLINE: 312 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _build_tuple6(INT64(1), INT64(0), &ret_tmp2);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        *(T7 + INT64(0)) = *(ret_tmp2 + INT64(0));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        *(T7 + INT64(1)) = *(ret_tmp2 + INT64(1));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      } else /* ZLINE: 312 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(coerce_tmp13, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp50 = chpl_get_DefaultRectangularDom_ranges(coerce_tmp13, _ln, _fn);
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _computeChunkStuff(T5, default_arg_ignoreRunning, default_arg_minIndicesPerTask, call_tmp50, &ret_tmp3, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        *(T7 + INT64(0)) = *(ret_tmp3 + INT64(0));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        *(T7 + INT64(1)) = *(ret_tmp3 + INT64(1));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      }
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      *(T6 + INT64(0)) = *(T7 + INT64(0));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      *(T6 + INT64(1)) = *(T7 + INT64(1));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp14 = *(T6 + INT64(0));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      numChunks = coerce_tmp14;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      parDim = *(T6 + INT64(1));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp51 = chpl_build_low_bounded_range(INT64(0));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      tmpIter = chpl___POUND_(call_tmp51, coerce_tmp14, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _coforallCount = _endCountAlloc2(_ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      numTasks = chpl_boundedCoforallSize(tmpIter, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _upEndCount(_coforallCount, numTasks, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_resetTaskSpawn(numTasks, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _iterator2 = _getIterator3(&tmpIter, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      this30 = (_iterator2)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      checkIfIterWillOverflow(this30, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      i2 = INT64(0);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      this31 = (_iterator2)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp52 = lowBoundForIter(this31);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp53 = chpl__idxToInt(call_tmp52);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      this32 = (_iterator2)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp54 = highBoundForIter(this32);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp55 = chpl__idxToInt(call_tmp54);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      end2 = call_tmp55;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      for (i2 = call_tmp53; ((i2 <= end2)); i2 += INT64(1)) {
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_iterator2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        this33 = (_iterator2)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp56 = chpl_intToIdx3(this33, i2);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _args_forcoforall_fn = ((_class_localscoforall_fn8)(&chpl_macro_tmp_14));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_0_numChunks = numChunks;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_1_parDim = parDim;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_2_coerce_tmp = coerce_tmp13;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_3__coforallCount = _coforallCount;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_4_chunk = call_tmp56;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_6_copy = copy2;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_7_this = this29;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _args_sizecoforall_fn = sizeof(chpl__class_localscoforall_fn8_object);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_ln = _ln;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_fn = _fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        /*** wrapcoforall_fn7 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(6), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), _args_sizecoforall_fn, INT64(337), INT32(67));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      }
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      error2 = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _waitEndCount2(_coforallCount, numTasks, &error2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      if (error2 != nil) /* ZLINE: 337 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _endCountFree(_coforallCount, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
        error = error2;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
        goto forall_IBB_break_label;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      }
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _endCountFree(_coforallCount, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _freeIterator17(_iterator2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy59(tmpIter);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy19(call_tmp51);
#line 295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy58(&T6);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_after_forall_fence();
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl__autoDestroy50(&default_arg_offset);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      forall_IBB_break_label:;
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      if (error != nil) /* ZLINE: 1303 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl */
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      {
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
        chpl_propagate_error(error, _ln, _fn);
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      }
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy(((RootClass)(this29)));
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy(((RootClass)(copy2)));
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_after_forall_fence();
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp57 = chpl_get_DefaultRectangularArr_off(this24, _ln, _fn);
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(copy, _ln, _fn);
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp58 = chpl_get_DefaultRectangularArr_off(copy, _ln, _fn);
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_60(call_tmp57, call_tmp58);
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp59 = chpl_get_DefaultRectangularArr_blk2(this24, _ln, _fn);
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp15 = copy;
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp15, _ln, _fn);
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp60 = chpl_get_DefaultRectangularArr_blk2(coerce_tmp15, _ln, _fn);
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_60(call_tmp59, call_tmp60);
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp61 = chpl_get_DefaultRectangularArr_str(this24, _ln, _fn);
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp16 = copy;
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp16, _ln, _fn);
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp62 = chpl_get_DefaultRectangularArr_str(coerce_tmp16, _ln, _fn);
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_60(call_tmp61, call_tmp62);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp63 = chpl_get_DefaultRectangularArr_factoredOffs2(this24, _ln, _fn);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp17 = copy;
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp17, _ln, _fn);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp64 = chpl_get_DefaultRectangularArr_factoredOffs2(coerce_tmp17, _ln, _fn);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_3(call_tmp63, *(call_tmp64));
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      dsiDestroyArr3(this24, UINT8(false), _ln, _fn);
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp65 = chpl_get_DefaultRectangularArr_data(this24, _ln, _fn);
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp18 = copy;
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp18, _ln, _fn);
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp66 = chpl_get_DefaultRectangularArr_data(coerce_tmp18, _ln, _fn);
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_55(call_tmp65, *(call_tmp66));
#line 1566 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _value3(&reallocD);
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp67 = sizeAs2(&reallocD, _ln, _fn);
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp68 = chpl___GREATER_5(call_tmp67, INT64(0), _ln, _fn);
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      if (call_tmp68) /* ZLINE: 1572 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(this24, _ln, _fn);
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp69 = chpl_get_DefaultRectangularArr_shiftedData(this24, _ln, _fn);
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        coerce_tmp19 = copy;
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(coerce_tmp19, _ln, _fn);
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp70 = chpl_get_DefaultRectangularArr_shiftedData(coerce_tmp19, _ln, _fn);
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl___ASSIGN_55(call_tmp69, *(call_tmp70));
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      }
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__delete34(copy, _ln, _fn);
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy67(&keep, _ln, _fn);
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy67(&reallocD, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy45(&call_tmp23);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy45(&call_tmp22);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _end_dsiReallocate:;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1442 */
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void dsiReallocate4(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24,
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           _tuple_1_star_range_int64_t_both_one * bounds,
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int64_t _ln,
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                           int32_t _fn) {
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool actuallyResizing;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_range_int64_t_both_one _iterator = NULL;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp8;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this25;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this26;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp10;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp11;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this27;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp12;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp13;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this28;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp14 = NULL;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp15 = NULL;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp16;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp17;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp3;
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp18;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_ddataResizePolicy call_tmp19 = NULL;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseArr coerce_tmp4 = NULL;
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp20;
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_localeID_t call_tmp21;
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  locale call_tmp22;
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  locale call_tmp23;
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp24;
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp5;
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one reallocD;
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one _instance = NULL;
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp25 = NULL;
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp26;
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp6 = NULL;
#line 1475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp27;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp28;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp29 = NULL;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp30;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp7 = NULL;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp31;
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp32 = NULL;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp33;
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp8 = NULL;
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T2;
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp34 = NULL;
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp35;
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp9 = NULL;
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T3;
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp36;
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool T4;
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp37 = NULL;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp38 = NULL;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one call_tmp39;
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one _chpl_forward_tgt2 = NULL;
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t call_tmp40;
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp41 = NULL;
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp42 = NULL;
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_chpl_ddataResizePolicy call_tmp43 = NULL;
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  BaseArr coerce_tmp10 = NULL;
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_uint64_t call_tmp44 = NULL;
#line 1502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp45 = NULL;
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t new_temp = NULL;
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_uint64_t default_arg_data = NULL;
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void default_arg_externFreeFunc = NULL;
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t copy = NULL;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp46 = NULL;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one call_tmp47 = NULL;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp11 = NULL;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp12;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one keep;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one _instance2 = NULL;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__domain_DefaultRectangularDom_1_int64_t_one i_this = NULL;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t copy2 = NULL;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this29 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp13 = NULL;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  int64_t default_arg_tasksPerLocale;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_bool default_arg_ignoreRunning;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  int64_t default_arg_minIndicesPerTask;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_int64_t default_arg_offset;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  Error error = NULL;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t T5;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp48;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  locale call_tmp49;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t T6;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t T7;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t ret_tmp2;
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one call_tmp50 = NULL;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _tuple_2_star_int64_t ret_tmp3;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t numChunks;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t coerce_tmp14;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t parDim;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one tmpIter;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_low_one call_tmp51;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t numTasks;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_these_range_int64_t_both_one _iterator2 = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this30;
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i2;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp52;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this31;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp53;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp54;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this32;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp55;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t end2;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp56;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one this33;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _class_localscoforall_fn6 _args_forcoforall_fn = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  raw_c_void_ptr _args_vforcoforall_fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  int64_t _args_sizecoforall_fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  Error error2 = NULL;
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp57 = NULL;
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp58 = NULL;
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp59 = NULL;
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp60 = NULL;
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t coerce_tmp15 = NULL;
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp61 = NULL;
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp62 = NULL;
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t coerce_tmp16 = NULL;
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp63 = NULL;
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_int64_t call_tmp64 = NULL;
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t coerce_tmp17 = NULL;
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp65 = NULL;
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp66 = NULL;
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t coerce_tmp18 = NULL;
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  uint64_t call_tmp67;
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_bool call_tmp68;
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp69 = NULL;
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_uint64_t call_tmp70 = NULL;
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t coerce_tmp19 = NULL;
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__class_localscoforall_fn6_object chpl_macro_tmp_15;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  actuallyResizing = UINT8(false);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = indices(bounds);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator = _getIterator3(&call_tmp8, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this25 = (_iterator)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkIfIterWillOverflow(this25, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this26 = (_iterator)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = lowBoundForIter(this26);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl__idxToInt(call_tmp9);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  this27 = (_iterator)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = highBoundForIter(this27);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = chpl__idxToInt(call_tmp11);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  end = call_tmp12;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (i = call_tmp10; ((i <= end)); i += INT64(1)) {
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(_iterator, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    this28 = (_iterator)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp13 = chpl_intToIdx3(this28, i);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp14 = this13(bounds, call_tmp13, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp15 = chpl_get_DefaultRectangularArr_dom3(this24, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp2 = *(call_tmp15);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp16 = dsiDim(coerce_tmp2, call_tmp13, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp3 = *(call_tmp14);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp17 = chpl___EXCLAMATION__ASSIGN_10(coerce_tmp3, call_tmp16, _ln, _fn);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (call_tmp17) /* ZLINE: 1450 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_(&actuallyResizing, UINT8(true));
#line 1452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy59(coerce_tmp3);
#line 1452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy59(call_tmp16);
#line 1452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      goto _breakLabel;
#line 1452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy59(coerce_tmp3);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy59(call_tmp16);
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _breakLabel:;
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator17(_iterator, _ln, _fn);
#line 1449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(call_tmp8);
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp18 = chpl___EXCLAMATION_(actuallyResizing);
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp18) /* ZLINE: 1456 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1456 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    goto _end_dsiReallocate;
#line 1457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp4 = ((BaseArr)(this24));
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp4, _ln, _fn);
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp19 = chpl_get_BaseArr__resizePolicy(coerce_tmp4, _ln, _fn);
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp20 = chpl___EQUALS_11(*(call_tmp19), chpl_ddataResizePolicy_normalInit);
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp20) /* ZLINE: 1459 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp21 = chpl_gen_getLocaleID();
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp22 = chpl_localeID_to_locale(&call_tmp21, _ln, _fn);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp23 = here(_ln, _fn);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp24 = chpl___EXCLAMATION__ASSIGN_9(&call_tmp22, &call_tmp23, _ln, _fn);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  if (call_tmp24) /* ZLINE: 1464 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1465 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    halt(&_str_literal_3419, _ln, _fn);
#line 1465 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  } else /* ZLINE: 1467 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1465 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  {
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp5 = *(*(bounds) + INT64(0));
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    reallocD = chpl__buildDomainExpr(coerce_tmp5, UINT8(true), _ln, _fn);
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    _instance = &((&reallocD)->_instance);
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(_instance, _ln, _fn);
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    ((BaseDom)(*(_instance)))->definedConst = UINT8(true);
#line 1468 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy59(coerce_tmp5);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp25 = chpl_get_DefaultRectangularArr_dom3(this24, _ln, _fn);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp6 = *(call_tmp25);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp6, _ln, _fn);
#line 1474 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp26 = dsiNumIndices(coerce_tmp6, _ln, _fn);
#line 1475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp27 = sizeAs(&reallocD, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp28 = lowBound(&reallocD, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp29 = chpl_get_DefaultRectangularArr_dom3(this24, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp7 = *(call_tmp29);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp7, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp30 = dsiLow(coerce_tmp7, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp31 = chpl___EQUALS_3(call_tmp28, call_tmp30);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (call_tmp31) /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp32 = chpl_get_DefaultRectangularArr_dom3(this24, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp8 = *(call_tmp32);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp8, _ln, _fn);
#line 1477 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp33 = dsiStride(coerce_tmp8, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T = chpl___EQUALS_3(INT64(1), call_tmp33);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T = UINT8(false);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T) /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp34 = chpl_get_DefaultRectangularArr_dom3(this24, _ln, _fn);
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp9 = *(call_tmp34);
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp9, _ln, _fn);
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp35 = dsiNumIndices(coerce_tmp9, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T2 = chpl___GREATER_(call_tmp35, INT64(0));
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T2 = UINT8(false);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T2) /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1478 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp36 = size2(&reallocD, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T3 = chpl___GREATER_(call_tmp36, INT64(0));
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T3 = UINT8(false);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T3) /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp37 = chpl_get_DefaultRectangularArr_data2(this24, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T4 = _ddata_supports_reallocate(*(call_tmp37), call_tmp26, call_tmp27, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1476 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      T4 = UINT8(false);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    if (T4) /* ZLINE: 1479 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _this_tmp_ = chpl_get_DefaultRectangularArr_sizesPerDim(this24, _ln, _fn);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp38 = (*(_this_tmp_) + INT64(0));
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      _chpl_forward_tgt2 = chpl_forwarding_expr1(&reallocD);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(_chpl_forward_tgt2, _ln, _fn);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp39 = dsiDim2(_chpl_forward_tgt2, _ln, _fn);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp40 = sizeAs4(call_tmp39, _ln, _fn);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_3(call_tmp38, call_tmp40);
#line 1484 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy59(call_tmp39);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp41 = chpl_get_DefaultRectangularArr_data2(this24, _ln, _fn);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp42 = chpl_get_DefaultRectangularArr_data2(this24, _ln, _fn);
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp10 = ((BaseArr)(this24));
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp10, _ln, _fn);
#line 1490 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp43 = chpl_get_BaseArr__resizePolicy(coerce_tmp10, _ln, _fn);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp44 = _ddata_reallocate3(*(call_tmp42), call_tmp26, call_tmp27, c_sublocid_none, *(call_tmp43), _ln, _fn);
#line 1485 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_54(call_tmp41, call_tmp44);
#line 1491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      initShiftedData(this24, _ln, _fn);
#line 1491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    } else /* ZLINE: 1492 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    {
#line 1501 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _value3(&reallocD);
#line 1502 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp45 = _value3(&reallocD);
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      default_arg_data = _new_default_data2(_ln, _fn);
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      default_arg_externFreeFunc = _new_default_externFreeFunc2(_ln, _fn);
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      new_temp = _new6(call_tmp45, default_arg_data, UINT8(false), UINT8(false), default_arg_externFreeFunc, _ln, _fn);
#line 1497 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      copy = new_temp;
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp46 = chpl_get_DefaultRectangularArr_dom3(this24, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp11 = *(call_tmp46);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp11, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp47 = chpl_get_DefaultRectangularDom_ranges(coerce_tmp11, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp12 = *(*(call_tmp47) + INT64(0));
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      keep = this9(&reallocD, coerce_tmp12, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _instance2 = &((&keep)->_instance);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(_instance2, _ln, _fn);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      ((BaseDom)(*(_instance2)))->definedConst = UINT8(false);
#line 1524 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy59(coerce_tmp12);
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      i_this = &keep;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      copy2 = new_temp;
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      this29 = this24;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      coerce_tmp13 = _value3(i_this);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_check_nil(coerce_tmp13, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      default_arg_tasksPerLocale = these_default_tasksPerLocale2(coerce_tmp13);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_check_nil(coerce_tmp13, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      default_arg_ignoreRunning = these_default_ignoreRunning2(coerce_tmp13);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_check_nil(coerce_tmp13, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      default_arg_minIndicesPerTask = these_default_minIndicesPerTask2(coerce_tmp13);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_check_nil(coerce_tmp13, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      these_default_offset2(coerce_tmp13, &ret_tmp);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      *(default_arg_offset + INT64(0)) = *(ret_tmp + INT64(0));
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      error = NULL;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp48 = chpl___EQUALS_3(default_arg_tasksPerLocale, INT64(0));
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      if (call_tmp48) /* ZLINE: 306 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp49 = here(_ln, _fn);
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        T5 = maxTaskPar(&call_tmp49, _ln, _fn);
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl__autoDestroy45(&call_tmp49);
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      } else /* ZLINE: 306 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        T5 = default_arg_tasksPerLocale;
#line 306 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      }
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      if (chpl_task_getSerial()) /* ZLINE: 312 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _build_tuple6(INT64(1), INT64(0), &ret_tmp2);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        *(T7 + INT64(0)) = *(ret_tmp2 + INT64(0));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        *(T7 + INT64(1)) = *(ret_tmp2 + INT64(1));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      } else /* ZLINE: 312 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(coerce_tmp13, _ln, _fn);
#line 317 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp50 = chpl_get_DefaultRectangularDom_ranges(coerce_tmp13, _ln, _fn);
#line 314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _computeChunkStuff(T5, default_arg_ignoreRunning, default_arg_minIndicesPerTask, call_tmp50, &ret_tmp3, _ln, _fn);
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        *(T7 + INT64(0)) = *(ret_tmp3 + INT64(0));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        *(T7 + INT64(1)) = *(ret_tmp3 + INT64(1));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      }
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      *(T6 + INT64(0)) = *(T7 + INT64(0));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      *(T6 + INT64(1)) = *(T7 + INT64(1));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp14 = *(T6 + INT64(0));
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      numChunks = coerce_tmp14;
#line 312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      parDim = *(T6 + INT64(1));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp51 = chpl_build_low_bounded_range(INT64(0));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      tmpIter = chpl___POUND_(call_tmp51, coerce_tmp14, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _coforallCount = _endCountAlloc2(_ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      numTasks = chpl_boundedCoforallSize(tmpIter, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _upEndCount(_coforallCount, numTasks, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_resetTaskSpawn(numTasks, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _iterator2 = _getIterator3(&tmpIter, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      this30 = (_iterator2)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      checkIfIterWillOverflow(this30, UINT8(true), _ln, _fn);
#line 3453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      i2 = INT64(0);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      this31 = (_iterator2)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp52 = lowBoundForIter(this31);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp53 = chpl__idxToInt(call_tmp52);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(_iterator2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      this32 = (_iterator2)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp54 = highBoundForIter(this32);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp55 = chpl__idxToInt(call_tmp54);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      end2 = call_tmp55;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      for (i2 = call_tmp53; ((i2 <= end2)); i2 += INT64(1)) {
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_iterator2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        this33 = (_iterator2)->F0_this;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        call_tmp56 = chpl_intToIdx3(this33, i2);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _args_forcoforall_fn = ((_class_localscoforall_fn6)(&chpl_macro_tmp_15));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_0_numChunks = numChunks;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_1_parDim = parDim;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_2_coerce_tmp = coerce_tmp13;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_3__coforallCount = _coforallCount;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_4_chunk = call_tmp56;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_6_copy = copy2;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(_args_forcoforall_fn, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_7_this = this29;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _args_sizecoforall_fn = sizeof(chpl__class_localscoforall_fn6_object);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_ln = _ln;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        (_args_forcoforall_fn)->_fn = _fn;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        /*** wrapcoforall_fn8 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(7), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), _args_sizecoforall_fn, INT64(337), INT32(67));
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      }
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      error2 = NULL;
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _waitEndCount2(_coforallCount, numTasks, &error2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      if (error2 != nil) /* ZLINE: 337 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        _endCountFree(_coforallCount, _ln, _fn);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
        error = error2;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
        goto forall_IBB_break_label;
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      }
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _endCountFree(_coforallCount, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _freeIterator17(_iterator2, _ln, _fn);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy59(tmpIter);
#line 337 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy19(call_tmp51);
#line 295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy58(&T6);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_after_forall_fence();
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl__autoDestroy50(&default_arg_offset);
#line 1302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      forall_IBB_break_label:;
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      if (error != nil) /* ZLINE: 1303 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl */
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      {
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
        chpl_propagate_error(error, _ln, _fn);
#line 1303 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      }
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy(((RootClass)(this29)));
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy(((RootClass)(copy2)));
#line 1527 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_after_forall_fence();
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp57 = chpl_get_DefaultRectangularArr_off3(this24, _ln, _fn);
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(copy, _ln, _fn);
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp58 = chpl_get_DefaultRectangularArr_off3(copy, _ln, _fn);
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_60(call_tmp57, call_tmp58);
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp59 = chpl_get_DefaultRectangularArr_blk3(this24, _ln, _fn);
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp15 = copy;
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp15, _ln, _fn);
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp60 = chpl_get_DefaultRectangularArr_blk3(coerce_tmp15, _ln, _fn);
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_60(call_tmp59, call_tmp60);
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp61 = chpl_get_DefaultRectangularArr_str3(this24, _ln, _fn);
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp16 = copy;
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp16, _ln, _fn);
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp62 = chpl_get_DefaultRectangularArr_str3(coerce_tmp16, _ln, _fn);
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_60(call_tmp61, call_tmp62);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp63 = chpl_get_DefaultRectangularArr_factoredOffs3(this24, _ln, _fn);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp17 = copy;
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp17, _ln, _fn);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp64 = chpl_get_DefaultRectangularArr_factoredOffs3(coerce_tmp17, _ln, _fn);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_3(call_tmp63, *(call_tmp64));
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1561 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      dsiDestroyArr4(this24, UINT8(false), _ln, _fn);
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(this24, _ln, _fn);
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp65 = chpl_get_DefaultRectangularArr_data2(this24, _ln, _fn);
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      coerce_tmp18 = copy;
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl_check_nil(coerce_tmp18, _ln, _fn);
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp66 = chpl_get_DefaultRectangularArr_data2(coerce_tmp18, _ln, _fn);
#line 1562 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl___ASSIGN_54(call_tmp65, *(call_tmp66));
#line 1566 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      _value3(&reallocD);
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp67 = sizeAs2(&reallocD, _ln, _fn);
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      call_tmp68 = chpl___GREATER_5(call_tmp67, INT64(0), _ln, _fn);
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      if (call_tmp68) /* ZLINE: 1572 /Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl */
#line 1572 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      {
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(this24, _ln, _fn);
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp69 = chpl_get_DefaultRectangularArr_shiftedData2(this24, _ln, _fn);
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        coerce_tmp19 = copy;
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl_check_nil(coerce_tmp19, _ln, _fn);
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        call_tmp70 = chpl_get_DefaultRectangularArr_shiftedData2(coerce_tmp19, _ln, _fn);
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
        chpl___ASSIGN_54(call_tmp69, *(call_tmp70));
#line 1573 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      }
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__delete33(copy, _ln, _fn);
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
      chpl__autoDestroy67(&keep, _ln, _fn);
#line 1576 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    }
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy67(&reallocD, _ln, _fn);
#line 1476 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy45(&call_tmp23);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy45(&call_tmp22);
#line 1464 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _end_dsiReallocate:;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1581 */
#line 1581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void dsiPostReallocate3(DefaultRectangularArr_1_int64_t_one_locale_int64_t this24) {
#line 1581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1581 */
#line 1581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void dsiPostReallocate4(DefaultRectangularArr_1_int64_t_one_int64_t_int64_t this24) {
#line 1581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1581 */
#line 1581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void dsiPostReallocate2(DefaultRectangularArr_1_int64_t_one_uint64_t_int64_t this24) {
#line 1581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1581 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1626 */
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void chpl__serialViewIter1D(DefaultRectangularArr_1_int64_t_one_locale_int64_t arr,
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                   range_int64_t_both_one viewRange,
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                   _ir_chpl__serialViewIter1D * _retArg) {
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_retArg)->F0_arr = arr;
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_retArg)->F1_viewRange = viewRange;
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1626 */
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ic_chpl__serialViewIter1D _getIterator18(_ir_chpl__serialViewIter1D * ir,
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                 int64_t _ln,
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                                 int32_t _fn) {
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_chpl__serialViewIter1D _ic_ = NULL;
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t T = NULL;
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one T2;
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic_chpl__serialViewIter1D_object), INT16(46), _ln, _fn);
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_ = ((_ic_chpl__serialViewIter1D)(cast_tmp));
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic_chpl__serialViewIter1D;
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->more = INT64(1);
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = (ir)->F0_arr;
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->F0_arr = T;
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T2 = (ir)->F1_viewRange;
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->F1_viewRange = T2;
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return _ic_;
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1674 */
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static void chpl__serialViewIter(DefaultRectangularArr_1_int64_t_one_locale_int64_t arr,
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                 DefaultRectangularDom_1_int64_t_one viewDom,
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                 _ir_chpl__serialViewIter * _retArg) {
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_retArg)->F0_arr = arr;
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_retArg)->F1_viewDom = viewDom;
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return;
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1674 */
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static _ic_chpl__serialViewIter _getIterator19(_ir_chpl__serialViewIter * ir,
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                               int64_t _ln,
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                                               int32_t _fn) {
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_chpl__serialViewIter _ic_ = NULL;
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  c_ptr_void cast_tmp = NULL;
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t T = NULL;
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_one T2 = NULL;
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic_chpl__serialViewIter_object), INT16(47), _ln, _fn);
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_ = ((_ic_chpl__serialViewIter)(cast_tmp));
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic_chpl__serialViewIter;
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->more = INT64(1);
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T = (ir)->F0_arr;
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->F0_arr = T;
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  T2 = (ir)->F1_viewDom;
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  (_ic_)->F1_viewDom = T2;
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return _ic_;
#line 1674 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 1744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1744 */
#line 1744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
static string doiToString(DefaultRectangularDom_1_int64_t_one this24,
#line 1744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                          int64_t _ln,
#line 1744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
                          int32_t _fn) {
#line 1744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  string ret;
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one _this_tmp_ = NULL;
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  string call_tmp8;
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp2;
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  string str;
#line 1746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ic_chpl_direct_range_iter2 _iterator = NULL;
#line 1746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ir_chpl_direct_range_iter2 call_tmp9;
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator2 = NULL;
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp10;
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low3;
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_range_int64_t_both_one call_tmp11 = NULL;
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_both_one _this_tmp_2 = NULL;
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  string call_tmp12;
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  range_int64_t_both_one coerce_tmp3;
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  string call_tmp13;
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _this_tmp_ = chpl_get_DefaultRectangularDom_ranges(this24, _ln, _fn);
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  coerce_tmp2 = *(*(_this_tmp_) + INT64(0));
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp8 = chpl___COLON_27(coerce_tmp2, _ln, _fn);
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  str = chpl___PLUS_9(&_str_literal_1054, &call_tmp8, _ln, _fn);
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 1745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy59(coerce_tmp2);
#line 1746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  call_tmp9 = chpl_direct_range_iter2();
#line 1746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _iterator = _getIterator7(&call_tmp9, _ln, _fn);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_param_stride_range_iter(INT64(1), INT64(0), &ret_tmp);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = ret_tmp;
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator2 = _getIterator13(&call_tmp10, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator2)->F0_low);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator2)->F1_high);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low3 = (_iterator2)->F0_low;
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_checkIfRangeIterWillOverflow(low3, (_iterator2)->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  high2 = (_iterator2)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (chpl_check_nil(_iterator2, _ln, _fn),i = (_iterator2)->F0_low; ((i <= high2)); i += INT64(1)) {
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    _this_tmp_2 = chpl_get_DefaultRectangularDom_ranges(this24, _ln, _fn);
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp11 = this13(_this_tmp_2, i, _ln, _fn);
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp3 = *(call_tmp11);
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp12 = chpl___COLON_27(coerce_tmp3, _ln, _fn);
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp13 = chpl___PLUS_9(&_str_literal_108, &call_tmp12, _ln, _fn);
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl___PLUS__ASSIGN_3(&str, &call_tmp13, _ln, _fn);
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy23(&call_tmp13, _ln, _fn);
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy59(coerce_tmp3);
#line 1747 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator19(_iterator2, _ln, _fn);
#line 1746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _freeIterator12(_iterator, _ln, _fn);
#line 1748 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl___PLUS__ASSIGN_3(&str, &_str_literal_1056, _ln, _fn);
#line 1749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  ret = str;
#line 1744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  return ret;
#line 1744 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
}

#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3537 */
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void coforall_fn10(int64_t len,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                          int64_t numChunks,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                          range_int64_t_both_one this24,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                          chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                          int64_t chunk,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                          DefaultRectangularArr_1_int64_t_one_locale_int64_t this25,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                          int64_t _ln,
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                          int32_t _fn) {
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _tuple_2_star_int64_t ret_tmp;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _tuple_2_star_int64_t T;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_range_iter3 _iterator = NULL;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_range_iter3 call_tmp11;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_range_iter3 ret_tmp2;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one taskInd_this;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator2 = NULL;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp12;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp3;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low3;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low4;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 3553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp13;
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref_locale call_tmp14 = NULL;
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ref__ddata_locale _this_tmp_ = NULL;
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  _ddata_locale coerce_tmp2 = NULL;
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__high3(&this24);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_get_range__low2(&this24);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl_get_range__low2(&this24);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _computeBlock2(len, numChunks, chunk, *(call_tmp8), *(call_tmp9), *(call_tmp10), &ret_tmp, _ln, _fn);
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  *(T + INT64(0)) = *(ret_tmp + INT64(0));
#line 3551 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  *(T + INT64(1)) = *(ret_tmp + INT64(1));
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_range_iter3(*(T + INT64(0)), *(T + INT64(1)), &ret_tmp2);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = ret_tmp2;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator = _getIterator9(&call_tmp11, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  taskInd_this = this24;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low3 = (_iterator)->F0_low;
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_param_stride_range_iter(low3, (_iterator)->F1_high, &ret_tmp3);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = ret_tmp3;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator2 = _getIterator13(&call_tmp12, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator2)->F0_low);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator2)->F1_high);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low4 = (_iterator2)->F0_low;
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_checkIfRangeIterWillOverflow(low4, (_iterator2)->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  high2 = (_iterator2)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (chpl_check_nil(_iterator2, _ln, _fn),i = (_iterator2)->F0_low; ((i <= high2)); i += INT64(1)) {
#line 3553 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp13 = chpl_intToIdx3(taskInd_this, i);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(this25, _ln, _fn);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    _this_tmp_ = chpl_get_DefaultRectangularArr_data3(this25, _ln, _fn);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    coerce_tmp2 = *(_this_tmp_);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    call_tmp14 = this7(coerce_tmp2, call_tmp13);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
    chpl__autoDestroy45(call_tmp14);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  }
#line 2966 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator19(_iterator2, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator10(_iterator, _ln, _fn);
#line 3552 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy58(&T);
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/DefaultRectangular.chpl"
  chpl__autoDestroy(((RootClass)(this25)));
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3537 */
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void wrapcoforall_fn10(_class_localscoforall_fn10 c) {
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int32_t _fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _ln;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _0_len;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _1_numChunks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one _2_call_tmp;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount = NULL;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t _4_chunk;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _fn = (c)->_fn;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ln = (c)->_ln;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_rmem_consist_acquire(_ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _0_len = (c)->_0_len;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _1_numChunks = (c)->_1_numChunks;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _2_call_tmp = (c)->_2_call_tmp;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _3__coforallCount = (c)->_3__coforallCount;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _4_chunk = (c)->_4_chunk;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coforall_fn10(_0_len, _1_numChunks, _2_call_tmp, _3__coforallCount, _4_chunk, (c)->_5_this, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(c, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _downEndCount((c)->_3__coforallCount, nil, _ln, _fn);
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

