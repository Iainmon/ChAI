#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
/* ChapelTaskDataHelp.chpl:23 */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
static void chpl__init_ChapelTaskDataHelp(int64_t _ln,
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
                                          int32_t _fn) {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  if (chpl__init_ChapelTaskDataHelp_p) /* ZLINE: 23 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
    goto _exit_chpl__init_ChapelTaskDataHelp;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  printModuleInit("%*s\n", "ChapelTaskDataHelp", INT64(18), _ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  refIndentLevel = &moduleInitLevel;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  *(refIndentLevel) += INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  chpl__init_ChapelTaskDataHelp_p = UINT8(true);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
    chpl__init_POSIX(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  *(refIndentLevel) -= INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  _exit_chpl__init_ChapelTaskDataHelp:;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  return;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
}

#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
/* ChapelTaskDataHelp.chpl:38 */
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
static void chpl_task_data_setup(chpl_task_bundle_p args,
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
                                 chpl_task_infoChapel_t * infoChapel,
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
                                 int64_t _ln,
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
                                 int32_t _fn) {
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  c_ptr_chpl_task_infoChapel_t call_tmp8 = NULL;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  uint64_t call_tmp9;
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  call_tmp8 = chpl_task_getInfoChapelInBundle(args);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  call_tmp9 = c_sizeof5();
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  memcpy2(((c_ptr_void)(call_tmp8)), ((c_ptr_void)(infoChapel)), call_tmp9);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  return;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
/* ChapelTaskDataHelp.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
static void chpl_save_task_error(chpl___EndCountBase e,
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
                                 Error err,
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
                                 int64_t _ln,
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
                                 int32_t _fn) {
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  chpl_bool call_tmp8;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  _ref_chpl_TaskErrors call_tmp9 = NULL;
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(err)), nil);
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  if (call_tmp8) /* ZLINE: 47 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl */
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  {
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
    chpl_check_nil(e, _ln, _fn);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
    call_tmp9 = chpl_get__EndCountBase_errors(e, _ln, _fn);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
    append(call_tmp9, err, _ln, _fn);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  }
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
  return;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskDataHelp.chpl"
}

