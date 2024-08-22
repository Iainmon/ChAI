#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
/* Sort.chpl:3007 */
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
static void chpl__init_MSBRadixSort(int64_t _ln,
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
                                    int32_t _fn) {
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  if (chpl__init_MSBRadixSort_p) /* ZLINE: 3007 /Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl */
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    goto _exit_chpl__init_MSBRadixSort;
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  printModuleInit("%*s\n", "MSBRadixSort", INT64(12), _ln, _fn);
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  refIndentLevel = &moduleInitLevel;
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) += INT64(1);
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  chpl__init_MSBRadixSort_p = UINT8(true);
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Sort(_ln, _fn);
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Sort(_ln, _fn);
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_RadixSortHelp(_ln, _fn);
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_POSIX(_ln, _fn);
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_ShellSort(_ln, _fn);
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) -= INT64(1);
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _exit_chpl__init_MSBRadixSort:;
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  return;
#line 3007 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
}

