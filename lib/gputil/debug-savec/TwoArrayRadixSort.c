#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
/* Sort.chpl:2894 */
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
static void chpl__init_TwoArrayRadixSort(int64_t _ln,
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
                                         int32_t _fn) {
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  if (chpl__init_TwoArrayRadixSort_p) /* ZLINE: 2894 /Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl */
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    goto _exit_chpl__init_TwoArrayRadixSort;
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  printModuleInit("%*s\n", "TwoArrayRadixSort", INT64(17), _ln, _fn);
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  refIndentLevel = &moduleInitLevel;
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) += INT64(1);
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  chpl__init_TwoArrayRadixSort_p = UINT8(true);
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Sort(_ln, _fn);
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Sort(_ln, _fn);
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_TwoArrayPartitioning(_ln, _fn);
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_RadixSortHelp(_ln, _fn);
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) -= INT64(1);
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _exit_chpl__init_TwoArrayRadixSort:;
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  return;
#line 2894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
}

