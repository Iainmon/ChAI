#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
/* LocalesArray.chpl:41 */
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
static void chpl__init_LocalesArray(int64_t _ln,
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
                                    int32_t _fn) {
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one call_tmp8;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  if (chpl__init_LocalesArray_p) /* ZLINE: 41 /Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl */
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  {
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
    goto _exit_chpl__init_LocalesArray;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  }
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  printModuleInit("%*s\n", "LocalesArray", INT64(12), _ln, _fn);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  refIndentLevel = &moduleInitLevel;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  *(refIndentLevel) += INT64(1);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  chpl__init_LocalesArray_p = UINT8(true);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  chpl_addModule("LocalesArray", ((c_fn_ptr_rehook)(chpl__deinit_LocalesArray)), _ln, _fn);
#line 45 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  chpl_init_rootLocale(_ln, _fn);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  call_tmp4 = chpl_get_locale__instance(&rootLocale);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  coerce_tmp = *(call_tmp4);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  call_tmp3 = chpl___COLON_17(coerce_tmp, _ln, _fn);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  call_tmp2 = postfix_EXCLAMATION_28(call_tmp3, _ln, _fn);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  chpl_check_nil(call_tmp2, _ln, _fn);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  call_tmp5 = getDefaultLocaleArray(call_tmp2, _ln, _fn);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  Locales = call_tmp5;
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  call_tmp8 = _dom(Locales, _ln, _fn);
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  LocaleSpace = chpl__initCopy(&call_tmp8, UINT8(true), _ln, _fn);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  *(refIndentLevel) -= INT64(1);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  _exit_chpl__init_LocalesArray:;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  return;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
}

#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
/* LocalesArray.chpl:41 */
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
static void chpl__deinit_LocalesArray(int64_t _ln,
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
                                      int32_t _fn) {
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one local_LocaleSpace;
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  local_LocaleSpace = LocaleSpace;
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  chpl__autoDestroy67(&local_LocaleSpace, _ln, _fn);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
  return;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/LocalesArray.chpl"
}

