#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
/* Sort.chpl:1752 */
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
static void chpl__init_TwoArrayPartitioning(int64_t _ln,
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
                                            int32_t _fn) {
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  if (chpl__init_TwoArrayPartitioning_p) /* ZLINE: 1752 /Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl */
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    goto _exit_chpl__init_TwoArrayPartitioning;
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  printModuleInit("%*s\n", "TwoArrayPartitioning", INT64(20), _ln, _fn);
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  refIndentLevel = &moduleInitLevel;
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) += INT64(1);
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  chpl__init_TwoArrayPartitioning_p = UINT8(true);
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Sort(_ln, _fn);
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Math(_ln, _fn);
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_List(_ln, _fn);
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Sort(_ln, _fn);
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_MSBRadixSort(_ln, _fn);
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_ShallowCopy(_ln, _fn);
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_RadixSortHelp(_ln, _fn);
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_ShellSort(_ln, _fn);
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) -= INT64(1);
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _exit_chpl__init_TwoArrayPartitioning:;
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  return;
#line 1752 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
}

