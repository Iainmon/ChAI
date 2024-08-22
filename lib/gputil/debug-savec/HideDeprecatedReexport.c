#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
/* Search.chpl:29 */
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
static void chpl__init_HideDeprecatedReexport(int64_t _ln,
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
                                              int32_t _fn) {
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  if (chpl__init_HideDeprecatedReexport_p) /* ZLINE: 29 /Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl */
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  {
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
    goto _exit_chpl__init_HideDeprecatedReexport;
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  }
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  printModuleInit("%*s\n", "HideDeprecatedReexport", INT64(22), _ln, _fn);
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  refIndentLevel = &moduleInitLevel;
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  *(refIndentLevel) += INT64(1);
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  chpl__init_HideDeprecatedReexport_p = UINT8(true);
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  {
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
    chpl__init_Search(_ln, _fn);
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
    chpl__init_Sort(_ln, _fn);
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  }
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  *(refIndentLevel) -= INT64(1);
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  _exit_chpl__init_HideDeprecatedReexport:;
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  return;
#line 29 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
}

