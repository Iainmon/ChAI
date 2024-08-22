#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:793 */
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl__deinit_IO(int64_t _ln,
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            int32_t _fn) {
#line 9681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileReader_T_defaultDeserializer local_stdin;
#line 9686 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_T_defaultSerializer local_stdout;
#line 9692 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_T_defaultSerializer local_stderr;
#line 9681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  local_stdin = stdin2;
#line 9686 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  local_stdout = stdout2;
#line 9692 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  local_stderr = stderr2;
#line 9692 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy20(&local_stderr, _ln, _fn);
#line 9686 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy20(&local_stdout, _ln, _fn);
#line 9681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy54(&local_stdin, _ln, _fn);
#line 7060 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy53(&_arg_to_proto_names, _ln, _fn);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:793 */
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl__init_IO(int64_t _ln,
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                          int32_t _fn) {
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 7060 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_6_star__ref_string call_tmp8;
#line 7060 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_6_star__ref_string ret_tmp;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  file call_tmp9;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  file initTemp;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioHintSet default_arg_hints;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileReader_T_defaultDeserializer call_tmp10;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  range_int64_t_low_one default_arg_region;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error3 = NULL;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioHintSet default_arg_hints2;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error4 = NULL;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer default_arg_deserializer;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error5 = NULL;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error6 = NULL;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr__cfiletype call_tmp11 = NULL;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  file call_tmp12;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  file initTemp2;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioHintSet default_arg_hints3;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error7 = NULL;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error8 = NULL;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_T_defaultSerializer call_tmp13;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  range_int64_t_low_one default_arg_region2;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error9 = NULL;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioHintSet default_arg_hints4;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error10 = NULL;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer default_arg_serializer;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error11 = NULL;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error12 = NULL;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr__cfiletype call_tmp14 = NULL;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  file call_tmp15;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  file initTemp3;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioHintSet default_arg_hints5;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error13 = NULL;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error14 = NULL;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_T_defaultSerializer call_tmp16;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  range_int64_t_low_one default_arg_region3;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error15 = NULL;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioHintSet default_arg_hints6;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error16 = NULL;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer default_arg_serializer2;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error17 = NULL;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error18 = NULL;
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (chpl__init_IO_p) /* ZLINE: 793 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _exit_chpl__init_IO;
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  printModuleInit("%*s\n", "IO", INT64(2), _ln, _fn);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  refIndentLevel = &moduleInitLevel;
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(refIndentLevel) += INT64(1);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_IO_p = UINT8(true);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_POSIX(_ln, _fn);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_OS(_ln, _fn);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_Reflection(_ln, _fn);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_ChapelIO(_ln, _fn);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_ByteBufferHelpers(_ln, _fn);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_HaltWrappers(_ln, _fn);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_ChapelIOStringifyHelper(_ln, _fn);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_BytesStringCommon(_ln, _fn);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_FormattedIO(_ln, _fn);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_NVStringFactory(_ln, _fn);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__init_Types(_ln, _fn);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_addModule("IO", ((c_fn_ptr_rehook)(chpl__deinit_IO)), _ln, _fn);
#line 1623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  IOHINTS_NONE = INT32(0);
#line 1624 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  IOHINTS_SEQUENTIAL = QIO_HINT_SEQUENTIAL;
#line 1625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  IOHINTS_RANDOM = QIO_HINT_RANDOM;
#line 1626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  IOHINTS_PREFETCH = QIO_HINT_CACHED;
#line 1627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  IOHINTS_MMAP = QIO_METHOD_MMAP;
#line 1628 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  IOHINTS_NOMMAP = QIO_METHOD_PREADPWRITE;
#line 7060 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _build_tuple10(&_str_literal_1281, &_str_literal_1394, &_str_literal_1395, &_str_literal_1396, &_str_literal_1397, &_str_literal_1398, &ret_tmp);
#line 7060 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(call_tmp8 + INT64(0)) = *(ret_tmp + INT64(0));
#line 7060 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(call_tmp8 + INT64(1)) = *(ret_tmp + INT64(1));
#line 7060 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(call_tmp8 + INT64(2)) = *(ret_tmp + INT64(2));
#line 7060 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(call_tmp8 + INT64(3)) = *(ret_tmp + INT64(3));
#line 7060 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(call_tmp8 + INT64(4)) = *(ret_tmp + INT64(4));
#line 7060 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(call_tmp8 + INT64(5)) = *(ret_tmp + INT64(5));
#line 7060 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__initCopy3(&call_tmp8, UINT8(false), &_arg_to_proto_names, _ln, _fn);
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_hints = init_default_hints2(&error);
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9682 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init111(&initTemp, INT64(0), &default_arg_hints, UINT8(false), &error2, _ln, _fn);
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 9682 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error2, _ln, _fn);
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = initTemp;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error3 = NULL;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_region = reader_default_region(&call_tmp9, &error3);
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error3 != nil) /* ZLINE: 9682 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error3, _ln, _fn);
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error4 = NULL;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_hints2 = reader_default_hints(&call_tmp9, &error4);
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error4 != nil) /* ZLINE: 9682 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error4, _ln, _fn);
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error5 = NULL;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_deserializer = reader_default_deserializer(&call_tmp9, &error5);
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error5 != nil) /* ZLINE: 9682 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error5, _ln, _fn);
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error6 = NULL;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = reader2(&call_tmp9, default_arg_region, &default_arg_hints2, &default_arg_deserializer, &error6, _ln, _fn);
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error6 != nil) /* ZLINE: 9682 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error6, _ln, _fn);
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  stdin2 = call_tmp10;
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy25(&default_arg_hints2);
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy19(default_arg_region);
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy13(&call_tmp9, _ln, _fn);
#line 9682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy25(&default_arg_hints);
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_cstdout();
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error7 = NULL;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_hints3 = init_default_hints(&error7);
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error7 != nil) /* ZLINE: 9687 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error7, _ln, _fn);
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error8 = NULL;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init110(&initTemp2, call_tmp11, &default_arg_hints3, UINT8(false), &error8, _ln, _fn);
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error8 != nil) /* ZLINE: 9687 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error8, _ln, _fn);
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = initTemp2;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error9 = NULL;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_region2 = writer_default_region(&call_tmp12, &error9);
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error9 != nil) /* ZLINE: 9687 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error9, _ln, _fn);
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error10 = NULL;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_hints4 = writer_default_hints2(&call_tmp12, &error10);
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error10 != nil) /* ZLINE: 9687 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error10, _ln, _fn);
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error11 = NULL;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_serializer = writer_default_serializer(&call_tmp12, &error11);
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error11 != nil) /* ZLINE: 9687 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error11, _ln, _fn);
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error12 = NULL;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = writer(&call_tmp12, default_arg_region2, &default_arg_hints4, &default_arg_serializer, &error12, _ln, _fn);
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error12 != nil) /* ZLINE: 9687 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error12, _ln, _fn);
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  stdout2 = call_tmp13;
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy25(&default_arg_hints4);
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy19(default_arg_region2);
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy13(&call_tmp12, _ln, _fn);
#line 9687 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy25(&default_arg_hints3);
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_cstderr();
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error13 = NULL;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_hints5 = init_default_hints(&error13);
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error13 != nil) /* ZLINE: 9693 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error13, _ln, _fn);
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error14 = NULL;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init110(&initTemp3, call_tmp14, &default_arg_hints5, UINT8(false), &error14, _ln, _fn);
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error14 != nil) /* ZLINE: 9693 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error14, _ln, _fn);
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = initTemp3;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error15 = NULL;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_region3 = writer_default_region(&call_tmp15, &error15);
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error15 != nil) /* ZLINE: 9693 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error15, _ln, _fn);
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error16 = NULL;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_hints6 = writer_default_hints2(&call_tmp15, &error16);
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error16 != nil) /* ZLINE: 9693 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error16, _ln, _fn);
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error17 = NULL;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_serializer2 = writer_default_serializer(&call_tmp15, &error17);
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error17 != nil) /* ZLINE: 9693 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error17, _ln, _fn);
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error18 = NULL;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp16 = writer(&call_tmp15, default_arg_region3, &default_arg_hints6, &default_arg_serializer2, &error18, _ln, _fn);
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error18 != nil) /* ZLINE: 9693 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error18, _ln, _fn);
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  stderr2 = call_tmp16;
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy25(&default_arg_hints6);
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy19(default_arg_region3);
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy13(&call_tmp15, _ln, _fn);
#line 9693 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy25(&default_arg_hints5);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(refIndentLevel) -= INT64(1);
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _exit_chpl__init_IO:;
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 793 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1056 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1056 */
#line 1056 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl___ASSIGN_81(iostyleInternal * _arg1,
#line 1056 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             iostyleInternal * _arg2) {
#line 1056 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(_arg1) = *(_arg2);
#line 1056 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 1056 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1179 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1179 */
#line 1179 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl__auto_destroy_QioPluginFile(QioPluginFile this24,
#line 1179 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                             int64_t _ln,
#line 1179 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                             int32_t _fn) {
#line 1179 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__auto_destroy_RootClass(((RootClass)(this24)), _ln, _fn);
#line 1179 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 1179 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1187 */
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr setupChannel(QioPluginFile this24,
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           QioPluginChannel * pluginChannel,
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int64_t start,
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int64_t end,
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           qio_channel_t * qioChannelPtr,
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int64_t _ln,
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int32_t _fn) {
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginChannel _formal_tmp_pluginChannel = NULL;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_pluginChannel = ((QioPluginChannel)(nil));
#line 1190 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = chpl___COLON_68(ENOSYS);
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(pluginChannel) = _formal_tmp_pluginChannel;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1194 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1194 */
#line 1194 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr filelength(QioPluginFile this24,
#line 1194 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                         int64_t * length) {
#line 1194 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 1195 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = chpl___COLON_68(ENOSYS);
#line 1194 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(length) = INT64(0);
#line 1194 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 1194 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1203 */
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr getpath(QioPluginFile this24,
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      c_ptr_uint8_t * path,
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      int64_t * len,
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      int64_t _ln,
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      int32_t _fn) {
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr_uint8_t _formal_tmp_path = NULL;
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_path = ((c_ptr_uint8_t)(nil));
#line 1204 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = chpl___COLON_68(ENOSYS);
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(path) = _formal_tmp_path;
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(len) = INT64(0);
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1208 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1208 */
#line 1208 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr fsync2(QioPluginFile this24) {
#line 1208 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 1209 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = chpl___COLON_68(ENOSYS);
#line 1208 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 1208 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1212 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1212 */
#line 1212 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr getChunk(QioPluginFile this24,
#line 1212 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       int64_t * length) {
#line 1212 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 1213 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = chpl___COLON_68(ENOSYS);
#line 1212 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(length) = INT64(0);
#line 1212 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 1212 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1218 */
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr getLocalesForRegion(QioPluginFile this24,
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  int64_t start,
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  int64_t end,
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  c_ptr_c_ptrConst_int8_t * localeNames,
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  int64_t * nLocales,
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  int64_t _ln,
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  int32_t _fn) {
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr_c_ptrConst_int8_t _formal_tmp_localeNames = NULL;
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_localeNames = ((c_ptr_c_ptrConst_int8_t)(nil));
#line 1220 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = chpl___COLON_68(ENOSYS);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(localeNames) = _formal_tmp_localeNames;
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1224 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1224 */
#line 1224 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr close2(QioPluginFile this24) {
#line 1224 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 1225 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = chpl___COLON_68(ENOSYS);
#line 1224 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 1224 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1232 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1232 */
#line 1232 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl__auto_destroy_QioPluginChannel(QioPluginChannel this24,
#line 1232 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                int64_t _ln,
#line 1232 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                int32_t _fn) {
#line 1232 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__auto_destroy_RootClass(((RootClass)(this24)), _ln, _fn);
#line 1232 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 1232 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1234 */
#line 1234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr readAtLeast(QioPluginChannel this24,
#line 1234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                          int64_t amt) {
#line 1234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 1235 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = chpl___COLON_68(ENOSYS);
#line 1234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 1234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1238 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1238 */
#line 1238 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr write5(QioPluginChannel this24,
#line 1238 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int64_t amt) {
#line 1238 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 1239 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = chpl___COLON_68(ENOSYS);
#line 1238 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 1238 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1242 */
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr close3(QioPluginChannel this24) {
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 1243 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = chpl___COLON_68(ENOSYS);
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1249 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1249 */
#line 1249 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
syserr chpl_qio_setup_plugin_channel(void * file2,
#line 1249 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                     c_ptr_void * plugin_ch,
#line 1249 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                     int64_t start,
#line 1249 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                     int64_t end,
#line 1249 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                     qio_channel_t * qio_ch) {
#line 1250 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginFile call_tmp8 = NULL;
#line 1250 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginFile call_tmp9 = NULL;
#line 1251 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginChannel pluginChannel = NULL;
#line 1251 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginChannel init_coerce_tmp = NULL;
#line 1252 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 1252 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginChannel _formal_tmp_out_pluginChannel = NULL;
#line 1253 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr_void call_tmp11 = NULL;
#line 1250 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl___COLON_59(file2, INT64(1250), INT32(52));
#line 1250 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = postfix_EXCLAMATION_11(call_tmp8, INT64(1250), INT32(52));
#line 1251 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = ((QioPluginChannel)(nil));
#line 1251 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  pluginChannel = init_coerce_tmp;
#line 1252 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(call_tmp9, INT64(1252), INT32(52));
#line 1252 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = setupChannel(call_tmp9, &_formal_tmp_out_pluginChannel, start, end, qio_ch, INT64(1252), INT32(52));
#line 1252 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_45(&pluginChannel, _formal_tmp_out_pluginChannel);
#line 1253 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = c_ptrTo9(pluginChannel, INT64(1253), INT32(52));
#line 1253 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_73(plugin_ch, call_tmp11);
#line 1249 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp10;
#line 1249 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1257 */
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
syserr chpl_qio_read_atleast(void * ch_plugin,
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             int64_t amt) {
#line 1258 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginChannel call_tmp8 = NULL;
#line 1258 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginChannel call_tmp9 = NULL;
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 1258 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl___COLON_60(ch_plugin, INT64(1258), INT32(52));
#line 1258 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = postfix_EXCLAMATION_8(call_tmp8, INT64(1258), INT32(52));
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(call_tmp9, INT64(1259), INT32(52));
#line 1259 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = readAtLeast(call_tmp9, amt);
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp10;
#line 1257 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1261 */
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
syserr chpl_qio_write(void * ch_plugin,
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      int64_t amt) {
#line 1262 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginChannel call_tmp8 = NULL;
#line 1262 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginChannel call_tmp9 = NULL;
#line 1263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 1262 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl___COLON_60(ch_plugin, INT64(1262), INT32(52));
#line 1262 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = postfix_EXCLAMATION_8(call_tmp8, INT64(1262), INT32(52));
#line 1263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(call_tmp9, INT64(1263), INT32(52));
#line 1263 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = write5(call_tmp9, amt);
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp10;
#line 1261 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1265 */
#line 1265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
syserr chpl_qio_channel_close(void * ch) {
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginChannel call_tmp8 = NULL;
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginChannel call_tmp9 = NULL;
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginChannel c = NULL;
#line 1267 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl___COLON_60(ch, INT64(1266), INT32(52));
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = postfix_EXCLAMATION_8(call_tmp8, INT64(1266), INT32(52));
#line 1266 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c = call_tmp9;
#line 1267 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(call_tmp9, INT64(1267), INT32(52));
#line 1267 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = close3(call_tmp9);
#line 1268 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__delete28(c, INT64(1268), INT32(52));
#line 1265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp10;
#line 1265 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1272 */
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
syserr chpl_qio_filelength(void * file2,
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int64_t * length) {
#line 1273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginFile call_tmp8 = NULL;
#line 1273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginFile call_tmp9 = NULL;
#line 1274 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 1274 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t _formal_tmp_out_length;
#line 1273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl___COLON_59(file2, INT64(1273), INT32(52));
#line 1273 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = postfix_EXCLAMATION_11(call_tmp8, INT64(1273), INT32(52));
#line 1274 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(call_tmp9, INT64(1274), INT32(52));
#line 1274 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = filelength(call_tmp9, &_formal_tmp_out_length);
#line 1274 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_3(length, _formal_tmp_out_length);
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp10;
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1276 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1276 */
#line 1276 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
syserr chpl_qio_getpath(void * file2,
#line 1276 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        c_ptr_uint8_t * str,
#line 1276 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        int64_t * len) {
#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginFile call_tmp8 = NULL;
#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginFile call_tmp9 = NULL;
#line 1278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 1278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr_uint8_t _formal_tmp_out_path = NULL;
#line 1278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t _formal_tmp_out_len;
#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl___COLON_59(file2, INT64(1277), INT32(52));
#line 1277 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = postfix_EXCLAMATION_11(call_tmp8, INT64(1277), INT32(52));
#line 1278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(call_tmp9, INT64(1278), INT32(52));
#line 1278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = getpath(call_tmp9, &_formal_tmp_out_path, &_formal_tmp_out_len, INT64(1278), INT32(52));
#line 1278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_74(str, _formal_tmp_out_path);
#line 1278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_3(len, _formal_tmp_out_len);
#line 1276 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp10;
#line 1276 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1280 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1280 */
#line 1280 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
syserr chpl_qio_fsync(void * file2) {
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginFile call_tmp8 = NULL;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginFile call_tmp9 = NULL;
#line 1282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl___COLON_59(file2, INT64(1281), INT32(52));
#line 1281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = postfix_EXCLAMATION_11(call_tmp8, INT64(1281), INT32(52));
#line 1282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(call_tmp9, INT64(1282), INT32(52));
#line 1282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = fsync2(call_tmp9);
#line 1280 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp10;
#line 1280 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1284 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1284 */
#line 1284 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
syserr chpl_qio_get_chunk(void * file2,
#line 1284 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                          int64_t * length) {
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginFile call_tmp8 = NULL;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginFile call_tmp9 = NULL;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t _formal_tmp_out_length;
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl___COLON_59(file2, INT64(1285), INT32(52));
#line 1285 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = postfix_EXCLAMATION_11(call_tmp8, INT64(1285), INT32(52));
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(call_tmp9, INT64(1286), INT32(52));
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = getChunk(call_tmp9, &_formal_tmp_out_length);
#line 1286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_3(length, _formal_tmp_out_length);
#line 1284 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp10;
#line 1284 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1288 */
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
syserr chpl_qio_get_locales_for_region(void * file2,
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                       int64_t start,
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                       int64_t end,
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                       c_ptr_void * localeNames,
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                       int64_t * nLocales) {
#line 1290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr_c_ptrConst_int8_t strPtr = NULL;
#line 1291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginFile call_tmp8 = NULL;
#line 1291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginFile call_tmp9 = NULL;
#line 1292 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 1292 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr_c_ptrConst_int8_t _formal_tmp_out_localeNames = NULL;
#line 1291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl___COLON_59(file2, INT64(1291), INT32(52));
#line 1291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = postfix_EXCLAMATION_11(call_tmp8, INT64(1291), INT32(52));
#line 1292 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(call_tmp9, INT64(1292), INT32(52));
#line 1292 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = getLocalesForRegion(call_tmp9, start, end, &_formal_tmp_out_localeNames, nLocales, INT64(1292), INT32(52));
#line 1292 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  strPtr = _formal_tmp_out_localeNames;
#line 1293 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_73(localeNames, ((c_ptr_void)(strPtr)));
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp10;
#line 1288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1296 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1296 */
#line 1296 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
syserr chpl_qio_file_close(void * file2) {
#line 1297 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginFile call_tmp8 = NULL;
#line 1297 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginFile call_tmp9 = NULL;
#line 1297 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  QioPluginFile f = NULL;
#line 1298 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 1297 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl___COLON_59(file2, INT64(1297), INT32(52));
#line 1297 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = postfix_EXCLAMATION_11(call_tmp8, INT64(1297), INT32(52));
#line 1297 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  f = call_tmp9;
#line 1298 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(call_tmp9, INT64(1298), INT32(52));
#line 1298 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = close2(call_tmp9);
#line 1299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__delete14(f, INT64(1299), INT32(52));
#line 1296 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp10;
#line 1296 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1556 */
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static iostyleInternal defaultIOStyleInternal(void) {
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal ret;
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal ret2;
#line 1557 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  memset(&ret2, INT32(0), sizeof(iostyleInternal));
#line 1558 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_style_init_default(&ret2);
#line 1559 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = ret2;
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 1556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1653 */
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init108(ioHintSet * this24,
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _internal) {
#line 1655 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_internal = _internal;
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1653 */
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl__auto_destroy_ioHintSet(ioHintSet * this24) {
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 1653 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1655 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1655 */
#line 1655 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static int32_t * chpl_get_ioHintSet__internal(ioHintSet * this24) {
#line 1655 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_int32_t call_tmp8 = NULL;
#line 1655 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_internal);
#line 1655 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 1655 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1660 */
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static ioHintSet empty2(void) {
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioHintSet call_tmp8;
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioHintSet initTemp;
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init108(&initTemp, IOHINTS_NONE);
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = initTemp;
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 1660 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1736 */
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static locale * chpl_get_file__home(file * this24) {
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_home);
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1738 */
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static c_ptr_qio_file_t * chpl_get_file__file_internal(file * this24) {
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp8 = NULL;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_file_internal);
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 1738 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1743 */
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init109(file * this24,
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale call_tmp8;
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = here(_ln, _fn);
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_home = call_tmp8;
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_file_internal = QIO_FILE_PTR_NULL;
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 1743 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1808 */
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init110(file * this24,
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    _cfiletype * fp,
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    ioHintSet * hints,
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    chpl_bool own,
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    Error * error_out,
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 1809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init109(this24, _ln, _fn);
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  initHelper(this24, fp, hints, own, &error, _ln, _fn);
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 1811 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endinit;
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endinit:;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1808 */
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static ioHintSet init_default_hints(Error * error_out) {
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioHintSet hints;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  hints = empty2();
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return hints;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1814 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1814 */
#line 1814 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void initHelper(file * f,
#line 1814 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       _cfiletype * fp,
#line 1814 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       ioHintSet * hints,
#line 1814 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       chpl_bool own,
#line 1814 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       Error * error_out,
#line 1814 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       int64_t _ln,
#line 1814 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       int32_t _fn) {
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal local_style;
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale call_tmp9;
#line 1819 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_int32_t call_tmp10 = NULL;
#line 1819 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int32_t internalHints;
#line 1823 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp11 = NULL;
#line 1823 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp12;
#line 1828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp13;
#line 1829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptrConst_int8_t path_cs = NULL;
#line 1830 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp14;
#line 1831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string path;
#line 1831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string T;
#line 1831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool T2;
#line 1831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string T3;
#line 1832 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t default_arg_length;
#line 1832 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 1832 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error3 = NULL;
#line 1817 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  local_style = defaultIOStyleInternal();
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_file__home(f);
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = here(_ln, _fn);
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp8, &call_tmp9);
#line 1818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy45(&call_tmp9);
#line 1819 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_ioHintSet__internal(hints);
#line 1819 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  internalHints = *(call_tmp10);
#line 1820 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (own) /* ZLINE: 1820 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1820 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 1821 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___BAR__ASSIGN_(&internalHints, QIO_HINT_OWNED);
#line 1821 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 1823 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_file__file_internal(f);
#line 1823 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = qio_file_init(call_tmp11, fp, ((int32_t)(INT64(-1))), internalHints, &local_style, ((int32_t)(INT64(1))));
#line 1828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = _cond_test7(call_tmp12);
#line 1828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp13) /* ZLINE: 1828 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 1829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    path_cs = ((c_ptrConst_int8_t)(nil));
#line 1830 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp14 = qio_file_path_for_fp(fp, &path_cs);
#line 1831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    T2 = _cond_test7(call_tmp14);
#line 1831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (T2) /* ZLINE: 1831 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 1831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      T = _str_literal_1265;
#line 1831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    } else /* ZLINE: 1831 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 1832 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      error = NULL;
#line 1832 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      default_arg_length = createCopyingBuffer_default_length(path_cs, &error, _ln, _fn);
#line 1832 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      if (error != nil) /* ZLINE: 1832 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1832 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      {
#line 1832 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        *(error_out) = error;
#line 1832 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        goto _endinitHelper;
#line 1832 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      }
#line 1832 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      error2 = NULL;
#line 1831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      T3 = createCopyingBuffer(path_cs, default_arg_length, decodePolicy_replace, &error2, _ln, _fn);
#line 1832 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      if (error2 != nil) /* ZLINE: 1832 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1832 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      {
#line 1832 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        *(error_out) = error2;
#line 1832 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        goto _endinitHelper;
#line 1832 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      }
#line 1831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      T = T3;
#line 1831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 1831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    path = T;
#line 1834 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    deallocate(((c_ptr_void)(path_cs)), _ln, _fn);
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error3 = NULL;
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    ioerror2(call_tmp12, &_str_literal_1266, &path, &error3, _ln, _fn);
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error3 != nil) /* ZLINE: 1835 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler;
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler:;
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error3 != nil) /* ZLINE: 1835 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error3;
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&path, _ln, _fn);
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _endinitHelper;
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&path, _ln, _fn);
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 1835 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endinitHelper:;
#line 1814 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 1814 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1872 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1872 */
#line 1872 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init111(file * this24,
#line 1872 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t fileDescriptor,
#line 1872 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    ioHintSet * hints,
#line 1872 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    chpl_bool own,
#line 1872 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    Error * error_out,
#line 1872 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 1872 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 1875 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int32_t call_tmp8;
#line 1875 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 1873 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init109(this24, _ln, _fn);
#line 1875 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = safeCast2(fileDescriptor, _ln, _fn);
#line 1875 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 1875 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  initHelper2(this24, call_tmp8, hints, own, &error, _ln, _fn);
#line 1875 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 1875 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1875 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 1875 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 1875 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endinit;
#line 1875 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 1875 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endinit:;
#line 1872 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 1872 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1872 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1872 */
#line 1872 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static ioHintSet init_default_hints2(Error * error_out) {
#line 1872 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioHintSet hints;
#line 1872 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  hints = empty2();
#line 1872 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return hints;
#line 1872 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1878 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1878 */
#line 1878 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void initHelper2(file * f,
#line 1878 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        int32_t fd,
#line 1878 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        ioHintSet * hints,
#line 1878 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        chpl_bool own,
#line 1878 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        Error * error_out,
#line 1878 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        int64_t _ln,
#line 1878 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        int32_t _fn) {
#line 1881 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal local_style;
#line 1882 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 1882 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale call_tmp9;
#line 1884 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_int32_t call_tmp10 = NULL;
#line 1884 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int32_t internalHints;
#line 1888 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp11 = NULL;
#line 1888 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr__cfiletype call_tmp12 = NULL;
#line 1888 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp13;
#line 1894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp14;
#line 1895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptrConst_int8_t path_cs = NULL;
#line 1896 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp15;
#line 1897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string path;
#line 1897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string T;
#line 1897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool T2;
#line 1897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string T3;
#line 1898 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t default_arg_length;
#line 1898 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 1898 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error3 = NULL;
#line 1881 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  local_style = defaultIOStyleInternal();
#line 1882 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_file__home(f);
#line 1882 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = here(_ln, _fn);
#line 1882 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp8, &call_tmp9);
#line 1882 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy45(&call_tmp9);
#line 1884 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_ioHintSet__internal(hints);
#line 1884 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  internalHints = *(call_tmp10);
#line 1885 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (own) /* ZLINE: 1885 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1885 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 1886 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___BAR__ASSIGN_(&internalHints, QIO_HINT_OWNED);
#line 1886 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 1888 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_file__file_internal(f);
#line 1888 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_cnullfile();
#line 1888 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = qio_file_init(call_tmp11, call_tmp12, fd, internalHints, &local_style, ((int32_t)(INT64(0))));
#line 1894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = _cond_test7(call_tmp13);
#line 1894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp14) /* ZLINE: 1894 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 1895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    path_cs = ((c_ptrConst_int8_t)(nil));
#line 1896 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp15 = qio_file_path_for_fd(fd, &path_cs);
#line 1897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    T2 = _cond_test7(call_tmp15);
#line 1897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (T2) /* ZLINE: 1897 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 1897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      T = _str_literal_1265;
#line 1897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    } else /* ZLINE: 1897 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 1898 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      error = NULL;
#line 1898 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      default_arg_length = createCopyingBuffer_default_length(path_cs, &error, _ln, _fn);
#line 1898 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      if (error != nil) /* ZLINE: 1898 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1898 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      {
#line 1898 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        *(error_out) = error;
#line 1898 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        goto _endinitHelper2;
#line 1898 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      }
#line 1898 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      error2 = NULL;
#line 1897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      T3 = createCopyingBuffer(path_cs, default_arg_length, decodePolicy_replace, &error2, _ln, _fn);
#line 1898 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      if (error2 != nil) /* ZLINE: 1898 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1898 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      {
#line 1898 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        *(error_out) = error2;
#line 1898 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        goto _endinitHelper2;
#line 1898 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      }
#line 1897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      T = T3;
#line 1897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 1897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    path = T;
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error3 = NULL;
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    ioerror2(call_tmp13, &_str_literal_1267, &path, &error3, _ln, _fn);
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error3 != nil) /* ZLINE: 1900 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler;
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler:;
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error3 != nil) /* ZLINE: 1900 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error3;
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&path, _ln, _fn);
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _endinitHelper2;
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&path, _ln, _fn);
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 1900 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endinitHelper2:;
#line 1878 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 1878 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1905 */
#line 1905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void checkAssumingLocal(file * this24,
#line 1905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               Error * error_out,
#line 1905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int64_t _ln,
#line 1905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int32_t _fn) {
#line 1906 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp8 = NULL;
#line 1906 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_SystemError call_tmp10;
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error call_tmp11 = NULL;
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_Error _formal_tmp_in_err;
#line 1908 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp12 = NULL;
#line 1908 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp13;
#line 1908 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp14;
#line 1909 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_SystemError call_tmp15;
#line 1909 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error call_tmp16 = NULL;
#line 1909 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_Error _formal_tmp_in_err2;
#line 1906 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_file__file_internal(this24);
#line 1906 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___EQUALS_25(*(call_tmp8), nil);
#line 1906 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 1906 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1906 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = createSystemError2(((int64_t)(EBADF)), &_str_literal_1268, _ln, _fn);
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _formal_tmp_in_err = chpl___COLON_33(&call_tmp10, _ln, _fn);
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = call_tmp11;
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endcheckAssumingLocal;
#line 1907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 1908 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_file__file_internal(this24);
#line 1908 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = qio_file_isopen(*(call_tmp12));
#line 1908 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl___EXCLAMATION_(call_tmp13);
#line 1908 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp14) /* ZLINE: 1908 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1908 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 1909 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp15 = createSystemError2(((int64_t)(EBADF)), &_str_literal_1269, _ln, _fn);
#line 1909 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _formal_tmp_in_err2 = chpl___COLON_33(&call_tmp15, _ln, _fn);
#line 1909 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp16 = chpl_fix_thrown_error(&_formal_tmp_in_err2, _ln, _fn);
#line 1909 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = call_tmp16;
#line 1909 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endcheckAssumingLocal;
#line 1909 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 1909 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endcheckAssumingLocal:;
#line 1905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 1905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1924 */
#line 1924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void deinit54(file * this24,
#line 1924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int64_t _ln,
#line 1924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int32_t _fn) {
#line 1925 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 1926 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp9 = NULL;
#line 1927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp10 = NULL;
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale _field_destructor_tmp_ = NULL;
#line 1925 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_file__home(this24);
#line 1925 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 1926 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_file__file_internal(this24);
#line 1926 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_file_release(*(call_tmp9));
#line 1927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_file__file_internal(this24);
#line 1927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_76(call_tmp10, QIO_FILE_PTR_NULL);
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_ = &((this24)->_home);
#line 1736 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deinit14(_field_destructor_tmp_);
#line 1924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 1924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1958 */
#line 1958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static iostyleInternal _style(file * this24,
#line 1958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              Error * error_out,
#line 1958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _ln,
#line 1958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int32_t _fn) {
#line 1958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal ret;
#line 1959 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal ret2;
#line 1960 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 1961 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 1962 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal local_style;
#line 1963 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp9 = NULL;
#line 1959 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  memset(&ret2, INT32(0), sizeof(iostyleInternal));
#line 1960 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_file__home(this24);
#line 1960 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 1961 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 1961 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  checkAssumingLocal(this24, &error, _ln, _fn);
#line 1961 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 1961 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1961 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 1961 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 1961 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 1961 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 1961 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 1961 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1961 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 1961 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 1961 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__style;
#line 1961 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 1962 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  memset(&local_style, INT32(0), sizeof(iostyleInternal));
#line 1963 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_file__file_internal(this24);
#line 1963 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_file_get_style(*(call_tmp9), &local_style);
#line 1964 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_81(&ret2, &local_style);
#line 1966 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = ret2;
#line 1966 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__style:;
#line 1958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 1958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:1992 */
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void close4(file * this24,
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   Error * error_out,
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   int64_t _ln,
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   int32_t _fn) {
#line 1993 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp8 = NULL;
#line 1993 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 1994 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_SystemError call_tmp10;
#line 1994 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error call_tmp11 = NULL;
#line 1994 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_Error _formal_tmp_in_err;
#line 1996 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr err;
#line 1996 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 1997 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 1998 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp13 = NULL;
#line 1998 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp14;
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp15;
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp16;
#line 1993 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_file__file_internal(this24);
#line 1993 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___EQUALS_25(*(call_tmp8), nil);
#line 1993 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 1993 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 1993 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 1994 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = createSystemError2(((int64_t)(EBADF)), &_str_literal_1268, _ln, _fn);
#line 1994 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _formal_tmp_in_err = chpl___COLON_33(&call_tmp10, _ln, _fn);
#line 1994 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 1994 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = call_tmp11;
#line 1994 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endclose;
#line 1994 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 1996 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 1996 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  err = init_coerce_tmp;
#line 1997 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_file__home(this24);
#line 1997 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp12, _ln, _fn);
#line 1998 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_file__file_internal(this24);
#line 1998 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = qio_file_close(*(call_tmp13));
#line 1998 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&err, call_tmp14);
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = _cond_test7(err);
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp15) /* ZLINE: 2000 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp16 = _tryGetPath(this24, _ln, _fn);
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    ioerror2(err, &_str_literal_1271, &call_tmp16, &error, _ln, _fn);
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 2000 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler;
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler:;
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 2000 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _endclose;
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2000 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endclose:;
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2065 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2065 */
#line 2065 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string _tryGetPath(file * this24,
#line 2065 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                          int64_t _ln,
#line 2065 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                          int32_t _fn) {
#line 2065 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 2066 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2067 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 2068 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_Error initTemp;
#line 2068 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_Error chpl_anon_error;
#line 2066 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 2067 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = fileRelPathHelper(this24, &error, _ln, _fn);
#line 2067 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 2067 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2067 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2067 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 2067 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2067 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 2067 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  goto _end__tryGetPath;
#line 2067 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 2066 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 2066 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2066 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2068 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    init70(&initTemp, error);
#line 2068 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_anon_error = initTemp;
#line 2069 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    ret = chpl__initCopy6(&_str_literal_1265, UINT8(false), _ln, _fn);
#line 2069 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy85(&chpl_anon_error, _ln, _fn);
#line 2069 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__tryGetPath;
#line 2069 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2069 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__tryGetPath:;
#line 2065 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 2065 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2073 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2073 */
#line 2073 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string fileRelPathHelper(file * f,
#line 2073 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                Error * error_out,
#line 2073 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                int64_t _ln,
#line 2073 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                int32_t _fn) {
#line 2073 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 2074 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret2;
#line 2075 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr err;
#line 2075 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 2076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 2077 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2078 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptrConst_int8_t tmp = NULL;
#line 2079 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptrConst_int8_t tmp2 = NULL;
#line 2080 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp9 = NULL;
#line 2080 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 2081 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp11;
#line 2082 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp12 = NULL;
#line 2082 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp13;
#line 2085 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp14;
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp15;
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t default_arg_length;
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error3 = NULL;
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp16;
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error4 = NULL;
#line 2074 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init96(&ret2, _ln, _fn);
#line 2075 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 2075 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  err = init_coerce_tmp;
#line 2076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_file__home(f);
#line 2076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 2077 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 2077 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  checkAssumingLocal(f, &error, _ln, _fn);
#line 2077 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 2077 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2077 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2077 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 2077 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2077 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 2077 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 2077 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2077 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2077 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 2077 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&ret2, _ln, _fn);
#line 2077 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_fileRelPathHelper;
#line 2077 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2078 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  tmp = ((c_ptrConst_int8_t)(nil));
#line 2079 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  tmp2 = ((c_ptrConst_int8_t)(nil));
#line 2080 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_file__file_internal(f);
#line 2080 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = qio_file_path(*(call_tmp9), &tmp);
#line 2080 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&err, call_tmp10);
#line 2081 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl___EXCLAMATION_2(err);
#line 2081 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp11) /* ZLINE: 2081 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2081 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2082 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp12 = chpl_get_file__file_internal(f);
#line 2082 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp13 = qio_shortest_path(*(call_tmp12), &tmp2, tmp);
#line 2082 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_86(&err, call_tmp13);
#line 2082 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2084 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deallocate(((c_ptr_void)(tmp)), _ln, _fn);
#line 2085 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl___EXCLAMATION_2(err);
#line 2085 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp14) /* ZLINE: 2085 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2085 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error2 = NULL;
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    default_arg_length = createCopyingBuffer_default_length(tmp2, &error2, _ln, _fn);
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 2086 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error2;
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&ret2, _ln, _fn);
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_fileRelPathHelper;
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error3 = NULL;
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp15 = createCopyingBuffer(tmp2, default_arg_length, decodePolicy_escape, &error3, _ln, _fn);
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error3 != nil) /* ZLINE: 2086 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error3;
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&ret2, _ln, _fn);
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_fileRelPathHelper;
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_71(&ret2, &call_tmp15, _ln, _fn);
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&call_tmp15, _ln, _fn);
#line 2086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2089 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deallocate(((c_ptr_void)(tmp2)), _ln, _fn);
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp16 = _cond_test7(err);
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp16) /* ZLINE: 2091 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error4 = NULL;
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    ioerror3(err, &_str_literal_1275, &error4, _ln, _fn);
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error4 != nil) /* ZLINE: 2091 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler2;
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler2:;
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error4 != nil) /* ZLINE: 2091 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error4;
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&ret2, _ln, _fn);
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_fileRelPathHelper;
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2091 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2092 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = ret2;
#line 2092 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_fileRelPathHelper:;
#line 2073 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 2073 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2288 */
#line 2288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static file openMemFile(Error * error_out,
#line 2288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        int64_t _ln,
#line 2288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        int32_t _fn) {
#line 2288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  file ret;
#line 2289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  file call_tmp8;
#line 2289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 2289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = openMemFileHelper(&error, _ln, _fn);
#line 2289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 2289 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 2289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endopenMemFile;
#line 2289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 2289 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endopenMemFile:;
#line 2288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 2288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2292 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2292 */
#line 2292 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static file openMemFileHelper(Error * error_out,
#line 2292 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _ln,
#line 2292 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int32_t _fn) {
#line 2292 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  file ret;
#line 2293 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal local_style;
#line 2294 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  file ret2;
#line 2295 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 2295 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale call_tmp9;
#line 2298 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp10 = NULL;
#line 2298 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp11;
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp12;
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2293 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  local_style = defaultIOStyleInternal();
#line 2294 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init109(&ret2, _ln, _fn);
#line 2295 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_file__home(&ret2);
#line 2295 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = here(_ln, _fn);
#line 2295 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp8, &call_tmp9);
#line 2295 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy45(&call_tmp9);
#line 2298 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_file__file_internal(&ret2);
#line 2298 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = qio_file_open_mem(call_tmp10, QBUFFER_PTR_NULL, &local_style);
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = _cond_test7(call_tmp11);
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp12) /* ZLINE: 2299 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    ioerror3(call_tmp11, &_str_literal_1294, &error, _ln, _fn);
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 2299 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler;
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler:;
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 2299 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy13(&ret2, _ln, _fn);
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_openMemFileHelper;
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2299 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2300 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = ret2;
#line 2300 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_openMemFileHelper:;
#line 2292 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 2292 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2322 */
#line 2322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static defaultDeserializer defaultSerializeVal2(void) {
#line 2326 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer call_tmp8;
#line 2326 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer initTemp;
#line 2326 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init116(&initTemp);
#line 2326 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = initTemp;
#line 2322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2322 */
#line 2322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static defaultSerializer defaultSerializeVal(void) {
#line 2325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer call_tmp8;
#line 2325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer initTemp;
#line 2325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init114(&initTemp);
#line 2325 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = initTemp;
#line 2322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2322 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2330 */
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init113(_serializeWrapper_defaultDeserializer this24,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    defaultDeserializer * member,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t chpl____dummy,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer _formal_tmp_member;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  RootClass super_tmp = NULL;
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_member = *(member);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  super_tmp = &((this24)->super);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init5(super_tmp);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ((RootClass)(((RootClass)(this24))))->chpl__cid = chpl__cid_RootClass;
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->member = _formal_tmp_member;
#line 2339 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 2339 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->chpl____dummy = chpl____dummy;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid__serializeWrapper_defaultDeserializer;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2330 */
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init112(_serializeWrapper_defaultSerializer this24,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    defaultSerializer * member,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t chpl____dummy,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_member;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  RootClass super_tmp = NULL;
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_member = *(member);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  super_tmp = &((this24)->super);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(super_tmp, _ln, _fn);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init5(super_tmp);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ((RootClass)(((RootClass)(this24))))->chpl__cid = chpl__cid_RootClass;
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->member = _formal_tmp_member;
#line 2339 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 2339 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->chpl____dummy = chpl____dummy;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ((RootClass)(this24))->chpl__cid = chpl__cid__serializeWrapper_defaultSerializer;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2330 */
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl__auto_destroy__serializeWrapper4(_serializeWrapper_defaultDeserializer this24,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                  int64_t _ln,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                  int32_t _fn) {
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultDeserializer _field_destructor_tmp_ = NULL;
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_ = &((this24)->member);
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__auto_destroy_defaultDeserializer(_field_destructor_tmp_);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__auto_destroy_RootClass(((RootClass)(this24)), _ln, _fn);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2330 */
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl__auto_destroy__serializeWrapper3(_serializeWrapper_defaultSerializer this24,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                  int64_t _ln,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                  int32_t _fn) {
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultSerializer _field_destructor_tmp_ = NULL;
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_ = &((this24)->member);
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__auto_destroy_defaultSerializer(_field_destructor_tmp_);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__auto_destroy_RootClass(((RootClass)(this24)), _ln, _fn);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2330 */
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl__auto_destroy__serializeWrapper(_serializeWrapper_binarySerializer this24,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                 int64_t _ln,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                 int32_t _fn) {
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_binarySerializer _field_destructor_tmp_ = NULL;
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_ = &((this24)->member);
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__auto_destroy_binarySerializer(_field_destructor_tmp_);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__auto_destroy_RootClass(((RootClass)(this24)), _ln, _fn);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2330 */
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl__auto_destroy__serializeWrapper2(_serializeWrapper_binaryDeserializer this24,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                  int64_t _ln,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                  int32_t _fn) {
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_binaryDeserializer _field_destructor_tmp_ = NULL;
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_ = &((this24)->member);
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__auto_destroy_binaryDeserializer(_field_destructor_tmp_);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__auto_destroy_RootClass(((RootClass)(this24)), _ln, _fn);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2330 */
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static _serializeWrapper_defaultDeserializer _new20(defaultDeserializer * member,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                    int64_t chpl____dummy,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                    int64_t _ln,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                    int32_t _fn) {
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer _formal_tmp_member;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultDeserializer initTemp = NULL;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr_void cast_tmp = NULL;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultDeserializer T = NULL;
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_member = *(member);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__serializeWrapper_defaultDeserializer_object), INT16(27), _ln, _fn);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  initTemp = ((_serializeWrapper_defaultDeserializer)(cast_tmp));
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid__serializeWrapper_defaultDeserializer;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init113(initTemp, &_formal_tmp_member, chpl____dummy, _ln, _fn);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  T = initTemp;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return T;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2330 */
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static _serializeWrapper_defaultSerializer _new19(defaultSerializer * member,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                  int64_t chpl____dummy,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                  int64_t _ln,
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                  int32_t _fn) {
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_member;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultSerializer initTemp = NULL;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr_void cast_tmp = NULL;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultSerializer T = NULL;
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_member = *(member);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__serializeWrapper_defaultSerializer_object), INT16(29), _ln, _fn);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  initTemp = ((_serializeWrapper_defaultSerializer)(cast_tmp));
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ((RootClass)(initTemp))->chpl__cid = chpl__cid__serializeWrapper_defaultSerializer;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(initTemp, _ln, _fn);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init112(initTemp, &_formal_tmp_member, chpl____dummy, _ln, _fn);
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  T = initTemp;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return T;
#line 2330 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2332 */
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static defaultSerializer * chpl_get__serializeWrapper_member(_serializeWrapper_defaultSerializer this24,
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                             int64_t _ln,
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                             int32_t _fn) {
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultSerializer call_tmp8 = NULL;
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->member);
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2332 */
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static defaultDeserializer * chpl_get__serializeWrapper_member2(_serializeWrapper_defaultDeserializer this24,
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                                int64_t _ln,
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                                int32_t _fn) {
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultDeserializer call_tmp8 = NULL;
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->member);
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2332 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2390 */
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static locale * chpl_get_fileReader__home(fileReader_F_defaultDeserializer * this24) {
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_home);
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2390 */
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static locale * chpl_get_fileReader__home2(fileReader_T_defaultDeserializer * this24) {
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_home);
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2392 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2392 */
#line 2392 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static c_ptr_qio_channel_t * chpl_get_fileReader__channel_internal2(fileReader_T_defaultDeserializer * this24) {
#line 2392 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 2392 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_channel_internal);
#line 2392 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2392 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2392 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2392 */
#line 2392 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static c_ptr_qio_channel_t * chpl_get_fileReader__channel_internal(fileReader_F_defaultDeserializer * this24) {
#line 2392 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 2392 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_channel_internal);
#line 2392 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2392 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2395 */
#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static _shared__serializeWrapper_defaultDeserializer2 * chpl_get_fileReader__deserializer2(fileReader_T_defaultDeserializer * this24) {
#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultDeserializer2 call_tmp8 = NULL;
#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_deserializer);
#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2395 */
#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static _shared__serializeWrapper_defaultDeserializer2 * chpl_get_fileReader__deserializer(fileReader_F_defaultDeserializer * this24) {
#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultDeserializer2 call_tmp8 = NULL;
#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_deserializer);
#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2420 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2420 */
#line 2420 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static defaultDeserializer * deserializer(fileReader_T_defaultDeserializer * this24,
#line 2420 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                          int64_t _ln,
#line 2420 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                          int32_t _fn) {
#line 2421 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultDeserializer2 call_tmp8 = NULL;
#line 2421 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultDeserializer call_tmp9 = NULL;
#line 2421 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultDeserializer call_tmp10 = NULL;
#line 2421 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileReader__deserializer2(this24);
#line 2421 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = postfix_EXCLAMATION_38(call_tmp8, _ln, _fn);
#line 2421 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(call_tmp9, _ln, _fn);
#line 2421 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get__serializeWrapper_member2(call_tmp9, _ln, _fn);
#line 2420 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp10;
#line 2420 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2420 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2420 */
#line 2420 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static defaultDeserializer * deserializer2(fileReader_F_defaultDeserializer * this24,
#line 2420 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                           int64_t _ln,
#line 2420 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                           int32_t _fn) {
#line 2421 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultDeserializer2 call_tmp8 = NULL;
#line 2421 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultDeserializer call_tmp9 = NULL;
#line 2421 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultDeserializer call_tmp10 = NULL;
#line 2421 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileReader__deserializer(this24);
#line 2421 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = postfix_EXCLAMATION_38(call_tmp8, _ln, _fn);
#line 2421 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(call_tmp9, _ln, _fn);
#line 2421 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get__serializeWrapper_member2(call_tmp9, _ln, _fn);
#line 2420 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp10;
#line 2420 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2458 */
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static locale * chpl_get_fileWriter__home2(fileWriter_T_defaultSerializer * this24) {
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_home);
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2458 */
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static locale * chpl_get_fileWriter__home(fileWriter_F_defaultSerializer * this24) {
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_home);
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2460 */
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static c_ptr_qio_channel_t * chpl_get_fileWriter__channel_internal2(fileWriter_T_defaultSerializer * this24) {
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_channel_internal);
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2460 */
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static c_ptr_qio_channel_t * chpl_get_fileWriter__channel_internal(fileWriter_F_defaultSerializer * this24) {
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_channel_internal);
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2463 */
#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static _shared__serializeWrapper_defaultSerializer * chpl_get_fileWriter__serializer2(fileWriter_T_defaultSerializer * this24) {
#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp8 = NULL;
#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_serializer);
#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2463 */
#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static _shared__serializeWrapper_defaultSerializer * chpl_get_fileWriter__serializer(fileWriter_F_defaultSerializer * this24) {
#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp8 = NULL;
#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_serializer);
#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2473 */
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static locale * chpl_get_fileWriter__readWriteThisFromLocale(fileWriter_F_defaultSerializer * this24) {
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_readWriteThisFromLocale);
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2473 */
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static locale * chpl_get_fileWriter__readWriteThisFromLocale2(fileWriter_T_defaultSerializer * this24) {
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_readWriteThisFromLocale);
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2488 */
#line 2488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static defaultSerializer * serializer(fileWriter_F_defaultSerializer * this24,
#line 2488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int64_t _ln,
#line 2488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int32_t _fn) {
#line 2489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp8 = NULL;
#line 2489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultSerializer call_tmp9 = NULL;
#line 2489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultSerializer call_tmp10 = NULL;
#line 2489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__serializer(this24);
#line 2489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = postfix_EXCLAMATION_39(call_tmp8, _ln, _fn);
#line 2489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(call_tmp9, _ln, _fn);
#line 2489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get__serializeWrapper_member(call_tmp9, _ln, _fn);
#line 2488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp10;
#line 2488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2501 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2501 */
#line 2501 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init114(defaultSerializer * this24) {
#line 2501 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2501 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2501 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2501 */
#line 2501 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl__auto_destroy_defaultSerializer(defaultSerializer * this24) {
#line 2501 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2501 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2504 */
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _serializeClassOrPtr2(defaultSerializer * this24,
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  fileWriter_F_defaultSerializer * writer3,
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  _owned_Remote_R * x2,
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  Error * error_out,
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  int64_t _ln,
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  int32_t _fn) {
#line 2505 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp8;
#line 2505 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Remote_R coerce_tmp2 = NULL;
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Remote_R T = NULL;
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 2505 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  coerce_tmp2 = borrow(x2, _ln, _fn);
#line 2505 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(coerce_tmp2)), nil);
#line 2505 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp8) /* ZLINE: 2505 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2505 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    writeLiteral(writer3, &_str_literal_1193, &error, _ln, _fn);
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 2506 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_serializeClassOrPtr;
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  } else /* ZLINE: 2505 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    T = (x2)->chpl_p;
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error2 = NULL;
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_check_nil(T, _ln, _fn);
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _auto_Remote_serialize(T, writer3, this24, &error2, _ln, _fn);
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 2508 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error2;
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_serializeClassOrPtr;
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_serializeClassOrPtr:;
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2504 */
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _serializeClassOrPtr3(defaultSerializer * this24,
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  fileWriter_F_defaultSerializer * writer3,
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  _owned__RemoteVarContainer_R * x2,
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  Error * error_out,
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  int64_t _ln,
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  int32_t _fn) {
#line 2505 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp8;
#line 2505 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___RemoteVarContainer_R coerce_tmp2 = NULL;
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___RemoteVarContainer_R T = NULL;
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 2505 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  coerce_tmp2 = borrow3(x2, _ln, _fn);
#line 2505 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(coerce_tmp2)), nil);
#line 2505 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp8) /* ZLINE: 2505 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2505 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    writeLiteral(writer3, &_str_literal_1193, &error, _ln, _fn);
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 2506 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_serializeClassOrPtr;
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  } else /* ZLINE: 2505 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    T = (x2)->chpl_p;
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error2 = NULL;
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_check_nil(T, _ln, _fn);
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _auto__RemoteVarContainer_serialize(T, writer3, this24, &error2, _ln, _fn);
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 2508 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error2;
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_serializeClassOrPtr;
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_serializeClassOrPtr:;
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2504 */
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _serializeClassOrPtr(defaultSerializer * this24,
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                 fileWriter_F_defaultSerializer * writer3,
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                 Remote_R x2,
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                 Error * error_out,
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                 int64_t _ln,
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                 int32_t _fn) {
#line 2505 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp8;
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 2505 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl___EQUALS_8(((RootClass)(x2)), nil);
#line 2505 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp8) /* ZLINE: 2505 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2505 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    writeLiteral(writer3, &_str_literal_1193, &error, _ln, _fn);
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 2506 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_serializeClassOrPtr;
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  } else /* ZLINE: 2505 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error2 = NULL;
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_check_nil(x2, _ln, _fn);
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _auto_Remote_serialize(x2, writer3, this24, &error2, _ln, _fn);
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 2508 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error2;
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_serializeClassOrPtr;
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2508 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_serializeClassOrPtr:;
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2504 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2545 */
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void serializeValue3(defaultSerializer * this24,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            fileWriter_F_defaultSerializer * writer3,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            string * val,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            Error * error_out,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            int64_t _ln,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            int32_t _fn) {
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale call_tmp8;
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = getLocaleOfIoRequest(writer3, _ln, _fn);
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _writeOne3(writer3, val, &call_tmp8, &error, _ln, _fn);
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 2548 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&call_tmp8);
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endserializeValue;
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy45(&call_tmp8);
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endserializeValue:;
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2545 */
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void serializeValue6(defaultSerializer * this24,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            fileWriter_F_defaultSerializer * writer3,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            ArrayInit val,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            Error * error_out,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            int64_t _ln,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            int32_t _fn) {
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale call_tmp8;
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = getLocaleOfIoRequest(writer3, _ln, _fn);
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _writeOne2(writer3, val, &call_tmp8, &error, _ln, _fn);
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 2548 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&call_tmp8);
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endserializeValue;
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy45(&call_tmp8);
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endserializeValue:;
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2545 */
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void serializeValue4(defaultSerializer * this24,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            fileWriter_F_defaultSerializer * writer3,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            Remote_R val,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            Error * error_out,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            int64_t _ln,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            int32_t _fn) {
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeClassOrPtr(this24, writer3, val, &error, _ln, _fn);
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 2552 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endserializeValue;
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endserializeValue:;
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2545 */
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void serializeValue(defaultSerializer * this24,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           fileWriter_F_defaultSerializer * writer3,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           _owned__RemoteVarContainer_R * val,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           Error * error_out,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int64_t _ln,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int32_t _fn) {
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeClassOrPtr3(this24, writer3, val, &error, _ln, _fn);
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 2552 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endserializeValue;
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endserializeValue:;
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2545 */
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void serializeValue2(defaultSerializer * this24,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            fileWriter_F_defaultSerializer * writer3,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            R * val,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            Error * error_out,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            int64_t _ln,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            int32_t _fn) {
#line 2558 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2558 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 2558 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _auto_R_serialize(val, writer3, this24, &error, _ln, _fn);
#line 2558 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 2558 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2558 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2558 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 2558 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endserializeValue;
#line 2558 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2558 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endserializeValue:;
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2545 */
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void serializeValue7(defaultSerializer * this24,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            fileWriter_F_defaultSerializer * writer3,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            int64_t val,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            Error * error_out,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            int64_t _ln,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            int32_t _fn) {
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale call_tmp8;
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = getLocaleOfIoRequest(writer3, _ln, _fn);
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _writeOne4(writer3, val, &call_tmp8, &error, _ln, _fn);
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 2548 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&call_tmp8);
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endserializeValue;
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy45(&call_tmp8);
#line 2548 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endserializeValue:;
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2545 */
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void serializeValue5(defaultSerializer * this24,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            fileWriter_F_defaultSerializer * writer3,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            _owned_Remote_R * val,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            Error * error_out,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            int64_t _ln,
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            int32_t _fn) {
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeClassOrPtr2(this24, writer3, val, &error, _ln, _fn);
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 2552 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endserializeValue;
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2552 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endserializeValue:;
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2545 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2571 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2571 */
#line 2571 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static AggregateSerializer_fileWriter_F_defaultSerializer startClass(defaultSerializer * this24,
#line 2571 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                                     fileWriter_F_defaultSerializer * writer3,
#line 2571 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                                     string * name,
#line 2571 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                                     int64_t size5,
#line 2571 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                                     Error * error_out,
#line 2571 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                                     int64_t _ln,
#line 2571 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                                     int32_t _fn) {
#line 2571 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  AggregateSerializer_fileWriter_F_defaultSerializer ret;
#line 2572 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2573 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  AggregateSerializer_fileWriter_F_defaultSerializer initTemp;
#line 2573 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer _formal_tmp_in_writer;
#line 2573 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool default_arg__first;
#line 2573 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string _formal_tmp_in__ending;
#line 2573 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr_chpl_bool default_arg__firstPtr = NULL;
#line 2572 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 2572 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  writeLiteral(writer3, &_str_literal_1054, &error, _ln, _fn);
#line 2572 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 2572 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2572 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2572 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 2572 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endstartClass;
#line 2572 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2573 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in_writer = chpl__initCopy7(writer3, UINT8(false), _ln, _fn);
#line 2573 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg__first = init_default__first();
#line 2573 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in__ending = chpl__initCopy6(&_str_literal_1056, UINT8(true), _ln, _fn);
#line 2573 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg__firstPtr = init_default__firstPtr(_ln, _fn);
#line 2573 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init115(&initTemp, &_formal_tmp_in_writer, UINT8(false), default_arg__first, &_formal_tmp_in__ending, default_arg__firstPtr);
#line 2573 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = initTemp;
#line 2573 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endstartClass:;
#line 2571 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 2571 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2585 */
#line 2585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static AggregateSerializer_fileWriter_F_defaultSerializer startRecord(defaultSerializer * this24,
#line 2585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                                      fileWriter_F_defaultSerializer * writer3,
#line 2585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                                      string * name,
#line 2585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                                      int64_t size5,
#line 2585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                                      Error * error_out,
#line 2585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                                      int64_t _ln,
#line 2585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                                      int32_t _fn) {
#line 2585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  AggregateSerializer_fileWriter_F_defaultSerializer ret;
#line 2586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  AggregateSerializer_fileWriter_F_defaultSerializer initTemp;
#line 2587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer _formal_tmp_in_writer;
#line 2587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool default_arg__first;
#line 2587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string _formal_tmp_in__ending;
#line 2587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr_chpl_bool default_arg__firstPtr = NULL;
#line 2586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 2586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  writeLiteral(writer3, &_str_literal_107, &error, _ln, _fn);
#line 2586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 2586 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 2586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endstartRecord;
#line 2586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in_writer = chpl__initCopy7(writer3, UINT8(false), _ln, _fn);
#line 2587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg__first = init_default__first();
#line 2587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in__ending = chpl__initCopy6(&_str_literal_82, UINT8(true), _ln, _fn);
#line 2587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg__firstPtr = init_default__firstPtr(_ln, _fn);
#line 2587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init115(&initTemp, &_formal_tmp_in_writer, UINT8(false), default_arg__first, &_formal_tmp_in__ending, default_arg__firstPtr);
#line 2587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = initTemp;
#line 2587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endstartRecord:;
#line 2585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 2585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2604 */
#line 2604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl__auto_destroy_AggregateSerializer(AggregateSerializer_fileWriter_F_defaultSerializer * this24,
#line 2604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   int64_t _ln,
#line 2604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   int32_t _fn) {
#line 2612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _field_destructor_tmp_ = NULL;
#line 2606 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_fileWriter_F_defaultSerializer _field_destructor_tmp_2 = NULL;
#line 2612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_ = &((this24)->_ending);
#line 2612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deinit52(_field_destructor_tmp_, _ln, _fn);
#line 2606 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_2 = &((this24)->writer);
#line 2606 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deinit58(_field_destructor_tmp_2, _ln, _fn);
#line 2604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2604 */
#line 2604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init115(AggregateSerializer_fileWriter_F_defaultSerializer * this24,
#line 2604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    fileWriter_F_defaultSerializer * writer3,
#line 2604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    chpl_bool _parent,
#line 2604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    chpl_bool _first,
#line 2604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    string * _ending,
#line 2604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    chpl_bool * _firstPtr) {
#line 2606 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer _formal_tmp_writer;
#line 2612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string _formal_tmp__ending;
#line 2606 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_writer = *(writer3);
#line 2612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp__ending = *(_ending);
#line 2606 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->writer = _formal_tmp_writer;
#line 2608 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_parent = _parent;
#line 2610 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_first = _first;
#line 2612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_ending = _formal_tmp__ending;
#line 2617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_firstPtr = _firstPtr;
#line 2604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2604 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2606 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2606 */
#line 2606 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static fileWriter_F_defaultSerializer * chpl_get_AggregateSerializer_writer(AggregateSerializer_fileWriter_F_defaultSerializer * this24) {
#line 2606 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_fileWriter_F_defaultSerializer call_tmp8 = NULL;
#line 2606 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->writer);
#line 2606 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2606 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2608 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2608 */
#line 2608 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static chpl_bool * chpl_get_AggregateSerializer__parent(AggregateSerializer_fileWriter_F_defaultSerializer * this24) {
#line 2608 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 2608 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_parent);
#line 2608 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2608 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2610 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2610 */
#line 2610 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static chpl_bool init_default__first(void) {
#line 2610 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return UINT8(true);
#line 2610 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2610 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2610 */
#line 2610 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static chpl_bool * chpl_get_AggregateSerializer__first(AggregateSerializer_fileWriter_F_defaultSerializer * this24) {
#line 2610 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 2610 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_first);
#line 2610 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2610 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2612 */
#line 2612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string * chpl_get_AggregateSerializer__ending(AggregateSerializer_fileWriter_F_defaultSerializer * this24) {
#line 2612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string call_tmp8 = NULL;
#line 2612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_ending);
#line 2612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2612 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2617 */
#line 2617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static chpl_bool * init_default__firstPtr(int64_t _ln,
#line 2617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                          int32_t _fn) {
#line 2617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr_chpl_bool T = NULL;
#line 2617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  T = ((c_ptr_chpl_bool)(nil));
#line 2617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return T;
#line 2617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2617 */
#line 2617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static c_ptr_chpl_bool * chpl_get_AggregateSerializer__firstPtr(AggregateSerializer_fileWriter_F_defaultSerializer * this24) {
#line 2617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_chpl_bool call_tmp8 = NULL;
#line 2617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = &((this24)->_firstPtr);
#line 2617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 2617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2625 */
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void writeField2(AggregateSerializer_fileWriter_F_defaultSerializer * this24,
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        string * name,
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        _owned__RemoteVarContainer_R * field,
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        Error * error_out,
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        int64_t _ln,
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        int32_t _fn) {
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_fileWriter_F_defaultSerializer call_tmp10 = NULL;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_bool call_tmp11 = NULL;
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_fileWriter_F_defaultSerializer call_tmp12 = NULL;
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_fileWriter_F_defaultSerializer call_tmp13 = NULL;
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error3 = NULL;
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_fileWriter_F_defaultSerializer call_tmp14 = NULL;
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error4 = NULL;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_AggregateSerializer__first(this24);
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___EXCLAMATION_(*(call_tmp8));
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 2626 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = chpl_get_AggregateSerializer_writer(this24);
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    writeLiteral(call_tmp10, &_str_literal_108, &error, _ln, _fn);
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 2626 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _endwriteField;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  } else /* ZLINE: 2626 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl_get_AggregateSerializer__first(this24);
#line 2627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_(call_tmp11, UINT8(false));
#line 2627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_AggregateSerializer_writer(this24);
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  writeLiteral(call_tmp12, name, &error2, _ln, _fn);
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 2629 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriteField;
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_AggregateSerializer_writer(this24);
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error3 = NULL;
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  writeLiteral(call_tmp13, &_str_literal_474, &error3, _ln, _fn);
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error3 != nil) /* ZLINE: 2630 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error3;
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriteField;
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_AggregateSerializer_writer(this24);
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error4 = NULL;
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  write12(call_tmp14, field, &error4, _ln, _fn);
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error4 != nil) /* ZLINE: 2631 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error4;
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriteField;
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwriteField:;
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2625 */
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void writeField3(AggregateSerializer_fileWriter_F_defaultSerializer * this24,
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        string * name,
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        int64_t field,
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        Error * error_out,
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        int64_t _ln,
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        int32_t _fn) {
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_fileWriter_F_defaultSerializer call_tmp10 = NULL;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_bool call_tmp11 = NULL;
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_fileWriter_F_defaultSerializer call_tmp12 = NULL;
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_fileWriter_F_defaultSerializer call_tmp13 = NULL;
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error3 = NULL;
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_fileWriter_F_defaultSerializer call_tmp14 = NULL;
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error4 = NULL;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_AggregateSerializer__first(this24);
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___EXCLAMATION_(*(call_tmp8));
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 2626 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = chpl_get_AggregateSerializer_writer(this24);
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    writeLiteral(call_tmp10, &_str_literal_108, &error, _ln, _fn);
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 2626 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _endwriteField;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  } else /* ZLINE: 2626 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl_get_AggregateSerializer__first(this24);
#line 2627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_(call_tmp11, UINT8(false));
#line 2627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_AggregateSerializer_writer(this24);
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  writeLiteral(call_tmp12, name, &error2, _ln, _fn);
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 2629 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriteField;
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_AggregateSerializer_writer(this24);
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error3 = NULL;
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  writeLiteral(call_tmp13, &_str_literal_474, &error3, _ln, _fn);
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error3 != nil) /* ZLINE: 2630 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error3;
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriteField;
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_AggregateSerializer_writer(this24);
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error4 = NULL;
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  write10(call_tmp14, field, &error4, _ln, _fn);
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error4 != nil) /* ZLINE: 2631 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error4;
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriteField;
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwriteField:;
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2625 */
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void writeField(AggregateSerializer_fileWriter_F_defaultSerializer * this24,
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       string * name,
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       R * field,
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       Error * error_out,
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       int64_t _ln,
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       int32_t _fn) {
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_fileWriter_F_defaultSerializer call_tmp10 = NULL;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_bool call_tmp11 = NULL;
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_fileWriter_F_defaultSerializer call_tmp12 = NULL;
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_fileWriter_F_defaultSerializer call_tmp13 = NULL;
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error3 = NULL;
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_fileWriter_F_defaultSerializer call_tmp14 = NULL;
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error4 = NULL;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_AggregateSerializer__first(this24);
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___EXCLAMATION_(*(call_tmp8));
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 2626 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = chpl_get_AggregateSerializer_writer(this24);
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    writeLiteral(call_tmp10, &_str_literal_108, &error, _ln, _fn);
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 2626 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _endwriteField;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  } else /* ZLINE: 2626 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl_get_AggregateSerializer__first(this24);
#line 2627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_(call_tmp11, UINT8(false));
#line 2627 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_AggregateSerializer_writer(this24);
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  writeLiteral(call_tmp12, name, &error2, _ln, _fn);
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 2629 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriteField;
#line 2629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_AggregateSerializer_writer(this24);
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error3 = NULL;
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  writeLiteral(call_tmp13, &_str_literal_474, &error3, _ln, _fn);
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error3 != nil) /* ZLINE: 2630 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error3;
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriteField;
#line 2630 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_AggregateSerializer_writer(this24);
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error4 = NULL;
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  write8(call_tmp14, field, &error4, _ln, _fn);
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error4 != nil) /* ZLINE: 2631 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error4;
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriteField;
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2631 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwriteField:;
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2625 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2676 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2676 */
#line 2676 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void endClass(AggregateSerializer_fileWriter_F_defaultSerializer * this24,
#line 2676 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     Error * error_out,
#line 2676 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int64_t _ln,
#line 2676 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int32_t _fn) {
#line 2677 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 2677 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 2678 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_fileWriter_F_defaultSerializer call_tmp10 = NULL;
#line 2678 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string call_tmp11 = NULL;
#line 2678 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2679 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_chpl_bool call_tmp12 = NULL;
#line 2679 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp13;
#line 2680 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_chpl_bool call_tmp14 = NULL;
#line 2680 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_bool call_tmp15 = NULL;
#line 2680 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr_chpl_bool coerce_tmp2 = NULL;
#line 2680 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_bool call_tmp16 = NULL;
#line 2677 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_AggregateSerializer__parent(this24);
#line 2677 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___EXCLAMATION_(*(call_tmp8));
#line 2677 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 2677 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2677 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2678 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = chpl_get_AggregateSerializer_writer(this24);
#line 2678 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl_get_AggregateSerializer__ending(this24);
#line 2678 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 2678 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    writeLiteral(call_tmp10, call_tmp11, &error, _ln, _fn);
#line 2678 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 2678 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2678 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2678 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 2678 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _endendClass;
#line 2678 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2678 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  } else /* ZLINE: 2677 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2678 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2679 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp12 = chpl_get_AggregateSerializer__firstPtr(this24);
#line 2679 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp13 = chpl___EXCLAMATION__ASSIGN_12(*(call_tmp12), nil);
#line 2679 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (call_tmp13) /* ZLINE: 2679 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2679 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 2680 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp14 = chpl_get_AggregateSerializer__firstPtr(this24);
#line 2680 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      coerce_tmp2 = *(call_tmp14);
#line 2680 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 2680 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp15 = deref2(coerce_tmp2);
#line 2680 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp16 = chpl_get_AggregateSerializer__first(this24);
#line 2680 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl___ASSIGN_(call_tmp15, *(call_tmp16));
#line 2680 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 2680 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2680 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endendClass:;
#line 2676 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2676 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2689 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2689 */
#line 2689 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void endRecord(AggregateSerializer_fileWriter_F_defaultSerializer * this24,
#line 2689 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      Error * error_out,
#line 2689 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      int64_t _ln,
#line 2689 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      int32_t _fn) {
#line 2690 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_fileWriter_F_defaultSerializer call_tmp8 = NULL;
#line 2690 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string call_tmp9 = NULL;
#line 2690 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 2690 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_AggregateSerializer_writer(this24);
#line 2690 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_AggregateSerializer__ending(this24);
#line 2690 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 2690 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  writeLiteral(call_tmp8, call_tmp9, &error, _ln, _fn);
#line 2690 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 2690 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 2690 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 2690 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 2690 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endendRecord;
#line 2690 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 2690 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endendRecord:;
#line 2689 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2689 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2999 */
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl__auto_destroy_defaultDeserializer(defaultDeserializer * this24) {
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:2999 */
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init116(defaultDeserializer * this24) {
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 2999 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 3503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:3503 */
#line 3503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl__auto_destroy_binarySerializer(binarySerializer * this24) {
#line 3503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 3503 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 3910 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:3910 */
#line 3910 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl__auto_destroy_binaryDeserializer(binaryDeserializer * this24) {
#line 3910 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 3910 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4423 */
#line 4423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl___ASSIGN_83(fileReader_F_defaultDeserializer * lhs,
#line 4423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             fileReader_F_defaultDeserializer * rhs,
#line 4423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             int64_t _ln,
#line 4423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             int32_t _fn) {
#line 4425 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 4429 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp10 = NULL;
#line 4430 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp11 = NULL;
#line 4433 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 4433 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp13 = NULL;
#line 4434 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp14 = NULL;
#line 4434 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp15 = NULL;
#line 4435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultDeserializer2 call_tmp16 = NULL;
#line 4435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp17;
#line 4435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultDeserializer coerce_tmp2 = NULL;
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultDeserializer2 call_tmp18 = NULL;
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultDeserializer call_tmp19 = NULL;
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultDeserializer call_tmp20;
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultDeserializer new_temp = NULL;
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer _formal_tmp_in_member;
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultDeserializer initTemp;
#line 4425 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileReader__home(rhs);
#line 4425 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 4426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileReader__channel_internal(rhs);
#line 4426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_channel_retain(*(call_tmp9));
#line 4429 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileReader__home(lhs);
#line 4429 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp10, _ln, _fn);
#line 4430 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileReader__channel_internal(lhs);
#line 4430 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_channel_release(*(call_tmp11));
#line 4433 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileReader__home(lhs);
#line 4433 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileReader__home(rhs);
#line 4433 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp12, call_tmp13);
#line 4434 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_fileReader__channel_internal(lhs);
#line 4434 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = chpl_get_fileReader__channel_internal(rhs);
#line 4434 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp14, *(call_tmp15));
#line 4435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp16 = chpl_get_fileReader__deserializer(rhs);
#line 4435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  coerce_tmp2 = borrow6(call_tmp16);
#line 4435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp17 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(coerce_tmp2)), nil);
#line 4435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp17) /* ZLINE: 4435 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp18 = chpl_get_fileReader__deserializer(lhs);
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp19 = deserializer2(rhs, _ln, _fn);
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _formal_tmp_in_member = *(call_tmp19);
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    new_temp = _new20(&_formal_tmp_in_member, INT64(0), _ln, _fn);
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    init92(&initTemp, new_temp, _ln, _fn);
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp20 = initTemp;
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_68(call_tmp18, &call_tmp20, _ln, _fn);
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy99(&call_tmp20, _ln, _fn);
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4423 */
#line 4423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl___ASSIGN_82(fileReader_T_defaultDeserializer * lhs,
#line 4423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             fileReader_T_defaultDeserializer * rhs,
#line 4423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             int64_t _ln,
#line 4423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             int32_t _fn) {
#line 4425 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 4429 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp10 = NULL;
#line 4430 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp11 = NULL;
#line 4433 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 4433 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp13 = NULL;
#line 4434 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp14 = NULL;
#line 4434 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp15 = NULL;
#line 4435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultDeserializer2 call_tmp16 = NULL;
#line 4435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp17;
#line 4435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultDeserializer coerce_tmp2 = NULL;
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultDeserializer2 call_tmp18 = NULL;
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultDeserializer call_tmp19 = NULL;
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultDeserializer call_tmp20;
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultDeserializer new_temp = NULL;
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer _formal_tmp_in_member;
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultDeserializer initTemp;
#line 4425 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileReader__home2(rhs);
#line 4425 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 4426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileReader__channel_internal2(rhs);
#line 4426 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_channel_retain(*(call_tmp9));
#line 4429 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileReader__home2(lhs);
#line 4429 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp10, _ln, _fn);
#line 4430 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileReader__channel_internal2(lhs);
#line 4430 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_channel_release(*(call_tmp11));
#line 4433 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileReader__home2(lhs);
#line 4433 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileReader__home2(rhs);
#line 4433 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp12, call_tmp13);
#line 4434 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_fileReader__channel_internal2(lhs);
#line 4434 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = chpl_get_fileReader__channel_internal2(rhs);
#line 4434 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp14, *(call_tmp15));
#line 4435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp16 = chpl_get_fileReader__deserializer2(rhs);
#line 4435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  coerce_tmp2 = borrow6(call_tmp16);
#line 4435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp17 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(coerce_tmp2)), nil);
#line 4435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp17) /* ZLINE: 4435 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4435 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp18 = chpl_get_fileReader__deserializer2(lhs);
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp19 = deserializer(rhs, _ln, _fn);
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _formal_tmp_in_member = *(call_tmp19);
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    new_temp = _new20(&_formal_tmp_in_member, INT64(0), _ln, _fn);
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    init92(&initTemp, new_temp, _ln, _fn);
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp20 = initTemp;
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_68(call_tmp18, &call_tmp20, _ln, _fn);
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy99(&call_tmp20, _ln, _fn);
#line 4436 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4423 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4440 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4440 */
#line 4440 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl___ASSIGN_85(fileWriter_T_defaultSerializer * lhs,
#line 4440 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             fileWriter_T_defaultSerializer * rhs,
#line 4440 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             int64_t _ln,
#line 4440 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             int32_t _fn) {
#line 4442 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4443 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 4446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp10 = NULL;
#line 4447 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp11 = NULL;
#line 4450 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 4450 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp13 = NULL;
#line 4451 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp14 = NULL;
#line 4451 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp15 = NULL;
#line 4452 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp16 = NULL;
#line 4452 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp17;
#line 4452 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultSerializer coerce_tmp2 = NULL;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp18 = NULL;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp19 = NULL;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultSerializer call_tmp20 = NULL;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultSerializer call_tmp21 = NULL;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultSerializer2 call_tmp22;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultSerializer new_temp = NULL;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_in_member;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultSerializer2 initTemp;
#line 4442 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home2(rhs);
#line 4442 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 4443 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal2(rhs);
#line 4443 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_channel_retain(*(call_tmp9));
#line 4446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileWriter__home2(lhs);
#line 4446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp10, _ln, _fn);
#line 4447 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileWriter__channel_internal2(lhs);
#line 4447 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_channel_release(*(call_tmp11));
#line 4450 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileWriter__home2(lhs);
#line 4450 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileWriter__home2(rhs);
#line 4450 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp12, call_tmp13);
#line 4451 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_fileWriter__channel_internal2(lhs);
#line 4451 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = chpl_get_fileWriter__channel_internal2(rhs);
#line 4451 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp14, *(call_tmp15));
#line 4452 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp16 = chpl_get_fileWriter__serializer2(rhs);
#line 4452 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  coerce_tmp2 = borrow5(call_tmp16);
#line 4452 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp17 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(coerce_tmp2)), nil);
#line 4452 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp17) /* ZLINE: 4452 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4452 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp18 = chpl_get_fileWriter__serializer2(lhs);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp19 = chpl_get_fileWriter__serializer2(rhs);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp20 = postfix_EXCLAMATION_39(call_tmp19, _ln, _fn);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_check_nil(call_tmp20, _ln, _fn);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp21 = chpl_get__serializeWrapper_member(call_tmp20, _ln, _fn);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _formal_tmp_in_member = *(call_tmp21);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    new_temp = _new19(&_formal_tmp_in_member, INT64(0), _ln, _fn);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    init93(&initTemp, new_temp, _ln, _fn);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp22 = initTemp;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_67(call_tmp18, &call_tmp22, _ln, _fn);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy100(&call_tmp22, _ln, _fn);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4440 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4440 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4440 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4440 */
#line 4440 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl___ASSIGN_84(fileWriter_F_defaultSerializer * lhs,
#line 4440 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             fileWriter_F_defaultSerializer * rhs,
#line 4440 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             int64_t _ln,
#line 4440 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             int32_t _fn) {
#line 4442 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4443 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 4446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp10 = NULL;
#line 4447 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp11 = NULL;
#line 4450 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 4450 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp13 = NULL;
#line 4451 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp14 = NULL;
#line 4451 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp15 = NULL;
#line 4452 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp16 = NULL;
#line 4452 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp17;
#line 4452 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultSerializer coerce_tmp2 = NULL;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp18 = NULL;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp19 = NULL;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultSerializer call_tmp20 = NULL;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultSerializer call_tmp21 = NULL;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultSerializer2 call_tmp22;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultSerializer new_temp = NULL;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_in_member;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultSerializer2 initTemp;
#line 4442 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home(rhs);
#line 4442 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 4443 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal(rhs);
#line 4443 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_channel_retain(*(call_tmp9));
#line 4446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileWriter__home(lhs);
#line 4446 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp10, _ln, _fn);
#line 4447 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileWriter__channel_internal(lhs);
#line 4447 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_channel_release(*(call_tmp11));
#line 4450 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileWriter__home(lhs);
#line 4450 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileWriter__home(rhs);
#line 4450 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp12, call_tmp13);
#line 4451 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_fileWriter__channel_internal(lhs);
#line 4451 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = chpl_get_fileWriter__channel_internal(rhs);
#line 4451 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp14, *(call_tmp15));
#line 4452 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp16 = chpl_get_fileWriter__serializer(rhs);
#line 4452 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  coerce_tmp2 = borrow5(call_tmp16);
#line 4452 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp17 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(coerce_tmp2)), nil);
#line 4452 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp17) /* ZLINE: 4452 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4452 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp18 = chpl_get_fileWriter__serializer(lhs);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp19 = chpl_get_fileWriter__serializer(rhs);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp20 = postfix_EXCLAMATION_39(call_tmp19, _ln, _fn);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_check_nil(call_tmp20, _ln, _fn);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp21 = chpl_get__serializeWrapper_member(call_tmp20, _ln, _fn);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _formal_tmp_in_member = *(call_tmp21);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    new_temp = _new19(&_formal_tmp_in_member, INT64(0), _ln, _fn);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    init93(&initTemp, new_temp, _ln, _fn);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp22 = initTemp;
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_67(call_tmp18, &call_tmp22, _ln, _fn);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy100(&call_tmp22, _ln, _fn);
#line 4453 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4440 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4440 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4457 */
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init117(fileReader_T_defaultDeserializer * this24,
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 2405 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale local_nilLocale;
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale call_tmp8;
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultDeserializer2 _deserializer;
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale _readWriteThisFromLocale;
#line 2405 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  local_nilLocale = nilLocale;
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = here(_ln, _fn);
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_home = call_tmp8;
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_channel_internal = QIO_CHANNEL_PTR_NULL;
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init90(&_deserializer, _ln, _fn);
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_deserializer = _deserializer;
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_ASSIGN_(&_readWriteThisFromLocale, &local_nilLocale);
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_readWriteThisFromLocale = _readWriteThisFromLocale;
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4457 */
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init118(fileReader_F_defaultDeserializer * this24,
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 2405 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale local_nilLocale;
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale call_tmp8;
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultDeserializer2 _deserializer;
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale _readWriteThisFromLocale;
#line 2405 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  local_nilLocale = nilLocale;
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = here(_ln, _fn);
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_home = call_tmp8;
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_channel_internal = QIO_CHANNEL_PTR_NULL;
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init90(&_deserializer, _ln, _fn);
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_deserializer = _deserializer;
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_ASSIGN_(&_readWriteThisFromLocale, &local_nilLocale);
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_readWriteThisFromLocale = _readWriteThisFromLocale;
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4457 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4463 */
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init119(fileWriter_T_defaultSerializer * this24,
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale local_nilLocale;
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale call_tmp8;
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultSerializer _serializer;
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale _readWriteThisFromLocale;
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  local_nilLocale = nilLocale;
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = here(_ln, _fn);
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_home = call_tmp8;
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_channel_internal = QIO_CHANNEL_PTR_NULL;
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init91(&_serializer, _ln, _fn);
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_serializer = _serializer;
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_ASSIGN_(&_readWriteThisFromLocale, &local_nilLocale);
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_readWriteThisFromLocale = _readWriteThisFromLocale;
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4463 */
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init120(fileWriter_F_defaultSerializer * this24,
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale local_nilLocale;
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale call_tmp8;
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultSerializer _serializer;
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale _readWriteThisFromLocale;
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  local_nilLocale = nilLocale;
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = here(_ln, _fn);
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_home = call_tmp8;
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_channel_internal = QIO_CHANNEL_PTR_NULL;
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init91(&_serializer, _ln, _fn);
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_serializer = _serializer;
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_ASSIGN_(&_readWriteThisFromLocale, &local_nilLocale);
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_readWriteThisFromLocale = _readWriteThisFromLocale;
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4487 */
#line 4487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init_ASSIGN_26(fileWriter_F_defaultSerializer * this24,
#line 4487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           fileWriter_F_defaultSerializer * x2,
#line 4487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int64_t _ln,
#line 4487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int32_t _fn) {
#line 4494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale _home;
#line 4495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp10 = NULL;
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultSerializer call_tmp11 = NULL;
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultSerializer call_tmp12 = NULL;
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultSerializer2 call_tmp13;
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultSerializer new_temp = NULL;
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_in_member;
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultSerializer2 initTemp;
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultSerializer _serializer;
#line 4497 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp14 = NULL;
#line 4497 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale _readWriteThisFromLocale;
#line 4499 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp15 = NULL;
#line 4500 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp16 = NULL;
#line 4494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home(x2);
#line 4494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_ASSIGN_(&_home, call_tmp8);
#line 4494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_home = _home;
#line 4495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal(x2);
#line 4495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_channel_internal = *(call_tmp9);
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileWriter__serializer(x2);
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = postfix_EXCLAMATION_39(call_tmp10, _ln, _fn);
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(call_tmp11, _ln, _fn);
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get__serializeWrapper_member(call_tmp11, _ln, _fn);
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in_member = *(call_tmp12);
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  new_temp = _new19(&_formal_tmp_in_member, INT64(0), _ln, _fn);
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init93(&initTemp, new_temp, _ln, _fn);
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = initTemp;
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_ASSIGN_23(&_serializer, &call_tmp13, _ln, _fn);
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_serializer = _serializer;
#line 4496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy100(&call_tmp13, _ln, _fn);
#line 4497 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_fileWriter__readWriteThisFromLocale(x2);
#line 4497 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_ASSIGN_(&_readWriteThisFromLocale, call_tmp14);
#line 4497 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->_readWriteThisFromLocale = _readWriteThisFromLocale;
#line 4499 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = chpl_get_fileWriter__home(x2);
#line 4499 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp15, _ln, _fn);
#line 4500 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp16 = chpl_get_fileWriter__channel_internal(x2);
#line 4500 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_channel_retain(*(call_tmp16));
#line 4487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4530 */
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init121(fileReader_T_defaultDeserializer * this24,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    defaultDeserializer * deserializer3,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    file * f,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    syserr * error,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    ioHintSet * hints,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t start,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t end,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    iostyleInternal local_style,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer _formal_tmp_deserializer;
#line 4531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr _formal_tmp_error;
#line 4535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultDeserializer2 call_tmp9 = NULL;
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultDeserializer call_tmp10;
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultDeserializer new_temp = NULL;
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer _formal_tmp_in_member;
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultDeserializer initTemp;
#line 4537 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp11 = NULL;
#line 4537 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 4538 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp13 = NULL;
#line 4538 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp14 = NULL;
#line 4539 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_int32_t call_tmp15 = NULL;
#line 4538 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp16;
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_deserializer = *(deserializer3);
#line 4531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  memset(&_formal_tmp_error, INT32(0), sizeof(syserr));
#line 4534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init117(this24, _ln, _fn);
#line 4535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_file__home(f);
#line 4535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileReader__deserializer2(this24);
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in_member = _formal_tmp_deserializer;
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  new_temp = _new20(&_formal_tmp_in_member, INT64(0), _ln, _fn);
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init92(&initTemp, new_temp, _ln, _fn);
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = initTemp;
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_68(call_tmp9, &call_tmp10, _ln, _fn);
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy99(&call_tmp10, _ln, _fn);
#line 4537 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileReader__home2(this24);
#line 4537 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_file__home(f);
#line 4537 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp11, call_tmp12);
#line 4538 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileReader__channel_internal2(this24);
#line 4538 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_file__file_internal(f);
#line 4539 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = chpl_get_ioHintSet__internal(hints);
#line 4538 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp16 = qio_channel_create(call_tmp13, *(call_tmp14), *(call_tmp15), ((int32_t)(UINT8(true))), ((int32_t)(UINT8(false))), start, end, &local_style, INT64(65536));
#line 4538 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&_formal_tmp_error, call_tmp16);
#line 4531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(error) = _formal_tmp_error;
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy43(&_formal_tmp_deserializer);
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4530 */
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init122(fileReader_F_defaultDeserializer * this24,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    defaultDeserializer * deserializer3,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    file * f,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    syserr * error,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    ioHintSet * hints,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t start,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t end,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    iostyleInternal local_style,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer _formal_tmp_deserializer;
#line 4531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr _formal_tmp_error;
#line 4535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultDeserializer2 call_tmp9 = NULL;
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultDeserializer call_tmp10;
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultDeserializer new_temp = NULL;
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer _formal_tmp_in_member;
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultDeserializer initTemp;
#line 4537 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp11 = NULL;
#line 4537 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 4538 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp13 = NULL;
#line 4538 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp14 = NULL;
#line 4539 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_int32_t call_tmp15 = NULL;
#line 4538 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp16;
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_deserializer = *(deserializer3);
#line 4531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  memset(&_formal_tmp_error, INT32(0), sizeof(syserr));
#line 4534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init118(this24, _ln, _fn);
#line 4535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_file__home(f);
#line 4535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileReader__deserializer(this24);
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in_member = _formal_tmp_deserializer;
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  new_temp = _new20(&_formal_tmp_in_member, INT64(0), _ln, _fn);
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init92(&initTemp, new_temp, _ln, _fn);
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = initTemp;
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_68(call_tmp9, &call_tmp10, _ln, _fn);
#line 4536 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy99(&call_tmp10, _ln, _fn);
#line 4537 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileReader__home(this24);
#line 4537 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_file__home(f);
#line 4537 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp11, call_tmp12);
#line 4538 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileReader__channel_internal(this24);
#line 4538 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_file__file_internal(f);
#line 4539 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = chpl_get_ioHintSet__internal(hints);
#line 4538 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp16 = qio_channel_create(call_tmp13, *(call_tmp14), *(call_tmp15), ((int32_t)(UINT8(true))), ((int32_t)(UINT8(false))), start, end, &local_style, INT64(65536));
#line 4538 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&_formal_tmp_error, call_tmp16);
#line 4531 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(error) = _formal_tmp_error;
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy43(&_formal_tmp_deserializer);
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4530 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4561 */
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init124(fileWriter_T_defaultSerializer * this24,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    defaultSerializer * serializer2,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    file * f,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    syserr * error,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    ioHintSet * hints,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t start,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t end,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    iostyleInternal local_style,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_serializer;
#line 4562 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr _formal_tmp_error;
#line 4566 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp9 = NULL;
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultSerializer2 call_tmp10;
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultSerializer new_temp = NULL;
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_in_member;
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultSerializer2 initTemp;
#line 4568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp11 = NULL;
#line 4568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 4569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp13 = NULL;
#line 4569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp14 = NULL;
#line 4570 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_int32_t call_tmp15 = NULL;
#line 4569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp16;
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_serializer = *(serializer2);
#line 4562 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  memset(&_formal_tmp_error, INT32(0), sizeof(syserr));
#line 4565 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init119(this24, _ln, _fn);
#line 4566 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_file__home(f);
#line 4566 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__serializer2(this24);
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in_member = _formal_tmp_serializer;
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  new_temp = _new19(&_formal_tmp_in_member, INT64(0), _ln, _fn);
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init93(&initTemp, new_temp, _ln, _fn);
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = initTemp;
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_67(call_tmp9, &call_tmp10, _ln, _fn);
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy100(&call_tmp10, _ln, _fn);
#line 4568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileWriter__home2(this24);
#line 4568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_file__home(f);
#line 4568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp11, call_tmp12);
#line 4569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileWriter__channel_internal2(this24);
#line 4569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_file__file_internal(f);
#line 4570 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = chpl_get_ioHintSet__internal(hints);
#line 4569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp16 = qio_channel_create(call_tmp13, *(call_tmp14), *(call_tmp15), ((int32_t)(UINT8(false))), ((int32_t)(UINT8(true))), start, end, &local_style, INT64(65536));
#line 4569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&_formal_tmp_error, call_tmp16);
#line 4562 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(error) = _formal_tmp_error;
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy9(&_formal_tmp_serializer);
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4561 */
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init123(fileWriter_F_defaultSerializer * this24,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    defaultSerializer * serializer2,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    file * f,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    syserr * error,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    ioHintSet * hints,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t start,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t end,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    iostyleInternal local_style,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_serializer;
#line 4562 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr _formal_tmp_error;
#line 4566 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp9 = NULL;
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultSerializer2 call_tmp10;
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeWrapper_defaultSerializer new_temp = NULL;
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_in_member;
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _shared__serializeWrapper_defaultSerializer2 initTemp;
#line 4568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp11 = NULL;
#line 4568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 4569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp13 = NULL;
#line 4569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_file_t call_tmp14 = NULL;
#line 4570 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_int32_t call_tmp15 = NULL;
#line 4569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp16;
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_serializer = *(serializer2);
#line 4562 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  memset(&_formal_tmp_error, INT32(0), sizeof(syserr));
#line 4565 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init120(this24, _ln, _fn);
#line 4566 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_file__home(f);
#line 4566 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__serializer(this24);
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in_member = _formal_tmp_serializer;
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  new_temp = _new19(&_formal_tmp_in_member, INT64(0), _ln, _fn);
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init93(&initTemp, new_temp, _ln, _fn);
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = initTemp;
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_67(call_tmp9, &call_tmp10, _ln, _fn);
#line 4567 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy100(&call_tmp10, _ln, _fn);
#line 4568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileWriter__home(this24);
#line 4568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_file__home(f);
#line 4568 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp11, call_tmp12);
#line 4569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileWriter__channel_internal(this24);
#line 4569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_file__file_internal(f);
#line 4570 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = chpl_get_ioHintSet__internal(hints);
#line 4569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp16 = qio_channel_create(call_tmp13, *(call_tmp14), *(call_tmp15), ((int32_t)(UINT8(false))), ((int32_t)(UINT8(true))), start, end, &local_style, INT64(65536));
#line 4569 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&_formal_tmp_error, call_tmp16);
#line 4562 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(error) = _formal_tmp_error;
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy9(&_formal_tmp_serializer);
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4561 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4578 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4578 */
#line 4578 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void deinit55(fileReader_F_defaultDeserializer * this24,
#line 4578 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int64_t _ln,
#line 4578 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int32_t _fn) {
#line 4579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4580 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 4581 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp10 = NULL;
#line 2405 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale _field_destructor_tmp_ = NULL;
#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultDeserializer2 _field_destructor_tmp_2 = NULL;
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale _field_destructor_tmp_3 = NULL;
#line 4579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileReader__home(this24);
#line 4579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 4580 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileReader__channel_internal(this24);
#line 4580 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_channel_release(*(call_tmp9));
#line 4581 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileReader__channel_internal(this24);
#line 4581 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp10, QIO_CHANNEL_PTR_NULL);
#line 2405 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_ = &((this24)->_readWriteThisFromLocale);
#line 2405 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deinit14(_field_destructor_tmp_);
#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_2 = &((this24)->_deserializer);
#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deinit48(_field_destructor_tmp_2, _ln, _fn);
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_3 = &((this24)->_home);
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deinit14(_field_destructor_tmp_3);
#line 4578 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4578 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4578 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4578 */
#line 4578 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void deinit56(fileReader_T_defaultDeserializer * this24,
#line 4578 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int64_t _ln,
#line 4578 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int32_t _fn) {
#line 4579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4580 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 4581 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp10 = NULL;
#line 2405 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale _field_destructor_tmp_ = NULL;
#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultDeserializer2 _field_destructor_tmp_2 = NULL;
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale _field_destructor_tmp_3 = NULL;
#line 4579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileReader__home2(this24);
#line 4579 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 4580 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileReader__channel_internal2(this24);
#line 4580 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_channel_release(*(call_tmp9));
#line 4581 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileReader__channel_internal2(this24);
#line 4581 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp10, QIO_CHANNEL_PTR_NULL);
#line 2405 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_ = &((this24)->_readWriteThisFromLocale);
#line 2405 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deinit14(_field_destructor_tmp_);
#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_2 = &((this24)->_deserializer);
#line 2395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deinit48(_field_destructor_tmp_2, _ln, _fn);
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_3 = &((this24)->_home);
#line 2390 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deinit14(_field_destructor_tmp_3);
#line 4578 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4578 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4586 */
#line 4586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void deinit58(fileWriter_F_defaultSerializer * this24,
#line 4586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int64_t _ln,
#line 4586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int32_t _fn) {
#line 4587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4588 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 4589 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp10 = NULL;
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale _field_destructor_tmp_ = NULL;
#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 _field_destructor_tmp_2 = NULL;
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale _field_destructor_tmp_3 = NULL;
#line 4587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home(this24);
#line 4587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 4588 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal(this24);
#line 4588 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_channel_release(*(call_tmp9));
#line 4589 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileWriter__channel_internal(this24);
#line 4589 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp10, QIO_CHANNEL_PTR_NULL);
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_ = &((this24)->_readWriteThisFromLocale);
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deinit14(_field_destructor_tmp_);
#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_2 = &((this24)->_serializer);
#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deinit50(_field_destructor_tmp_2, _ln, _fn);
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_3 = &((this24)->_home);
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deinit14(_field_destructor_tmp_3);
#line 4586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4586 */
#line 4586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void deinit57(fileWriter_T_defaultSerializer * this24,
#line 4586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int64_t _ln,
#line 4586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int32_t _fn) {
#line 4587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4588 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 4589 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp10 = NULL;
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale _field_destructor_tmp_ = NULL;
#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 _field_destructor_tmp_2 = NULL;
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale _field_destructor_tmp_3 = NULL;
#line 4587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home2(this24);
#line 4587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 4588 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal2(this24);
#line 4588 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_channel_release(*(call_tmp9));
#line 4589 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileWriter__channel_internal2(this24);
#line 4589 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp10, QIO_CHANNEL_PTR_NULL);
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_ = &((this24)->_readWriteThisFromLocale);
#line 2473 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deinit14(_field_destructor_tmp_);
#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_2 = &((this24)->_serializer);
#line 2463 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deinit50(_field_destructor_tmp_2, _ln, _fn);
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _field_destructor_tmp_3 = &((this24)->_home);
#line 2458 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deinit14(_field_destructor_tmp_3);
#line 4586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4714 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4714 */
#line 4714 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void init125(chpl_ioNewline * this24,
#line 4714 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    chpl_bool skipWhitespaceOnly) {
#line 4720 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  (this24)->skipWhitespaceOnly = skipWhitespaceOnly;
#line 4714 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4714 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4714 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4714 */
#line 4714 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void chpl__auto_destroy_chpl_ioNewline(chpl_ioNewline * this24) {
#line 4714 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4714 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4720 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4720 */
#line 4720 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static chpl_bool init_default_skipWhitespaceOnly(void) {
#line 4720 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return UINT8(false);
#line 4720 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4774 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4774 */
#line 4774 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static int32_t EEOF2(void) {
#line 4774 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int32_t call_tmp8;
#line 4774 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_macro_int_EEOF();
#line 4774 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 4774 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4794 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4794 */
#line 4794 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _ch_ioerror(fileReader_F_defaultDeserializer * this24,
#line 4794 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        syserr error,
#line 4794 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        string * msg,
#line 4794 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        Error * error_out,
#line 4794 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        int64_t _ln,
#line 4794 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                        int32_t _fn) {
#line 4795 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string path;
#line 4796 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t offset2;
#line 4797 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4798 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptrConst_int8_t tmp_path = NULL;
#line 4799 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t tmp_offset;
#line 4800 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr err;
#line 4800 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 4801 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 4801 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 4802 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp11;
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp12;
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t default_arg_length;
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error3 = NULL;
#line 4808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp13 = NULL;
#line 4808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp14;
#line 4812 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error4 = NULL;
#line 4795 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  path = _str_literal_1265;
#line 4796 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  offset2 = INT64(-1);
#line 4797 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileReader__home(this24);
#line 4797 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 4798 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  tmp_path = ((c_ptrConst_int8_t)(nil));
#line 4799 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  tmp_offset = INT64(0);
#line 4800 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 4800 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  err = init_coerce_tmp;
#line 4801 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileReader__channel_internal(this24);
#line 4801 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = qio_channel_path_offset(((int32_t)(UINT8(false))), *(call_tmp9), &tmp_path, &tmp_offset);
#line 4801 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&err, call_tmp10);
#line 4802 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl___EXCLAMATION_2(err);
#line 4802 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp11) /* ZLINE: 4802 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4802 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error2 = NULL;
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    default_arg_length = createCopyingBuffer_default_length(tmp_path, &error2, _ln, _fn);
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 4804 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error2;
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&path, _ln, _fn);
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_ch_ioerror;
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error3 = NULL;
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp12 = createCopyingBuffer(tmp_path, default_arg_length, decodePolicy_replace, &error3, _ln, _fn);
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error3 != nil) /* ZLINE: 4804 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error3;
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&path, _ln, _fn);
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_ch_ioerror;
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_71(&path, &call_tmp12, _ln, _fn);
#line 4804 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 4806 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    deallocate(((c_ptr_void)(tmp_path)), _ln, _fn);
#line 4806 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  } else /* ZLINE: 4807 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4806 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp13 = chpl_get_fileReader__channel_internal(this24);
#line 4808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp14 = qio_channel_offset_unlocked(*(call_tmp13));
#line 4808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_3(&tmp_offset, call_tmp14);
#line 4808 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4810 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_3(&offset2, tmp_offset);
#line 4812 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error4 = NULL;
#line 4812 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioerror(error, msg, &path, offset2, &error4, _ln, _fn);
#line 4812 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error4 != nil) /* ZLINE: 4812 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4812 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4812 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 4812 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4812 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 4812 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error4 != nil) /* ZLINE: 4812 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4812 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4812 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error4;
#line 4812 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&path, _ln, _fn);
#line 4812 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_ch_ioerror;
#line 4812 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4794 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy23(&path, _ln, _fn);
#line 4794 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_ch_ioerror:;
#line 4794 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4794 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4845 */
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _ch_ioerror2(fileWriter_T_defaultSerializer * this24,
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                         syserr error,
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                         string * msg,
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                         Error * error_out,
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                         int64_t _ln,
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                         int32_t _fn) {
#line 4846 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string path;
#line 4847 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t offset2;
#line 4848 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4849 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptrConst_int8_t tmp_path = NULL;
#line 4850 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t tmp_offset;
#line 4851 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr err;
#line 4851 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 4852 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 4852 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 4853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp11;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp12;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t default_arg_length;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error3 = NULL;
#line 4859 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp13 = NULL;
#line 4859 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp14;
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error4 = NULL;
#line 4846 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  path = _str_literal_1265;
#line 4847 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  offset2 = INT64(-1);
#line 4848 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home2(this24);
#line 4848 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 4849 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  tmp_path = ((c_ptrConst_int8_t)(nil));
#line 4850 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  tmp_offset = INT64(0);
#line 4851 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 4851 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  err = init_coerce_tmp;
#line 4852 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal2(this24);
#line 4852 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = qio_channel_path_offset(((int32_t)(UINT8(true))), *(call_tmp9), &tmp_path, &tmp_offset);
#line 4852 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&err, call_tmp10);
#line 4853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl___EXCLAMATION_2(err);
#line 4853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp11) /* ZLINE: 4853 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error2 = NULL;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    default_arg_length = createCopyingBuffer_default_length(tmp_path, &error2, _ln, _fn);
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 4855 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error2;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&path, _ln, _fn);
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_ch_ioerror;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error3 = NULL;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp12 = createCopyingBuffer(tmp_path, default_arg_length, decodePolicy_replace, &error3, _ln, _fn);
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error3 != nil) /* ZLINE: 4855 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error3;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&path, _ln, _fn);
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_ch_ioerror;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_71(&path, &call_tmp12, _ln, _fn);
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 4857 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    deallocate(((c_ptr_void)(tmp_path)), _ln, _fn);
#line 4857 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  } else /* ZLINE: 4858 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4857 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4859 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp13 = chpl_get_fileWriter__channel_internal2(this24);
#line 4859 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp14 = qio_channel_offset_unlocked(*(call_tmp13));
#line 4859 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_3(&tmp_offset, call_tmp14);
#line 4859 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4861 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_3(&offset2, tmp_offset);
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error4 = NULL;
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioerror(error, msg, &path, offset2, &error4, _ln, _fn);
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error4 != nil) /* ZLINE: 4863 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error4 != nil) /* ZLINE: 4863 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error4;
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&path, _ln, _fn);
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_ch_ioerror;
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy23(&path, _ln, _fn);
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_ch_ioerror:;
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4845 */
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _ch_ioerror3(fileWriter_F_defaultSerializer * this24,
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                         syserr error,
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                         string * msg,
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                         Error * error_out,
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                         int64_t _ln,
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                         int32_t _fn) {
#line 4846 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string path;
#line 4847 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t offset2;
#line 4848 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4849 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptrConst_int8_t tmp_path = NULL;
#line 4850 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t tmp_offset;
#line 4851 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr err;
#line 4851 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 4852 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 4852 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 4853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp11;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp12;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t default_arg_length;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error3 = NULL;
#line 4859 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp13 = NULL;
#line 4859 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp14;
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error4 = NULL;
#line 4846 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  path = _str_literal_1265;
#line 4847 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  offset2 = INT64(-1);
#line 4848 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home(this24);
#line 4848 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 4849 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  tmp_path = ((c_ptrConst_int8_t)(nil));
#line 4850 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  tmp_offset = INT64(0);
#line 4851 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 4851 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  err = init_coerce_tmp;
#line 4852 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal(this24);
#line 4852 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = qio_channel_path_offset(((int32_t)(UINT8(false))), *(call_tmp9), &tmp_path, &tmp_offset);
#line 4852 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&err, call_tmp10);
#line 4853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl___EXCLAMATION_2(err);
#line 4853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp11) /* ZLINE: 4853 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error2 = NULL;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    default_arg_length = createCopyingBuffer_default_length(tmp_path, &error2, _ln, _fn);
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 4855 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error2;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&path, _ln, _fn);
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_ch_ioerror;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error3 = NULL;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp12 = createCopyingBuffer(tmp_path, default_arg_length, decodePolicy_replace, &error3, _ln, _fn);
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error3 != nil) /* ZLINE: 4855 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error3;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&path, _ln, _fn);
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_ch_ioerror;
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_71(&path, &call_tmp12, _ln, _fn);
#line 4855 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 4857 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    deallocate(((c_ptr_void)(tmp_path)), _ln, _fn);
#line 4857 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  } else /* ZLINE: 4858 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4857 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4859 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp13 = chpl_get_fileWriter__channel_internal(this24);
#line 4859 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp14 = qio_channel_offset_unlocked(*(call_tmp13));
#line 4859 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_3(&tmp_offset, call_tmp14);
#line 4859 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4861 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_3(&offset2, tmp_offset);
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error4 = NULL;
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioerror(error, msg, &path, offset2, &error4, _ln, _fn);
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error4 != nil) /* ZLINE: 4863 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error4 != nil) /* ZLINE: 4863 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error4;
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&path, _ln, _fn);
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_ch_ioerror;
#line 4863 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy23(&path, _ln, _fn);
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_ch_ioerror:;
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4845 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4915 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4915 */
#line 4915 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void lock2(fileWriter_T_defaultSerializer * this24,
#line 4915 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                  Error * error_out,
#line 4915 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                  int64_t _ln,
#line 4915 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                  int32_t _fn) {
#line 4916 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr err;
#line 4916 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 4918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 4918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_SystemError call_tmp10;
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error call_tmp11 = NULL;
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_Error _formal_tmp_in_err;
#line 4923 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 4924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp13 = NULL;
#line 4924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp14;
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp15;
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 4916 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 4916 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  err = init_coerce_tmp;
#line 4918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal2(this24);
#line 4918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___EQUALS_26(*(call_tmp8), nil);
#line 4918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 4918 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = createSystemError2(((int64_t)(EINVAL)), &_str_literal_1333, _ln, _fn);
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _formal_tmp_in_err = chpl___COLON_33(&call_tmp10, _ln, _fn);
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = call_tmp11;
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endlock;
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4923 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileWriter__home2(this24);
#line 4923 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp12, _ln, _fn);
#line 4924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileWriter__channel_internal2(this24);
#line 4924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = qio_channel_lock(*(call_tmp13));
#line 4924 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&err, call_tmp14);
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = _cond_test7(err);
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp15) /* ZLINE: 4927 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _ch_ioerror2(this24, err, &_str_literal_1332, &error, _ln, _fn);
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 4927 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler;
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler:;
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 4927 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _endlock;
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endlock:;
#line 4915 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4915 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4915 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4915 */
#line 4915 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void lock3(fileWriter_F_defaultSerializer * this24,
#line 4915 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                  Error * error_out,
#line 4915 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                  int64_t _ln,
#line 4915 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                  int32_t _fn) {
#line 4916 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 4918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 4918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_SystemError call_tmp10;
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error call_tmp11 = NULL;
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_Error _formal_tmp_in_err;
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp12;
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 4916 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 4918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(this24);
#line 4918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___EQUALS_26(*(call_tmp8), nil);
#line 4918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 4918 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4918 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = createSystemError2(((int64_t)(EINVAL)), &_str_literal_1333, _ln, _fn);
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _formal_tmp_in_err = chpl___COLON_33(&call_tmp10, _ln, _fn);
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = call_tmp11;
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endlock;
#line 4919 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = _cond_test7(init_coerce_tmp);
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp12) /* ZLINE: 4927 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _ch_ioerror3(this24, init_coerce_tmp, &_str_literal_1332, &error, _ln, _fn);
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 4927 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler;
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler:;
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 4927 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _endlock;
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 4927 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endlock:;
#line 4915 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4915 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4946 */
#line 4946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void unlock2(fileWriter_T_defaultSerializer * this24,
#line 4946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 4946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 4948 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 4949 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 4948 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home2(this24);
#line 4948 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 4949 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal2(this24);
#line 4949 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  qio_channel_unlock(*(call_tmp9));
#line 4946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4946 */
#line 4946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void unlock3(fileWriter_F_defaultSerializer * this24) {
#line 4946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 4946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 4986 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:4986 */
#line 4986 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static int64_t offset(fileWriter_F_defaultSerializer * this24) {
#line 4988 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 4988 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp9;
#line 4988 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(this24);
#line 4988 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = qio_channel_offset_unlocked(*(call_tmp8));
#line 4986 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp9;
#line 4986 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5582 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5582 */
#line 5582 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static locale getLocaleOfIoRequest(fileWriter_F_defaultSerializer * this24,
#line 5582 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   int64_t _ln,
#line 5582 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   int32_t _fn) {
#line 5585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale local_nilLocale;
#line 5582 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale ret;
#line 5584 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 5584 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale ret2;
#line 5585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 5586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale call_tmp10;
#line 5585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  local_nilLocale = nilLocale;
#line 5584 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__readWriteThisFromLocale(this24);
#line 5584 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_ASSIGN_(&ret2, call_tmp8);
#line 5585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___EQUALS_19(&ret2, &local_nilLocale, _ln, _fn);
#line 5585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 5585 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = here(_ln, _fn);
#line 5586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_58(&ret2, &call_tmp10);
#line 5586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&call_tmp10);
#line 5586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = ret2;
#line 5582 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 5582 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5582 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5582 */
#line 5582 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static locale getLocaleOfIoRequest2(fileWriter_T_defaultSerializer * this24,
#line 5582 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    int64_t _ln,
#line 5582 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    int32_t _fn) {
#line 5585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale local_nilLocale;
#line 5582 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale ret;
#line 5584 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 5584 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale ret2;
#line 5585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 5586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale call_tmp10;
#line 5585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  local_nilLocale = nilLocale;
#line 5584 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__readWriteThisFromLocale2(this24);
#line 5584 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_ASSIGN_(&ret2, call_tmp8);
#line 5585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___EQUALS_19(&ret2, &local_nilLocale, _ln, _fn);
#line 5585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 5585 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5585 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = here(_ln, _fn);
#line 5586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_58(&ret2, &call_tmp10);
#line 5586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&call_tmp10);
#line 5586 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5587 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = ret2;
#line 5582 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 5582 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5827 */
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static fileReader_T_defaultDeserializer reader2(file * this24,
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                range_int64_t_low_one region,
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                ioHintSet * hints,
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                defaultDeserializer * deserializer3,
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                Error * error_out,
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                int64_t _ln,
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                int32_t _fn) {
#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer _formal_tmp_deserializer;
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileReader_T_defaultDeserializer ret;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileReader_T_defaultDeserializer call_tmp8;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal default_arg_style;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer _formal_tmp_in_deserializer;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_deserializer = *(deserializer3);
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_style = readerHelper_default_style2(this24, &error, _ln, _fn);
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 5831 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy43(&_formal_tmp_deserializer);
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endreader;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in_deserializer = _formal_tmp_deserializer;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = readerHelper(this24, region, hints, &default_arg_style, &_formal_tmp_in_deserializer, &error2, _ln, _fn);
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 5831 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endreader;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endreader:;
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5827 */
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static fileReader_F_defaultDeserializer reader(file * this24,
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                               range_int64_t_low_one region,
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                               ioHintSet * hints,
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                               defaultDeserializer * deserializer3,
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                               Error * error_out,
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                               int64_t _ln,
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                               int32_t _fn) {
#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer _formal_tmp_deserializer;
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileReader_F_defaultDeserializer ret;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileReader_F_defaultDeserializer call_tmp8;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal default_arg_style;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer _formal_tmp_in_deserializer;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_deserializer = *(deserializer3);
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_style = readerHelper_default_style(this24, &error, _ln, _fn);
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 5831 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy43(&_formal_tmp_deserializer);
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endreader;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in_deserializer = _formal_tmp_deserializer;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = readerHelper2(this24, region, hints, &default_arg_style, &_formal_tmp_in_deserializer, &error2, _ln, _fn);
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 5831 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endreader;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 5831 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endreader:;
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 5827 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5828 */
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static ioHintSet reader_default_hints(file * this24,
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      Error * error_out) {
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioHintSet hints;
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  hints = empty2();
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return hints;
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5828 */
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static range_int64_t_low_one reader_default_region(file * this24,
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   Error * error_out) {
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  range_int64_t_low_one region;
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  region = chpl_build_low_bounded_range(INT64(0));
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return region;
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5828 */
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static ioHintSet reader_default_hints2(file * this24,
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                       Error * error_out) {
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioHintSet hints;
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  hints = empty2();
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return hints;
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5828 */
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static range_int64_t_low_one reader_default_region2(file * this24,
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                    Error * error_out) {
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  range_int64_t_low_one region;
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  region = chpl_build_low_bounded_range(INT64(0));
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return region;
#line 5828 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5829 */
#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static defaultDeserializer reader_default_deserializer(file * this24,
#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                       Error * error_out) {
#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer deserializer3;
#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deserializer3 = defaultSerializeVal2();
#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return deserializer3;
#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5829 */
#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static defaultDeserializer reader_default_deserializer2(file * this24,
#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                        Error * error_out) {
#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer deserializer3;
#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deserializer3 = defaultSerializeVal2();
#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return deserializer3;
#line 5829 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5836 */
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static fileReader_F_defaultDeserializer readerHelper2(file * this24,
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                      range_int64_t_low_one region,
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                      ioHintSet * hints,
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                      iostyleInternal * style,
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                      defaultDeserializer * deserializer3,
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                      Error * error_out,
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                      int64_t _ln,
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                      int32_t _fn) {
#line 5839 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer _formal_tmp_deserializer;
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileReader_F_defaultDeserializer ret;
#line 5841 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp8;
#line 5841 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_IllegalArgumentError call_tmp10;
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  IllegalArgumentError new_temp = NULL;
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_IllegalArgumentError initTemp;
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error call_tmp11 = NULL;
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_Error _formal_tmp_in_err;
#line 5848 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileReader_F_defaultDeserializer ret2;
#line 5849 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr err;
#line 5849 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 5850 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 5859 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp13;
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileReader_F_defaultDeserializer call_tmp14;
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileReader_F_defaultDeserializer initTemp2;
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer _formal_tmp_in_deserializer;
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr _formal_tmp_out_error;
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp15;
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp16;
#line 5839 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_deserializer = *(deserializer3);
#line 5841 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = low(region);
#line 5841 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___LESS_3(call_tmp8, INT64(0));
#line 5841 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 5841 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5841 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    new_temp = _new15(&_str_literal_1353, _ln, _fn);
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    init75(&initTemp, new_temp);
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = initTemp;
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _formal_tmp_in_err = chpl___COLON_35(&call_tmp10, _ln, _fn);
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = call_tmp11;
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy43(&_formal_tmp_deserializer);
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_readerHelper;
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5848 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init118(&ret2, _ln, _fn);
#line 5849 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 5849 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  err = init_coerce_tmp;
#line 5850 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_file__home(this24);
#line 5850 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp12, _ln, _fn);
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  checkAssumingLocal(this24, &error, _ln, _fn);
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 5853 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 5853 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy37(&ret2, _ln, _fn);
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy43(&_formal_tmp_deserializer);
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_readerHelper;
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5859 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = low(region);
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in_deserializer = _formal_tmp_deserializer;
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init122(&initTemp2, &_formal_tmp_in_deserializer, this24, &_formal_tmp_out_error, hints, call_tmp13, INT64(9223372036854775807), *(style), _ln, _fn);
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&err, _formal_tmp_out_error);
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = initTemp2;
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_83(&ret2, &call_tmp14, _ln, _fn);
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy37(&call_tmp14, _ln, _fn);
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = _cond_test7(err);
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp15) /* ZLINE: 5874 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error2 = NULL;
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp16 = _tryGetPath(this24, _ln, _fn);
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    ioerror2(err, &_str_literal_1354, &call_tmp16, &error2, _ln, _fn);
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 5874 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler2;
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler2:;
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 5874 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error2;
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy37(&ret2, _ln, _fn);
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy43(&_formal_tmp_deserializer);
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_readerHelper;
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5876 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = ret2;
#line 5876 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy43(&_formal_tmp_deserializer);
#line 5876 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_readerHelper:;
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5836 */
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static fileReader_T_defaultDeserializer readerHelper(file * this24,
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                     range_int64_t_low_one region,
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                     ioHintSet * hints,
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                     iostyleInternal * style,
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                     defaultDeserializer * deserializer3,
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                     Error * error_out,
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                     int64_t _ln,
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                     int32_t _fn) {
#line 5839 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer _formal_tmp_deserializer;
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileReader_T_defaultDeserializer ret;
#line 5841 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp8;
#line 5841 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_IllegalArgumentError call_tmp10;
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  IllegalArgumentError new_temp = NULL;
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_IllegalArgumentError initTemp;
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error call_tmp11 = NULL;
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_Error _formal_tmp_in_err;
#line 5848 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileReader_T_defaultDeserializer ret2;
#line 5849 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr err;
#line 5849 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 5850 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 5859 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp13;
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileReader_T_defaultDeserializer call_tmp14;
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileReader_T_defaultDeserializer initTemp2;
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer _formal_tmp_in_deserializer;
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr _formal_tmp_out_error;
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp15;
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp16;
#line 5839 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_deserializer = *(deserializer3);
#line 5841 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = low(region);
#line 5841 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___LESS_3(call_tmp8, INT64(0));
#line 5841 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 5841 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5841 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    new_temp = _new15(&_str_literal_1353, _ln, _fn);
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    init75(&initTemp, new_temp);
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = initTemp;
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _formal_tmp_in_err = chpl___COLON_35(&call_tmp10, _ln, _fn);
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = call_tmp11;
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy43(&_formal_tmp_deserializer);
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_readerHelper;
#line 5842 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5848 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init117(&ret2, _ln, _fn);
#line 5849 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 5849 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  err = init_coerce_tmp;
#line 5850 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_file__home(this24);
#line 5850 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp12, _ln, _fn);
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  checkAssumingLocal(this24, &error, _ln, _fn);
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 5853 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 5853 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy54(&ret2, _ln, _fn);
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy43(&_formal_tmp_deserializer);
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_readerHelper;
#line 5853 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5859 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = low(region);
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in_deserializer = _formal_tmp_deserializer;
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init121(&initTemp2, &_formal_tmp_in_deserializer, this24, &_formal_tmp_out_error, hints, call_tmp13, INT64(9223372036854775807), *(style), _ln, _fn);
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&err, _formal_tmp_out_error);
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = initTemp2;
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_82(&ret2, &call_tmp14, _ln, _fn);
#line 5871 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy54(&call_tmp14, _ln, _fn);
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = _cond_test7(err);
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp15) /* ZLINE: 5874 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error2 = NULL;
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp16 = _tryGetPath(this24, _ln, _fn);
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    ioerror2(err, &_str_literal_1354, &call_tmp16, &error2, _ln, _fn);
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 5874 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler2;
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler2:;
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 5874 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error2;
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy54(&ret2, _ln, _fn);
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy43(&_formal_tmp_deserializer);
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_readerHelper;
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 5874 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5876 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = ret2;
#line 5876 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy43(&_formal_tmp_deserializer);
#line 5876 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_readerHelper:;
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 5836 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5838 */
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static iostyleInternal readerHelper_default_style(file * this24,
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                  Error * error_out,
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                  int64_t _ln,
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                  int32_t _fn) {
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal ret;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal style;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  style = _style(this24, &error, _ln, _fn);
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 5838 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endreaderHelper_default_style;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = style;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endreaderHelper_default_style:;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5838 */
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static iostyleInternal readerHelper_default_style2(file * this24,
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   Error * error_out,
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   int64_t _ln,
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   int32_t _fn) {
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal ret;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal style;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  style = _style(this24, &error, _ln, _fn);
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 5838 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endreaderHelper_default_style;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = style;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endreaderHelper_default_style:;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 5838 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5931 */
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static fileWriter_T_defaultSerializer writer(file * this24,
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                             range_int64_t_low_one region,
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                             ioHintSet * hints,
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                             defaultSerializer * serializer2,
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                             Error * error_out,
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                             int64_t _ln,
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                             int32_t _fn) {
#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_serializer;
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_T_defaultSerializer ret;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_T_defaultSerializer call_tmp8;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal default_arg_style;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_in_serializer;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_serializer = *(serializer2);
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_style = writerHelper_default_style2(this24, &error, _ln, _fn);
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 5935 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy9(&_formal_tmp_serializer);
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriter;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in_serializer = _formal_tmp_serializer;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = writerHelper(this24, region, hints, &default_arg_style, &_formal_tmp_in_serializer, &error2, _ln, _fn);
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 5935 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriter;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwriter:;
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5931 */
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static fileWriter_F_defaultSerializer writer2(file * this24,
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                              range_int64_t_low_one region,
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                              ioHintSet * hints,
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                              defaultSerializer * serializer2,
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                              Error * error_out,
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                              int64_t _ln,
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                              int32_t _fn) {
#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_serializer;
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer ret;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer call_tmp8;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal default_arg_style;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_in_serializer;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_serializer = *(serializer2);
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_style = writerHelper_default_style(this24, &error, _ln, _fn);
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 5935 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy9(&_formal_tmp_serializer);
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriter;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in_serializer = _formal_tmp_serializer;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = writerHelper2(this24, region, hints, &default_arg_style, &_formal_tmp_in_serializer, &error2, _ln, _fn);
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 5935 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriter;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 5935 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwriter:;
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 5931 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5932 */
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static ioHintSet writer_default_hints(file * this24,
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      Error * error_out) {
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioHintSet hints;
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  hints = empty2();
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return hints;
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5932 */
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static range_int64_t_low_one writer_default_region2(file * this24,
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                    Error * error_out) {
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  range_int64_t_low_one region;
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  region = chpl_build_low_bounded_range(INT64(0));
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return region;
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5932 */
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static range_int64_t_low_one writer_default_region(file * this24,
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   Error * error_out) {
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  range_int64_t_low_one region;
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  region = chpl_build_low_bounded_range(INT64(0));
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return region;
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5932 */
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static ioHintSet writer_default_hints2(file * this24,
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                       Error * error_out) {
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioHintSet hints;
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  hints = empty2();
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return hints;
#line 5932 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5933 */
#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static defaultSerializer writer_default_serializer2(file * this24,
#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                    Error * error_out) {
#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer serializer2;
#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  serializer2 = defaultSerializeVal();
#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return serializer2;
#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5933 */
#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static defaultSerializer writer_default_serializer(file * this24,
#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   Error * error_out) {
#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer serializer2;
#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  serializer2 = defaultSerializeVal();
#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return serializer2;
#line 5933 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5939 */
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static fileWriter_F_defaultSerializer writerHelper2(file * this24,
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                    range_int64_t_low_one region,
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                    ioHintSet * hints,
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                    iostyleInternal * style,
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                    defaultSerializer * serializer2,
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                    Error * error_out,
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                    int64_t _ln,
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                    int32_t _fn) {
#line 5942 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_serializer;
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer ret;
#line 5945 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp8;
#line 5945 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_IllegalArgumentError call_tmp10;
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  IllegalArgumentError new_temp = NULL;
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_IllegalArgumentError initTemp;
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error call_tmp11 = NULL;
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_Error _formal_tmp_in_err;
#line 5953 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer ret2;
#line 5954 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr err;
#line 5954 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 5955 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 5964 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp13;
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer call_tmp14;
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer initTemp2;
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_in_serializer;
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr _formal_tmp_out_error;
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp15;
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp16;
#line 5942 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_serializer = *(serializer2);
#line 5945 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = low(region);
#line 5945 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___LESS_3(call_tmp8, INT64(0));
#line 5945 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 5945 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5945 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    new_temp = _new15(&_str_literal_1353, _ln, _fn);
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    init75(&initTemp, new_temp);
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = initTemp;
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _formal_tmp_in_err = chpl___COLON_35(&call_tmp10, _ln, _fn);
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = call_tmp11;
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy9(&_formal_tmp_serializer);
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_writerHelper;
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5953 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init120(&ret2, _ln, _fn);
#line 5954 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 5954 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  err = init_coerce_tmp;
#line 5955 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_file__home(this24);
#line 5955 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp12, _ln, _fn);
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  checkAssumingLocal(this24, &error, _ln, _fn);
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 5958 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 5958 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy39(&ret2, _ln, _fn);
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy9(&_formal_tmp_serializer);
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_writerHelper;
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5964 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = low(region);
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in_serializer = _formal_tmp_serializer;
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init123(&initTemp2, &_formal_tmp_in_serializer, this24, &_formal_tmp_out_error, hints, call_tmp13, INT64(9223372036854775807), *(style), _ln, _fn);
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&err, _formal_tmp_out_error);
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = initTemp2;
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_84(&ret2, &call_tmp14, _ln, _fn);
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy39(&call_tmp14, _ln, _fn);
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = _cond_test7(err);
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp15) /* ZLINE: 5979 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error2 = NULL;
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp16 = _tryGetPath(this24, _ln, _fn);
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    ioerror2(err, &_str_literal_1355, &call_tmp16, &error2, _ln, _fn);
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 5979 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler2;
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler2:;
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 5979 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error2;
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy39(&ret2, _ln, _fn);
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy9(&_formal_tmp_serializer);
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_writerHelper;
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5981 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = ret2;
#line 5981 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy9(&_formal_tmp_serializer);
#line 5981 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_writerHelper:;
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5939 */
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static fileWriter_T_defaultSerializer writerHelper(file * this24,
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   range_int64_t_low_one region,
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   ioHintSet * hints,
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   iostyleInternal * style,
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   defaultSerializer * serializer2,
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   Error * error_out,
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   int64_t _ln,
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   int32_t _fn) {
#line 5942 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_serializer;
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_T_defaultSerializer ret;
#line 5945 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp8;
#line 5945 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_IllegalArgumentError call_tmp10;
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  IllegalArgumentError new_temp = NULL;
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_IllegalArgumentError initTemp;
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error call_tmp11 = NULL;
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_Error _formal_tmp_in_err;
#line 5953 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_T_defaultSerializer ret2;
#line 5954 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr err;
#line 5954 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 5955 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 5964 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp13;
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_T_defaultSerializer call_tmp14;
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_T_defaultSerializer initTemp2;
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer _formal_tmp_in_serializer;
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr _formal_tmp_out_error;
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp15;
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp16;
#line 5942 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_serializer = *(serializer2);
#line 5945 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = low(region);
#line 5945 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___LESS_3(call_tmp8, INT64(0));
#line 5945 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 5945 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5945 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    new_temp = _new15(&_str_literal_1353, _ln, _fn);
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    init75(&initTemp, new_temp);
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = initTemp;
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _formal_tmp_in_err = chpl___COLON_35(&call_tmp10, _ln, _fn);
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = call_tmp11;
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy9(&_formal_tmp_serializer);
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_writerHelper;
#line 5946 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5953 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init119(&ret2, _ln, _fn);
#line 5954 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 5954 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  err = init_coerce_tmp;
#line 5955 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_file__home(this24);
#line 5955 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp12, _ln, _fn);
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  checkAssumingLocal(this24, &error, _ln, _fn);
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 5958 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 5958 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy20(&ret2, _ln, _fn);
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy9(&_formal_tmp_serializer);
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_writerHelper;
#line 5958 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5964 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = low(region);
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _formal_tmp_in_serializer = _formal_tmp_serializer;
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init124(&initTemp2, &_formal_tmp_in_serializer, this24, &_formal_tmp_out_error, hints, call_tmp13, INT64(9223372036854775807), *(style), _ln, _fn);
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&err, _formal_tmp_out_error);
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = initTemp2;
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_85(&ret2, &call_tmp14, _ln, _fn);
#line 5976 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy20(&call_tmp14, _ln, _fn);
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = _cond_test7(err);
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp15) /* ZLINE: 5979 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error2 = NULL;
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp16 = _tryGetPath(this24, _ln, _fn);
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    ioerror2(err, &_str_literal_1355, &call_tmp16, &error2, _ln, _fn);
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 5979 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler2;
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler2:;
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 5979 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error2;
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy20(&ret2, _ln, _fn);
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy9(&_formal_tmp_serializer);
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_writerHelper;
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 5979 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5981 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = ret2;
#line 5981 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy9(&_formal_tmp_serializer);
#line 5981 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_writerHelper:;
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 5939 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5941 */
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static iostyleInternal writerHelper_default_style(file * this24,
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                  Error * error_out,
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                  int64_t _ln,
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                  int32_t _fn) {
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal ret;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal style;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  style = _style(this24, &error, _ln, _fn);
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 5941 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriterHelper_default_style;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = style;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwriterHelper_default_style:;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:5941 */
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static iostyleInternal writerHelper_default_style2(file * this24,
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   Error * error_out,
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   int64_t _ln,
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                                   int32_t _fn) {
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal ret;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  iostyleInternal style;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  style = _style(this24, &error, _ln, _fn);
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 5941 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriterHelper_default_style;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = style;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwriterHelper_default_style:;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 5941 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6076 */
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_text_internal(qio_channel_t * _channel_internal,
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   ArrayInit x2,
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   int64_t _ln,
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   int32_t _fn) {
#line 6110 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp8;
#line 6111 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string s;
#line 6112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 6112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp10;
#line 6112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp11;
#line 6113 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptrConst_int8_t call_tmp12 = NULL;
#line 6113 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp13;
#line 6113 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp14;
#line 6110 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = qio_channel_style_element(_channel_internal, QIO_STYLE_ELEMENT_AGGREGATE);
#line 6111 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  s = chpl___COLON_3(x2, _ln, _fn);
#line 6112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___EQUALS_3(call_tmp8, QIO_AGGREGATE_FORMAT_JSON);
#line 6112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 6112 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = chpl___PLUS_9(&_str_literal_17, &s, _ln, _fn);
#line 6112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl___PLUS_9(&call_tmp10, &_str_literal_17, _ln, _fn);
#line 6112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_71(&s, &call_tmp11, _ln, _fn);
#line 6112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 6112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&call_tmp10, _ln, _fn);
#line 6112 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6113 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = c_str(&s, _ln, _fn);
#line 6113 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = numBytes(&s);
#line 6113 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = qio_channel_print_literal(((int32_t)(UINT8(false))), _channel_internal, call_tmp12, call_tmp13);
#line 6113 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy23(&s, _ln, _fn);
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp14;
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6076 */
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_text_internal3(qio_channel_t * _channel_internal,
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    int64_t x2,
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    int64_t _ln,
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    int32_t _fn) {
#line 6085 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp8;
#line 6085 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = qio_channel_print_int(((int32_t)(UINT8(false))), _channel_internal, &x2, ((uint64_t)(INT64(8))), ((int32_t)(UINT8(true))));
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6076 */
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_text_internal2(qio_channel_t * _channel_internal,
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    string * x2,
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    int64_t _ln,
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    int32_t _fn) {
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 6099 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 6099 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string local_x;
#line 6101 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_bool call_tmp9 = NULL;
#line 6104 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptrConst_int8_t call_tmp10 = NULL;
#line 6104 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp11;
#line 6104 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp12;
#line 6099 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = localize(x2, _ln, _fn);
#line 6099 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  local_x = call_tmp8;
#line 6101 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_string_hasEscapes(&local_x);
#line 6101 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (*(call_tmp9)) /* ZLINE: 6101 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6101 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6102 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    ret = chpl___COLON_68(EILSEQ);
#line 6102 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&local_x, _ln, _fn);
#line 6102 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__write_text_internal;
#line 6102 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6104 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = c_str(&local_x, _ln, _fn);
#line 6104 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = numBytes(&local_x);
#line 6104 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = qio_channel_print_string(((int32_t)(UINT8(false))), _channel_internal, call_tmp10, call_tmp11);
#line 6104 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp12;
#line 6104 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy23(&local_x, _ln, _fn);
#line 6104 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__write_text_internal:;
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 6076 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6223 */
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_binary_internal9(qio_channel_t * _channel_internal,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      uint8_t x2,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int64_t _ln,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int32_t _fn) {
#line 6232 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp8;
#line 6232 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = qio_channel_write_byte(((int32_t)(UINT8(false))), _channel_internal, x2);
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6223 */
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_binary_internal5(qio_channel_t * _channel_internal,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int64_t x2,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int64_t _ln,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int32_t _fn) {
#line 6242 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp8;
#line 6242 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = qio_channel_write_int64(((int32_t)(UINT8(false))), INT32(1), _channel_internal, x2);
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6223 */
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_binary_internal4(qio_channel_t * _channel_internal,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      ArrayInit x2,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int64_t _ln,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int32_t _fn) {
#line 6286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp8;
#line 6286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  uint8_t call_tmp9;
#line 6288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 6286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl__enumToOrder(x2, _ln, _fn);
#line 6286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___COLON_5(call_tmp8, _ln, _fn);
#line 6288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = _write_binary_internal6(_channel_internal, call_tmp9, _ln, _fn);
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp10;
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6223 */
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_binary_internal2(qio_channel_t * _channel_internal,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      uint8_t x2,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int64_t _ln,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int32_t _fn) {
#line 6232 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp8;
#line 6232 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = qio_channel_write_byte(((int32_t)(UINT8(false))), _channel_internal, x2);
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6223 */
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_binary_internal3(qio_channel_t * _channel_internal,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      ArrayInit x2,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int64_t _ln,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int32_t _fn) {
#line 6286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp8;
#line 6286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  uint8_t call_tmp9;
#line 6288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 6286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl__enumToOrder(x2, _ln, _fn);
#line 6286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___COLON_5(call_tmp8, _ln, _fn);
#line 6288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = _write_binary_internal2(_channel_internal, call_tmp9, _ln, _fn);
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp10;
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6223 */
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_binary_internal10(qio_channel_t * _channel_internal,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                       string * x2,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                       int64_t _ln,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                       int32_t _fn) {
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 6276 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string local_x;
#line 6278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp9;
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptrConst_int8_t call_tmp10 = NULL;
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp11;
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp12;
#line 6276 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  local_x = localize(x2, _ln, _fn);
#line 6278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_string_hasEscapes(&local_x);
#line 6278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (*(call_tmp8)) /* ZLINE: 6278 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6279 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    ret = chpl___COLON_68(EILSEQ);
#line 6279 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&local_x, _ln, _fn);
#line 6279 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__write_binary_internal;
#line 6279 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = qio_channel_str_style(_channel_internal);
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = c_str(&local_x, _ln, _fn);
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = numBytes(&local_x);
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = qio_channel_write_string(((int32_t)(UINT8(false))), INT32(1), call_tmp9, _channel_internal, call_tmp10, call_tmp11);
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp12;
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy23(&local_x, _ln, _fn);
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__write_binary_internal:;
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6223 */
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_binary_internal11(qio_channel_t * _channel_internal,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                       string * x2,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                       int64_t _ln,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                       int32_t _fn) {
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 6276 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string local_x;
#line 6278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp9;
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptrConst_int8_t call_tmp10 = NULL;
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp11;
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp12;
#line 6276 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  local_x = localize(x2, _ln, _fn);
#line 6278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_string_hasEscapes(&local_x);
#line 6278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (*(call_tmp8)) /* ZLINE: 6278 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6279 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    ret = chpl___COLON_68(EILSEQ);
#line 6279 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&local_x, _ln, _fn);
#line 6279 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__write_binary_internal;
#line 6279 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = qio_channel_str_style(_channel_internal);
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = c_str(&local_x, _ln, _fn);
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = numBytes(&local_x);
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = qio_channel_write_string(((int32_t)(UINT8(false))), INT32(3), call_tmp9, _channel_internal, call_tmp10, call_tmp11);
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp12;
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy23(&local_x, _ln, _fn);
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__write_binary_internal:;
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6223 */
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_binary_internal12(qio_channel_t * _channel_internal,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                       string * x2,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                       int64_t _ln,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                       int32_t _fn) {
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 6276 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string local_x;
#line 6278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp9;
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptrConst_int8_t call_tmp10 = NULL;
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp11;
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp12;
#line 6276 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  local_x = localize(x2, _ln, _fn);
#line 6278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_string_hasEscapes(&local_x);
#line 6278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (*(call_tmp8)) /* ZLINE: 6278 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6278 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6279 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    ret = chpl___COLON_68(EILSEQ);
#line 6279 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&local_x, _ln, _fn);
#line 6279 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__write_binary_internal;
#line 6279 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = qio_channel_str_style(_channel_internal);
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = c_str(&local_x, _ln, _fn);
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = numBytes(&local_x);
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = qio_channel_write_string(((int32_t)(UINT8(false))), INT32(2), call_tmp9, _channel_internal, call_tmp10, call_tmp11);
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp12;
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy23(&local_x, _ln, _fn);
#line 6281 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__write_binary_internal:;
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6223 */
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_binary_internal8(qio_channel_t * _channel_internal,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int64_t x2,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int64_t _ln,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int32_t _fn) {
#line 6242 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp8;
#line 6242 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = qio_channel_write_int64(((int32_t)(UINT8(false))), INT32(2), _channel_internal, x2);
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6223 */
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_binary_internal(qio_channel_t * _channel_internal,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                     ArrayInit x2,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                     int64_t _ln,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                     int32_t _fn) {
#line 6286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp8;
#line 6286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  uint8_t call_tmp9;
#line 6288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp10;
#line 6286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl__enumToOrder(x2, _ln, _fn);
#line 6286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___COLON_5(call_tmp8, _ln, _fn);
#line 6288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = _write_binary_internal9(_channel_internal, call_tmp9, _ln, _fn);
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp10;
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6223 */
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_binary_internal7(qio_channel_t * _channel_internal,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int64_t x2,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int64_t _ln,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int32_t _fn) {
#line 6242 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp8;
#line 6242 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = qio_channel_write_int64(((int32_t)(UINT8(false))), INT32(3), _channel_internal, x2);
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6223 */
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_binary_internal6(qio_channel_t * _channel_internal,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      uint8_t x2,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int64_t _ln,
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                      int32_t _fn) {
#line 6232 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp8;
#line 6232 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = qio_channel_write_byte(((int32_t)(UINT8(false))), _channel_internal, x2);
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 6223 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6309 */
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string _constructIoErrorMsg4(fileWriter_F_defaultSerializer * this24,
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    chpl_ioNewline * x2,
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    int64_t _ln,
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    int32_t _fn) {
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 6310 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string result;
#line 6310 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  result = chpl__initCopy6(&_str_literal_1368, UINT8(false), _ln, _fn);
#line 6311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___PLUS__ASSIGN_3(&result, &_str_literal_3371, _ln, _fn);
#line 6314 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___PLUS__ASSIGN_3(&result, &_str_literal_3372, _ln, _fn);
#line 6318 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = result;
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6309 */
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string _constructIoErrorMsg3(fileWriter_F_defaultSerializer * this24,
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    int64_t x2,
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    int64_t _ln,
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    int32_t _fn) {
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 6310 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string result;
#line 6310 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  result = chpl__initCopy6(&_str_literal_1368, UINT8(false), _ln, _fn);
#line 6311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___PLUS__ASSIGN_3(&result, &_str_literal_3197, _ln, _fn);
#line 6318 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = result;
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6309 */
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string _constructIoErrorMsg2(fileWriter_F_defaultSerializer * this24,
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    ArrayInit x2,
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    int64_t _ln,
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                    int32_t _fn) {
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 6310 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string result;
#line 6310 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  result = chpl__initCopy6(&_str_literal_1368, UINT8(false), _ln, _fn);
#line 6311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___PLUS__ASSIGN_3(&result, &_str_literal_2879, _ln, _fn);
#line 6318 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = result;
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6309 */
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string _constructIoErrorMsg(fileWriter_F_defaultSerializer * this24,
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   string * x2,
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   int64_t _ln,
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   int32_t _fn) {
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 6310 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string result;
#line 6310 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  result = chpl__initCopy6(&_str_literal_1368, UINT8(false), _ln, _fn);
#line 6311 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___PLUS__ASSIGN_3(&result, &_str_literal_3301, _ln, _fn);
#line 6318 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = result;
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 6309 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6370 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6370 */
#line 6370 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string escapedNonUTF8ErrorMessage(int64_t _ln,
#line 6370 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                         int32_t _fn) {
#line 6371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 6371 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = chpl__initCopy6(&_str_literal_3340, UINT8(false), _ln, _fn);
#line 6370 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 6370 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6377 */
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _serializeOne8(fileWriter_F_defaultSerializer * this24,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           R * x2,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           locale * loc,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           Error * error_out,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int64_t _ln,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int32_t _fn) {
#line 6384 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer writer3;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp10 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp11 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp13 = NULL;
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp14 = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultSerializer call_tmp15 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(&writer3);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal(this24);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp8, *(call_tmp9));
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileWriter__serializer(&writer3);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileWriter__serializer(this24);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(call_tmp10) = *(call_tmp11);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileWriter__home(&writer3);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileWriter__home(this24);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp12, call_tmp13);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_fileWriter__readWriteThisFromLocale(&writer3);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp14, loc);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = serializer(&writer3, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  serializeValue2(call_tmp15, &writer3, x2, &error, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__serializeOne;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__serializeOne:;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6377 */
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _serializeOne3(fileWriter_F_defaultSerializer * this24,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int64_t x2,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           locale * loc,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           Error * error_out,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int64_t _ln,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int32_t _fn) {
#line 6384 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer writer3;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp10 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp11 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp13 = NULL;
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp14 = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultSerializer call_tmp15 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(&writer3);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal(this24);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp8, *(call_tmp9));
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileWriter__serializer(&writer3);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileWriter__serializer(this24);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(call_tmp10) = *(call_tmp11);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileWriter__home(&writer3);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileWriter__home(this24);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp12, call_tmp13);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_fileWriter__readWriteThisFromLocale(&writer3);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp14, loc);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = serializer(&writer3, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  serializeValue7(call_tmp15, &writer3, x2, &error, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__serializeOne;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__serializeOne:;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6377 */
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _serializeOne10(fileWriter_F_defaultSerializer * this24,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            _owned__RemoteVarContainer_R * x2,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            locale * loc,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            Error * error_out,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            int64_t _ln,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                            int32_t _fn) {
#line 6384 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer writer3;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp10 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp11 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp13 = NULL;
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp14 = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultSerializer call_tmp15 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(&writer3);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal(this24);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp8, *(call_tmp9));
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileWriter__serializer(&writer3);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileWriter__serializer(this24);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(call_tmp10) = *(call_tmp11);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileWriter__home(&writer3);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileWriter__home(this24);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp12, call_tmp13);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_fileWriter__readWriteThisFromLocale(&writer3);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp14, loc);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = serializer(&writer3, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  serializeValue(call_tmp15, &writer3, x2, &error, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__serializeOne;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__serializeOne:;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6377 */
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _serializeOne2(fileWriter_T_defaultSerializer * this24,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           chpl_ioNewline * x2,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           locale * loc,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           Error * error_out,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int64_t _ln,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int32_t _fn) {
#line 6384 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer writer3;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp10 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp11 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp13 = NULL;
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp14 = NULL;
#line 6391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale call_tmp15;
#line 6391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(&writer3);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal2(this24);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp8, *(call_tmp9));
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileWriter__serializer(&writer3);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileWriter__serializer2(this24);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(call_tmp10) = *(call_tmp11);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileWriter__home(&writer3);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileWriter__home2(this24);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp12, call_tmp13);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_fileWriter__readWriteThisFromLocale(&writer3);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp14, loc);
#line 6391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = getLocaleOfIoRequest(&writer3, _ln, _fn);
#line 6391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 6391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _writeOne(&writer3, x2, &call_tmp15, &error, _ln, _fn);
#line 6391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6391 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 6391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&call_tmp15);
#line 6391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__serializeOne;
#line 6391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy45(&call_tmp15);
#line 6391 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__serializeOne:;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6377 */
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _serializeOne(fileWriter_T_defaultSerializer * this24,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                          _owned_Remote_R * x2,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                          locale * loc,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                          Error * error_out,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                          int64_t _ln,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                          int32_t _fn) {
#line 6384 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer writer3;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp10 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp11 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp13 = NULL;
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp14 = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultSerializer call_tmp15 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(&writer3);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal2(this24);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp8, *(call_tmp9));
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileWriter__serializer(&writer3);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileWriter__serializer2(this24);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(call_tmp10) = *(call_tmp11);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileWriter__home(&writer3);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileWriter__home2(this24);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp12, call_tmp13);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_fileWriter__readWriteThisFromLocale(&writer3);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp14, loc);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = serializer(&writer3, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  serializeValue5(call_tmp15, &writer3, x2, &error, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__serializeOne;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__serializeOne:;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6377 */
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _serializeOne7(fileWriter_T_defaultSerializer * this24,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           Remote_R x2,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           locale * loc,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           Error * error_out,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int64_t _ln,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int32_t _fn) {
#line 6384 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer writer3;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp10 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp11 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp13 = NULL;
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp14 = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultSerializer call_tmp15 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(&writer3);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal2(this24);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp8, *(call_tmp9));
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileWriter__serializer(&writer3);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileWriter__serializer2(this24);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(call_tmp10) = *(call_tmp11);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileWriter__home(&writer3);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileWriter__home2(this24);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp12, call_tmp13);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_fileWriter__readWriteThisFromLocale(&writer3);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp14, loc);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = serializer(&writer3, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  serializeValue4(call_tmp15, &writer3, x2, &error, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__serializeOne;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__serializeOne:;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6377 */
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _serializeOne5(fileWriter_T_defaultSerializer * this24,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           string * x2,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           locale * loc,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           Error * error_out,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int64_t _ln,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int32_t _fn) {
#line 6384 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer writer3;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp10 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp11 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp13 = NULL;
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp14 = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultSerializer call_tmp15 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(&writer3);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal2(this24);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp8, *(call_tmp9));
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileWriter__serializer(&writer3);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileWriter__serializer2(this24);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(call_tmp10) = *(call_tmp11);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileWriter__home(&writer3);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileWriter__home2(this24);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp12, call_tmp13);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_fileWriter__readWriteThisFromLocale(&writer3);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp14, loc);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = serializer(&writer3, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  serializeValue3(call_tmp15, &writer3, x2, &error, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__serializeOne;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__serializeOne:;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6377 */
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _serializeOne6(fileWriter_F_defaultSerializer * this24,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           ArrayInit x2,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           locale * loc,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           Error * error_out,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int64_t _ln,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int32_t _fn) {
#line 6384 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer writer3;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp10 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp11 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp13 = NULL;
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp14 = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultSerializer call_tmp15 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(&writer3);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal(this24);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp8, *(call_tmp9));
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileWriter__serializer(&writer3);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileWriter__serializer(this24);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(call_tmp10) = *(call_tmp11);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileWriter__home(&writer3);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileWriter__home(this24);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp12, call_tmp13);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_fileWriter__readWriteThisFromLocale(&writer3);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp14, loc);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = serializer(&writer3, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  serializeValue6(call_tmp15, &writer3, x2, &error, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__serializeOne;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__serializeOne:;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6377 */
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _serializeOne9(fileWriter_F_defaultSerializer * this24,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           string * x2,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           locale * loc,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           Error * error_out,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int64_t _ln,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int32_t _fn) {
#line 6384 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer writer3;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp10 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp11 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp13 = NULL;
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp14 = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultSerializer call_tmp15 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(&writer3);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal(this24);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp8, *(call_tmp9));
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileWriter__serializer(&writer3);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileWriter__serializer(this24);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(call_tmp10) = *(call_tmp11);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileWriter__home(&writer3);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileWriter__home(this24);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp12, call_tmp13);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_fileWriter__readWriteThisFromLocale(&writer3);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp14, loc);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = serializer(&writer3, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  serializeValue3(call_tmp15, &writer3, x2, &error, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__serializeOne;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__serializeOne:;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6377 */
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _serializeOne4(fileWriter_T_defaultSerializer * this24,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           R * x2,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           locale * loc,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           Error * error_out,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int64_t _ln,
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                           int32_t _fn) {
#line 6384 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer writer3;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp9 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp10 = NULL;
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__shared__serializeWrapper_defaultSerializer2 call_tmp11 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp13 = NULL;
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp14 = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_defaultSerializer call_tmp15 = NULL;
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(&writer3);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl_get_fileWriter__channel_internal2(this24);
#line 6385 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_72(call_tmp8, *(call_tmp9));
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl_get_fileWriter__serializer(&writer3);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileWriter__serializer2(this24);
#line 6386 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(call_tmp10) = *(call_tmp11);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileWriter__home(&writer3);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileWriter__home2(this24);
#line 6387 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp12, call_tmp13);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = chpl_get_fileWriter__readWriteThisFromLocale(&writer3);
#line 6388 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_58(call_tmp14, loc);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = serializer(&writer3, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  serializeValue2(call_tmp15, &writer3, x2, &error, _ln, _fn);
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6395 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end__serializeOne;
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6395 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__serializeOne:;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6377 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6402 */
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _writeOne3(fileWriter_F_defaultSerializer * this24,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       string * x2,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       locale * loc,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       Error * error_out,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       int64_t _ln,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       int32_t _fn) {
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp9;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6406 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp10;
#line 6407 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string msg;
#line 6408 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp11;
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp12;
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp13;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(this24);
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = _write_one_internal3(*(call_tmp8), x2, loc, &error, _ln, _fn);
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6404 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_writeOne;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6406 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl___EXCLAMATION__ASSIGN_16(call_tmp9, INT64(0), _ln, _fn);
#line 6406 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp10) /* ZLINE: 6406 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6406 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6407 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    msg = _constructIoErrorMsg(this24, x2, _ln, _fn);
#line 6408 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl___EQUALS_27(call_tmp9, EILSEQ);
#line 6408 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (call_tmp11) /* ZLINE: 6408 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6408 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp12 = escapedNonUTF8ErrorMessage(_ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp13 = chpl___PLUS_9(&call_tmp12, &msg, _ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl___ASSIGN_71(&msg, &call_tmp13, _ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&call_tmp13, _ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error2 = NULL;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _ch_ioerror3(this24, call_tmp9, &msg, &error2, _ln, _fn);
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 6412 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler:;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 6412 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error2;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&msg, _ln, _fn);
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_writeOne;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&msg, _ln, _fn);
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_writeOne:;
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6402 */
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _writeOne2(fileWriter_F_defaultSerializer * this24,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       ArrayInit x2,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       locale * loc,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       Error * error_out,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       int64_t _ln,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       int32_t _fn) {
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp9;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6406 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp10;
#line 6407 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string msg;
#line 6408 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp11;
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp12;
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp13;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(this24);
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = _write_one_internal4(*(call_tmp8), x2, loc, &error, _ln, _fn);
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6404 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_writeOne;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6406 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl___EXCLAMATION__ASSIGN_16(call_tmp9, INT64(0), _ln, _fn);
#line 6406 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp10) /* ZLINE: 6406 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6406 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6407 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    msg = _constructIoErrorMsg2(this24, x2, _ln, _fn);
#line 6408 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl___EQUALS_27(call_tmp9, EILSEQ);
#line 6408 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (call_tmp11) /* ZLINE: 6408 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6408 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp12 = escapedNonUTF8ErrorMessage(_ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp13 = chpl___PLUS_9(&call_tmp12, &msg, _ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl___ASSIGN_71(&msg, &call_tmp13, _ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&call_tmp13, _ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error2 = NULL;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _ch_ioerror3(this24, call_tmp9, &msg, &error2, _ln, _fn);
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 6412 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler:;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 6412 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error2;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&msg, _ln, _fn);
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_writeOne;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&msg, _ln, _fn);
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_writeOne:;
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6402 */
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _writeOne4(fileWriter_F_defaultSerializer * this24,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       int64_t x2,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       locale * loc,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       Error * error_out,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       int64_t _ln,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                       int32_t _fn) {
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp9;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6406 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp10;
#line 6407 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string msg;
#line 6408 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp11;
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp12;
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp13;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(this24);
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = _write_one_internal2(*(call_tmp8), x2, loc, &error, _ln, _fn);
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6404 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_writeOne;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6406 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl___EXCLAMATION__ASSIGN_16(call_tmp9, INT64(0), _ln, _fn);
#line 6406 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp10) /* ZLINE: 6406 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6406 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6407 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    msg = _constructIoErrorMsg3(this24, x2, _ln, _fn);
#line 6408 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl___EQUALS_27(call_tmp9, EILSEQ);
#line 6408 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (call_tmp11) /* ZLINE: 6408 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6408 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp12 = escapedNonUTF8ErrorMessage(_ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp13 = chpl___PLUS_9(&call_tmp12, &msg, _ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl___ASSIGN_71(&msg, &call_tmp13, _ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&call_tmp13, _ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error2 = NULL;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _ch_ioerror3(this24, call_tmp9, &msg, &error2, _ln, _fn);
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 6412 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler:;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 6412 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error2;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&msg, _ln, _fn);
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_writeOne;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&msg, _ln, _fn);
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_writeOne:;
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6402 */
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _writeOne(fileWriter_F_defaultSerializer * this24,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      chpl_ioNewline * x2,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      locale * loc,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      Error * error_out,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      int64_t _ln,
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      int32_t _fn) {
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp9;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6406 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp10;
#line 6407 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string msg;
#line 6408 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp11;
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp12;
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp13;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(this24);
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = _write_one_internal(*(call_tmp8), x2, loc, &error, _ln, _fn);
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6404 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_writeOne;
#line 6404 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6406 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl___EXCLAMATION__ASSIGN_16(call_tmp9, INT64(0), _ln, _fn);
#line 6406 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp10) /* ZLINE: 6406 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6406 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6407 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    msg = _constructIoErrorMsg4(this24, x2, _ln, _fn);
#line 6408 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl___EQUALS_27(call_tmp9, EILSEQ);
#line 6408 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (call_tmp11) /* ZLINE: 6408 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6408 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp12 = escapedNonUTF8ErrorMessage(_ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp13 = chpl___PLUS_9(&call_tmp12, &msg, _ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl___ASSIGN_71(&msg, &call_tmp13, _ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&call_tmp13, _ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 6410 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error2 = NULL;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _ch_ioerror3(this24, call_tmp9, &msg, &error2, _ln, _fn);
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 6412 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler:;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 6412 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error2;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&msg, _ln, _fn);
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_writeOne;
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&msg, _ln, _fn);
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6412 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_writeOne:;
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6471 */
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_one_internal3(qio_channel_t * _channel_internal,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   string * x2,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   locale * loc,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   Error * error_out,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   int64_t _ln,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   int32_t _fn) {
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 6475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr e;
#line 6475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 6485 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  uint8_t call_tmp8;
#line 6486 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  uint8_t call_tmp9;
#line 6487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp10;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _iokind T;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp11;
#line 6489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp12;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp13;
#line 6490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp14;
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp15;
#line 6494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp16;
#line 6475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 6475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  e = init_coerce_tmp;
#line 6485 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = qio_channel_binary(_channel_internal);
#line 6486 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = qio_channel_byteorder(_channel_internal);
#line 6487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = _cond_test(call_tmp8, _ln, _fn);
#line 6487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp10) /* ZLINE: 6487 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    T = chpl___COLON_2(call_tmp9, &error, _ln, _fn);
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 6488 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end__write_one_internal;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl___EQUALS_9(T, _iokind_big);
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (call_tmp11) /* ZLINE: 6489 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp12 = _write_binary_internal12(_channel_internal, x2, _ln, _fn);
#line 6489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl___ASSIGN_86(&e, call_tmp12);
#line 6489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    } else /* ZLINE: 6488 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp13 = chpl___EQUALS_9(T, _iokind_little);
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      if (call_tmp13) /* ZLINE: 6490 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      {
#line 6490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        call_tmp14 = _write_binary_internal11(_channel_internal, x2, _ln, _fn);
#line 6490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        chpl___ASSIGN_86(&e, call_tmp14);
#line 6490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      } else /* ZLINE: 6491 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      {
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        call_tmp15 = _write_binary_internal10(_channel_internal, x2, _ln, _fn);
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        chpl___ASSIGN_86(&e, call_tmp15);
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      }
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  } else /* ZLINE: 6493 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp16 = _write_text_internal2(_channel_internal, x2, _ln, _fn);
#line 6494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_86(&e, call_tmp16);
#line 6494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6500 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = e;
#line 6500 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__write_one_internal:;
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6471 */
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_one_internal4(qio_channel_t * _channel_internal,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   ArrayInit x2,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   locale * loc,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   Error * error_out,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   int64_t _ln,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   int32_t _fn) {
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 6475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr e;
#line 6475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 6485 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  uint8_t call_tmp8;
#line 6486 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  uint8_t call_tmp9;
#line 6487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp10;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _iokind T;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp11;
#line 6489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp12;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp13;
#line 6490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp14;
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp15;
#line 6494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp16;
#line 6475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 6475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  e = init_coerce_tmp;
#line 6485 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = qio_channel_binary(_channel_internal);
#line 6486 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = qio_channel_byteorder(_channel_internal);
#line 6487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = _cond_test(call_tmp8, _ln, _fn);
#line 6487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp10) /* ZLINE: 6487 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    T = chpl___COLON_2(call_tmp9, &error, _ln, _fn);
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 6488 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end__write_one_internal;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl___EQUALS_9(T, _iokind_big);
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (call_tmp11) /* ZLINE: 6489 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp12 = _write_binary_internal3(_channel_internal, x2, _ln, _fn);
#line 6489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl___ASSIGN_86(&e, call_tmp12);
#line 6489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    } else /* ZLINE: 6488 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp13 = chpl___EQUALS_9(T, _iokind_little);
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      if (call_tmp13) /* ZLINE: 6490 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      {
#line 6490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        call_tmp14 = _write_binary_internal4(_channel_internal, x2, _ln, _fn);
#line 6490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        chpl___ASSIGN_86(&e, call_tmp14);
#line 6490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      } else /* ZLINE: 6491 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      {
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        call_tmp15 = _write_binary_internal(_channel_internal, x2, _ln, _fn);
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        chpl___ASSIGN_86(&e, call_tmp15);
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      }
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  } else /* ZLINE: 6493 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp16 = _write_text_internal(_channel_internal, x2, _ln, _fn);
#line 6494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_86(&e, call_tmp16);
#line 6494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6500 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = e;
#line 6500 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__write_one_internal:;
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6471 */
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_one_internal2(qio_channel_t * _channel_internal,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   int64_t x2,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   locale * loc,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   Error * error_out,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   int64_t _ln,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                   int32_t _fn) {
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr ret;
#line 6475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr e;
#line 6475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 6485 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  uint8_t call_tmp8;
#line 6486 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  uint8_t call_tmp9;
#line 6487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp10;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _iokind T;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp11;
#line 6489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp12;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp13;
#line 6490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp14;
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp15;
#line 6494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp16;
#line 6475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 6475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  e = init_coerce_tmp;
#line 6485 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = qio_channel_binary(_channel_internal);
#line 6486 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = qio_channel_byteorder(_channel_internal);
#line 6487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = _cond_test(call_tmp8, _ln, _fn);
#line 6487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp10) /* ZLINE: 6487 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6487 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    T = chpl___COLON_2(call_tmp9, &error, _ln, _fn);
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 6488 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end__write_one_internal;
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl___EQUALS_9(T, _iokind_big);
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (call_tmp11) /* ZLINE: 6489 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp12 = _write_binary_internal8(_channel_internal, x2, _ln, _fn);
#line 6489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl___ASSIGN_86(&e, call_tmp12);
#line 6489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    } else /* ZLINE: 6488 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6489 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp13 = chpl___EQUALS_9(T, _iokind_little);
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      if (call_tmp13) /* ZLINE: 6490 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6488 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      {
#line 6490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        call_tmp14 = _write_binary_internal7(_channel_internal, x2, _ln, _fn);
#line 6490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        chpl___ASSIGN_86(&e, call_tmp14);
#line 6490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      } else /* ZLINE: 6491 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6490 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      {
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        call_tmp15 = _write_binary_internal5(_channel_internal, x2, _ln, _fn);
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
        chpl___ASSIGN_86(&e, call_tmp15);
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      }
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  } else /* ZLINE: 6493 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6491 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp16 = _write_text_internal3(_channel_internal, x2, _ln, _fn);
#line 6494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___ASSIGN_86(&e, call_tmp16);
#line 6494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6500 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = e;
#line 6500 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end__write_one_internal:;
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6471 */
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static syserr _write_one_internal(qio_channel_t * _channel_internal,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  chpl_ioNewline * x2,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  locale * loc,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  Error * error_out,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  int64_t _ln,
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                  int32_t _fn) {
#line 6477 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp8;
#line 6475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___COLON_69(INT64(0), _ln, _fn);
#line 6477 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = qio_channel_write_newline(((int32_t)(UINT8(false))), _channel_internal);
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return call_tmp8;
#line 6471 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6629 */
#line 6629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string literalErrorHelper(string * x2,
#line 6629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                 string * action,
#line 6629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                 chpl_bool isLiteral,
#line 6629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                 int64_t _ln,
#line 6629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                 int32_t _fn) {
#line 6629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 6637 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 6637 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string msg;
#line 6641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp9;
#line 6641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp10;
#line 6637 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl___PLUS_9(&_str_literal_1384, action, _ln, _fn);
#line 6637 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  msg = chpl___PLUS_9(&call_tmp8, &_str_literal_92, _ln, _fn);
#line 6637 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 6639 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (isLiteral) /* ZLINE: 6639 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6639 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp9 = chpl___PLUS_9(&_str_literal_1385, x2, _ln, _fn);
#line 6641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = chpl___PLUS_9(&call_tmp9, &_str_literal_17, _ln, _fn);
#line 6641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___PLUS__ASSIGN_3(&msg, &call_tmp10, _ln, _fn);
#line 6641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&call_tmp10, _ln, _fn);
#line 6641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 6641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  } else /* ZLINE: 6644 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6641 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6645 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl___PLUS__ASSIGN_3(&msg, &_str_literal_1367, _ln, _fn);
#line 6645 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6648 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = msg;
#line 6629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 6629 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6666 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6666 */
#line 6666 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _checkLiteralError(fileWriter_F_defaultSerializer * this24,
#line 6666 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               string * x2,
#line 6666 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               syserr err,
#line 6666 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               string * action,
#line 6666 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               chpl_bool isLiteral,
#line 6666 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               Error * error_out,
#line 6666 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int64_t _ln,
#line 6666 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int32_t _fn) {
#line 6668 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp8;
#line 6669 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string msg;
#line 6670 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 6672 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp10;
#line 6672 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp11;
#line 6672 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp12;
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6668 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl___EXCLAMATION__ASSIGN_16(err, INT64(0), _ln, _fn);
#line 6668 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp8) /* ZLINE: 6668 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6668 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6669 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    msg = literalErrorHelper(x2, action, isLiteral, _ln, _fn);
#line 6670 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp9 = chpl___EQUALS_27(err, EILSEQ);
#line 6670 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (call_tmp9) /* ZLINE: 6670 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6670 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6672 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp10 = escapedNonUTF8ErrorMessage(_ln, _fn);
#line 6672 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp11 = chpl___PLUS_9(&call_tmp10, &_str_literal_1387, _ln, _fn);
#line 6672 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      call_tmp12 = chpl___PLUS_9(&call_tmp11, &msg, _ln, _fn);
#line 6672 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl___ASSIGN_71(&msg, &call_tmp12, _ln, _fn);
#line 6672 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 6672 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 6672 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&call_tmp10, _ln, _fn);
#line 6672 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _ch_ioerror3(this24, err, &msg, &error, _ln, _fn);
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 6675 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler;
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler:;
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 6675 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl__autoDestroy23(&msg, _ln, _fn);
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _end_checkLiteralError;
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&msg, _ln, _fn);
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6675 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_checkLiteralError:;
#line 6666 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6666 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6887 */
#line 6887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void _writeLiteralCommon(fileWriter_F_defaultSerializer * this24,
#line 6887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                string * x2,
#line 6887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                Error * error_out,
#line 6887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                int64_t _ln,
#line 6887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                                int32_t _fn) {
#line 6892 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 6893 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp9;
#line 6894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptrConst_int8_t call_tmp10 = NULL;
#line 6895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp11 = NULL;
#line 6896 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp12;
#line 6895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp13;
#line 6897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 6892 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home(this24);
#line 6892 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 6893 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 6893 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  lock3(this24, &error, _ln, _fn);
#line 6893 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6893 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6893 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6893 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 6893 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6893 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 6893 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6893 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6893 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6893 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 6893 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = localize(x2, _ln, _fn);
#line 6894 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = c_str(&call_tmp9, _ln, _fn);
#line 6895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileWriter__channel_internal(this24);
#line 6896 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = numBytes(x2);
#line 6895 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = qio_channel_print_literal(((int32_t)(UINT8(false))), *(call_tmp11), call_tmp10, call_tmp12);
#line 6897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 6897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _checkLiteralError(this24, x2, call_tmp13, &_str_literal_1391, UINT8(true), &error2, _ln, _fn);
#line 6897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 6897 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler2;
#line 6897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler2:;
#line 6897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 6897 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 6897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 6893 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock3(this24);
#line 6897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_writeLiteralCommon;
#line 6897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6897 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 6893 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  unlock3(this24);
#line 6893 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_writeLiteralCommon:;
#line 6887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6887 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 6905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:6905 */
#line 6905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void writeLiteral(fileWriter_F_defaultSerializer * this24,
#line 6905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                         string * literal,
#line 6905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                         Error * error_out,
#line 6905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                         int64_t _ln,
#line 6905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                         int32_t _fn) {
#line 6907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 6907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 6907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _writeLiteralCommon(this24, literal, &error, _ln, _fn);
#line 6907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 6907 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 6907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 6907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 6907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriteLiteral;
#line 6907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 6907 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwriteLiteral:;
#line 6905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 6905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:7024 */
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string chpl_stringify3(string * _e0_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _e1_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              string * _e2_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _e3_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _ln,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int32_t _fn) {
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_4__ref_string_int64_t__ref_string_int64_t args;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_4__ref_string_int64_t__ref_string_int64_t ret_tmp;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_0 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_2 = NULL;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple4(_e0_args, _e1_args, _e2_args, _e3_args, &ret_tmp);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_0 = (&args)->x0;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_2 = (&args)->x2;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = stringify_simple4(_tuple_expand_tmp_0, (&args)->x1, _tuple_expand_tmp_2, (&args)->x3, _ln, _fn);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy63(&args);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:7024 */
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string chpl_stringify5(string * _e0_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              string * _e1_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              string * _e2_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              string * _e3_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _ln,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int32_t _fn) {
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_4_star__ref_string args;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_4_star__ref_string ret_tmp;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_0 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_1 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_2 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_3 = NULL;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple12(_e0_args, _e1_args, _e2_args, _e3_args, &ret_tmp);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(args + INT64(0)) = *(ret_tmp + INT64(0));
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(args + INT64(1)) = *(ret_tmp + INT64(1));
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(args + INT64(2)) = *(ret_tmp + INT64(2));
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(args + INT64(3)) = *(ret_tmp + INT64(3));
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_0 = *(args + INT64(0));
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_1 = *(args + INT64(1));
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_2 = *(args + INT64(2));
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_3 = *(args + INT64(3));
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = stringify_simple3(_tuple_expand_tmp_0, _tuple_expand_tmp_1, _tuple_expand_tmp_2, _tuple_expand_tmp_3, _ln, _fn);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy62(&args);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:7024 */
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string chpl_stringify10(string * _e0_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int32_t _e1_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               string * _e2_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int64_t _e3_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int64_t _ln,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int32_t _fn) {
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_4__ref_string_int32_t__ref_string_int64_t args;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_4__ref_string_int32_t__ref_string_int64_t ret_tmp;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_0 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_2 = NULL;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple27(_e0_args, _e1_args, _e2_args, _e3_args, &ret_tmp);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_0 = (&args)->x0;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_2 = (&args)->x2;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = stringify_simple8(_tuple_expand_tmp_0, (&args)->x1, _tuple_expand_tmp_2, (&args)->x3, _ln, _fn);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy57(&args);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:7024 */
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string chpl_stringify(string * _e0_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             uint64_t _e1_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             int64_t _ln,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                             int32_t _fn) {
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_2__ref_string_uint64_t args;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_2__ref_string_uint64_t ret_tmp;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_0 = NULL;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple24(_e0_args, _e1_args, &ret_tmp);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_0 = (&args)->x0;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = stringify_simple12(_tuple_expand_tmp_0, (&args)->x1, _ln, _fn);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy51(&args);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:7024 */
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string chpl_stringify7(string * _e0_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _e1_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _ln,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int32_t _fn) {
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_2__ref_string_int64_t args;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_2__ref_string_int64_t ret_tmp;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_0 = NULL;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple30(_e0_args, _e1_args, &ret_tmp);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_0 = (&args)->x0;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = stringify_simple7(_tuple_expand_tmp_0, (&args)->x1, _ln, _fn);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy31(&args);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:7024 */
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string chpl_stringify14(string * _e0_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int64_t _e1_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               string * _e2_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int64_t _ln,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int32_t _fn) {
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_3__ref_string_int64_t__ref_string args;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_3__ref_string_int64_t__ref_string ret_tmp;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_0 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_2 = NULL;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple8(_e0_args, _e1_args, _e2_args, &ret_tmp);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_0 = (&args)->x0;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_2 = (&args)->x2;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = stringify_simple13(_tuple_expand_tmp_0, (&args)->x1, _tuple_expand_tmp_2, _ln, _fn);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy14(&args);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:7024 */
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string chpl_stringify9(string * _e0_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              ArrayInit _e1_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              string * _e2_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _ln,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int32_t _fn) {
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_3__ref_string_ArrayInit__ref_string args;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_3__ref_string_ArrayInit__ref_string ret_tmp;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 7029 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 7031 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  file call_tmp8;
#line 7031 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  file f;
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer call_tmp9;
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  range_int64_t_low_one default_arg_region;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioHintSet default_arg_hints;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error3 = NULL;
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultSerializer default_arg_serializer;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error4 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error5 = NULL;
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileWriter_F_defaultSerializer w;
#line 7037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_0 = NULL;
#line 7037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_2 = NULL;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error6 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error7 = NULL;
#line 7039 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error8 = NULL;
#line 7040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp10;
#line 7043 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  uint64_t call_tmp11;
#line 7043 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr_uint8_t call_tmp12 = NULL;
#line 7043 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  uint64_t default_arg_alignment;
#line 7043 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  c_ptr_uint8_t buf = NULL;
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileReader_F_defaultDeserializer call_tmp13;
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  range_int64_t_low_one default_arg_region2;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error9 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error10 = NULL;
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ioHintSet default_arg_hints2;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error11 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error12 = NULL;
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  defaultDeserializer default_arg_deserializer;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error13 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error14 = NULL;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error15 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error16 = NULL;
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  fileReader_F_defaultDeserializer r;
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error17 = NULL;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error18 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error19 = NULL;
#line 7050 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_uint8_t call_tmp14 = NULL;
#line 7052 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp15;
#line 7052 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp16;
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error20 = NULL;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error21 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error22 = NULL;
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error23 = NULL;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error24 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error25 = NULL;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple7(_e0_args, _e1_args, _e2_args, &ret_tmp);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 7029 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 7031 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = openMemFile(&error, _ln, _fn);
#line 7031 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 7031 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7031 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7031 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler25;
#line 7031 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7031 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  f = call_tmp8;
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_region = writer_default_region2(&f, &error);
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 7034 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error2 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close4(&f, &error2, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler:;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error2 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error2, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy13(&f, _ln, _fn);
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler25;
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_hints = writer_default_hints(&f, &error);
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 7034 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy19(default_arg_region);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error3 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close4(&f, &error3, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error3 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler2;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler2:;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error3 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error3, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy13(&f, _ln, _fn);
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler25;
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_serializer = writer_default_serializer2(&f, &error);
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 7034 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy25(&default_arg_hints);
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy19(default_arg_region);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error4 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close4(&f, &error4, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error4 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler3;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler3:;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error4 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error4, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy13(&f, _ln, _fn);
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler25;
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = writer2(&f, default_arg_region, &default_arg_hints, &default_arg_serializer, &error, _ln, _fn);
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 7034 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy25(&default_arg_hints);
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy19(default_arg_region);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error5 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close4(&f, &error5, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error5 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler4;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler4:;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error5 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error5, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy13(&f, _ln, _fn);
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler25;
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  w = call_tmp9;
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy25(&default_arg_hints);
#line 7034 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy19(default_arg_region);
#line 7037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_0 = (&args)->x0;
#line 7037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_2 = (&args)->x2;
#line 7037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  write7(&w, _tuple_expand_tmp_0, (&args)->x1, _tuple_expand_tmp_2, &error, _ln, _fn);
#line 7037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 7037 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error6 = NULL;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close6(&w, &error6, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error6 != nil) /* ZLINE: 7035 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler5;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler5:;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error6 != nil) /* ZLINE: 7035 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error6, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy39(&w, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error7 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close4(&f, &error7, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error7 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler6;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler6:;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error7 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error7, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy13(&f, _ln, _fn);
#line 7037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler25;
#line 7037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7039 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error8 = NULL;
#line 7039 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  lock3(&w, &error8, _ln, _fn);
#line 7039 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error8 != nil) /* ZLINE: 7039 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7039 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7039 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler7;
#line 7039 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7039 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler7:;
#line 7039 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error8 != nil) /* ZLINE: 7039 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7039 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7039 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error8, _ln, _fn);
#line 7039 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = offset(&w);
#line 7041 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  unlock3(&w);
#line 7043 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl___PLUS_5(((uint64_t)(call_tmp10)));
#line 7043 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_alignment = allocate_default_alignment();
#line 7043 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = allocate(call_tmp11, UINT8(false), default_arg_alignment, _ln, _fn);
#line 7043 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  buf = call_tmp12;
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_region2 = reader_default_region2(&f, &error);
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 7045 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error9 = NULL;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close6(&w, &error9, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error9 != nil) /* ZLINE: 7035 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler8;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler8:;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error9 != nil) /* ZLINE: 7035 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error9, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy39(&w, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error10 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close4(&f, &error10, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error10 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler9;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler9:;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error10 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error10, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy13(&f, _ln, _fn);
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler25;
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_hints2 = reader_default_hints2(&f, &error);
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 7045 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy19(default_arg_region2);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error11 = NULL;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close6(&w, &error11, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error11 != nil) /* ZLINE: 7035 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler10;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler10:;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error11 != nil) /* ZLINE: 7035 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error11, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy39(&w, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error12 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close4(&f, &error12, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error12 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler11;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler11:;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error12 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error12, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy13(&f, _ln, _fn);
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler25;
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_deserializer = reader_default_deserializer2(&f, &error);
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 7045 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy25(&default_arg_hints2);
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy19(default_arg_region2);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error13 = NULL;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close6(&w, &error13, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error13 != nil) /* ZLINE: 7035 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler12;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler12:;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error13 != nil) /* ZLINE: 7035 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error13, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy39(&w, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error14 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close4(&f, &error14, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error14 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler13;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler13:;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error14 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error14, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy13(&f, _ln, _fn);
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler25;
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = reader(&f, default_arg_region2, &default_arg_hints2, &default_arg_deserializer, &error, _ln, _fn);
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 7045 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy25(&default_arg_hints2);
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy19(default_arg_region2);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error15 = NULL;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close6(&w, &error15, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error15 != nil) /* ZLINE: 7035 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler14;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler14:;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error15 != nil) /* ZLINE: 7035 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error15, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy39(&w, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error16 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close4(&f, &error16, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error16 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler15;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler15:;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error16 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error16, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy13(&f, _ln, _fn);
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler25;
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  r = call_tmp13;
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy25(&default_arg_hints2);
#line 7045 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy19(default_arg_region2);
#line 7048 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  readBinary(&r, call_tmp12, call_tmp10, &error, _ln, _fn);
#line 7048 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 7048 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7048 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error17 = NULL;
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close5(&r, &error17, _ln, _fn);
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error17 != nil) /* ZLINE: 7046 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler16;
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler16:;
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error17 != nil) /* ZLINE: 7046 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error17, _ln, _fn);
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7048 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy37(&r, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error18 = NULL;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close6(&w, &error18, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error18 != nil) /* ZLINE: 7035 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler17;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler17:;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error18 != nil) /* ZLINE: 7035 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error18, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7048 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy39(&w, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error19 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close4(&f, &error19, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error19 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler18;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler18:;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error19 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error19, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7048 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy13(&f, _ln, _fn);
#line 7048 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler25;
#line 7048 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7050 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(call_tmp12, _ln, _fn);
#line 7050 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = this21(call_tmp12, call_tmp10);
#line 7050 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_4(call_tmp14, ((uint8_t)(INT64(0))));
#line 7052 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = chpl___PLUS_7(call_tmp10);
#line 7052 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp16 = createCopyingBuffer2(buf, call_tmp10, call_tmp15, decodePolicy_replace, &error, _ln, _fn);
#line 7052 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 7052 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7052 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error20 = NULL;
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close5(&r, &error20, _ln, _fn);
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error20 != nil) /* ZLINE: 7046 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler19;
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler19:;
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error20 != nil) /* ZLINE: 7046 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error20, _ln, _fn);
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7052 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy37(&r, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error21 = NULL;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close6(&w, &error21, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error21 != nil) /* ZLINE: 7035 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler20;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler20:;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error21 != nil) /* ZLINE: 7035 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error21, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7052 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy39(&w, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error22 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    close4(&f, &error22, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error22 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler21;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler21:;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error22 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      chpl_uncaught_error(error22, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 7052 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy13(&f, _ln, _fn);
#line 7052 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler25;
#line 7052 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7054 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  deallocate(((c_ptr_void)(buf)), _ln, _fn);
#line 7055 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp16;
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error23 = NULL;
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  close5(&r, &error23, _ln, _fn);
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error23 != nil) /* ZLINE: 7046 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler22;
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler22:;
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error23 != nil) /* ZLINE: 7046 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error23, _ln, _fn);
#line 7046 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7055 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy37(&r, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error24 = NULL;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  close6(&w, &error24, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error24 != nil) /* ZLINE: 7035 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler23;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler23:;
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error24 != nil) /* ZLINE: 7035 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error24, _ln, _fn);
#line 7035 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7055 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy39(&w, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error25 = NULL;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  close4(&f, &error25, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error25 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler24;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler24:;
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error25 != nil) /* ZLINE: 7032 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error25, _ln, _fn);
#line 7032 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7055 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy13(&f, _ln, _fn);
#line 7055 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy40(&args);
#line 7055 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  goto _end_chpl_stringify;
#line 7055 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler25:;
#line 7029 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 7029 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 7029 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 7029 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 7029 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy40(&args);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_chpl_stringify:;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:7024 */
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string chpl_stringify12(c_string_rehook _e0_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int64_t _ln,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int32_t _fn) {
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_1_star_c_ptrConst_int8_t args;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_1_star_c_ptrConst_int8_t ret_tmp;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple13(_e0_args, &ret_tmp, _ln, _fn);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(args + INT64(0)) = *(ret_tmp + INT64(0));
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = stringify_simple5(*(args + INT64(0)), _ln, _fn);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy33(&args);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:7024 */
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string chpl_stringify4(string * _e0_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _e1_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              string * _e2_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _e3_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              string * _e4_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _ln,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int32_t _fn) {
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string args;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string ret_tmp;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_0 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_2 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_4 = NULL;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple20(_e0_args, _e1_args, _e2_args, _e3_args, _e4_args, &ret_tmp);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_0 = (&args)->x0;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_2 = (&args)->x2;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_4 = (&args)->x4;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = stringify_simple11(_tuple_expand_tmp_0, (&args)->x1, _tuple_expand_tmp_2, (&args)->x3, _tuple_expand_tmp_4, _ln, _fn);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy29(&args);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:7024 */
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string chpl_stringify2(string * _e0_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              range_byteIndex_high_one _e1_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              string * _e2_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _e3_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _ln,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int32_t _fn) {
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t args;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t ret_tmp;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_0 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_2 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  range_byteIndex_high_one coerce_tmp2;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple2(_e0_args, _e1_args, _e2_args, _e3_args, &ret_tmp);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_0 = (&args)->x0;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_2 = (&args)->x2;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  coerce_tmp2 = (&args)->x1;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = stringify_simple9(_tuple_expand_tmp_0, coerce_tmp2, _tuple_expand_tmp_2, (&args)->x3, _ln, _fn);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy22(coerce_tmp2);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy56(&args);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:7024 */
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string chpl_stringify6(string * _e0_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              string * _e1_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _e2_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              string * _e3_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              range_int64_t_both_one _e4_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _ln,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int32_t _fn) {
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one args;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one ret_tmp;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_0 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_1 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_3 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  range_int64_t_both_one coerce_tmp2;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple18(_e0_args, _e1_args, _e2_args, _e3_args, _e4_args, &ret_tmp);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_0 = (&args)->x0;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_1 = (&args)->x1;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_3 = (&args)->x3;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  coerce_tmp2 = (&args)->x4;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = stringify_simple10(_tuple_expand_tmp_0, _tuple_expand_tmp_1, (&args)->x2, _tuple_expand_tmp_3, coerce_tmp2, _ln, _fn);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy59(coerce_tmp2);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy35(&args);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:7024 */
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string chpl_stringify13(string * _e0_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               range_int64_t_both_one _e1_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               string * _e2_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int64_t _e3_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int64_t _ln,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int32_t _fn) {
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t args;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t ret_tmp;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_0 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_2 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  range_int64_t_both_one coerce_tmp2;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple22(_e0_args, _e1_args, _e2_args, _e3_args, &ret_tmp);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_0 = (&args)->x0;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_2 = (&args)->x2;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  coerce_tmp2 = (&args)->x1;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = stringify_simple(_tuple_expand_tmp_0, coerce_tmp2, _tuple_expand_tmp_2, (&args)->x3, _ln, _fn);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy59(coerce_tmp2);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy32(&args);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:7024 */
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string chpl_stringify11(string * _e0_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               range_byteIndex_both_one _e1_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               string * _e2_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int64_t _e3_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int64_t _ln,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int32_t _fn) {
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t args;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t ret_tmp;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_0 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_2 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  range_byteIndex_both_one coerce_tmp2;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple21(_e0_args, _e1_args, _e2_args, _e3_args, &ret_tmp);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_0 = (&args)->x0;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_2 = (&args)->x2;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  coerce_tmp2 = (&args)->x1;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = stringify_simple2(_tuple_expand_tmp_0, coerce_tmp2, _tuple_expand_tmp_2, (&args)->x3, _ln, _fn);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy55(coerce_tmp2);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy60(&args);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:7024 */
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string chpl_stringify15(string * _e0_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               range_int64_t_low_one _e1_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               string * _e2_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int64_t _e3_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int64_t _ln,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                               int32_t _fn) {
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t args;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t ret_tmp;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_0 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_2 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  range_int64_t_low_one coerce_tmp2;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple3(_e0_args, _e1_args, _e2_args, _e3_args, &ret_tmp);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_0 = (&args)->x0;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_2 = (&args)->x2;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  coerce_tmp2 = (&args)->x1;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = stringify_simple6(_tuple_expand_tmp_0, coerce_tmp2, _tuple_expand_tmp_2, (&args)->x3, _ln, _fn);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy19(coerce_tmp2);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy61(&args);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:7024 */
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static string chpl_stringify8(string * _e0_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              range_byteIndex_low_one _e1_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              string * _e2_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _e3_args,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int64_t _ln,
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                              int32_t _fn) {
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t args;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t ret_tmp;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string ret;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  string call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_0 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string _tuple_expand_tmp_2 = NULL;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  range_byteIndex_low_one coerce_tmp2;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple11(_e0_args, _e1_args, _e2_args, _e3_args, &ret_tmp);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_0 = (&args)->x0;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_expand_tmp_2 = (&args)->x2;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  coerce_tmp2 = (&args)->x1;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = stringify_simple14(_tuple_expand_tmp_0, coerce_tmp2, _tuple_expand_tmp_2, (&args)->x3, _ln, _fn);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = call_tmp8;
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy65(coerce_tmp2);
#line 7026 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy36(&args);
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 7024 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9282 */
#line 9282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static int64_t readBinary(fileReader_F_defaultDeserializer * this24,
#line 9282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                          uint8_t * ptr,
#line 9282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                          int64_t maxBytes,
#line 9282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                          Error * error_out,
#line 9282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                          int64_t _ln,
#line 9282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                          int32_t _fn) {
#line 9282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t ret;
#line 9283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr e;
#line 9283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 9284 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t numRead;
#line 9285 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  uint64_t call_tmp8;
#line 9286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  uint64_t call_tmp9;
#line 9286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  uint64_t call_tmp10;
#line 9288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp11 = NULL;
#line 9288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_uint8_t call_tmp12 = NULL;
#line 9288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int64_t call_tmp13;
#line 9288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp14;
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool T;
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool T2;
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  int32_t call_tmp15;
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_Error call_tmp16;
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error call_tmp17 = NULL;
#line 9283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 9283 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  e = init_coerce_tmp;
#line 9284 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  numRead = INT64(0);
#line 9285 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = c_sizeof3();
#line 9286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___SLASH_2(((uint64_t)(maxBytes)), call_tmp8, _ln, _fn);
#line 9286 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = chpl___ASTERISK_3(call_tmp9, call_tmp8);
#line 9288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = chpl_get_fileReader__channel_internal(this24);
#line 9288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_check_nil(ptr, _ln, _fn);
#line 9288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = this21(ptr, INT64(0));
#line 9288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl___COLON_6(call_tmp10, _ln, _fn);
#line 9288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = qio_channel_read(((int32_t)(UINT8(false))), *(call_tmp11), call_tmp12, call_tmp13, &numRead);
#line 9288 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&e, call_tmp14);
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  T = chpl___EXCLAMATION__ASSIGN_16(e, INT64(0), _ln, _fn);
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (T) /* ZLINE: 9290 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp15 = EEOF2();
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    T2 = chpl___EXCLAMATION__ASSIGN_15(e, call_tmp15);
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  } else /* ZLINE: 9290 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    T2 = UINT8(false);
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (T2) /* ZLINE: 9290 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp16 = createSystemOrChplError(e, &_str_literal_77, _ln, _fn);
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp17 = chpl_fix_thrown_error(&call_tmp16, _ln, _fn);
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = call_tmp17;
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _end_readBinary;
#line 9290 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  ret = numRead;
#line 9291 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _end_readBinary:;
#line 9282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return ret;
#line 9282 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9493 */
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void write8(fileWriter_F_defaultSerializer * this24,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   R * _e0_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   Error * error_out,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   int64_t _ln,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   int32_t _fn) {
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_1_star__ref_R args;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_1_star__ref_R ret_tmp;
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale origLocale;
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_R call_tmp9 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple23(_e0_args, &ret_tmp);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(args + INT64(0)) = *(ret_tmp + INT64(0));
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  origLocale = getLocaleOfIoRequest(this24, _ln, _fn);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home(this24);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  lock3(this24, &error, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy10(&args);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = *(args + INT64(0));
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne8(this24, call_tmp9, &origLocale, &error2, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock3(this24);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy10(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  unlock3(this24);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy45(&origLocale);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy10(&args);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwrite:;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9493 */
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void write13(fileWriter_T_defaultSerializer * this24,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    string * _e0_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    chpl_ioNewline * _e1_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    Error * error_out,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_2__ref_string__ref_chpl_ioNewline args;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_2__ref_string__ref_chpl_ioNewline ret_tmp;
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale origLocale;
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string call_tmp9 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_ioNewline call_tmp10 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error3 = NULL;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple26(_e0_args, _e1_args, &ret_tmp);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  origLocale = getLocaleOfIoRequest2(this24, _ln, _fn);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home2(this24);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  lock2(this24, &error, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy12(&args);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = (&args)->x0;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne5(this24, call_tmp9, &origLocale, &error2, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock2(this24, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy12(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = (&args)->x1;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error3 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne2(this24, call_tmp10, &origLocale, &error3, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error3 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error3;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock2(this24, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy12(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  unlock2(this24, _ln, _fn);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy45(&origLocale);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy12(&args);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwrite:;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9493 */
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void write11(fileWriter_T_defaultSerializer * this24,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    Remote_R _e0_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    chpl_ioNewline * _e1_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    Error * error_out,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_2_Remote_R__ref_chpl_ioNewline args;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_2_Remote_R__ref_chpl_ioNewline ret_tmp;
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale origLocale;
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_ioNewline call_tmp9 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error3 = NULL;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple25(_e0_args, _e1_args, &ret_tmp);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  origLocale = getLocaleOfIoRequest2(this24, _ln, _fn);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home2(this24);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  lock2(this24, &error, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy11(&args);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne7(this24, (&args)->x0, &origLocale, &error2, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock2(this24, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy11(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = (&args)->x1;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error3 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne2(this24, call_tmp9, &origLocale, &error3, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error3 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error3;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock2(this24, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy11(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  unlock2(this24, _ln, _fn);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy45(&origLocale);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy11(&args);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwrite:;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9493 */
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void write9(fileWriter_T_defaultSerializer * this24,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   chpl_ioNewline * _e0_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   Error * error_out,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   int64_t _ln,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   int32_t _fn) {
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_1_star__ref_chpl_ioNewline args;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_1_star__ref_chpl_ioNewline ret_tmp;
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale origLocale;
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_ioNewline call_tmp9 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple31(_e0_args, &ret_tmp);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(args + INT64(0)) = *(ret_tmp + INT64(0));
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  origLocale = getLocaleOfIoRequest2(this24, _ln, _fn);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home2(this24);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  lock2(this24, &error, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy16(&args);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = *(args + INT64(0));
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne2(this24, call_tmp9, &origLocale, &error2, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock2(this24, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy16(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  unlock2(this24, _ln, _fn);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy45(&origLocale);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy16(&args);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwrite:;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9493 */
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void write10(fileWriter_F_defaultSerializer * this24,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _e0_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    Error * error_out,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_1_star_int64_t args;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale origLocale;
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple9(_e0_args, &ret_tmp);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(args + INT64(0)) = *(ret_tmp + INT64(0));
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  origLocale = getLocaleOfIoRequest(this24, _ln, _fn);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home(this24);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  lock3(this24, &error, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy50(&args);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne3(this24, *(args + INT64(0)), &origLocale, &error2, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock3(this24);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy50(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  unlock3(this24);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy45(&origLocale);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy50(&args);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwrite:;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9493 */
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void write12(fileWriter_F_defaultSerializer * this24,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    _owned__RemoteVarContainer_R * _e0_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    Error * error_out,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_1_star__ref__owned__RemoteVarContainer_R args;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_1_star__ref__owned__RemoteVarContainer_R ret_tmp;
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale origLocale;
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__owned__RemoteVarContainer_R call_tmp9 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple19(_e0_args, &ret_tmp);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  *(args + INT64(0)) = *(ret_tmp + INT64(0));
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  origLocale = getLocaleOfIoRequest(this24, _ln, _fn);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home(this24);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  lock3(this24, &error, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy8(&args);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = *(args + INT64(0));
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne10(this24, call_tmp9, &origLocale, &error2, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock3(this24);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy8(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  unlock3(this24);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy45(&origLocale);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy8(&args);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwrite:;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9493 */
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void write6(fileWriter_T_defaultSerializer * this24,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   string * _e0_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   string * _e1_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   string * _e2_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   Remote_R _e3_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   string * _e4_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   R * _e5_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   chpl_ioNewline * _e6_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   Error * error_out,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   int64_t _ln,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   int32_t _fn) {
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_7__ref_string__ref_string__ref_string_Remote_R__ref_string__ref_R__ref_chpl_ioNewline args;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_7__ref_string__ref_string__ref_string_Remote_R__ref_string__ref_R__ref_chpl_ioNewline ret_tmp;
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale origLocale;
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string call_tmp9 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string call_tmp10 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error3 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string call_tmp11 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error4 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error5 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string call_tmp12 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error6 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_R call_tmp13 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error7 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_ioNewline call_tmp14 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error8 = NULL;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple17(_e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _e5_args, _e6_args, &ret_tmp);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  origLocale = getLocaleOfIoRequest2(this24, _ln, _fn);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home2(this24);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  lock2(this24, &error, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy64(&args);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = (&args)->x0;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne5(this24, call_tmp9, &origLocale, &error2, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock2(this24, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy64(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = (&args)->x1;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error3 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne5(this24, call_tmp10, &origLocale, &error3, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error3 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error3;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock2(this24, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy64(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp11 = (&args)->x2;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error4 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne5(this24, call_tmp11, &origLocale, &error4, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error4 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error4;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock2(this24, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy64(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error5 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne7(this24, (&args)->x3, &origLocale, &error5, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error5 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error5;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock2(this24, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy64(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = (&args)->x4;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error6 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne5(this24, call_tmp12, &origLocale, &error6, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error6 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error6;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock2(this24, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy64(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = (&args)->x5;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error7 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne4(this24, call_tmp13, &origLocale, &error7, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error7 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error7;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock2(this24, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy64(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = (&args)->x6;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error8 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne2(this24, call_tmp14, &origLocale, &error8, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error8 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error8;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock2(this24, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy64(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  unlock2(this24, _ln, _fn);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy45(&origLocale);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy64(&args);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwrite:;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9493 */
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void write14(fileWriter_T_defaultSerializer * this24,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    _owned_Remote_R * _e0_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    Remote_R _e1_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    chpl_ioNewline * _e2_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    Error * error_out,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int64_t _ln,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                    int32_t _fn) {
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_3__ref__owned_Remote_R_Remote_R__ref_chpl_ioNewline args;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_3__ref__owned_Remote_R_Remote_R__ref_chpl_ioNewline ret_tmp;
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale origLocale;
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref__owned_Remote_R call_tmp9 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error3 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_chpl_ioNewline call_tmp10 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error4 = NULL;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple28(_e0_args, _e1_args, _e2_args, &ret_tmp);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  origLocale = getLocaleOfIoRequest2(this24, _ln, _fn);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home2(this24);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  lock2(this24, &error, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy15(&args);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = (&args)->x0;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne(this24, call_tmp9, &origLocale, &error2, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock2(this24, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy15(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error3 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne7(this24, (&args)->x1, &origLocale, &error3, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error3 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error3;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock2(this24, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy15(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = (&args)->x2;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error4 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne2(this24, call_tmp10, &origLocale, &error4, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error4 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error4;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock2(this24, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy15(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  unlock2(this24, _ln, _fn);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy45(&origLocale);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy15(&args);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwrite:;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9493 */
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void write7(fileWriter_F_defaultSerializer * this24,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   string * _e0_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   ArrayInit _e1_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   string * _e2_args,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   Error * error_out,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   int64_t _ln,
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   int32_t _fn) {
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_3__ref_string_ArrayInit__ref_string args;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _tuple_3__ref_string_ArrayInit__ref_string ret_tmp;
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  locale origLocale;
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp8 = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string call_tmp9 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error2 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error3 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_string call_tmp10 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error4 = NULL;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__init_tuple7(_e0_args, _e1_args, _e2_args, &ret_tmp);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  args = ret_tmp;
#line 9494 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  origLocale = getLocaleOfIoRequest(this24, _ln, _fn);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__home(this24);
#line 9495 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp8, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  lock3(this24, &error, _ln, _fn);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9496 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy40(&args);
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = (&args)->x0;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error2 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne9(this24, call_tmp9, &origLocale, &error2, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error2 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error2;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock3(this24);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy40(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error3 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne6(this24, (&args)->x1, &origLocale, &error3, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error3 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error3;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock3(this24);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy40(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp10 = (&args)->x2;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error4 = NULL;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _serializeOne9(this24, call_tmp10, &origLocale, &error4, _ln, _fn);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error4 != nil) /* ZLINE: 9502 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error4;
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    unlock3(this24);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy45(&origLocale);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy40(&args);
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwrite;
#line 9502 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9496 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  unlock3(this24);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy45(&origLocale);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy40(&args);
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwrite:;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 9493 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9512 */
#line 9512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void writeln6(fileWriter_T_defaultSerializer * this24,
#line 9512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     Error * error_out,
#line 9512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int64_t _ln,
#line 9512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int32_t _fn) {
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_ioNewline call_tmp8;
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_ioNewline initTemp;
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool default_arg_skipWhitespaceOnly;
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_skipWhitespaceOnly = init_default_skipWhitespaceOnly();
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init125(&initTemp, default_arg_skipWhitespaceOnly);
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = initTemp;
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  write9(this24, &call_tmp8, &error, _ln, _fn);
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9513 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy24(&call_tmp8);
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy24(&call_tmp8);
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9513 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriteln;
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9513 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwriteln:;
#line 9512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 9512 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9534 */
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void writeln10(fileWriter_T_defaultSerializer * this24,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      Remote_R _e0_args,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      Error * error_out,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      int64_t _ln,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                      int32_t _fn) {
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_ioNewline call_tmp8;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_ioNewline initTemp;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool default_arg_skipWhitespaceOnly;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_skipWhitespaceOnly = init_default_skipWhitespaceOnly();
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init125(&initTemp, default_arg_skipWhitespaceOnly);
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = initTemp;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  write11(this24, _e0_args, &call_tmp8, &error, _ln, _fn);
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9535 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy24(&call_tmp8);
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy24(&call_tmp8);
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9535 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriteln;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwriteln:;
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9534 */
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void writeln7(fileWriter_T_defaultSerializer * this24,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     string * _e0_args,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     Error * error_out,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int64_t _ln,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int32_t _fn) {
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_ioNewline call_tmp8;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_ioNewline initTemp;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool default_arg_skipWhitespaceOnly;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_skipWhitespaceOnly = init_default_skipWhitespaceOnly();
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init125(&initTemp, default_arg_skipWhitespaceOnly);
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = initTemp;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  write13(this24, _e0_args, &call_tmp8, &error, _ln, _fn);
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9535 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy24(&call_tmp8);
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy24(&call_tmp8);
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9535 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriteln;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwriteln:;
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9534 */
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void writeln9(fileWriter_T_defaultSerializer * this24,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     _owned_Remote_R * _e0_args,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     Remote_R _e1_args,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     Error * error_out,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int64_t _ln,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int32_t _fn) {
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_ioNewline call_tmp8;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_ioNewline initTemp;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool default_arg_skipWhitespaceOnly;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_skipWhitespaceOnly = init_default_skipWhitespaceOnly();
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init125(&initTemp, default_arg_skipWhitespaceOnly);
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = initTemp;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  write14(this24, _e0_args, _e1_args, &call_tmp8, &error, _ln, _fn);
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9535 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy24(&call_tmp8);
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy24(&call_tmp8);
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9535 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriteln;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwriteln:;
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9534 */
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void writeln8(fileWriter_T_defaultSerializer * this24,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     string * _e0_args,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     string * _e1_args,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     string * _e2_args,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     Remote_R _e3_args,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     string * _e4_args,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     R * _e5_args,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     Error * error_out,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int64_t _ln,
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                     int32_t _fn) {
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_ioNewline call_tmp8;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_ioNewline initTemp;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool default_arg_skipWhitespaceOnly;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  error = NULL;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  default_arg_skipWhitespaceOnly = init_default_skipWhitespaceOnly();
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init125(&initTemp, default_arg_skipWhitespaceOnly);
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = initTemp;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  write6(this24, _e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _e5_args, &call_tmp8, &error, _ln, _fn);
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9535 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    chpl__autoDestroy24(&call_tmp8);
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto handler;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl__autoDestroy24(&call_tmp8);
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  handler:;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (error != nil) /* ZLINE: 9535 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = error;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endwriteln;
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9535 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endwriteln:;
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 9534 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9596 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9596 */
#line 9596 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void close5(fileReader_F_defaultDeserializer * this24,
#line 9596 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   Error * error_out,
#line 9596 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   int64_t _ln,
#line 9596 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   int32_t _fn) {
#line 9597 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr err;
#line 9597 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 9599 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 9599 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 9600 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_Error call_tmp10;
#line 9600 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error call_tmp11 = NULL;
#line 9602 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 9603 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp13 = NULL;
#line 9603 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp14;
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp15;
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9597 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 9597 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  err = init_coerce_tmp;
#line 9599 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileReader__channel_internal(this24);
#line 9599 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___EQUALS_26(*(call_tmp8), nil);
#line 9599 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 9599 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9599 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9600 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = createSystemOrChplError2(((int64_t)(EINVAL)), &_str_literal_1466, _ln, _fn);
#line 9600 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl_fix_thrown_error(&call_tmp10, _ln, _fn);
#line 9600 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = call_tmp11;
#line 9600 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endclose;
#line 9600 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9602 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileReader__home(this24);
#line 9602 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp12, _ln, _fn);
#line 9603 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileReader__channel_internal(this24);
#line 9603 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = qio_channel_close(((int32_t)(UINT8(false))), *(call_tmp13));
#line 9603 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&err, call_tmp14);
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = _cond_test7(err);
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp15) /* ZLINE: 9605 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _ch_ioerror(this24, err, &_str_literal_1467, &error, _ln, _fn);
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 9605 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler;
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler:;
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 9605 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _endclose;
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9605 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endclose:;
#line 9596 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 9596 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

#line 9614 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
/* IO.chpl:9614 */
#line 9614 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
static void close6(fileWriter_F_defaultSerializer * this24,
#line 9614 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   Error * error_out,
#line 9614 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   int64_t _ln,
#line 9614 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
                   int32_t _fn) {
#line 9615 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr err;
#line 9615 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr init_coerce_tmp;
#line 9617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp8 = NULL;
#line 9617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp9;
#line 9618 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _owned_Error call_tmp10;
#line 9618 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error call_tmp11 = NULL;
#line 9620 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_locale call_tmp12 = NULL;
#line 9621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _ref_c_ptr_qio_channel_t call_tmp13 = NULL;
#line 9621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  syserr call_tmp14;
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl_bool call_tmp15;
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  Error error = NULL;
#line 9615 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  init_coerce_tmp = chpl___COLON_69(INT64(0), _ln, _fn);
#line 9615 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  err = init_coerce_tmp;
#line 9617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp8 = chpl_get_fileWriter__channel_internal(this24);
#line 9617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp9 = chpl___EQUALS_26(*(call_tmp8), nil);
#line 9617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp9) /* ZLINE: 9617 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9618 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp10 = createSystemOrChplError2(((int64_t)(EINVAL)), &_str_literal_1468, _ln, _fn);
#line 9618 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    call_tmp11 = chpl_fix_thrown_error(&call_tmp10, _ln, _fn);
#line 9618 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    *(error_out) = call_tmp11;
#line 9618 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    goto _endclose;
#line 9618 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9620 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp12 = chpl_get_fileWriter__home(this24);
#line 9620 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _value4(call_tmp12, _ln, _fn);
#line 9621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp13 = chpl_get_fileWriter__channel_internal(this24);
#line 9621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp14 = qio_channel_close(((int32_t)(UINT8(false))), *(call_tmp13));
#line 9621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  chpl___ASSIGN_86(&err, call_tmp14);
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  call_tmp15 = _cond_test7(err);
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  if (call_tmp15) /* ZLINE: 9623 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  {
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    error = NULL;
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    _ch_ioerror3(this24, err, &_str_literal_1469, &error, _ln, _fn);
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 9623 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto handler;
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    handler:;
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    if (error != nil) /* ZLINE: 9623 /Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl */
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    {
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      *(error_out) = error;
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
      goto _endclose;
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
    }
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  }
#line 9623 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  _endclose:;
#line 9614 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
  return;
#line 9614 "/Users/iainmoncrief/Desktop/chapel/modules/standard/IO.chpl"
}

