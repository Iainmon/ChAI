#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
/* ChapelStaticVars.chpl:21 */
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
static void chpl__init_ChapelStaticVars(int64_t _ln,
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
                                        int32_t _fn) {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
  if (chpl__init_ChapelStaticVars_p) /* ZLINE: 21 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl */
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
  {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
    goto _exit_chpl__init_ChapelStaticVars;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
  }
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
  printModuleInit("%*s\n", "ChapelStaticVars", INT64(16), _ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
  refIndentLevel = &moduleInitLevel;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
  *(refIndentLevel) += INT64(1);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
  chpl__init_ChapelStaticVars_p = UINT8(true);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
  {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
    chpl__init_OwnedObject(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
    chpl__init_Atomics(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
    chpl__init_ChapelLocale(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
  }
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
  *(refIndentLevel) -= INT64(1);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
  _exit_chpl__init_ChapelStaticVars:;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
  return;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelStaticVars.chpl"
}

