#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
/* CopyAggregation.chpl:357 */
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
static void chpl__init_AggregationPrimitives(int64_t _ln,
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
                                             int32_t _fn) {
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  if (chpl__init_AggregationPrimitives_p) /* ZLINE: 357 /Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl */
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  {
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
    goto _exit_chpl__init_AggregationPrimitives;
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  }
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  printModuleInit("%*s\n", "AggregationPrimitives", INT64(21), _ln, _fn);
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  refIndentLevel = &moduleInitLevel;
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  *(refIndentLevel) += INT64(1);
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  chpl__init_AggregationPrimitives_p = UINT8(true);
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  {
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
    chpl__init_Communication(_ln, _fn);
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  }
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  *(refIndentLevel) -= INT64(1);
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  _exit_chpl__init_AggregationPrimitives:;
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  return;
#line 357 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
}

#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
/* CopyAggregation.chpl:374 */
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
static int64_t getEnvInt(string * name,
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
                         int64_t default2,
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
                         int64_t _ln,
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
                         int32_t _fn) {
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  int64_t ret;
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  string call_tmp8;
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  c_ptrConst_int8_t call_tmp9 = NULL;
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  c_ptrConst_int8_t call_tmp10 = NULL;
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  int64_t call_tmp11;
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  string call_tmp12;
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  Error error = NULL;
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  string strval;
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  chpl_bool call_tmp13;
#line 380 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  int64_t call_tmp14;
#line 380 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  Error error2 = NULL;
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  call_tmp8 = localize(name, _ln, _fn);
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  call_tmp9 = c_str(&call_tmp8, _ln, _fn);
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  call_tmp10 = getenv(call_tmp9);
#line 376 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  chpl__autoDestroy23(&call_tmp8, _ln, _fn);
#line 377 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  call_tmp11 = strLen(call_tmp10, _ln, _fn);
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  error = NULL;
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  call_tmp12 = createAdoptingBuffer(call_tmp10, call_tmp11, &error, _ln, _fn);
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  if (error != nil) /* ZLINE: 378 /Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl */
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  {
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
    chpl_uncaught_error(error, _ln, _fn);
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  }
#line 378 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  strval = call_tmp12;
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  call_tmp13 = isEmpty2(&strval);
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  if (call_tmp13) /* ZLINE: 379 /Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl */
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  {
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
    ret = default2;
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
    chpl__autoDestroy23(&strval, _ln, _fn);
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
    goto _end_getEnvInt;
#line 379 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  }
#line 380 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  error2 = NULL;
#line 380 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  call_tmp14 = chpl___COLON_52(&strval, &error2, _ln, _fn);
#line 380 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  if (error2 != nil) /* ZLINE: 380 /Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl */
#line 380 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  {
#line 380 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
    chpl_uncaught_error(error2, _ln, _fn);
#line 380 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  }
#line 380 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  ret = call_tmp14;
#line 380 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  chpl__autoDestroy23(&strval, _ln, _fn);
#line 380 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  _end_getEnvInt:;
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  return ret;
#line 374 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
}

