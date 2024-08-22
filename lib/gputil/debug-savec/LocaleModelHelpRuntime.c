#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
/* LocaleModelHelpRuntime.chpl:30 */
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
static void chpl__init_LocaleModelHelpRuntime(int64_t _ln,
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                                              int32_t _fn) {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  if (chpl__init_LocaleModelHelpRuntime_p) /* ZLINE: 30 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl */
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
    goto _exit_chpl__init_LocaleModelHelpRuntime;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  }
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  printModuleInit("%*s\n", "LocaleModelHelpRuntime", INT64(22), _ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  refIndentLevel = &moduleInitLevel;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  *(refIndentLevel) += INT64(1);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  chpl__init_LocaleModelHelpRuntime_p = UINT8(true);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  }
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  *(refIndentLevel) -= INT64(1);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  _exit_chpl__init_LocaleModelHelpRuntime:;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  return;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
}

#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
/* LocaleModelHelpRuntime.chpl:39 */
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
static void chpl___ASSIGN_62(chpl_localeID_t * _arg1,
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                             chpl_localeID_t * _arg2) {
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  *(_arg1) = *(_arg2);
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  return;
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
/* LocaleModelHelpRuntime.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
static chpl_localeID_t chpl_buildLocaleID(int32_t node,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                                          int32_t subloc,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                                          int64_t _ln,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                                          int32_t _fn) {
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  chpl_localeID_t call_tmp8;
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  call_tmp8 = chpl_rt_buildLocaleID(node, subloc);
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  return call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
}

#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
/* LocaleModelHelpRuntime.chpl:82 */
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
static int32_t chpl_nodeFromLocaleID(chpl_localeID_t loc,
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                                     int64_t _ln,
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                                     int32_t _fn) {
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  int32_t call_tmp8;
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  call_tmp8 = chpl_rt_nodeFromLocaleID(loc);
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  return call_tmp8;
#line 82 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
}

#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
/* LocaleModelHelpRuntime.chpl:88 */
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
static int32_t chpl_sublocFromLocaleID(chpl_localeID_t loc,
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                                       int64_t _ln,
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                                       int32_t _fn) {
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  int32_t call_tmp8;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  call_tmp8 = chpl_rt_sublocFromLocaleID(loc);
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  return call_tmp8;
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
}

#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
/* LocaleModelHelpRuntime.chpl:135 */
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
static void chpl_taskAddBegin(int64_t subloc_id,
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                              int64_t fn,
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                              chpl_task_bundle_p args,
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                              uint64_t args_size,
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                              int64_t _ln,
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                              int32_t _fn) {
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  c_ptr_chpl_task_infoChapel_t call_tmp8 = NULL;
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  chpl_bool call_tmp9;
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  call_tmp8 = chpl_task_getInfoChapel();
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  call_tmp9 = chpl_task_data_getSerial(call_tmp8, _ln, _fn);
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  if (call_tmp9) /* ZLINE: 142 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl */
#line 142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
    chpl_ftable_call(fn, args);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  } else /* ZLINE: 144 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  {
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
    chpl_task_data_setup(args, call_tmp8, _ln, _fn);
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
    chpl_task_addTask(fn, args, args_size, subloc_id, _ln, _fn);
#line 146 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  }
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  return;
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
}

#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
/* LocaleModelHelpRuntime.chpl:155 */
#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
static void chpl_taskAddCoStmt(int64_t subloc_id,
#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                               int64_t fn,
#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                               chpl_task_bundle_p args,
#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                               uint64_t args_size,
#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                               int64_t _ln,
#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
                               int32_t _fn) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  c_ptr_chpl_task_infoChapel_t call_tmp8 = NULL;
#line 161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  chpl_bool isSerial;
#line 162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  chpl_bool call_tmp9;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  call_tmp8 = chpl_task_getInfoChapel();
#line 161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  isSerial = chpl_task_data_getSerial(call_tmp8, _ln, _fn);
#line 162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  call_tmp9 = chpl_task_data_getNextCoStmtSerial(call_tmp8, _ln, _fn);
#line 162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  if (call_tmp9) /* ZLINE: 162 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl */
#line 162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  {
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
    chpl___ASSIGN_(&isSerial, UINT8(true));
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
    chpl_task_data_setNextCoStmtSerial(call_tmp8, UINT8(false), _ln, _fn);
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  }
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  if (isSerial) /* ZLINE: 166 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl */
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  {
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
    chpl_ftable_call(fn, args);
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  } else /* ZLINE: 168 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl */
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  {
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
    chpl_task_data_setup(args, call_tmp8, _ln, _fn);
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
    chpl_task_addTask(fn, args, args_size, subloc_id, _ln, _fn);
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  }
#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
  return;
#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpRuntime.chpl"
}

