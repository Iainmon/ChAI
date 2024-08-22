#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:10414 */
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl__init_FormattedIO(int64_t _ln,
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   int32_t _fn) {
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (chpl__init_FormattedIO_p) /* ZLINE: 10414 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _exit_chpl__init_FormattedIO;
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  printModuleInit("%*s\n", "FormattedIO", INT64(11), _ln, _fn);
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  refIndentLevel = &moduleInitLevel;
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(refIndentLevel) += INT64(1);
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_FormattedIO_p = UINT8(true);
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_IO(_ln, _fn);
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_IO(_ln, _fn);
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_POSIX(_ln, _fn);
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_OS(_ln, _fn);
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_Regex(_ln, _fn);
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(refIndentLevel) -= INT64(1);
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _exit_chpl__init_FormattedIO:;
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 10414 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

