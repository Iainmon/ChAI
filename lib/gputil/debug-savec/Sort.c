#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
/* Sort.chpl:254 */
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
static void chpl__init_Sort(int64_t _ln,
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
                            int32_t _fn) {
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 267 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  DefaultComparator initTemp;
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  ReverseComparator_DefaultComparator initTemp2;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  if (chpl__init_Sort_p) /* ZLINE: 254 /Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl */
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    goto _exit_chpl__init_Sort;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  printModuleInit("%*s\n", "Sort", INT64(4), _ln, _fn);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  refIndentLevel = &moduleInitLevel;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) += INT64(1);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  chpl__init_Sort_p = UINT8(true);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  {
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_List(_ln, _fn);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_Reflection(_ln, _fn);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_POSIX(_ln, _fn);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_MSBRadixSort(_ln, _fn);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_TwoArrayRadixSort(_ln, _fn);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_QuickSort(_ln, _fn);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
    chpl__init_TimSort(_ln, _fn);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  }
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  chpl_addModule("Sort", ((c_fn_ptr_rehook)(chpl__deinit_Sort)), _ln, _fn);
#line 267 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  init146(&initTemp);
#line 267 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  defaultComparator = initTemp;
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  init147(&initTemp2);
#line 278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  reverseComparator = initTemp2;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  *(refIndentLevel) -= INT64(1);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _exit_chpl__init_Sort:;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  return;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
}

#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
/* Sort.chpl:254 */
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
static void chpl__deinit_Sort(void) {
#line 267 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  DefaultComparator local_defaultComparator;
#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  ReverseComparator_DefaultComparator local_reverseComparator;
#line 267 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  local_defaultComparator = defaultComparator;
#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  local_reverseComparator = reverseComparator;
#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  chpl__autoDestroy48(&local_reverseComparator);
#line 267 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  chpl__autoDestroy4(&local_defaultComparator);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  return;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
}

#line 3270 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
/* Sort.chpl:3270 */
#line 3270 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
static void init146(DefaultComparator * this24) {
#line 3270 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  return;
#line 3270 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
}

#line 3270 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
/* Sort.chpl:3270 */
#line 3270 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
static void chpl__auto_destroy_DefaultComparator(DefaultComparator * this24) {
#line 3270 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  return;
#line 3270 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
}

#line 3419 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
/* Sort.chpl:3419 */
#line 3419 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
static void chpl__auto_destroy_ReverseComparator(ReverseComparator_DefaultComparator * this24) {
#line 3422 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _ref_DefaultComparator _field_destructor_tmp_ = NULL;
#line 3422 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  _field_destructor_tmp_ = &((this24)->comparator);
#line 3422 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  chpl__auto_destroy_DefaultComparator(_field_destructor_tmp_);
#line 3419 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  return;
#line 3419 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
}

#line 3428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
/* Sort.chpl:3428 */
#line 3428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
static void init147(ReverseComparator_DefaultComparator * this24) {
#line 3429 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  DefaultComparator call_tmp8;
#line 3429 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  DefaultComparator initTemp;
#line 3429 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  init146(&initTemp);
#line 3429 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  call_tmp8 = initTemp;
#line 3429 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  (this24)->comparator = call_tmp8;
#line 3428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
  return;
#line 3428 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Sort.chpl"
}

