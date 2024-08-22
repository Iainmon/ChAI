#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
/* List.chpl:57 */
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
static void chpl__init_List(int64_t _ln,
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
                            int32_t _fn) {
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
  if (chpl__init_List_p) /* ZLINE: 57 /Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl */
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
  {
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
    goto _exit_chpl__init_List;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
  }
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
  printModuleInit("%*s\n", "List", INT64(4), _ln, _fn);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
  refIndentLevel = &moduleInitLevel;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
  *(refIndentLevel) += INT64(1);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
  chpl__init_List_p = UINT8(true);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
  {
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
    chpl__init_ChapelLocks(_ln, _fn);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
    chpl__init_HaltWrappers(_ln, _fn);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
    chpl__init_Math(_ln, _fn);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
    chpl__init_Sort(_ln, _fn);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
    chpl__init_IO(_ln, _fn);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
    chpl__init_Reflection(_ln, _fn);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
  }
#line 68 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
  _initialCapacity = INT64(8);
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
  _initialArrayCapacity = INT64(16);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
  *(refIndentLevel) -= INT64(1);
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
  _exit_chpl__init_List:;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
  return;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/standard/List.chpl"
}

