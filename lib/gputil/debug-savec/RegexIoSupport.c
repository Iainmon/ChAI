#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
/* Regex.chpl:1503 */
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
static void chpl__init_RegexIoSupport(int64_t _ln,
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
                                      int32_t _fn) {
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  if (chpl__init_RegexIoSupport_p) /* ZLINE: 1503 /Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl */
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  {
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
    goto _exit_chpl__init_RegexIoSupport;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  }
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  printModuleInit("%*s\n", "RegexIoSupport", INT64(14), _ln, _fn);
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  refIndentLevel = &moduleInitLevel;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  *(refIndentLevel) += INT64(1);
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  chpl__init_RegexIoSupport_p = UINT8(true);
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  {
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
    chpl__init_Regex(_ln, _fn);
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
    chpl__init_IO(_ln, _fn);
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
    chpl__init_Regex(_ln, _fn);
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  }
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  *(refIndentLevel) -= INT64(1);
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  _exit_chpl__init_RegexIoSupport:;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  return;
#line 1503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
}

