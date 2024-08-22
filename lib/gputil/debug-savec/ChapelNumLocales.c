#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
/* ChapelNumLocales.chpl:23 */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
static void chpl__init_ChapelNumLocales(int64_t _ln,
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
                                        int32_t _fn) {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  int64_t T;
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  chpl_bool call_tmp8;
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  chpl_bool call_tmp9;
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  c_ptrConst_int8_t call_tmp10 = NULL;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  if (chpl__init_ChapelNumLocales_p) /* ZLINE: 23 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
    goto _exit_chpl__init_ChapelNumLocales;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  printModuleInit("%*s\n", "ChapelNumLocales", INT64(16), _ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  refIndentLevel = &moduleInitLevel;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  *(refIndentLevel) += INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  chpl__init_ChapelNumLocales_p = UINT8(true);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
    chpl__init_ChapelBase(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  }
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  call_tmp8 = chpl_config_has_value(((c_ptrConst_int8_t)("numLocales")), ((c_ptrConst_int8_t)("Built-in")));
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  call_tmp9 = chpl___EXCLAMATION_(call_tmp8);
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  if (call_tmp9) /* ZLINE: 31 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl */
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  {
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
    T = chpl_comm_default_num_locales();
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  } else /* ZLINE: 31 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl */
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  {
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
    call_tmp10 = chpl_config_get_value(((c_ptrConst_int8_t)("numLocales")), ((c_ptrConst_int8_t)("Built-in")));
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
    T = _command_line_cast13(call_tmp10, _ln, _fn);
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  }
#line 31 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  numLocales = T;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  *(refIndentLevel) -= INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  _exit_chpl__init_ChapelNumLocales:;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
  return;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelNumLocales.chpl"
}

