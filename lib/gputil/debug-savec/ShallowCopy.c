#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
/* Sort.chpl:1579 */
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
static void chpl__init_ShallowCopy(int64_t _ln,
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
                                   int32_t _fn) {
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  if (chpl__init_ShallowCopy_p) /* ZLINE: 1579 /Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl */
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    goto _exit_chpl__init_ShallowCopy;
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  printModuleInit("%*s\n", "ShallowCopy", INT64(11), _ln, _fn);
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  refIndentLevel = &moduleInitLevel;
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) += INT64(1);
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  chpl__init_ShallowCopy_p = UINT8(true);
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Sort(_ln, _fn);
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_POSIX(_ln, _fn);
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) -= INT64(1);
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _exit_chpl__init_ShallowCopy:;
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  return;
#line 1579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
}

