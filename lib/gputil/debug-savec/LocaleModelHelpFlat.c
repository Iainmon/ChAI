#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
/* LocaleModelHelpFlat.chpl:21 */
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
static void chpl__init_LocaleModelHelpFlat(int64_t _ln,
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
                                           int32_t _fn) {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  if (chpl__init_LocaleModelHelpFlat_p) /* ZLINE: 21 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl */
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    goto _exit_chpl__init_LocaleModelHelpFlat;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  }
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  printModuleInit("%*s\n", "LocaleModelHelpFlat", INT64(19), _ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  refIndentLevel = &moduleInitLevel;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  *(refIndentLevel) += INT64(1);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  chpl__init_LocaleModelHelpFlat_p = UINT8(true);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    chpl__init_LocaleModelHelpSetup(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    chpl__init_LocaleModelHelpRuntime(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  }
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  *(refIndentLevel) -= INT64(1);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  _exit_chpl__init_LocaleModelHelpFlat:;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  return;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
/* LocaleModelHelpFlat.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
chpl_bool chpl_doDirectExecuteOn(chpl_localeID_t loc) {
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  int32_t call_tmp8;
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  int32_t call_tmp9;
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  chpl_bool call_tmp10;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  call_tmp8 = chpl_nodeFromLocaleID(loc, INT64(49), INT32(71));
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  call_tmp9 = get_chpl_nodeID();
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  call_tmp10 = chpl___EQUALS_2(call_tmp8, call_tmp9);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  return call_tmp10;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
}

#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
/* LocaleModelHelpFlat.chpl:57 */
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
void chpl_executeOn(chpl_localeID_t loc,
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
                    int64_t fn,
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
                    chpl_comm_on_bundle_p args,
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
                    uint64_t args_size,
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
                    int64_t _ln,
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
                    int32_t _fn) {
#line 63 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  int32_t call_tmp8;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  int32_t call_tmp9;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  chpl_bool call_tmp10;
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  c_ptr_chpl_task_infoChapel_t call_tmp11 = NULL;
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  chpl_task_bundle_p call_tmp12;
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  int32_t call_tmp13;
#line 63 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  call_tmp8 = chpl_nodeFromLocaleID(loc, _ln, _fn);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  call_tmp9 = get_chpl_nodeID();
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  call_tmp10 = chpl___EQUALS_2(call_tmp8, call_tmp9);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  if (call_tmp10) /* ZLINE: 64 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl */
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  {
#line 69 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    chpl_ftable_call(fn, args);
#line 69 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  } else /* ZLINE: 70 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl */
#line 69 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  {
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    call_tmp11 = chpl_task_getInfoChapel();
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    call_tmp12 = chpl_comm_on_bundle_task_bundle(args);
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    chpl_task_data_setup(call_tmp12, call_tmp11, _ln, _fn);
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    call_tmp13 = chpl_sublocFromLocaleID(loc, _ln, _fn);
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    chpl_comm_execute_on(((int64_t)(call_tmp8)), ((int64_t)(call_tmp13)), fn, args, args_size, _ln, _fn);
#line 73 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  }
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  return;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
}

#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
/* LocaleModelHelpFlat.chpl:83 */
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
void chpl_executeOnFast(chpl_localeID_t loc,
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
                        int64_t fn,
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
                        chpl_comm_on_bundle_p args,
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
                        uint64_t args_size,
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
                        int64_t _ln,
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
                        int32_t _fn) {
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  int32_t call_tmp8;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  int32_t call_tmp9;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  chpl_bool call_tmp10;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  c_ptr_chpl_task_infoChapel_t call_tmp11 = NULL;
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  chpl_task_bundle_p call_tmp12;
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  int32_t call_tmp13;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  call_tmp8 = chpl_nodeFromLocaleID(loc, _ln, _fn);
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  call_tmp9 = get_chpl_nodeID();
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  call_tmp10 = chpl___EQUALS_2(call_tmp8, call_tmp9);
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  if (call_tmp10) /* ZLINE: 90 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl */
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  {
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    chpl_ftable_call(fn, args);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  } else /* ZLINE: 93 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl */
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  {
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    call_tmp11 = chpl_task_getInfoChapel();
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    call_tmp12 = chpl_comm_on_bundle_task_bundle(args);
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    chpl_task_data_setup(call_tmp12, call_tmp11, _ln, _fn);
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    call_tmp13 = chpl_sublocFromLocaleID(loc, _ln, _fn);
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    chpl_comm_execute_on_fast(((int64_t)(call_tmp8)), ((int64_t)(call_tmp13)), fn, args, args_size, _ln, _fn);
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  }
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  return;
#line 83 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
}

#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
/* LocaleModelHelpFlat.chpl:105 */
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
void chpl_executeOnNB(chpl_localeID_t loc,
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
                      int64_t fn,
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
                      chpl_comm_on_bundle_p args,
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
                      uint64_t args_size,
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
                      int64_t _ln,
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
                      int32_t _fn) {
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  int32_t call_tmp8;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  c_ptr_chpl_task_infoChapel_t call_tmp9 = NULL;
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  chpl_bool call_tmp10;
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  int32_t call_tmp11;
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  chpl_bool call_tmp12;
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  chpl_task_bundle_p call_tmp13;
#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  chpl_task_bundle_p call_tmp14;
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  call_tmp8 = chpl_nodeFromLocaleID(loc, _ln, _fn);
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  call_tmp9 = chpl_task_getInfoChapel();
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  call_tmp10 = chpl_task_data_getSerial(call_tmp9, _ln, _fn);
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  call_tmp11 = get_chpl_nodeID();
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  call_tmp12 = chpl___EQUALS_2(call_tmp8, call_tmp11);
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  if (call_tmp12) /* ZLINE: 118 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl */
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  {
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    if (call_tmp10) /* ZLINE: 120 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl */
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    {
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
      chpl_ftable_call(fn, args);
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    } else /* ZLINE: 122 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl */
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    {
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
      call_tmp13 = chpl_comm_on_bundle_task_bundle(args);
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
      chpl_task_data_setup(call_tmp13, call_tmp9, _ln, _fn);
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
      chpl_comm_taskCallFTable(fn, args, args_size, ((int64_t)(c_sublocid_any)), _ln, _fn);
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    }
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  } else /* ZLINE: 126 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl */
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  {
#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    call_tmp14 = chpl_comm_on_bundle_task_bundle(args);
#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    chpl_task_data_setup(call_tmp14, call_tmp9, _ln, _fn);
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    if (call_tmp10) /* ZLINE: 128 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl */
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    {
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
      chpl_comm_execute_on(((int64_t)(call_tmp8)), ((int64_t)(c_sublocid_any)), fn, args, args_size, _ln, _fn);
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    } else /* ZLINE: 130 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl */
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    {
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
      chpl_comm_execute_on_nb(((int64_t)(call_tmp8)), ((int64_t)(c_sublocid_any)), fn, args, args_size, _ln, _fn);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
    }
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  }
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
  return;
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocaleModelHelpFlat.chpl"
}

