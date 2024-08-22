#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
/* Debugger.chpl:25 */
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
static void chpl__init_Debugger(int64_t _ln,
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
                                int32_t _fn) {
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
  if (chpl__init_Debugger_p) /* ZLINE: 25 /Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl */
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
  {
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
    goto _exit_chpl__init_Debugger;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
  }
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
  printModuleInit("%*s\n", "Debugger", INT64(8), _ln, _fn);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
  refIndentLevel = &moduleInitLevel;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
  *(refIndentLevel) += INT64(1);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
  chpl__init_Debugger_p = UINT8(true);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
  *(refIndentLevel) -= INT64(1);
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
  _exit_chpl__init_Debugger:;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
  return;
#line 25 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
}

#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
/* Debugger.chpl:33 */
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
static void breakpoint(void) {
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
  chpl_debugtrap();
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
  return;
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Debugger.chpl"
}

