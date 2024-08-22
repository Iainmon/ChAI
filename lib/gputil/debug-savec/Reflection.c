#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
/* Reflection.chpl:29 */
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
static void chpl__init_Reflection(int64_t _ln,
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
                                  int32_t _fn) {
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
  if (chpl__init_Reflection_p) /* ZLINE: 29 /Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl */
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
  {
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
    goto _exit_chpl__init_Reflection;
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
  }
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
  printModuleInit("%*s\n", "Reflection", INT64(10), _ln, _fn);
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
  refIndentLevel = &moduleInitLevel;
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
  *(refIndentLevel) += INT64(1);
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
  chpl__init_Reflection_p = UINT8(true);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
  chpl_unstableStandardSymbolForTesting = INT64(0);
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
  chpl_statementLevelSymbol(chpl_unstableStandardSymbolForTesting);
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
  *(refIndentLevel) -= INT64(1);
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
  _exit_chpl__init_Reflection:;
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
  return;
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Reflection.chpl"
}

