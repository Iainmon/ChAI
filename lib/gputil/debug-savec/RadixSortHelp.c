#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
/* Sort.chpl:1363 */
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
static void chpl__init_RadixSortHelp(int64_t _ln,
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
                                     int32_t _fn) {
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  if (chpl__init_RadixSortHelp_p) /* ZLINE: 1363 /Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl */
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    goto _exit_chpl__init_RadixSortHelp;
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  printModuleInit("%*s\n", "RadixSortHelp", INT64(13), _ln, _fn);
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  refIndentLevel = &moduleInitLevel;
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) += INT64(1);
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  chpl__init_RadixSortHelp_p = UINT8(true);
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Sort(_ln, _fn);
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Sort(_ln, _fn);
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Reflection(_ln, _fn);
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) -= INT64(1);
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _exit_chpl__init_RadixSortHelp:;
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  return;
#line 1363 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
}

