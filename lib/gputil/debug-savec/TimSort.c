#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
/* Sort.chpl:883 */
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
static void chpl__init_TimSort(int64_t _ln,
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
                               int32_t _fn) {
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  if (chpl__init_TimSort_p) /* ZLINE: 883 /Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl */
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    goto _exit_chpl__init_TimSort;
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  printModuleInit("%*s\n", "TimSort", INT64(7), _ln, _fn);
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  refIndentLevel = &moduleInitLevel;
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) += INT64(1);
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  chpl__init_TimSort_p = UINT8(true);
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Sort(_ln, _fn);
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Sort(_ln, _fn);
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_InsertionSort(_ln, _fn);
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) -= INT64(1);
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _exit_chpl__init_TimSort:;
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  return;
#line 883 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
}

