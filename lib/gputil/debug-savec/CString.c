#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
/* CString.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
static void chpl__init_CString(int64_t _ln,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
                               int32_t _fn) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
  if (chpl__init_CString_p) /* ZLINE: 26 /Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
  {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
    goto _exit_chpl__init_CString;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
  }
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
  printModuleInit("%*s\n", "CString", INT64(7), _ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
  refIndentLevel = &moduleInitLevel;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
  *(refIndentLevel) += INT64(1);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
  chpl__init_CString_p = UINT8(true);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
  {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
  }
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
  *(refIndentLevel) -= INT64(1);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
  _exit_chpl__init_CString:;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
}

#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
/* CString.chpl:105 */
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
static void * chpl___COLON_(c_string_rehook x2,
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
                            int64_t _ln,
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
                            int32_t _fn) {
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
  c_ptr_void call_tmp8 = NULL;
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
  call_tmp8 = ((c_ptr_void)(x2));
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
  return call_tmp8;
#line 105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/CString.chpl"
}

