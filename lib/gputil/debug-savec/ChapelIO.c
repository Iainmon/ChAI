#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:38 */
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static void chpl__init_ChapelIO(int64_t _ln,
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                int32_t _fn) {
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (chpl__init_ChapelIO_p) /* ZLINE: 38 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    goto _exit_chpl__init_ChapelIO;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  printModuleInit("%*s\n", "ChapelIO", INT64(8), _ln, _fn);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  refIndentLevel = &moduleInitLevel;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  *(refIndentLevel) += INT64(1);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  chpl__init_ChapelIO_p = UINT8(true);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__init_ChapelBase(_ln, _fn);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__init_ChapelLocale(_ln, _fn);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__init_IO(_ln, _fn);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  *(refIndentLevel) -= INT64(1);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  _exit_chpl__init_ChapelIO:;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:190 */
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static int64_t chpl____numIOFields2(void) {
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  int64_t ret;
#line 192 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  int64_t ret2;
#line 192 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  ret2 = INT64(0);
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  chpl___PLUS__ASSIGN_(&ret2, INT64(1));
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  ret = ret2;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return ret;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:190 */
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static int64_t chpl____numIOFields(void) {
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  int64_t ret;
#line 192 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  int64_t ret2;
#line 192 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  ret2 = INT64(0);
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  chpl___PLUS__ASSIGN_(&ret2, INT64(1));
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  ret = ret2;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return ret;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:190 */
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static int64_t chpl____numIOFields3(void) {
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  int64_t ret;
#line 192 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  int64_t ret2;
#line 192 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  ret2 = INT64(0);
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  chpl___PLUS__ASSIGN_(&ret2, INT64(1));
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  ret = ret2;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return ret;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:210 */
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static void serializeDefaultImpl2(fileWriter_F_defaultSerializer * writer3,
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                  defaultSerializer * serializer2,
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                  Remote_R x2,
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                  Error * error_out,
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                  int64_t _ln,
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                  int32_t _fn) {
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string name;
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  int64_t call_tmp8;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  AggregateSerializer_fileWriter_F_defaultSerializer ser;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  AggregateSerializer_fileWriter_F_defaultSerializer T;
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  Error error = NULL;
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  _ref__owned__RemoteVarContainer_R call_tmp9 = NULL;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  Error error2 = NULL;
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  Error error3 = NULL;
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  name = _str_literal_3366;
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl____numIOFields2();
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  error = NULL;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  T = startClass(serializer2, writer3, &name, call_tmp8, &error, _ln, _fn);
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error != nil) /* ZLINE: 215 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    *(error_out) = error;
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__autoDestroy23(&name, _ln, _fn);
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    goto _endserializeDefaultImpl;
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  ser = T;
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  chpl_check_nil(x2, _ln, _fn);
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp9 = &((x2)->value);
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  error2 = NULL;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  writeField2(&ser, &_str_literal_3367, call_tmp9, &error2, _ln, _fn);
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error2 != nil) /* ZLINE: 228 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    *(error_out) = error2;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__autoDestroy7(&ser, _ln, _fn);
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__autoDestroy23(&name, _ln, _fn);
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    goto _endserializeDefaultImpl;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  error3 = NULL;
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  endClass(&ser, &error3, _ln, _fn);
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error3 != nil) /* ZLINE: 234 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    *(error_out) = error3;
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__autoDestroy7(&ser, _ln, _fn);
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__autoDestroy23(&name, _ln, _fn);
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    goto _endserializeDefaultImpl;
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  chpl__autoDestroy7(&ser, _ln, _fn);
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  chpl__autoDestroy23(&name, _ln, _fn);
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  _endserializeDefaultImpl:;
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return;
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:210 */
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static void serializeDefaultImpl(fileWriter_F_defaultSerializer * writer3,
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                 defaultSerializer * serializer2,
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                 chpl___RemoteVarContainer_R x2,
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                 Error * error_out,
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                 int64_t _ln,
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                 int32_t _fn) {
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string name;
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  int64_t call_tmp8;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  AggregateSerializer_fileWriter_F_defaultSerializer ser;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  AggregateSerializer_fileWriter_F_defaultSerializer T;
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  Error error = NULL;
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  _ref_R call_tmp9 = NULL;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  Error error2 = NULL;
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  Error error3 = NULL;
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  name = _str_literal_3368;
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl____numIOFields();
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  error = NULL;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  T = startClass(serializer2, writer3, &name, call_tmp8, &error, _ln, _fn);
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error != nil) /* ZLINE: 215 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    *(error_out) = error;
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__autoDestroy23(&name, _ln, _fn);
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    goto _endserializeDefaultImpl;
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  ser = T;
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  chpl_check_nil(x2, _ln, _fn);
#line 229 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp9 = &((x2)->containedValue);
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  error2 = NULL;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  writeField(&ser, &_str_literal_3369, call_tmp9, &error2, _ln, _fn);
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error2 != nil) /* ZLINE: 228 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    *(error_out) = error2;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__autoDestroy7(&ser, _ln, _fn);
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__autoDestroy23(&name, _ln, _fn);
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    goto _endserializeDefaultImpl;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  error3 = NULL;
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  endClass(&ser, &error3, _ln, _fn);
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error3 != nil) /* ZLINE: 234 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    *(error_out) = error3;
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__autoDestroy7(&ser, _ln, _fn);
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__autoDestroy23(&name, _ln, _fn);
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    goto _endserializeDefaultImpl;
#line 234 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  chpl__autoDestroy7(&ser, _ln, _fn);
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  chpl__autoDestroy23(&name, _ln, _fn);
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  _endserializeDefaultImpl:;
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return;
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:210 */
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static void serializeDefaultImpl3(fileWriter_F_defaultSerializer * writer3,
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                  defaultSerializer * serializer2,
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                  R * x2,
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                  Error * error_out,
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                  int64_t _ln,
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                  int32_t _fn) {
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string name;
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  int64_t call_tmp8;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  AggregateSerializer_fileWriter_F_defaultSerializer ser;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  AggregateSerializer_fileWriter_F_defaultSerializer T;
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  Error error = NULL;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  Error error2 = NULL;
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  Error error3 = NULL;
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  name = _str_literal_3361;
#line 213 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl____numIOFields3();
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  error = NULL;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  T = startRecord(serializer2, writer3, &name, call_tmp8, &error, _ln, _fn);
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error != nil) /* ZLINE: 217 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    *(error_out) = error;
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__autoDestroy23(&name, _ln, _fn);
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    goto _endserializeDefaultImpl;
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  ser = T;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  error2 = NULL;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  writeField3(&ser, &_str_literal_3370, (x2)->n, &error2, _ln, _fn);
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error2 != nil) /* ZLINE: 228 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    *(error_out) = error2;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__autoDestroy7(&ser, _ln, _fn);
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__autoDestroy23(&name, _ln, _fn);
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    goto _endserializeDefaultImpl;
#line 228 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  error3 = NULL;
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  endRecord(&ser, &error3, _ln, _fn);
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error3 != nil) /* ZLINE: 236 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    *(error_out) = error3;
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__autoDestroy7(&ser, _ln, _fn);
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl__autoDestroy23(&name, _ln, _fn);
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    goto _endserializeDefaultImpl;
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  chpl__autoDestroy7(&ser, _ln, _fn);
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  chpl__autoDestroy23(&name, _ln, _fn);
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  _endserializeDefaultImpl:;
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return;
#line 210 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:783 */
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static void writeln2(string * _e0_args,
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                     string * _e1_args,
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                     string * _e2_args,
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                     Remote_R _e3_args,
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                     string * _e4_args,
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                     R * _e5_args,
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                     int64_t _ln,
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                     int32_t _fn) {
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  fileWriter_T_defaultSerializer local_stdout;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  Error error = NULL;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  local_stdout = stdout2;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  error = NULL;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  writeln8(&local_stdout, _e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _e5_args, &error, _ln, _fn);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error != nil) /* ZLINE: 784 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    goto handler;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  handler:;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error != nil) /* ZLINE: 784 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return;
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:783 */
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static void writeln4(Remote_R _e0_args,
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                     int64_t _ln,
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                     int32_t _fn) {
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  fileWriter_T_defaultSerializer local_stdout;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  Error error = NULL;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  local_stdout = stdout2;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  error = NULL;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  writeln10(&local_stdout, _e0_args, &error, _ln, _fn);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error != nil) /* ZLINE: 784 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    goto handler;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  handler:;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error != nil) /* ZLINE: 784 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return;
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:783 */
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static void writeln(string * _e0_args,
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                    int64_t _ln,
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                    int32_t _fn) {
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  fileWriter_T_defaultSerializer local_stdout;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  Error error = NULL;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  local_stdout = stdout2;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  error = NULL;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  writeln7(&local_stdout, _e0_args, &error, _ln, _fn);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error != nil) /* ZLINE: 784 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    goto handler;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  handler:;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error != nil) /* ZLINE: 784 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return;
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:783 */
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static void writeln3(_owned_Remote_R * _e0_args,
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                     Remote_R _e1_args,
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                     int64_t _ln,
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                     int32_t _fn) {
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  fileWriter_T_defaultSerializer local_stdout;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  Error error = NULL;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  local_stdout = stdout2;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  error = NULL;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  writeln9(&local_stdout, _e0_args, _e1_args, &error, _ln, _fn);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error != nil) /* ZLINE: 784 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    goto handler;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  handler:;
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error != nil) /* ZLINE: 784 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 784 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return;
#line 783 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 789 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:789 */
#line 789 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static void writeln5(int64_t _ln,
#line 789 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                     int32_t _fn) {
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  fileWriter_T_defaultSerializer local_stdout;
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  Error error = NULL;
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  local_stdout = stdout2;
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  error = NULL;
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  writeln6(&local_stdout, &error, _ln, _fn);
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error != nil) /* ZLINE: 790 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    goto handler;
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  handler:;
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  if (error != nil) /* ZLINE: 790 /Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl */
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  {
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 790 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  }
#line 789 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return;
#line 789 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:809 */
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static string chpl_stringify_wrapper10(string * _e0_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       ArrayInit _e1_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       string * _e2_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       int64_t _ln,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       int32_t _fn) {
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string call_tmp8;
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl_stringify9(_e0_args, _e1_args, _e2_args, _ln, _fn);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return call_tmp8;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:809 */
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static string chpl_stringify_wrapper11(string * _e0_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       int64_t _e1_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       string * _e2_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       int64_t _ln,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       int32_t _fn) {
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string call_tmp8;
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl_stringify14(_e0_args, _e1_args, _e2_args, _ln, _fn);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return call_tmp8;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:809 */
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static string chpl_stringify_wrapper15(c_string_rehook _e0_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       int64_t _ln,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       int32_t _fn) {
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string call_tmp8;
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl_stringify12(_e0_args, _ln, _fn);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return call_tmp8;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:809 */
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static string chpl_stringify_wrapper7(string * _e0_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _e1_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      string * _e2_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _e3_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      string * _e4_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _ln,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int32_t _fn) {
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string call_tmp8;
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl_stringify4(_e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _ln, _fn);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return call_tmp8;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:809 */
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static string chpl_stringify_wrapper5(string * _e0_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      string * _e1_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _e2_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      string * _e3_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      range_int64_t_both_one _e4_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _ln,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int32_t _fn) {
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string call_tmp8;
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl_stringify6(_e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _ln, _fn);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return call_tmp8;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:809 */
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static string chpl_stringify_wrapper6(string * _e0_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      range_int64_t_both_one _e1_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      string * _e2_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _e3_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _ln,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int32_t _fn) {
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string call_tmp8;
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl_stringify13(_e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return call_tmp8;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:809 */
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static string chpl_stringify_wrapper(string * _e0_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                     range_byteIndex_both_one _e1_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                     string * _e2_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                     int64_t _e3_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                     int64_t _ln,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                     int32_t _fn) {
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string call_tmp8;
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl_stringify11(_e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return call_tmp8;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:809 */
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static string chpl_stringify_wrapper9(string * _e0_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _e1_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      string * _e2_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _e3_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _ln,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int32_t _fn) {
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string call_tmp8;
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl_stringify3(_e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return call_tmp8;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:809 */
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static string chpl_stringify_wrapper12(string * _e0_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       range_int64_t_low_one _e1_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       string * _e2_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       int64_t _e3_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       int64_t _ln,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       int32_t _fn) {
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string call_tmp8;
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl_stringify15(_e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return call_tmp8;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:809 */
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static string chpl_stringify_wrapper13(string * _e0_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       range_byteIndex_low_one _e1_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       string * _e2_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       int64_t _e3_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       int64_t _ln,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       int32_t _fn) {
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string call_tmp8;
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl_stringify8(_e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return call_tmp8;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:809 */
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static string chpl_stringify_wrapper2(string * _e0_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      range_byteIndex_high_one _e1_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      string * _e2_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _e3_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _ln,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int32_t _fn) {
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string call_tmp8;
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl_stringify2(_e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return call_tmp8;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:809 */
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static string chpl_stringify_wrapper14(string * _e0_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       string * _e1_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       string * _e2_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       string * _e3_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       int64_t _ln,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                       int32_t _fn) {
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string call_tmp8;
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl_stringify5(_e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return call_tmp8;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:809 */
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static string chpl_stringify_wrapper4(string * _e0_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int32_t _e1_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      string * _e2_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _e3_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _ln,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int32_t _fn) {
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string call_tmp8;
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl_stringify10(_e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return call_tmp8;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:809 */
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static string chpl_stringify_wrapper8(string * _e0_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      uint64_t _e1_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _ln,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int32_t _fn) {
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string call_tmp8;
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl_stringify(_e0_args, _e1_args, _ln, _fn);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return call_tmp8;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
/* ChapelIO.chpl:809 */
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
static string chpl_stringify_wrapper3(string * _e0_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _e1_args,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int64_t _ln,
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
                                      int32_t _fn) {
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  string call_tmp8;
#line 811 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  call_tmp8 = chpl_stringify7(_e0_args, _e1_args, _ln, _fn);
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
  return call_tmp8;
#line 809 "/Users/iainmoncrief/Desktop/chapel/modules/standard/ChapelIO.chpl"
}

