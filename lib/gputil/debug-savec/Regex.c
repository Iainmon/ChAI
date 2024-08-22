#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
/* Regex.chpl:338 */
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
static void chpl__init_Regex(int64_t _ln,
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
                             int32_t _fn) {
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  if (chpl__init_Regex_p) /* ZLINE: 338 /Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl */
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  {
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
    goto _exit_chpl__init_Regex;
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  }
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  printModuleInit("%*s\n", "Regex", INT64(5), _ln, _fn);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  refIndentLevel = &moduleInitLevel;
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  *(refIndentLevel) += INT64(1);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  chpl__init_Regex_p = UINT8(true);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  {
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
    chpl__init_OS(_ln, _fn);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
    chpl__init_IO(_ln, _fn);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
    chpl__init_RegexIoSupport(_ln, _fn);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
    chpl__init_String(_ln, _fn);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  }
#line 344 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  initBufferSizeForSlowReplaceAndCount = INT64(16);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  *(refIndentLevel) -= INT64(1);
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  _exit_chpl__init_Regex:;
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
  return;
#line 338 "/Users/iainmoncrief/Desktop/chapel/modules/standard/Regex.chpl"
}

