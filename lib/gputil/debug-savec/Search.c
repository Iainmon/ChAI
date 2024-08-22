#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
/* Search.chpl:23 */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
static void chpl__init_Search(int64_t _ln,
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
                              int32_t _fn) {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  if (chpl__init_Search_p) /* ZLINE: 23 /Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
    goto _exit_chpl__init_Search;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  printModuleInit("%*s\n", "Search", INT64(6), _ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  refIndentLevel = &moduleInitLevel;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  *(refIndentLevel) += INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  chpl__init_Search_p = UINT8(true);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
    chpl__init_Sort(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
    chpl__init_HideDeprecatedReexport(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  *(refIndentLevel) -= INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  _exit_chpl__init_Search:;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
  return;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/packages/Search.chpl"
}

