#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
/* ExportWrappers.chpl:22 */
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
static void chpl__init_ExportWrappers(int64_t _ln,
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
                                      int32_t _fn) {
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  if (chpl__init_ExportWrappers_p) /* ZLINE: 22 /Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl */
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  {
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
    goto _exit_chpl__init_ExportWrappers;
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  }
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  printModuleInit("%*s\n", "ExportWrappers", INT64(14), _ln, _fn);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  refIndentLevel = &moduleInitLevel;
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  *(refIndentLevel) += INT64(1);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  chpl__init_ExportWrappers_p = UINT8(true);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  {
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  }
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  *(refIndentLevel) -= INT64(1);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  _exit_chpl__init_ExportWrappers:;
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  return;
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
/* ExportWrappers.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
static void _initDynamicEndCount(int64_t _ln,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
                                 int32_t _fn) {
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t call_tmp8 = NULL;
#line 27 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  call_tmp8 = _endCountAlloc(_ln, _fn);
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  chpl_task_setDynamicEndCount(call_tmp8, _ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
}

#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
/* ExportWrappers.chpl:31 */
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
static void _destroyDynamicEndCount(int64_t _ln,
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
                                    int32_t _fn) {
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t call_tmp8 = NULL;
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  Error error = NULL;
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  call_tmp8 = chpl_task_getDynamicEndCount(_ln, _fn);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  error = NULL;
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  _waitEndCount(call_tmp8, &error, _ln, _fn);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  if (error != nil) /* ZLINE: 33 /Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl */
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  {
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  }
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  _endCountFree(call_tmp8, _ln, _fn);
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  return;
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
}

#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
/* ExportWrappers.chpl:38 */
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
void chpl_libraryModuleLevelSetup(void) {
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  _initDynamicEndCount(INT64(39), INT32(82));
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  return;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
}

#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
/* ExportWrappers.chpl:43 */
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
void chpl_libraryModuleLevelCleanup(void) {
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  _destroyDynamicEndCount(INT64(44), INT32(82));
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
  return;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExportWrappers.chpl"
}

