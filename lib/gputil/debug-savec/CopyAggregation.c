#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
/* CopyAggregation.chpl:87 */
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
static void chpl__init_CopyAggregation(int64_t _ln,
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
                                       int32_t _fn) {
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  if (chpl__init_CopyAggregation_p) /* ZLINE: 87 /Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl */
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  {
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
    goto _exit_chpl__init_CopyAggregation;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  }
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  printModuleInit("%*s\n", "CopyAggregation", INT64(15), _ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  refIndentLevel = &moduleInitLevel;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  *(refIndentLevel) += INT64(1);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  chpl__init_CopyAggregation_p = UINT8(true);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  {
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
    chpl__init_AggregationPrimitives(_ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
    chpl__init_currentTask(_ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
    chpl__init_String(_ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  }
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  yieldFrequency = getEnvInt(&_str_literal_2536, INT64(1024), _ln, _fn);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  dstBuffSize = getEnvInt(&_str_literal_2537, INT64(8192), _ln, _fn);
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  srcBuffSize = getEnvInt(&_str_literal_2538, INT64(8192), _ln, _fn);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  *(refIndentLevel) -= INT64(1);
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  _exit_chpl__init_CopyAggregation:;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
  return;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/packages/CopyAggregation.chpl"
}

