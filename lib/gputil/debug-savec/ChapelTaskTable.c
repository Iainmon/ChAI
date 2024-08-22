#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
/* ChapelTaskTable.chpl:23 */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
static void chpl__init_ChapelTaskTable(int64_t _ln,
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
                                       int32_t _fn) {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  if (chpl__init_ChapelTaskTable_p) /* ZLINE: 23 /Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
    goto _exit_chpl__init_ChapelTaskTable;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  printModuleInit("%*s\n", "ChapelTaskTable", INT64(15), _ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  refIndentLevel = &moduleInitLevel;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  *(refIndentLevel) += INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  chpl__init_ChapelTaskTable_p = UINT8(true);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
    chpl__init_Errors(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  *(refIndentLevel) -= INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  _exit_chpl__init_ChapelTaskTable:;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  return;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
}

#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
/* ChapelTaskTable.chpl:34 */
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
void chpldev_taskTable_add(chpl_taskID_t taskID,
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
                           uint32_t lineno,
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
                           int32_t filename,
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
                           uint64_t tl_info) {
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  return;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
}

#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
/* ChapelTaskTable.chpl:41 */
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
void chpldev_taskTable_remove(chpl_taskID_t taskID) {
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  return;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
}

#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
/* ChapelTaskTable.chpl:45 */
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
void chpldev_taskTable_set_active(chpl_taskID_t taskID) {
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  return;
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
}

#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
/* ChapelTaskTable.chpl:49 */
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
void chpldev_taskTable_set_suspended(chpl_taskID_t taskID) {
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  return;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
}

#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
/* ChapelTaskTable.chpl:53 */
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
void chpldev_taskTable_get_tl_info(chpl_taskID_t taskID) {
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  return;
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
}

#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
/* ChapelTaskTable.chpl:57 */
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
void chpldev_taskTable_print(void) {
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  halt(&_str_literal_2519, INT64(60), INT32(78));
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
  return;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl"
}

