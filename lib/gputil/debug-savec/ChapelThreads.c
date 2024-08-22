#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
/* ChapelThreads.chpl:30 */
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
static void chpl__init_ChapelThreads(int64_t _ln,
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
                                     int32_t _fn) {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
  int32_t call_tmp8;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
  int64_t init_coerce_tmp;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
  if (chpl__init_ChapelThreads_p) /* ZLINE: 30 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl */
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
  {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
    goto _exit_chpl__init_ChapelThreads;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
  }
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
  printModuleInit("%*s\n", "ChapelThreads", INT64(13), _ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
  refIndentLevel = &moduleInitLevel;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
  *(refIndentLevel) += INT64(1);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
  chpl__init_ChapelThreads_p = UINT8(true);
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
  call_tmp8 = chpl_task_getenvNumThreadsPerLocale();
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
  init_coerce_tmp = ((int64_t)(call_tmp8));
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
  numThreadsPerLocale = init_coerce_tmp;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
  *(refIndentLevel) -= INT64(1);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
  _exit_chpl__init_ChapelThreads:;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
  return;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelThreads.chpl"
}

