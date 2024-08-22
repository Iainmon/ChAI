#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
/* ChapelHashtable.chpl:30 */
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
static void chpl__init_ChapelHashtable(int64_t _ln,
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
                                       int32_t _fn) {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
  if (chpl__init_ChapelHashtable_p) /* ZLINE: 30 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl */
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
  {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
    goto _exit_chpl__init_ChapelHashtable;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
  }
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
  printModuleInit("%*s\n", "ChapelHashtable", INT64(15), _ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
  refIndentLevel = &moduleInitLevel;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
  *(refIndentLevel) += INT64(1);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
  chpl__init_ChapelHashtable_p = UINT8(true);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
  {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
    chpl__init_ChapelBase(_ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
    chpl__init_DSIUtil(_ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
    chpl__init_Math(_ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
    chpl__init_POSIX(_ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
    chpl__init_String(_ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
    chpl__init_HaltWrappers(_ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
    chpl__init_IO(_ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
  }
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
  *(refIndentLevel) -= INT64(1);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
  _exit_chpl__init_ChapelHashtable:;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
  return;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelHashtable.chpl"
}

