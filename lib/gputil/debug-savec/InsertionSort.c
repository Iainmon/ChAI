#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
/* Sort.chpl:803 */
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
static void chpl__init_InsertionSort(int64_t _ln,
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
                                     int32_t _fn) {
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  if (chpl__init_InsertionSort_p) /* ZLINE: 803 /Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl */
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    goto _exit_chpl__init_InsertionSort;
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  printModuleInit("%*s\n", "InsertionSort", INT64(13), _ln, _fn);
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  refIndentLevel = &moduleInitLevel;
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) += INT64(1);
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  chpl__init_InsertionSort_p = UINT8(true);
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Sort(_ln, _fn);
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Sort(_ln, _fn);
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_ShallowCopy(_ln, _fn);
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) -= INT64(1);
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _exit_chpl__init_InsertionSort:;
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  return;
#line 803 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
}

