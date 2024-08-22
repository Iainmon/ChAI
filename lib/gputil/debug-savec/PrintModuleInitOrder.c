#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
/* PrintModuleInitOrder.chpl:30 */
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
void chpl__init_PrintModuleInitOrder(int64_t _ln,
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
                                     int32_t _fn) {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  chpl_bool T;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  chpl_bool call_tmp8;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  chpl_bool call_tmp9;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  c_ptrConst_int8_t call_tmp10 = NULL;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  if (chpl__init_PrintModuleInitOrder_p) /* ZLINE: 30 /Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl */
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
    goto _exit_chpl__init_PrintModuleInitOrder;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  }
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  printModuleInit("%*s\n", "PrintModuleInitOrder", INT64(20), _ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  refIndentLevel = &moduleInitLevel;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  *(refIndentLevel) += INT64(1);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  chpl__init_PrintModuleInitOrder_p = UINT8(true);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
    chpl__init_ChapelBase(_ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  }
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  call_tmp8 = chpl_config_has_value(((c_ptrConst_int8_t)("printModuleInitOrder")), ((c_ptrConst_int8_t)("Built-in")));
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  call_tmp9 = chpl___EXCLAMATION_(call_tmp8);
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  if (call_tmp9) /* ZLINE: 34 /Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl */
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  {
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
    T = UINT8(false);
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  } else /* ZLINE: 34 /Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl */
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  {
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
    call_tmp10 = chpl_config_get_value(((c_ptrConst_int8_t)("printModuleInitOrder")), ((c_ptrConst_int8_t)("Built-in")));
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
    T = _command_line_cast15(call_tmp10, _ln, _fn);
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  }
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  printModuleInitOrder = T;
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  moduleInitLevel = INT32(2);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  if (printModuleInitOrder) /* ZLINE: 54 /Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl */
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  {
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
    initPrint();
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  }
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  *(refIndentLevel) -= INT64(1);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  _exit_chpl__init_PrintModuleInitOrder:;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  return;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
}

#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
/* PrintModuleInitOrder.chpl:41 */
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
static void printModuleInit(c_string_rehook s1,
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
                            c_string_rehook s2,
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
                            int64_t len,
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
                            int64_t _ln,
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
                            int32_t _fn) {
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  int32_t call_tmp8;
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  int32_t call_tmp9;
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  int32_t call_tmp10;
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  if (printModuleInitOrder) /* ZLINE: 43 /Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl */
#line 43 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  {
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
    call_tmp8 = chpl___COLON_4(len, _ln, _fn);
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
    call_tmp9 = chpl___PLUS_2(moduleInitLevel, call_tmp8);
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
    call_tmp10 = chpl___PLUS_2(call_tmp9, INT32(2));
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
    printf(((c_ptrConst_int8_t)(s1)), call_tmp10, ((c_ptrConst_int8_t)(s2)));
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  }
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  return;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
}

#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
/* PrintModuleInitOrder.chpl:48 */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
static void initPrint(void) {
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  printf("%s\n", "Initializing Modules:");
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
  return;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/PrintModuleInitOrder.chpl"
}

