#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
/* Types.chpl:25 */
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
static void chpl__init_Types(int64_t _ln,
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                             int32_t _fn) {
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  if (chpl__init_Types_p) /* ZLINE: 25 /Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl */
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  {
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    goto _exit_chpl__init_Types;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  }
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  printModuleInit("%*s\n", "Types", INT64(5), _ln, _fn);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  refIndentLevel = &moduleInitLevel;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  *(refIndentLevel) += INT64(1);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl__init_Types_p = UINT8(true);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  {
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl__init_HaltWrappers(_ln, _fn);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  }
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  *(refIndentLevel) -= INT64(1);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _exit_chpl__init_Types:;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  return;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
}

#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
/* Types.chpl:887 */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
static uint64_t safeCast5(int64_t this24,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                          int64_t _ln,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                          int32_t _fn) {
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError2 call_tmp8;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  IllegalArgumentError ifvar_borrow = NULL;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl_bool call_tmp9;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  string call_tmp10;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  Error coerce_tmp2 = NULL;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  string ret_tmp;
#line 891 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  uint64_t call_tmp11;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp8 = chpl_checkValue2(this24, _ln, _fn);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  ifvar_borrow = chpl_checkBorrowIfVar2(&call_tmp8);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp9 = _cond_test4(ifvar_borrow, _ln, _fn);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  if (call_tmp9) /* ZLINE: 889 /Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl */
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  {
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    coerce_tmp2 = ((Error)(ifvar_borrow));
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    ((void(*)(Error,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       string *,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       int64_t,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(coerce_tmp2))->chpl__cid) + INT64(1))])(coerce_tmp2, &ret_tmp, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    call_tmp10 = ret_tmp;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    safeCastCheckHalt(&call_tmp10, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl__autoDestroy23(&call_tmp10, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  }
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl__autoDestroy87(&call_tmp8, _ln, _fn);
#line 891 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp11 = ((uint64_t)(this24));
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  return call_tmp11;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
}

#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
/* Types.chpl:887 */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
static int64_t safeCast4(uint64_t this24,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                         int64_t _ln,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                         int32_t _fn) {
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError2 call_tmp8;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  IllegalArgumentError ifvar_borrow = NULL;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl_bool call_tmp9;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  string call_tmp10;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  Error coerce_tmp2 = NULL;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  string ret_tmp;
#line 891 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  int64_t call_tmp11;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp8 = chpl_checkValue7(this24, _ln, _fn);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  ifvar_borrow = chpl_checkBorrowIfVar2(&call_tmp8);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp9 = _cond_test4(ifvar_borrow, _ln, _fn);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  if (call_tmp9) /* ZLINE: 889 /Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl */
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  {
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    coerce_tmp2 = ((Error)(ifvar_borrow));
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    ((void(*)(Error,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       string *,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       int64_t,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(coerce_tmp2))->chpl__cid) + INT64(1))])(coerce_tmp2, &ret_tmp, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    call_tmp10 = ret_tmp;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    safeCastCheckHalt(&call_tmp10, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl__autoDestroy23(&call_tmp10, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  }
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl__autoDestroy87(&call_tmp8, _ln, _fn);
#line 891 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp11 = chpl___COLON_6(this24, _ln, _fn);
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  return call_tmp11;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
}

#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
/* Types.chpl:887 */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
static int64_t safeCast3(int64_t this24,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                         int64_t _ln,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                         int32_t _fn) {
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError2 call_tmp8;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  IllegalArgumentError ifvar_borrow = NULL;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl_bool call_tmp9;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  string call_tmp10;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  Error coerce_tmp2 = NULL;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  string ret_tmp;
#line 891 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  int64_t call_tmp11;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp8 = chpl_checkValue6(this24, _ln, _fn);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  ifvar_borrow = chpl_checkBorrowIfVar2(&call_tmp8);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp9 = _cond_test4(ifvar_borrow, _ln, _fn);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  if (call_tmp9) /* ZLINE: 889 /Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl */
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  {
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    coerce_tmp2 = ((Error)(ifvar_borrow));
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    ((void(*)(Error,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       string *,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       int64_t,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(coerce_tmp2))->chpl__cid) + INT64(1))])(coerce_tmp2, &ret_tmp, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    call_tmp10 = ret_tmp;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    safeCastCheckHalt(&call_tmp10, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl__autoDestroy23(&call_tmp10, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  }
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl__autoDestroy87(&call_tmp8, _ln, _fn);
#line 891 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp11 = this24;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  return call_tmp11;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
}

#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
/* Types.chpl:887 */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
static int32_t safeCast2(int64_t this24,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                         int64_t _ln,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                         int32_t _fn) {
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError2 call_tmp8;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  IllegalArgumentError ifvar_borrow = NULL;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl_bool call_tmp9;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  string call_tmp10;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  Error coerce_tmp2 = NULL;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  string ret_tmp;
#line 891 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  int32_t call_tmp11;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp8 = chpl_checkValue4(this24, _ln, _fn);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  ifvar_borrow = chpl_checkBorrowIfVar2(&call_tmp8);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp9 = _cond_test4(ifvar_borrow, _ln, _fn);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  if (call_tmp9) /* ZLINE: 889 /Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl */
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  {
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    coerce_tmp2 = ((Error)(ifvar_borrow));
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    ((void(*)(Error,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       string *,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       int64_t,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(coerce_tmp2))->chpl__cid) + INT64(1))])(coerce_tmp2, &ret_tmp, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    call_tmp10 = ret_tmp;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    safeCastCheckHalt(&call_tmp10, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl__autoDestroy23(&call_tmp10, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  }
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl__autoDestroy87(&call_tmp8, _ln, _fn);
#line 891 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp11 = chpl___COLON_4(this24, _ln, _fn);
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  return call_tmp11;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
}

#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
/* Types.chpl:887 */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
static int64_t safeCast6(int32_t this24,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                         int64_t _ln,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                         int32_t _fn) {
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError2 call_tmp8;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  IllegalArgumentError ifvar_borrow = NULL;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl_bool call_tmp9;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  string call_tmp10;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  Error coerce_tmp2 = NULL;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  string ret_tmp;
#line 891 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  int64_t call_tmp11;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp8 = chpl_checkValue3(this24, _ln, _fn);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  ifvar_borrow = chpl_checkBorrowIfVar2(&call_tmp8);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp9 = _cond_test4(ifvar_borrow, _ln, _fn);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  if (call_tmp9) /* ZLINE: 889 /Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl */
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  {
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    coerce_tmp2 = ((Error)(ifvar_borrow));
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    ((void(*)(Error,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       string *,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       int64_t,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(coerce_tmp2))->chpl__cid) + INT64(1))])(coerce_tmp2, &ret_tmp, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    call_tmp10 = ret_tmp;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    safeCastCheckHalt(&call_tmp10, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl__autoDestroy23(&call_tmp10, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  }
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl__autoDestroy87(&call_tmp8, _ln, _fn);
#line 891 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp11 = ((int64_t)(this24));
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  return call_tmp11;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
}

#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
/* Types.chpl:887 */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
static uint64_t safeCast(uint64_t this24,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                         int64_t _ln,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                         int32_t _fn) {
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError2 call_tmp8;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  IllegalArgumentError ifvar_borrow = NULL;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl_bool call_tmp9;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  string call_tmp10;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  Error coerce_tmp2 = NULL;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  string ret_tmp;
#line 891 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  uint64_t call_tmp11;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp8 = chpl_checkValue(this24, _ln, _fn);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  ifvar_borrow = chpl_checkBorrowIfVar2(&call_tmp8);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp9 = _cond_test4(ifvar_borrow, _ln, _fn);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  if (call_tmp9) /* ZLINE: 889 /Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl */
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  {
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    coerce_tmp2 = ((Error)(ifvar_borrow));
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    ((void(*)(Error,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       string *,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       int64_t,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(coerce_tmp2))->chpl__cid) + INT64(1))])(coerce_tmp2, &ret_tmp, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    call_tmp10 = ret_tmp;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    safeCastCheckHalt(&call_tmp10, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl__autoDestroy23(&call_tmp10, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  }
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl__autoDestroy87(&call_tmp8, _ln, _fn);
#line 891 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp11 = this24;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  return call_tmp11;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
}

#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
/* Types.chpl:887 */
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
static int32_t safeCast7(int8_t this24,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                         int64_t _ln,
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                         int32_t _fn) {
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError2 call_tmp8;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  IllegalArgumentError ifvar_borrow = NULL;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl_bool call_tmp9;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  string call_tmp10;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  Error coerce_tmp2 = NULL;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  string ret_tmp;
#line 891 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  int32_t call_tmp11;
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp8 = chpl_checkValue5(this24, _ln, _fn);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  ifvar_borrow = chpl_checkBorrowIfVar2(&call_tmp8);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp9 = _cond_test4(ifvar_borrow, _ln, _fn);
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  if (call_tmp9) /* ZLINE: 889 /Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl */
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  {
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    coerce_tmp2 = ((Error)(ifvar_borrow));
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    ((void(*)(Error,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       string *,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       int64_t,
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(coerce_tmp2))->chpl__cid) + INT64(1))])(coerce_tmp2, &ret_tmp, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    call_tmp10 = ret_tmp;
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    safeCastCheckHalt(&call_tmp10, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl__autoDestroy23(&call_tmp10, _ln, _fn);
#line 890 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  }
#line 889 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl__autoDestroy87(&call_tmp8, _ln, _fn);
#line 891 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp11 = ((int32_t)(this24));
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  return call_tmp11;
#line 887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
}

#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
/* Types.chpl:895 */
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
static _owned_IllegalArgumentError2 chpl_checkValue2(int64_t this24,
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                                                     int64_t _ln,
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                                                     int32_t _fn) {
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError2 ret;
#line 899 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl_bool call_tmp8;
#line 900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError call_tmp9;
#line 900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  IllegalArgumentError new_temp = NULL;
#line 900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError initTemp;
#line 899 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp8 = chpl___LESS_3(this24, INT64(0));
#line 899 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  if (call_tmp8) /* ZLINE: 899 /Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl */
#line 899 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  {
#line 900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    new_temp = _new15(&_str_literal_3201, _ln, _fn);
#line 900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    init75(&initTemp, new_temp);
#line 900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    call_tmp9 = initTemp;
#line 900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    init_ASSIGN_9(&ret, &call_tmp9, _ln, _fn);
#line 900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl__autoDestroy89(&call_tmp9, _ln, _fn);
#line 900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    goto _end_chpl_checkValue;
#line 900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  }
#line 938 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  init_ASSIGN_22(&ret, nil, _ln, _fn);
#line 938 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _end_chpl_checkValue:;
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  return ret;
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
}

#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
/* Types.chpl:895 */
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
static _owned_IllegalArgumentError2 chpl_checkValue7(uint64_t this24,
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                                                     int64_t _ln,
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                                                     int32_t _fn) {
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError2 ret;
#line 917 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl_bool call_tmp8;
#line 918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError call_tmp9;
#line 918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  IllegalArgumentError new_temp = NULL;
#line 918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError initTemp;
#line 917 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp8 = chpl___GREATER_3(this24, UINT64(9223372036854775807));
#line 917 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  if (call_tmp8) /* ZLINE: 917 /Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl */
#line 917 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  {
#line 918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    new_temp = _new15(&_str_literal_3207, _ln, _fn);
#line 918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    init75(&initTemp, new_temp);
#line 918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    call_tmp9 = initTemp;
#line 918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    init_ASSIGN_9(&ret, &call_tmp9, _ln, _fn);
#line 918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl__autoDestroy89(&call_tmp9, _ln, _fn);
#line 918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    goto _end_chpl_checkValue;
#line 918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  }
#line 938 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  init_ASSIGN_22(&ret, nil, _ln, _fn);
#line 938 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _end_chpl_checkValue:;
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  return ret;
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
}

#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
/* Types.chpl:895 */
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
static _owned_IllegalArgumentError2 chpl_checkValue6(int64_t this24,
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                                                     int64_t _ln,
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                                                     int32_t _fn) {
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError2 ret;
#line 938 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  init_ASSIGN_22(&ret, nil, _ln, _fn);
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  return ret;
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
}

#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
/* Types.chpl:895 */
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
static _owned_IllegalArgumentError2 chpl_checkValue4(int64_t this24,
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                                                     int64_t _ln,
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                                                     int32_t _fn) {
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError2 ret;
#line 923 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl_bool call_tmp8;
#line 924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError call_tmp9;
#line 924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  IllegalArgumentError new_temp = NULL;
#line 924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError initTemp;
#line 931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  chpl_bool call_tmp10;
#line 932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError call_tmp11;
#line 932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  IllegalArgumentError new_temp2 = NULL;
#line 932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError initTemp2;
#line 923 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp8 = chpl___GREATER_(this24, INT64(2147483647));
#line 923 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  if (call_tmp8) /* ZLINE: 923 /Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl */
#line 923 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  {
#line 924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    new_temp = _new15(&_str_literal_3252, _ln, _fn);
#line 924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    init75(&initTemp, new_temp);
#line 924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    call_tmp9 = initTemp;
#line 924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    init_ASSIGN_9(&ret, &call_tmp9, _ln, _fn);
#line 924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl__autoDestroy89(&call_tmp9, _ln, _fn);
#line 924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    goto _end_chpl_checkValue;
#line 924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  }
#line 931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  call_tmp10 = chpl___LESS_3(this24, INT64(-2147483648));
#line 931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  if (call_tmp10) /* ZLINE: 931 /Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl */
#line 931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  {
#line 932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    new_temp2 = _new15(&_str_literal_3258, _ln, _fn);
#line 932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    init75(&initTemp2, new_temp2);
#line 932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    call_tmp11 = initTemp2;
#line 932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    init_ASSIGN_9(&ret, &call_tmp11, _ln, _fn);
#line 932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    chpl__autoDestroy89(&call_tmp11, _ln, _fn);
#line 932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
    goto _end_chpl_checkValue;
#line 932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  }
#line 938 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  init_ASSIGN_22(&ret, nil, _ln, _fn);
#line 938 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _end_chpl_checkValue:;
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  return ret;
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
}

#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
/* Types.chpl:895 */
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
static _owned_IllegalArgumentError2 chpl_checkValue3(int32_t this24,
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                                                     int64_t _ln,
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                                                     int32_t _fn) {
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError2 ret;
#line 938 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  init_ASSIGN_22(&ret, nil, _ln, _fn);
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  return ret;
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
}

#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
/* Types.chpl:895 */
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
static _owned_IllegalArgumentError2 chpl_checkValue(uint64_t this24,
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                                                    int64_t _ln,
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                                                    int32_t _fn) {
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError2 ret;
#line 938 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  init_ASSIGN_22(&ret, nil, _ln, _fn);
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  return ret;
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
}

#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
/* Types.chpl:895 */
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
static _owned_IllegalArgumentError2 chpl_checkValue5(int8_t this24,
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                                                     int64_t _ln,
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
                                                     int32_t _fn) {
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  _owned_IllegalArgumentError2 ret;
#line 938 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  init_ASSIGN_22(&ret, nil, _ln, _fn);
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
  return ret;
#line 895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Types.chpl"
}

