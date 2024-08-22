#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
/* ChapelContext.chpl:24 */
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
static void chpl__init_ChapelContext(int64_t _ln,
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
                                     int32_t _fn) {
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
  if (chpl__init_ChapelContext_p) /* ZLINE: 24 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl */
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
  {
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
    goto _exit_chpl__init_ChapelContext;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
  }
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
  printModuleInit("%*s\n", "ChapelContext", INT64(13), _ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
  refIndentLevel = &moduleInitLevel;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
  *(refIndentLevel) += INT64(1);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
  chpl__init_ChapelContext_p = UINT8(true);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
  {
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
    chpl__init_Errors(_ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
    chpl__init_OwnedObject(_ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
  }
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
  *(refIndentLevel) -= INT64(1);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
  _exit_chpl__init_ChapelContext:;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
  return;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
}

#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
/* ChapelContext.chpl:36 */
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
static void chpl__verifyTypeContext(endCountDiagsManager * x2) {
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
  return;
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelContext.chpl"
}

