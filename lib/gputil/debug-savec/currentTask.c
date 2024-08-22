#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1865 */
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void chpl__init_currentTask(int64_t _ln,
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
                                   int32_t _fn) {
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  if (chpl__init_currentTask_p) /* ZLINE: 1865 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl */
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    goto _exit_chpl__init_currentTask;
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  printModuleInit("%*s\n", "currentTask", INT64(11), _ln, _fn);
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  refIndentLevel = &moduleInitLevel;
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(refIndentLevel) += INT64(1);
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl__init_currentTask_p = UINT8(true);
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  {
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
    chpl__init_ChapelBase(_ln, _fn);
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  }
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  *(refIndentLevel) -= INT64(1);
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  _exit_chpl__init_currentTask:;
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

#line 1866 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
/* ChapelBase.chpl:1866 */
#line 1866 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
static void yieldExecution(void) {
#line 1868 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  chpl_task_yield();
#line 1866 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
  return;
#line 1866 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelBase.chpl"
}

