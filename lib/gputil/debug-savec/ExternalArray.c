#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
/* ExternalArray.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
static void chpl__init_ExternalArray(int64_t _ln,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
                                     int32_t _fn) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  if (chpl__init_ExternalArray_p) /* ZLINE: 26 /Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
    goto _exit_chpl__init_ExternalArray;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  }
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  printModuleInit("%*s\n", "ExternalArray", INT64(13), _ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  refIndentLevel = &moduleInitLevel;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  *(refIndentLevel) += INT64(1);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  chpl__init_ExternalArray_p = UINT8(true);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
    chpl__init_HaltWrappers(_ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  }
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  *(refIndentLevel) -= INT64(1);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  _exit_chpl__init_ExternalArray:;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
}

#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
/* ExternalArray.chpl:32 */
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
static c_ptr_void * chpl_get_chpl_opaque_array__instance(chpl_opaque_array * this24) {
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  _ref_c_ptr_void call_tmp8 = NULL;
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  call_tmp8 = &((this24)->_instance);
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  return call_tmp8;
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
}

#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
/* ExternalArray.chpl:33 */
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
static chpl_bool * chpl_get_chpl_opaque_array__unowned(chpl_opaque_array * this24) {
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  call_tmp8 = &((this24)->_unowned);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  return call_tmp8;
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
}

#line 247 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
/* ExternalArray.chpl:247 */
#line 247 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
void cleanupOpaqueArray(chpl_opaque_array * arr) {
#line 248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  _ref_c_ptr_void call_tmp8 = NULL;
#line 248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  BaseArr call_tmp9 = NULL;
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  chpl_bool call_tmp10;
#line 250 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  _ref_chpl_bool call_tmp11 = NULL;
#line 248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  call_tmp8 = chpl_get_chpl_opaque_array__instance(arr);
#line 248 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  call_tmp9 = chpl___COLON_61(*(call_tmp8), INT64(248), INT32(66));
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  call_tmp10 = _cond_test5(call_tmp9, INT64(249), INT32(66));
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  if (call_tmp10) /* ZLINE: 249 /Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl */
#line 249 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  {
#line 250 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
    call_tmp11 = chpl_get_chpl_opaque_array__unowned(arr);
#line 250 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
    _do_destroy_arr(*(call_tmp11), call_tmp9, UINT8(true), INT64(250), INT32(66));
#line 250 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  }
#line 247 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
  return;
#line 247 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ExternalArray.chpl"
}

