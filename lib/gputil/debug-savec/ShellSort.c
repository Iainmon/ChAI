#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
/* Sort.chpl:1259 */
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
static void chpl__init_ShellSort(int64_t _ln,
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
                                 int32_t _fn) {
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  if (chpl__init_ShellSort_p) /* ZLINE: 1259 /Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl */
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    goto _exit_chpl__init_ShellSort;
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  printModuleInit("%*s\n", "ShellSort", INT64(9), _ln, _fn);
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  refIndentLevel = &moduleInitLevel;
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) += INT64(1);
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  chpl__init_ShellSort_p = UINT8(true);
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Sort(_ln, _fn);
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Sort(_ln, _fn);
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_ShallowCopy(_ln, _fn);
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) -= INT64(1);
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _exit_chpl__init_ShellSort:;
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  return;
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
}

