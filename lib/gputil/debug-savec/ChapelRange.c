#line 1 "<internal>"
/* <internal>:0 */
static void chpl__auto_destroy_range3(range_int64_t_low_one this24) {
  return;
}

#line 1 "<internal>"
/* <internal>:0 */
static void chpl__auto_destroy_range(range_int64_t_both_one this24) {
  return;
}

#line 1 "<internal>"
/* <internal>:0 */
static void chpl__auto_destroy_range4(range_byteIndex_both_one this24) {
  return;
}

#line 1 "<internal>"
/* <internal>:0 */
static void chpl__auto_destroy_range5(range_byteIndex_low_one this24) {
  return;
}

#line 1 "<internal>"
/* <internal>:0 */
static void chpl__auto_destroy_range6(range_byteIndex_high_one this24) {
  return;
}

#line 1 "<internal>"
/* <internal>:0 */
static void chpl__auto_destroy_range2(range_int64_t_high_one this24) {
  return;
}

#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:23 */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void chpl__init_ChapelRange(int64_t _ln,
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                   int32_t _fn) {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (chpl__init_ChapelRange_p) /* ZLINE: 23 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _exit_chpl__init_ChapelRange;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  printModuleInit("%*s\n", "ChapelRange", INT64(11), _ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  refIndentLevel = &moduleInitLevel;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  *(refIndentLevel) += INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__init_ChapelRange_p = UINT8(true);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__init_ChapelBase(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__init_HaltWrappers(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__init_AutoMath(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__init_DSIUtil(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__init_Reflection(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__init_ChapelDebugPrint(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  *(refIndentLevel) -= INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _exit_chpl__init_ChapelRange:;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:98 */
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t * chpl_get_range__low3(range_int64_t_low_one * this24) {
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = &((this24)->_low);
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:98 */
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t * chpl_get_range__low2(range_int64_t_both_one * this24) {
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = &((this24)->_low);
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:98 */
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t * chpl_get_range__low(range_byteIndex_both_one * this24) {
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = &((this24)->_low);
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:98 */
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t * chpl_get_range__low4(range_byteIndex_low_one * this24) {
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = &((this24)->_low);
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:98 */
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t * chpl_get_range__low6(range_byteIndex_high_one * this24) {
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = &((this24)->_low);
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:98 */
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t * chpl_get_range__low5(range_int64_t_high_one * this24) {
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = &((this24)->_low);
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:99 */
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t * chpl_get_range__high3(range_int64_t_both_one * this24) {
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = &((this24)->_high);
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:99 */
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t * chpl_get_range__high4(range_byteIndex_both_one * this24) {
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = &((this24)->_high);
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:99 */
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t * chpl_get_range__high6(range_int64_t_low_one * this24) {
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = &((this24)->_high);
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:99 */
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t * chpl_get_range__high(range_byteIndex_low_one * this24) {
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = &((this24)->_high);
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:99 */
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t * chpl_get_range__high2(range_byteIndex_high_one * this24) {
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = &((this24)->_high);
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:99 */
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t * chpl_get_range__high5(range_int64_t_high_one * this24) {
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = &((this24)->_high);
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:100 */
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void chpl_get_range__stride(range_int64_t_both_one * this24) {
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:100 */
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void chpl_get_range__stride2(range_int64_t_low_one * this24) {
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:100 */
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void chpl_get_range__stride3(range_int64_t_high_one * this24) {
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:102 */
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void chpl_get_range__alignment2(range_int64_t_both_one * this24) {
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:102 */
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void chpl_get_range__alignment(range_int64_t_low_one * this24) {
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:102 */
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void chpl_get_range__alignment3(range_int64_t_high_one * this24) {
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:155 */
#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t lowBoundForIter(range_int64_t_both_one r) {
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = lowBound4(r);
#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:167 */
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t highBoundForIter(range_int64_t_both_one r) {
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = highBound2(r);
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:189 */
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void init35(range_int64_t_both_one * this24,
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t low3,
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t high2) {
#line 192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl__idxToInt(low3);
#line 192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_low = call_tmp8;
#line 193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl__idxToInt(high2);
#line 193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_high = call_tmp9;
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:189 */
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void init36(range_byteIndex_both_one * this24,
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   byteIndex * low3,
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   byteIndex * high2) {
#line 192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl__idxToInt2(low3);
#line 192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_low = call_tmp8;
#line 193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl__idxToInt2(high2);
#line 193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_high = call_tmp9;
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:199 */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void init37(range_int64_t_low_one * this24,
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t low3) {
#line 202 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 202 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl__idxToInt(low3);
#line 202 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_low = call_tmp8;
#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_high = INT64(0);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:199 */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void init38(range_byteIndex_low_one * this24,
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   byteIndex * low3) {
#line 202 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 202 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl__idxToInt2(low3);
#line 202 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_low = call_tmp8;
#line 203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_high = INT64(0);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:212 */
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void init39(range_byteIndex_high_one * this24,
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   byteIndex * high2) {
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_low = INT64(0);
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl__idxToInt2(high2);
#line 215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_high = call_tmp8;
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 238 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:238 */
#line 238 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void init40(range_int64_t_both_one * this24) {
#line 245 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init48(this24, INT64(1), INT64(0), INT64(1), INT64(0));
#line 238 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 238 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:254 */
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void init41(range_int64_t_both_one * this24) {
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init48(this24, INT64(1), INT64(0), INT64(1), INT64(0));
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:254 */
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void init43(range_int64_t_low_one * this24) {
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init46(this24, INT64(1), INT64(0), INT64(1), INT64(0));
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:254 */
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void init42(range_int64_t_high_one * this24) {
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init47(this24, INT64(0), INT64(0), INT64(1), INT64(0));
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:290 */
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void init44(range_int64_t_both_one * this24,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t _low,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t _high) {
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_low = _low;
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_high = _high;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:290 */
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void init48(range_int64_t_both_one * this24,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t _low,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t _high,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t _stride,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t alignmentValue) {
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_low = _low;
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_high = _high;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:290 */
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void init46(range_int64_t_low_one * this24,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t _low,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t _high,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t _stride,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t alignmentValue) {
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_low = _low;
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_high = _high;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:290 */
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void init45(range_int64_t_both_one * this24,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t _low,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t _high,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t _stride) {
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_low = _low;
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_high = _high;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:290 */
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void init47(range_int64_t_high_one * this24,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t _low,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t _high,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t _stride,
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t alignmentValue) {
#line 297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_low = _low;
#line 298 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->_high = _high;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:406 */
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static range_int64_t_both_one chpl_build_bounded_range(void) {
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one call_tmp8;
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one initTemp;
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init35(&initTemp, INT64(0), INT64(0));
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = initTemp;
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:406 */
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static range_int64_t_both_one chpl_build_bounded_range2(void) {
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one call_tmp8;
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one initTemp;
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init35(&initTemp, INT64(1), INT64(0));
#line 408 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = initTemp;
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 406 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:417 */
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static range_int64_t_both_one chpl_build_bounded_range3(int64_t low3,
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                        int64_t high2) {
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one call_tmp8;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one initTemp;
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init35(&initTemp, low3, high2);
#line 418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = initTemp;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 417 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:451 */
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t chpl__nudgeHighBound(int64_t high2) {
#line 452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp10;
#line 452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl__idxToInt(high2);
#line 452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl___HYPHEN_6(call_tmp8);
#line 452 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl__intToIdx(call_tmp9);
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp10;
#line 451 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:459 */
#line 459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static range_int64_t_low_one chpl_build_low_bounded_range(int64_t low3) {
#line 460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_low_one call_tmp8;
#line 460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_low_one initTemp;
#line 460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init37(&initTemp, low3);
#line 460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = initTemp;
#line 459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 459 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:697 */
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t lowBound4(range_int64_t_both_one this24) {
#line 701 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 701 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 701 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__low2(&this24);
#line 701 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_intToIdx3(this24, *(call_tmp8));
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp9;
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:697 */
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static byteIndex lowBound3(range_byteIndex_both_one this24) {
#line 701 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 701 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  byteIndex call_tmp9;
#line 701 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__low(&this24);
#line 701 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_intToIdx4(this24, *(call_tmp8));
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp9;
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:697 */
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t lowBound5(range_int64_t_low_one this24) {
#line 701 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 701 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 701 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__low3(&this24);
#line 701 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_intToIdx(this24, *(call_tmp8));
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp9;
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:697 */
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static byteIndex lowBound2(range_byteIndex_low_one this24) {
#line 701 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 701 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  byteIndex call_tmp9;
#line 701 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__low4(&this24);
#line 701 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_intToIdx5(this24, *(call_tmp8));
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp9;
#line 697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 978 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:978 */
#line 978 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t low(range_int64_t_low_one this24) {
#line 982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = alignedLowAsInt(this24);
#line 982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_intToIdx(this24, call_tmp8);
#line 978 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp9;
#line 978 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 978 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:978 */
#line 978 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t low2(range_int64_t_both_one this24) {
#line 982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = alignedLowAsInt2(this24);
#line 982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_intToIdx3(this24, call_tmp8);
#line 978 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp9;
#line 978 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 986 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:986 */
#line 986 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t alignedLowAsInt(range_int64_t_low_one this24) {
#line 986 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t ret;
#line 991 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 991 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__low3(&this24);
#line 991 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = *(call_tmp8);
#line 986 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 986 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 986 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:986 */
#line 986 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t alignedLowAsInt2(range_int64_t_both_one this24) {
#line 986 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t ret;
#line 991 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 991 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__low2(&this24);
#line 991 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = *(call_tmp8);
#line 986 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 986 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1022 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1022 */
#line 1022 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t highBound2(range_int64_t_both_one this24) {
#line 1032 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1032 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 1032 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__high3(&this24);
#line 1032 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_intToIdx3(this24, *(call_tmp8));
#line 1022 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp9;
#line 1022 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1022 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1022 */
#line 1022 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static byteIndex highBound(range_byteIndex_both_one this24) {
#line 1032 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1032 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  byteIndex call_tmp9;
#line 1032 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__high4(&this24);
#line 1032 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_intToIdx4(this24, *(call_tmp8));
#line 1022 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp9;
#line 1022 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1022 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1022 */
#line 1022 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static byteIndex highBound3(range_byteIndex_high_one this24) {
#line 1032 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1032 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  byteIndex call_tmp9;
#line 1032 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__high2(&this24);
#line 1032 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_intToIdx2(this24, *(call_tmp8));
#line 1022 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp9;
#line 1022 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1052 */
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t high(range_int64_t_both_one this24) {
#line 1068 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 1068 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 1068 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = alignedHighAsInt(this24);
#line 1068 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_intToIdx3(this24, call_tmp8);
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp9;
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1072 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1072 */
#line 1072 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t alignedHighAsInt(range_int64_t_both_one this24) {
#line 1072 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t ret;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__high3(&this24);
#line 1077 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = *(call_tmp8);
#line 1072 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 1072 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1131 */
#line 1131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static chpl_bool isEmpty(range_int64_t_both_one this24) {
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp8;
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = isEmptyHelp(this24);
#line 1131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 1131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1142 */
#line 1142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static chpl_bool isEmptyHelp(range_int64_t_both_one r) {
#line 1150 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 1150 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 1150 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp10;
#line 1150 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = alignedLowAsInt2(r);
#line 1150 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = alignedHighAsInt(r);
#line 1150 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl___GREATER_(call_tmp8, call_tmp9);
#line 1142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp10;
#line 1142 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1161 */
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t size3(range_int64_t_both_one this24,
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                     int64_t _ln,
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                     int32_t _fn) {
#line 1162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 1162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = sizeAs4(this24, _ln, _fn);
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1175 */
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static uint64_t sizeAs3(range_int64_t_both_one this24,
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                        int64_t _ln,
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                        int32_t _fn) {
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp8;
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_al;
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_ah;
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_al = sizeAsHelp_default_al(this24);
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_ah = sizeAsHelp_default_ah(this24);
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = sizeAsHelp(this24, default_arg_al, default_arg_ah, _ln, _fn);
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1175 */
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t sizeAs4(range_int64_t_both_one this24,
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                       int64_t _ln,
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                       int32_t _fn) {
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_al;
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_ah;
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_al = sizeAsHelp_default_al2(this24);
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_ah = sizeAsHelp_default_ah2(this24);
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = sizeAsHelp2(this24, default_arg_al, default_arg_ah, _ln, _fn);
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1187 */
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static uint64_t sizeAsHelp(range_int64_t_both_one this24,
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                           int64_t al,
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                           int64_t ah,
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                           int64_t _ln,
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                           int32_t _fn) {
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t ret;
#line 1191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp10;
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp11;
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp12;
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp13;
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T;
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T2;
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp14;
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp15;
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp16;
#line 1191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = alignedHighAsInt(this24);
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = alignedLowAsInt2(this24);
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl___GREATER_(call_tmp9, call_tmp8);
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp10) /* ZLINE: 1193 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ret = UINT64(0);
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_sizeAsHelp;
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = chpl___HYPHEN_4(((uint64_t)(call_tmp8)), ((uint64_t)(call_tmp9)));
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = chpl___SLASH_2(call_tmp11, UINT64(1), _ln, _fn);
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp13 = chpl___PLUS_5(call_tmp12);
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl___EQUALS_18(call_tmp13, INT64(0), _ln, _fn);
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T) /* ZLINE: 1200 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T2 = UINT8(true);
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 1200 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T2 = chpl___GREATER_3(call_tmp13, UINT64(18446744073709551615));
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T2) /* ZLINE: 1200 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp14 = chpl___COLON_27(this24, _ln, _fn);
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp15 = chpl___PLUS_9(&_str_literal_3300, &call_tmp14, _ln, _fn);
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp16 = chpl___PLUS_9(&call_tmp15, &_str_literal_37, _ln, _fn);
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    boundsCheckHalt(&call_tmp16, _ln, _fn);
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy23(&call_tmp15, _ln, _fn);
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy23(&call_tmp14, _ln, _fn);
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = call_tmp13;
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _end_sizeAsHelp:;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1187 */
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t sizeAsHelp2(range_int64_t_both_one this24,
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                           int64_t al,
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                           int64_t ah,
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                           int64_t _ln,
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                           int32_t _fn) {
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t ret;
#line 1191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp10;
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp11;
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp12;
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp13;
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T;
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T2;
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp14;
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp15;
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp16;
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp17;
#line 1191 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = alignedHighAsInt(this24);
#line 1192 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = alignedLowAsInt2(this24);
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl___GREATER_(call_tmp9, call_tmp8);
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp10) /* ZLINE: 1193 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ret = INT64(0);
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_sizeAsHelp;
#line 1193 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = chpl___HYPHEN_4(((uint64_t)(call_tmp8)), ((uint64_t)(call_tmp9)));
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = chpl___SLASH_2(call_tmp11, UINT64(1), _ln, _fn);
#line 1199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp13 = chpl___PLUS_5(call_tmp12);
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl___EQUALS_18(call_tmp13, INT64(0), _ln, _fn);
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T) /* ZLINE: 1200 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T2 = UINT8(true);
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 1200 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T2 = chpl___GREATER_5(call_tmp13, INT64(9223372036854775807), _ln, _fn);
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T2) /* ZLINE: 1200 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp14 = chpl___COLON_27(this24, _ln, _fn);
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp15 = chpl___PLUS_9(&_str_literal_3303, &call_tmp14, _ln, _fn);
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp16 = chpl___PLUS_9(&call_tmp15, &_str_literal_37, _ln, _fn);
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    boundsCheckHalt(&call_tmp16, _ln, _fn);
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy23(&call_tmp15, _ln, _fn);
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy23(&call_tmp14, _ln, _fn);
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp17 = chpl___COLON_6(call_tmp13, _ln, _fn);
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = call_tmp17;
#line 1203 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _end_sizeAsHelp:;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1188 */
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t sizeAsHelp_default_al(range_int64_t_both_one this24) {
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t al;
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  al = alignedLowAsInt2(this24);
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return al;
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1188 */
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t sizeAsHelp_default_al2(range_int64_t_both_one this24) {
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t al;
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  al = alignedLowAsInt2(this24);
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return al;
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1189 */
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t sizeAsHelp_default_ah(range_int64_t_both_one this24) {
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t ah;
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ah = alignedHighAsInt(this24);
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ah;
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1189 */
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t sizeAsHelp_default_ah2(range_int64_t_both_one this24) {
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t ah;
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ah = alignedHighAsInt(this24);
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ah;
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1234 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1234 */
#line 1234 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static chpl_bool hasFirst(range_int64_t_both_one this24) {
#line 1236 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp8;
#line 1235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  warnUnstableFirst2(this24);
#line 1236 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = hasFirstForIter(this24);
#line 1234 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 1234 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1241 */
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static chpl_bool hasFirstForIter(range_int64_t_both_one this24) {
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp8;
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T;
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = isEmpty(this24);
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp8) /* ZLINE: 1242 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T = UINT8(false);
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 1242 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T = UINT8(true);
#line 1242 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return T;
#line 1241 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1270 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1270 */
#line 1270 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t first(range_int64_t_both_one this24) {
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 1271 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  warnUnstableFirst(this24);
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = firstAsInt(this24);
#line 1272 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_intToIdx3(this24, call_tmp8);
#line 1270 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp9;
#line 1270 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1275 */
#line 1275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void warnUnstableFirst(range_int64_t_both_one r) {
#line 1275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 1275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1275 */
#line 1275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void warnUnstableFirst2(range_int64_t_both_one r) {
#line 1275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 1275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1307 */
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t firstAsInt(range_int64_t_both_one this24) {
#line 1308 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 1308 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = alignedLowAsInt2(this24);
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return T;
#line 1307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1312 */
#line 1312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t chpl_firstAsIntForIter(range_int64_t_both_one this24) {
#line 1314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 1314 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = firstAsInt(this24);
#line 1312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 1312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1411 */
#line 1411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t lastAsInt(range_int64_t_both_one this24) {
#line 1412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 1412 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = alignedHighAsInt(this24);
#line 1411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return T;
#line 1411 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1416 */
#line 1416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t chpl_lastAsIntForIter(range_int64_t_both_one this24) {
#line 1418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 1418 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = lastAsInt(this24);
#line 1416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 1416 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1442 */
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static chpl_bool contains3(range_int64_t_both_one this24,
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                           int64_t ind) {
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool ret;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 1454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 1454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp10;
#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp12;
#line 1450 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl__idxToInt(ind);
#line 1454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_get_range__high3(&this24);
#line 1454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl___GREATER_(call_tmp8, *(call_tmp9));
#line 1454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp10) /* ZLINE: 1454 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ret = UINT8(false);
#line 1454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_contains;
#line 1454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = chpl_get_range__low2(&this24);
#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = chpl___LESS_3(call_tmp8, *(call_tmp11));
#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp12) /* ZLINE: 1458 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ret = UINT8(false);
#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_contains;
#line 1458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1465 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = UINT8(true);
#line 1465 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _end_contains:;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 1442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1471 */
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static chpl_bool contains4(range_int64_t_both_one this24,
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                           range_int64_t_both_one other,
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                           int64_t _ln,
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                           int32_t _fn) {
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool ret;
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp8;
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp9;
#line 1480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp10;
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one call_tmp11;
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one slice;
#line 1489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one call_tmp12;
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = sizeAs3(this24, _ln, _fn);
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl___EQUALS_18(call_tmp8, INT64(0), _ln, _fn);
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp9) /* ZLINE: 1479 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1479 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp10 = sizeAs3(other, _ln, _fn);
#line 1480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ret = chpl___EQUALS_18(call_tmp10, INT64(0), _ln, _fn);
#line 1480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_contains;
#line 1480 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = this11(this24, other);
#line 1482 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  slice = call_tmp11;
#line 1489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = adjustedSlice(&slice);
#line 1489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = chpl___EQUALS_20(other, call_tmp12, _ln, _fn);
#line 1489 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy59(call_tmp12);
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy59(call_tmp11);
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _end_contains:;
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 1471 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1486 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1486 */
#line 1486 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static range_int64_t_both_one adjustedSlice(range_int64_t_both_one * slice) {
#line 1486 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one ret;
#line 1486 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = *(slice);
#line 1486 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 1486 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1517 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1517 */
#line 1517 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static chpl_bool chpl___EQUALS_20(range_int64_t_both_one r1,
#line 1517 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                  range_int64_t_both_one r2,
#line 1517 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                  int64_t _ln,
#line 1517 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                  int32_t _fn) {
#line 1517 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool ret;
#line 1531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp8;
#line 1531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp9;
#line 1532 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp10;
#line 1533 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp11;
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp12;
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp13;
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp14;
#line 1535 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp15;
#line 1531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = sizeAs3(r1, _ln, _fn);
#line 1531 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = sizeAs3(r2, _ln, _fn);
#line 1532 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl___EXCLAMATION__ASSIGN_4(call_tmp8, call_tmp9);
#line 1532 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp10) /* ZLINE: 1532 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1532 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1532 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ret = UINT8(false);
#line 1532 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end__EQUALS_;
#line 1532 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1533 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = chpl___EQUALS_18(call_tmp8, INT64(0), _ln, _fn);
#line 1533 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp11) /* ZLINE: 1533 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1533 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1533 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ret = UINT8(true);
#line 1533 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end__EQUALS_;
#line 1533 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = first(r1);
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp13 = first(r2);
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp14 = chpl___EXCLAMATION__ASSIGN_2(call_tmp12, call_tmp13);
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp14) /* ZLINE: 1534 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ret = UINT8(false);
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end__EQUALS_;
#line 1534 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1535 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp15 = chpl___EQUALS_18(call_tmp8, INT64(1), _ln, _fn);
#line 1535 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp15) /* ZLINE: 1535 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1535 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1535 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ret = UINT8(true);
#line 1535 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end__EQUALS_;
#line 1535 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = UINT8(true);
#line 1537 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _end__EQUALS_:;
#line 1517 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 1517 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1555 */
#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static chpl_bool chpl___EXCLAMATION__ASSIGN_10(range_int64_t_both_one r1,
#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                               range_int64_t_both_one r2,
#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                               int64_t _ln,
#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                               int32_t _fn) {
#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp8;
#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp9;
#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl___EQUALS_20(r1, r2, _ln, _fn);
#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl___EXCLAMATION_(call_tmp8);
#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp9;
#line 1555 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1679 */
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static range_int64_t_both_one chpl___COLON_22(range_byteIndex_both_one r,
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                              int64_t _ln,
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                              int32_t _fn) {
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one ret;
#line 1684 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one initTemp;
#line 1684 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one tmp;
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  byteIndex call_tmp8;
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T2;
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  byteIndex call_tmp11;
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp12;
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp13 = NULL;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _owned_IllegalArgumentError2 call_tmp14;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  IllegalArgumentError ifvar_borrow = NULL;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp15;
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp16;
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  Error coerce_tmp2 = NULL;
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string ret_tmp;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkBounds2(r);
#line 1682 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkEnumIdx(r);
#line 1684 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init41(&initTemp);
#line 1684 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  tmp = initTemp;
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = lowBound3(r);
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl___COLON_42(&call_tmp8);
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl__idxToInt(call_tmp9);
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl_get_range__low2(&tmp);
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___ASSIGN_3(call_tmp10, T);
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy26(&call_tmp8);
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = highBound(r);
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = chpl___COLON_42(&call_tmp11);
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = chpl__idxToInt(call_tmp12);
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp13 = chpl_get_range__high3(&tmp);
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___ASSIGN_3(call_tmp13, T2);
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy26(&call_tmp11);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp14 = chpl_checkStrides3(r, _ln, _fn);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ifvar_borrow = chpl_checkBorrowIfVar2(&call_tmp14);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp15 = _cond_test4(ifvar_borrow, _ln, _fn);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp15) /* ZLINE: 1696 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    coerce_tmp2 = ((Error)(ifvar_borrow));
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ((void(*)(Error,
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
       string *,
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
       int64_t,
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(coerce_tmp2))->chpl__cid) + INT64(1))])(coerce_tmp2, &ret_tmp, _ln, _fn);
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp16 = ret_tmp;
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    boundsCheckHalt(&call_tmp16, _ln, _fn);
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy87(&call_tmp14, _ln, _fn);
#line 1707 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = tmp;
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1679 */
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static range_int64_t_high_one chpl___COLON_23(range_byteIndex_high_one r,
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                              int64_t _ln,
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                              int32_t _fn) {
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_high_one ret;
#line 1684 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_high_one initTemp;
#line 1684 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_high_one tmp;
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T = NULL;
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T2;
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  byteIndex call_tmp9;
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp10;
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _owned_IllegalArgumentError2 call_tmp12;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  IllegalArgumentError ifvar_borrow = NULL;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp13;
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp14;
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  Error coerce_tmp2 = NULL;
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string ret_tmp;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkBounds(r);
#line 1682 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkEnumIdx3(r);
#line 1684 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init42(&initTemp);
#line 1684 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  tmp = initTemp;
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl_get_range__low6(&r);
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__low5(&tmp);
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___ASSIGN_3(call_tmp8, *(T));
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = highBound3(r);
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl___COLON_42(&call_tmp9);
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = chpl__idxToInt(call_tmp10);
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = chpl_get_range__high5(&tmp);
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___ASSIGN_3(call_tmp11, T2);
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy26(&call_tmp9);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = chpl_checkStrides2(r, _ln, _fn);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ifvar_borrow = chpl_checkBorrowIfVar2(&call_tmp12);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp13 = _cond_test4(ifvar_borrow, _ln, _fn);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp13) /* ZLINE: 1696 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    coerce_tmp2 = ((Error)(ifvar_borrow));
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ((void(*)(Error,
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
       string *,
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
       int64_t,
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(coerce_tmp2))->chpl__cid) + INT64(1))])(coerce_tmp2, &ret_tmp, _ln, _fn);
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp14 = ret_tmp;
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    boundsCheckHalt(&call_tmp14, _ln, _fn);
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy23(&call_tmp14, _ln, _fn);
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy87(&call_tmp12, _ln, _fn);
#line 1707 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = tmp;
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1679 */
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static range_int64_t_low_one chpl___COLON_24(range_byteIndex_low_one r,
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                             int64_t _ln,
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                             int32_t _fn) {
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_low_one ret;
#line 1684 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_low_one initTemp;
#line 1684 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_low_one tmp;
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  byteIndex call_tmp8;
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T2 = NULL;
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _owned_IllegalArgumentError2 call_tmp12;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  IllegalArgumentError ifvar_borrow = NULL;
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp13;
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp14;
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  Error coerce_tmp2 = NULL;
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string ret_tmp;
#line 1681 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkBounds3(r);
#line 1682 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkEnumIdx2(r);
#line 1684 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init43(&initTemp);
#line 1684 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  tmp = initTemp;
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = lowBound2(r);
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl___COLON_42(&call_tmp8);
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl__idxToInt(call_tmp9);
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl_get_range__low3(&tmp);
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___ASSIGN_3(call_tmp10, T);
#line 1689 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy26(&call_tmp8);
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = chpl_get_range__high(&r);
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = chpl_get_range__high6(&tmp);
#line 1692 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___ASSIGN_3(call_tmp11, *(T2));
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = chpl_checkStrides(r, _ln, _fn);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ifvar_borrow = chpl_checkBorrowIfVar2(&call_tmp12);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp13 = _cond_test4(ifvar_borrow, _ln, _fn);
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp13) /* ZLINE: 1696 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    coerce_tmp2 = ((Error)(ifvar_borrow));
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ((void(*)(Error,
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
       string *,
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
       int64_t,
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
       int32_t))chpl_vmtable[((INT64(6) * ((RootClass)(coerce_tmp2))->chpl__cid) + INT64(1))])(coerce_tmp2, &ret_tmp, _ln, _fn);
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp14 = ret_tmp;
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    boundsCheckHalt(&call_tmp14, _ln, _fn);
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy23(&call_tmp14, _ln, _fn);
#line 1697 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1696 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy87(&call_tmp12, _ln, _fn);
#line 1707 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = tmp;
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 1679 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1767 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1767 */
#line 1767 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void checkBounds2(range_byteIndex_both_one from) {
#line 1767 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 1767 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1767 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1767 */
#line 1767 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void checkBounds3(range_byteIndex_low_one from) {
#line 1767 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 1767 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1767 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1767 */
#line 1767 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void checkBounds(range_byteIndex_high_one from) {
#line 1767 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 1767 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1779 */
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void checkEnumIdx(range_byteIndex_both_one from) {
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1779 */
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void checkEnumIdx2(range_byteIndex_low_one from) {
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1779 */
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void checkEnumIdx3(range_byteIndex_high_one from) {
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 1779 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1793 */
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static _owned_IllegalArgumentError2 chpl_checkStrides3(range_byteIndex_both_one this24,
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                       int64_t _ln,
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                       int32_t _fn) {
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _owned_IllegalArgumentError2 ret;
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool needThrow;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _owned_IllegalArgumentError call_tmp8;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  IllegalArgumentError new_temp = NULL;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _owned_IllegalArgumentError initTemp;
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  needThrow = UINT8(false);
#line 1800 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___ASSIGN_(&needThrow, UINT8(false));
#line 1807 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (needThrow) /* ZLINE: 1807 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1807 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    new_temp = _new15(&_str_literal_3313, _ln, _fn);
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    init75(&initTemp, new_temp);
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp8 = initTemp;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    init_ASSIGN_9(&ret, &call_tmp8, _ln, _fn);
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy89(&call_tmp8, _ln, _fn);
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_chpl_checkStrides;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 1807 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    init_ASSIGN_22(&ret, nil, _ln, _fn);
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_chpl_checkStrides;
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _end_chpl_checkStrides:;
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1793 */
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static _owned_IllegalArgumentError2 chpl_checkStrides(range_byteIndex_low_one this24,
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                      int64_t _ln,
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                      int32_t _fn) {
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _owned_IllegalArgumentError2 ret;
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool needThrow;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _owned_IllegalArgumentError call_tmp8;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  IllegalArgumentError new_temp = NULL;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _owned_IllegalArgumentError initTemp;
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  needThrow = UINT8(false);
#line 1800 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___ASSIGN_(&needThrow, UINT8(false));
#line 1807 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (needThrow) /* ZLINE: 1807 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1807 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    new_temp = _new15(&_str_literal_3313, _ln, _fn);
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    init75(&initTemp, new_temp);
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp8 = initTemp;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    init_ASSIGN_9(&ret, &call_tmp8, _ln, _fn);
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy89(&call_tmp8, _ln, _fn);
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_chpl_checkStrides;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 1807 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    init_ASSIGN_22(&ret, nil, _ln, _fn);
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_chpl_checkStrides;
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _end_chpl_checkStrides:;
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1793 */
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static _owned_IllegalArgumentError2 chpl_checkStrides2(range_byteIndex_high_one this24,
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                       int64_t _ln,
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                       int32_t _fn) {
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _owned_IllegalArgumentError2 ret;
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool needThrow;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _owned_IllegalArgumentError call_tmp8;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  IllegalArgumentError new_temp = NULL;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _owned_IllegalArgumentError initTemp;
#line 1798 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  needThrow = UINT8(false);
#line 1800 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___ASSIGN_(&needThrow, UINT8(false));
#line 1807 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (needThrow) /* ZLINE: 1807 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1807 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    new_temp = _new15(&_str_literal_3313, _ln, _fn);
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    init75(&initTemp, new_temp);
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp8 = initTemp;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    init_ASSIGN_9(&ret, &call_tmp8, _ln, _fn);
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy89(&call_tmp8, _ln, _fn);
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_chpl_checkStrides;
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 1807 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1808 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    init_ASSIGN_22(&ret, nil, _ln, _fn);
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_chpl_checkStrides;
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1811 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _end_chpl_checkStrides:;
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 1793 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1855 */
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static chpl_bool chpl_boundsCheck(range_int64_t_both_one this24,
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                  range_int64_t_both_one other,
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                  int64_t _ln,
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                  int32_t _fn) {
#line 1860 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one boundedOther;
#line 1863 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T = NULL;
#line 1864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T2 = NULL;
#line 1860 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one T3;
#line 1861 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one initTemp;
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T4;
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp8;
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T5;
#line 1863 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl_get_range__low2(&other);
#line 1864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = chpl_get_range__high3(&other);
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_get_range__stride(&other);
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_get_range__alignment2(&other);
#line 1861 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init44(&initTemp, *(T), *(T2));
#line 1860 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T3 = initTemp;
#line 1860 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  boundedOther = T3;
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = sizeAs3(T3, _ln, _fn);
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T4 = chpl___EQUALS_18(call_tmp8, INT64(0), _ln, _fn);
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T4) /* ZLINE: 1892 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T5 = UINT8(true);
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 1892 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T5 = contains4(this24, boundedOther, _ln, _fn);
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy59(boundedOther);
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return T5;
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1855 */
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static chpl_bool chpl_boundsCheck3(range_int64_t_both_one this24,
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                   range_int64_t_low_one other,
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                   int64_t _ln,
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                   int32_t _fn) {
#line 1860 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one boundedOther;
#line 1863 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T = NULL;
#line 1864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T2 = NULL;
#line 1860 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one T3;
#line 1861 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one initTemp;
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T4;
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp8;
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T5;
#line 1863 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl_get_range__low3(&other);
#line 1864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = chpl_get_range__high3(&this24);
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_get_range__stride2(&other);
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_get_range__alignment(&other);
#line 1861 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init44(&initTemp, *(T), *(T2));
#line 1860 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T3 = initTemp;
#line 1860 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  boundedOther = T3;
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = sizeAs3(T3, _ln, _fn);
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T4 = chpl___EQUALS_18(call_tmp8, INT64(0), _ln, _fn);
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T4) /* ZLINE: 1892 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T5 = UINT8(true);
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 1892 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T5 = contains4(this24, boundedOther, _ln, _fn);
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy59(boundedOther);
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return T5;
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1855 */
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static chpl_bool chpl_boundsCheck2(range_int64_t_both_one this24,
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                   range_int64_t_high_one other,
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                   int64_t _ln,
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                   int32_t _fn) {
#line 1860 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one boundedOther;
#line 1863 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T = NULL;
#line 1864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T2 = NULL;
#line 1860 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one T3;
#line 1861 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one initTemp;
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T4;
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp8;
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T5;
#line 1863 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl_get_range__low2(&this24);
#line 1864 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = chpl_get_range__high5(&other);
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_get_range__stride3(&other);
#line 1865 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_get_range__alignment3(&other);
#line 1861 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init44(&initTemp, *(T), *(T2));
#line 1860 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T3 = initTemp;
#line 1860 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  boundedOther = T3;
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = sizeAs3(T3, _ln, _fn);
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T4 = chpl___EQUALS_18(call_tmp8, INT64(0), _ln, _fn);
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T4) /* ZLINE: 1892 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T5 = UINT8(true);
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 1892 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T5 = contains4(this24, boundedOther, _ln, _fn);
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1892 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy59(boundedOther);
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return T5;
#line 1855 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 1979 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:1979 */
#line 1979 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t orderToIndex(range_int64_t_both_one this24,
#line 1979 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                            int64_t ord,
#line 1979 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                            int64_t _ln,
#line 1979 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                            int32_t _fn) {
#line 1982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp8;
#line 1982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp9;
#line 1988 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp10;
#line 1989 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp11;
#line 1989 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp12;
#line 1991 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp13;
#line 1991 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp14;
#line 1993 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp15;
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp16;
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp17;
#line 1993 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  uint64_t call_tmp18;
#line 1993 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp19;
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp20;
#line 1996 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp21;
#line 1996 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp22;
#line 1996 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp23;
#line 1982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = hasFirst(this24);
#line 1982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl___EXCLAMATION_(call_tmp8);
#line 1982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp9) /* ZLINE: 1982 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1983 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    boundsCheckHalt(&_str_literal_838, _ln, _fn);
#line 1983 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1988 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl___LESS_3(ord, INT64(0));
#line 1988 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp10) /* ZLINE: 1988 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1988 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1989 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp11 = chpl___COLON_48(ord, _ln, _fn);
#line 1989 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp12 = chpl___PLUS_9(&_str_literal_840, &call_tmp11, _ln, _fn);
#line 1989 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    boundsCheckHalt(&call_tmp12, _ln, _fn);
#line 1989 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 1989 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 1989 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1991 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp13 = sizeAs3(this24, _ln, _fn);
#line 1991 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp14 = chpl___GREATER__ASSIGN_3(ord, call_tmp13, _ln, _fn);
#line 1991 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp14) /* ZLINE: 1991 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 1991 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 1993 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp15 = chpl___COLON_48(ord, _ln, _fn);
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp16 = chpl___PLUS_9(&_str_literal_841, &call_tmp15, _ln, _fn);
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp17 = chpl___PLUS_9(&call_tmp16, &_str_literal_842, _ln, _fn);
#line 1993 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp18 = sizeAs3(this24, _ln, _fn);
#line 1993 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp19 = chpl___COLON_49(call_tmp18, _ln, _fn);
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp20 = chpl___PLUS_9(&call_tmp17, &call_tmp19, _ln, _fn);
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    boundsCheckHalt(&call_tmp20, _ln, _fn);
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy23(&call_tmp20, _ln, _fn);
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy23(&call_tmp19, _ln, _fn);
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy23(&call_tmp17, _ln, _fn);
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy23(&call_tmp16, _ln, _fn);
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl__autoDestroy23(&call_tmp15, _ln, _fn);
#line 1992 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 1996 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp21 = firstAsInt(this24);
#line 1996 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp22 = chpl__addRangeStrides(call_tmp21, INT64(1), ord);
#line 1996 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp23 = chpl_intToIdx3(this24, call_tmp22);
#line 1979 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp23;
#line 1979 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2206 */
#line 2206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void chpl___ASSIGN_59(range_int64_t_both_one * r1,
#line 2206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                             range_int64_t_both_one r2) {
#line 2206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  *(r1) = r2;
#line 2206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 2206 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2292 */
#line 2292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void chpl_check_step_integral(int64_t step) {
#line 2292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 2292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2307 */
#line 2307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void chpl_range_check_stride(int64_t step,
#line 2307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                    int64_t _ln,
#line 2307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                    int32_t _fn) {
#line 2312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp8;
#line 2308 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_step_integral(step);
#line 2312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl___EQUALS_3(step, INT64(0));
#line 2312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp8) /* ZLINE: 2312 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2312 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    boundsCheckHalt(&_str_literal_860, _ln, _fn);
#line 2313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 2307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2322 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2322 */
#line 2322 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void chpl_range_check_stride2(void) {
#line 2323 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_step_integral(INT64(1));
#line 2322 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 2322 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2460 */
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static range_int64_t_both_one this11(range_int64_t_both_one this24,
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                     range_int64_t_both_one other) {
#line 2491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T = NULL;
#line 2491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t coerce_tmp2;
#line 2492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T2 = NULL;
#line 2492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t coerce_tmp3;
#line 2495 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T3 = NULL;
#line 2495 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t coerce_tmp4;
#line 2496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T4 = NULL;
#line 2496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t coerce_tmp5;
#line 2583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t newlo;
#line 2584 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t newhi;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one call_tmp8;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one initTemp;
#line 2491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl_get_range__low2(&this24);
#line 2491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coerce_tmp2 = *(T);
#line 2492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = chpl_get_range__high3(&this24);
#line 2492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coerce_tmp3 = *(T2);
#line 2495 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T3 = chpl_get_range__low2(&other);
#line 2495 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coerce_tmp4 = *(T3);
#line 2496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T4 = chpl_get_range__high3(&other);
#line 2496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coerce_tmp5 = *(T4);
#line 2583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  newlo = myMax(coerce_tmp2, coerce_tmp4);
#line 2584 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  newhi = myMin(coerce_tmp3, coerce_tmp5);
#line 2619 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  compilerAssert();
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init48(&initTemp, newlo, newhi, INT64(1), INT64(0));
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = initTemp;
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2460 */
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static range_int64_t_both_one this10(range_int64_t_low_one this24,
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                     range_int64_t_both_one other) {
#line 2491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T = NULL;
#line 2491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t coerce_tmp2;
#line 2492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T2 = NULL;
#line 2492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t coerce_tmp3;
#line 2495 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T3 = NULL;
#line 2495 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t coerce_tmp4;
#line 2496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T4 = NULL;
#line 2496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t coerce_tmp5;
#line 2583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t newlo;
#line 2584 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t newhi;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one call_tmp8;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one initTemp;
#line 2491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl_get_range__low3(&this24);
#line 2491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coerce_tmp2 = *(T);
#line 2492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = chpl_get_range__high3(&other);
#line 2492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coerce_tmp3 = *(T2);
#line 2495 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T3 = chpl_get_range__low2(&other);
#line 2495 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coerce_tmp4 = *(T3);
#line 2496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T4 = chpl_get_range__high3(&other);
#line 2496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coerce_tmp5 = *(T4);
#line 2583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  newlo = myMax2(coerce_tmp2, coerce_tmp4);
#line 2584 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  newhi = myMin2(coerce_tmp3, coerce_tmp5);
#line 2619 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  compilerAssert();
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init48(&initTemp, newlo, newhi, INT64(1), INT64(0));
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = initTemp;
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2460 */
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static range_int64_t_both_one this12(range_int64_t_high_one this24,
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                     range_int64_t_both_one other) {
#line 2491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T = NULL;
#line 2491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t coerce_tmp2;
#line 2492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T2 = NULL;
#line 2492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t coerce_tmp3;
#line 2495 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T3 = NULL;
#line 2495 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t coerce_tmp4;
#line 2496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T4 = NULL;
#line 2496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t coerce_tmp5;
#line 2583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t newlo;
#line 2584 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t newhi;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one call_tmp8;
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one initTemp;
#line 2491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl_get_range__low2(&other);
#line 2491 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coerce_tmp2 = *(T);
#line 2492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = chpl_get_range__high5(&this24);
#line 2492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coerce_tmp3 = *(T2);
#line 2495 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T3 = chpl_get_range__low2(&other);
#line 2495 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coerce_tmp4 = *(T3);
#line 2496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T4 = chpl_get_range__high3(&other);
#line 2496 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  coerce_tmp5 = *(T4);
#line 2583 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  newlo = myMax3(coerce_tmp2, coerce_tmp4);
#line 2584 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  newhi = myMin3(coerce_tmp3, coerce_tmp5);
#line 2619 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  compilerAssert();
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init48(&initTemp, newlo, newhi, INT64(1), INT64(0));
#line 2626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = initTemp;
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 2460 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2546 */
#line 2546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t myMin3(int64_t x2,
#line 2546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                      int64_t y) {
#line 2547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 2547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = min2(x2, y);
#line 2546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 2546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2546 */
#line 2546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t myMin2(int64_t x2,
#line 2546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                      int64_t y) {
#line 2547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 2547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = min2(x2, y);
#line 2546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 2546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2546 */
#line 2546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t myMin(int64_t x2,
#line 2546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                     int64_t y) {
#line 2547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 2547 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = min2(x2, y);
#line 2546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 2546 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2574 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2574 */
#line 2574 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t myMax3(int64_t x2,
#line 2574 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                      int64_t y) {
#line 2575 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 2575 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = max2(x2, y);
#line 2574 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 2574 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2574 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2574 */
#line 2574 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t myMax2(int64_t x2,
#line 2574 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                      int64_t y) {
#line 2575 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 2575 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = max2(x2, y);
#line 2574 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 2574 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2574 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2574 */
#line 2574 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t myMax(int64_t x2,
#line 2574 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                     int64_t y) {
#line 2575 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 2575 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = max2(x2, y);
#line 2574 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 2574 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2725 */
#line 2725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static range_int64_t_both_one chpl_count_help(range_int64_t_low_one r,
#line 2725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                              int64_t count,
#line 2725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                              int64_t _ln,
#line 2725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                              int32_t _fn) {
#line 2725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one ret;
#line 2740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp8;
#line 2745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 2746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 2746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp11;
#line 2746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp12;
#line 2742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one initTemp;
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T;
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T2;
#line 2773 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T3;
#line 2773 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T4;
#line 2817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp13;
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T5;
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp14;
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T6 = NULL;
#line 2821 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp15 = NULL;
#line 2821 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp16;
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T7;
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp17;
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T8 = NULL;
#line 2824 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp18 = NULL;
#line 2824 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp19;
#line 2831 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one initTemp2;
#line 2740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl___EQUALS_3(count, INT64(0));
#line 2740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp8) /* ZLINE: 2740 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp9 = chpl_get_range__low3(&r);
#line 2746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp10 = chpl_get_range__low3(&r);
#line 2746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp11 = absSameType(r);
#line 2746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp12 = chpl___HYPHEN_3(*(call_tmp10), call_tmp11);
#line 2748 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_get_range__alignment(&r);
#line 2742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    init45(&initTemp, *(call_tmp9), call_tmp12, INT64(1));
#line 2742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ret = initTemp;
#line 2742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_chpl_count_help;
#line 2742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl___GREATER_(count, INT64(0));
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T) /* ZLINE: 2771 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T2 = UINT8(false);
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 2771 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T2 = UINT8(false);
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T2) /* ZLINE: 2771 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2772 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    boundsCheckHalt(&_str_literal_881, _ln, _fn);
#line 2772 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2773 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T3 = chpl___LESS_3(count, INT64(0));
#line 2773 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T3) /* ZLINE: 2773 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2773 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2773 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T4 = UINT8(true);
#line 2773 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 2773 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2773 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2773 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T4 = UINT8(false);
#line 2773 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2773 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T4) /* ZLINE: 2773 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2773 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    boundsCheckHalt(&_str_literal_883, _ln, _fn);
#line 2774 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp13 = chpl___ASTERISK_6(count);
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp14 = chpl___GREATER_(call_tmp13, INT64(0));
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp14) /* ZLINE: 2820 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T6 = chpl_get_range__low3(&r);
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T5 = *(T6);
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 2820 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2821 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp15 = chpl_get_range__high6(&r);
#line 2821 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp16 = chpl___PLUS_7(call_tmp13);
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T5 = chpl__add(*(call_tmp15), call_tmp16);
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp17 = chpl___LESS_3(call_tmp13, INT64(0));
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp17) /* ZLINE: 2823 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T8 = chpl_get_range__high6(&r);
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T7 = *(T8);
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 2823 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2824 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp18 = chpl_get_range__low3(&r);
#line 2824 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp19 = chpl___HYPHEN_6(call_tmp13);
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T7 = chpl__add(*(call_tmp18), call_tmp19);
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2836 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_get_range__stride2(&r);
#line 2836 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_get_range__alignment(&r);
#line 2831 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init44(&initTemp2, T5, T7);
#line 2831 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = initTemp2;
#line 2831 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _end_chpl_count_help:;
#line 2725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 2725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2725 */
#line 2725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static range_int64_t_both_one chpl_count_help2(range_int64_t_low_one r,
#line 2725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                               uint32_t count,
#line 2725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                               int64_t _ln,
#line 2725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                               int32_t _fn) {
#line 2725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one ret;
#line 2740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp8;
#line 2745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 2746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 2746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp11;
#line 2746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp12;
#line 2742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one initTemp;
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T;
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T2;
#line 2817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp13;
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T3;
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp14;
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T4 = NULL;
#line 2821 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp15 = NULL;
#line 2821 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp16;
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T5;
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp17;
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t T6 = NULL;
#line 2824 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp18 = NULL;
#line 2824 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp19;
#line 2831 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one initTemp2;
#line 2740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl___EQUALS_17(count, ((int32_t)(INT64(0))), _ln, _fn);
#line 2740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp8) /* ZLINE: 2740 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2745 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp9 = chpl_get_range__low3(&r);
#line 2746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp10 = chpl_get_range__low3(&r);
#line 2746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp11 = absSameType2(r);
#line 2746 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp12 = chpl___HYPHEN_3(*(call_tmp10), call_tmp11);
#line 2748 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_get_range__alignment(&r);
#line 2742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    init45(&initTemp, *(call_tmp9), call_tmp12, INT64(1));
#line 2742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ret = initTemp;
#line 2742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_chpl_count_help;
#line 2742 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl___GREATER_4(count, ((int32_t)(INT64(0))), _ln, _fn);
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T) /* ZLINE: 2771 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T2 = UINT8(false);
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 2771 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T2 = UINT8(false);
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T2) /* ZLINE: 2771 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2771 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2772 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    boundsCheckHalt(&_str_literal_881, _ln, _fn);
#line 2772 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2817 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp13 = chpl___ASTERISK_6(((int64_t)(count)));
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp14 = chpl___GREATER_(call_tmp13, INT64(0));
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp14) /* ZLINE: 2820 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T4 = chpl_get_range__low3(&r);
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T3 = *(T4);
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 2820 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2821 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp15 = chpl_get_range__high6(&r);
#line 2821 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp16 = chpl___PLUS_7(call_tmp13);
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T3 = chpl__add(*(call_tmp15), call_tmp16);
#line 2820 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp17 = chpl___LESS_3(call_tmp13, INT64(0));
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp17) /* ZLINE: 2823 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T6 = chpl_get_range__high6(&r);
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T5 = *(T6);
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 2823 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2824 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp18 = chpl_get_range__low3(&r);
#line 2824 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp19 = chpl___HYPHEN_6(call_tmp13);
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T5 = chpl__add(*(call_tmp18), call_tmp19);
#line 2823 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2836 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_get_range__stride2(&r);
#line 2836 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_get_range__alignment(&r);
#line 2831 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init44(&initTemp2, T3, T5);
#line 2831 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = initTemp2;
#line 2831 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _end_chpl_count_help:;
#line 2725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 2725 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2732 */
#line 2732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t absSameType2(range_int64_t_low_one r) {
#line 2732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return INT64(1);
#line 2732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2732 */
#line 2732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t absSameType(range_int64_t_low_one r) {
#line 2732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return INT64(1);
#line 2732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2851 */
#line 2851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static range_int64_t_both_one chpl___POUND_(range_int64_t_low_one r,
#line 2851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                            int64_t count,
#line 2851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                            int64_t _ln,
#line 2851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                            int32_t _fn) {
#line 2852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one call_tmp8;
#line 2852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_count_help(r, count, _ln, _fn);
#line 2851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 2851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2851 */
#line 2851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static range_int64_t_both_one chpl___POUND_2(range_int64_t_low_one r,
#line 2851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                             uint32_t count,
#line 2851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                             int64_t _ln,
#line 2851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                             int32_t _fn) {
#line 2852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one call_tmp8;
#line 2852 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_count_help2(r, count, _ln, _fn);
#line 2851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 2851 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2873 */
#line 2873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static chpl_bool chpl_checkIfRangeIterWillOverflow(int64_t low3,
#line 2873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                   int64_t high2,
#line 2873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                   int64_t stride,
#line 2873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                   int64_t first2,
#line 2873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                   int64_t last,
#line 2873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                   chpl_bool shouldHalt,
#line 2873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                   int64_t _ln,
#line 2873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                   int32_t _fn) {
#line 2873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool ret;
#line 2876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp8;
#line 2880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool willOverFlow;
#line 2882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T;
#line 2882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T2;
#line 2883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 2883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp10;
#line 2886 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T3;
#line 2886 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T4;
#line 2887 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp11;
#line 2887 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp12;
#line 2908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T5;
#line 2876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl___GREATER_(low3, high2);
#line 2876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (call_tmp8) /* ZLINE: 2876 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2876 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ret = UINT8(false);
#line 2877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_chpl_checkIfRangeIterWillOverflow;
#line 2877 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2880 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  willOverFlow = UINT8(false);
#line 2882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl___GREATER_(last, INT64(0));
#line 2882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T) /* ZLINE: 2882 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T2 = chpl___GREATER_(stride, INT64(0));
#line 2882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 2882 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T2 = UINT8(false);
#line 2882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T2) /* ZLINE: 2882 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2882 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp9 = chpl___HYPHEN_7(last);
#line 2883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp10 = chpl___GREATER_(stride, call_tmp9);
#line 2883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    if (call_tmp10) /* ZLINE: 2883 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    {
#line 2884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      chpl___ASSIGN_(&willOverFlow, UINT8(true));
#line 2884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    }
#line 2884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 2882 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2886 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T3 = chpl___LESS_3(last, INT64(0));
#line 2886 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    if (T3) /* ZLINE: 2886 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2886 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    {
#line 2886 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      T4 = chpl___LESS_3(stride, INT64(0));
#line 2886 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    } else /* ZLINE: 2886 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2886 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    {
#line 2886 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      T4 = UINT8(false);
#line 2886 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    }
#line 2886 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    if (T4) /* ZLINE: 2886 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2886 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    {
#line 2887 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp11 = chpl___HYPHEN_10(last);
#line 2887 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      call_tmp12 = chpl___LESS_3(stride, call_tmp11);
#line 2887 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      if (call_tmp12) /* ZLINE: 2887 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2887 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      {
#line 2888 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
        chpl___ASSIGN_(&willOverFlow, UINT8(true));
#line 2888 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      }
#line 2888 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    }
#line 2888 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (willOverFlow) /* ZLINE: 2908 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T5 = shouldHalt;
#line 2908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 2908 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T5 = UINT8(false);
#line 2908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T5) /* ZLINE: 2908 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 2908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 2909 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    boundsCheckHalt(&_str_literal_890, _ln, _fn);
#line 2909 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 2911 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = willOverFlow;
#line 2911 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _end_chpl_checkIfRangeIterWillOverflow:;
#line 2873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 2873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2873 */
#line 2873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t chpl_checkIfRangeIterWillOverflow_default_first(int64_t low3) {
#line 2873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return low3;
#line 2873 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2874 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2874 */
#line 2874 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t chpl_checkIfRangeIterWillOverflow_default_last(int64_t high2) {
#line 2874 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return high2;
#line 2874 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2915 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2915 */
#line 2915 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static chpl_bool checkIfIterWillOverflow(range_int64_t_both_one this24,
#line 2915 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                         chpl_bool shouldHalt,
#line 2915 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                         int64_t _ln,
#line 2915 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                         int32_t _fn) {
#line 2918 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 2918 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ref_int64_t call_tmp9 = NULL;
#line 2919 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp10;
#line 2919 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp11;
#line 2918 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool call_tmp12;
#line 2918 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl_get_range__low2(&this24);
#line 2918 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl_get_range__high3(&this24);
#line 2919 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl_firstAsIntForIter(this24);
#line 2919 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = chpl_lastAsIntForIter(this24);
#line 2918 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp12 = chpl_checkIfRangeIterWillOverflow(*(call_tmp8), *(call_tmp9), INT64(1), call_tmp10, call_tmp11, shouldHalt, _ln, _fn);
#line 2915 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp12;
#line 2915 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2945 */
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static _ir_chpl_direct_range_iter chpl_direct_range_iter(void) {
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_range_iter _ir;
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return _ir;
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2945 */
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static _ic_chpl_direct_range_iter _getIterator8(_ir_chpl_direct_range_iter * ir,
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                int64_t _ln,
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                int32_t _fn) {
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_range_iter _ic_ = NULL;
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  c_ptr_void cast_tmp = NULL;
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic_chpl_direct_range_iter_object), INT16(71), _ln, _fn);
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_ = ((_ic_chpl_direct_range_iter)(cast_tmp));
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic_chpl_direct_range_iter;
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->more = INT64(1);
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return _ic_;
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2945 */
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static _ic_chpl_direct_range_iter2 _getIterator7(_ir_chpl_direct_range_iter2 * ir,
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                 int64_t _ln,
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                 int32_t _fn) {
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_range_iter2 _ic_ = NULL;
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  c_ptr_void cast_tmp = NULL;
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic_chpl_direct_range_iter2_object), INT16(56), _ln, _fn);
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_ = ((_ic_chpl_direct_range_iter2)(cast_tmp));
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic_chpl_direct_range_iter2;
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->more = INT64(1);
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return _ic_;
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2945 */
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static _ir_chpl_direct_range_iter2 chpl_direct_range_iter2(void) {
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_range_iter2 _ir;
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return _ir;
#line 2945 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2965 */
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void chpl_direct_range_iter3(int64_t low3,
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                    int64_t high2,
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                    _ir_chpl_direct_range_iter3 * _retArg) {
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_retArg)->F0_low = low3;
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_retArg)->F1_high = high2;
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:2965 */
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static _ic_chpl_direct_range_iter3 _getIterator9(_ir_chpl_direct_range_iter3 * ir,
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                 int64_t _ln,
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                 int32_t _fn) {
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_range_iter3 _ic_ = NULL;
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  c_ptr_void cast_tmp = NULL;
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T2;
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic_chpl_direct_range_iter3_object), INT16(30), _ln, _fn);
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_ = ((_ic_chpl_direct_range_iter3)(cast_tmp));
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic_chpl_direct_range_iter3;
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->more = INT64(1);
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = (ir)->F0_low;
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->F0_low = T;
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = (ir)->F1_high;
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->F1_high = T2;
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return _ic_;
#line 2965 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3208 */
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void chpl_direct_counted_range_iter(int64_t low3,
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                           int64_t count,
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                           _ir_chpl_direct_counted_range_iter * _retArg) {
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_retArg)->F0_low = low3;
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_retArg)->F1_count = count;
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3208 */
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static _ic_chpl_direct_counted_range_iter _getIterator10(_ir_chpl_direct_counted_range_iter * ir,
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                         int64_t _ln,
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                         int32_t _fn) {
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_counted_range_iter _ic_ = NULL;
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  c_ptr_void cast_tmp = NULL;
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T2;
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic_chpl_direct_counted_range_iter_object), INT16(5), _ln, _fn);
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_ = ((_ic_chpl_direct_counted_range_iter)(cast_tmp));
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic_chpl_direct_counted_range_iter;
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->more = INT64(1);
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = (ir)->F0_low;
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->F0_low = T;
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = (ir)->F1_count;
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->F1_count = T2;
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return _ic_;
#line 3208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3251 */
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void chpl_direct_counted_range_iter_helper(int64_t low3,
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                  int64_t count,
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                  _ir_chpl_direct_counted_range_iter_helper * _retArg) {
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_retArg)->F0_low = low3;
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_retArg)->F1_count = count;
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3251 */
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static _ic_chpl_direct_counted_range_iter_helper _getIterator11(_ir_chpl_direct_counted_range_iter_helper * ir,
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                                int64_t _ln,
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                                int32_t _fn) {
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_counted_range_iter_helper _ic_ = NULL;
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  c_ptr_void cast_tmp = NULL;
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T2;
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic_chpl_direct_counted_range_iter_helper_object), INT16(4), _ln, _fn);
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_ = ((_ic_chpl_direct_counted_range_iter_helper)(cast_tmp));
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic_chpl_direct_counted_range_iter_helper;
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->more = INT64(1);
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = (ir)->F0_low;
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->F0_low = T;
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = (ir)->F1_count;
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->F1_count = T2;
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return _ic_;
#line 3251 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3269 */
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void chpl_direct_pos_stride_range_iter(int64_t low3,
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                              int64_t high2,
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                              int64_t stride,
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                              _ir_chpl_direct_pos_stride_range_iter * _retArg) {
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_retArg)->F0_low = low3;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_retArg)->F1_high = high2;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_retArg)->F2_stride = stride;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3269 */
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static _ic_chpl_direct_pos_stride_range_iter _getIterator12(_ir_chpl_direct_pos_stride_range_iter * ir,
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                            int64_t _ln,
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                            int32_t _fn) {
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_pos_stride_range_iter _ic_ = NULL;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  c_ptr_void cast_tmp = NULL;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T2;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T3;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic_chpl_direct_pos_stride_range_iter_object), INT16(45), _ln, _fn);
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_ = ((_ic_chpl_direct_pos_stride_range_iter)(cast_tmp));
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic_chpl_direct_pos_stride_range_iter;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->more = INT64(1);
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = (ir)->F0_low;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->F0_low = T;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = (ir)->F1_high;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->F1_high = T2;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T3 = (ir)->F2_stride;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->F2_stride = T3;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return _ic_;
#line 3269 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3288 */
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void chpl_direct_param_stride_range_iter(int64_t low3,
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                int64_t high2,
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                _ir_chpl_direct_param_stride_range_iter * _retArg) {
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_retArg)->F0_low = low3;
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_retArg)->F1_high = high2;
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3288 */
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static _ic_chpl_direct_param_stride_range_iter _getIterator13(_ir_chpl_direct_param_stride_range_iter * ir,
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                              int64_t _ln,
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                              int32_t _fn) {
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _ic_ = NULL;
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  c_ptr_void cast_tmp = NULL;
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T2;
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic_chpl_direct_param_stride_range_iter_object), INT16(3), _ln, _fn);
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_ = ((_ic_chpl_direct_param_stride_range_iter)(cast_tmp));
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic_chpl_direct_param_stride_range_iter;
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->more = INT64(1);
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = (ir)->F0_low;
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->F0_low = T;
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = (ir)->F1_high;
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->F1_high = T2;
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return _ic_;
#line 3288 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3442 */
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t getValue(_ic_these_range_int64_t_both_one this24,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                        int64_t _ln,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                        int32_t _fn) {
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = (this24)->value;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return T;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3442 */
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void these2(range_int64_t_both_one this24,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   _ir_these_range_int64_t_both_one * _retArg) {
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_retArg)->F0_this = this24;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3442 */
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void init49(_ic_these_range_int64_t_both_one this24,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t _ln,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int32_t _fn) {
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = (this24)->F3_call_tmp;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->F1_i = T;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3442 */
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void incr(_ic_these_range_int64_t_both_one this24,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                 int64_t _ln,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                 int32_t _fn) {
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = (this24)->F1_i;
#line 3461 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T += INT64(1);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->F1_i = T;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3442 */
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static _ic_these_range_int64_t_both_one _getIterator14(_ir_these_range_int64_t_both_one * ir,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                       int64_t _ln,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                                       int32_t _fn) {
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_these_range_int64_t_both_one _ic_ = NULL;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  c_ptr_void cast_tmp = NULL;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one T;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  cast_tmp = chpl_here_alloc(sizeof(chpl__ic_these_range_int64_t_both_one_object), INT16(31), _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_ = ((_ic_these_range_int64_t_both_one)(cast_tmp));
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ((RootClass)(_ic_))->chpl__cid = chpl__cid__ic_these_range_int64_t_both_one;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->more = INT64(1);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = (ir)->F0_this;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_ic_, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (_ic_)->F0_this = T;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return _ic_;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3442 */
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t hasMore(_ic_these_range_int64_t_both_one this24,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                       int64_t _ln,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                       int32_t _fn) {
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T2;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = (this24)->F1_i;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = (T2 <= (this24)->F2_end);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return T;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3442 */
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void advance(_ic_these_range_int64_t_both_one this24,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                    int64_t _ln,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                    int32_t _fn) {
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t more;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one T;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one T2;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T3;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one T4;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp10;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T5;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one T6;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T7;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T8;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T9;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  more = (this24)->more;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (more == INT64(2)) /* ZLINE: 3442 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _jump_2;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (more == INT64(-2)) /* ZLINE: 3442 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _jump_break_2;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = (this24)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkIfIterWillOverflow(T, UINT8(true), _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->F1_i = INT64(0);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = (this24)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = lowBoundForIter(T2);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T3 = chpl__idxToInt(call_tmp8);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->F3_call_tmp = T3;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T4 = (this24)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = highBoundForIter(T4);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl__idxToInt(call_tmp9);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->F2_end = call_tmp10;
#line 3458 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (chpl_check_nil(this24, _ln, _fn),T7 = (this24)->F3_call_tmp,chpl_check_nil(this24, _ln, _fn),(this24)->F1_i = T7; (chpl_check_nil(this24, _ln, _fn),T8 = (this24)->F1_i,chpl_check_nil(this24, _ln, _fn),(T8 <= (this24)->F2_end)); chpl_check_nil(this24, _ln, _fn),T9 = (this24)->F1_i,T9 += INT64(1),chpl_check_nil(this24, _ln, _fn),(this24)->F1_i = T9) {
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T6 = (this24)->F0_this;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T5 = chpl_intToIdx3(T6, (this24)->F1_i);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    (this24)->value = T5;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    (this24)->more = INT64(2);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    _jump_break_2:;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_these;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    _jump_2:;
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _end_these:;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->more = INT64(0);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _end:;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3442 */
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void zip1(_ic_these_range_int64_t_both_one this24,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                 int64_t _ln,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                 int32_t _fn) {
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp10;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one T;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one T2;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T3;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one T4;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = (this24)->F0_this;
#line 3448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  checkIfIterWillOverflow(T, UINT8(true), _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->F1_i = INT64(0);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = (this24)->F0_this;
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = lowBoundForIter(T2);
#line 3454 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T3 = chpl__idxToInt(call_tmp8);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->F3_call_tmp = T3;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T4 = (this24)->F0_this;
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = highBoundForIter(T4);
#line 3455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = chpl__idxToInt(call_tmp9);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->F2_end = call_tmp10;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3442 */
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void zip2(_ic_these_range_int64_t_both_one this24,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                 int64_t _ln,
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                 int32_t _fn) {
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  range_int64_t_both_one T2;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T2 = (this24)->F0_this;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3462 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl_intToIdx3(T2, (this24)->F1_i);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->value = T;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(this24, _ln, _fn);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  (this24)->more = INT64(2);
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3442 */
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void zip3(_ic_these_range_int64_t_both_one this24) {
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3442 */
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static void zip4(_ic_these_range_int64_t_both_one this24) {
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return;
#line 3442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3764 */
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static string chpl___COLON_26(range_byteIndex_both_one x2,
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                              int64_t _ln,
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                              int32_t _fn) {
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string ret;
#line 3765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string ret2;
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  byteIndex call_tmp8;
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp9;
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  byteIndex call_tmp10;
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp11;
#line 3765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init96(&ret2, _ln, _fn);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = lowBound3(x2);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl___COLON_41(&call_tmp8, _ln, _fn);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___PLUS__ASSIGN_3(&ret2, &call_tmp9, _ln, _fn);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy26(&call_tmp8);
#line 3770 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___PLUS__ASSIGN_3(&ret2, &_str_literal_765, _ln, _fn);
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = highBound(x2);
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = chpl___COLON_41(&call_tmp10, _ln, _fn);
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___PLUS__ASSIGN_3(&ret2, &call_tmp11, _ln, _fn);
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy26(&call_tmp10);
#line 3789 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = ret2;
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3764 */
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static string chpl___COLON_28(range_byteIndex_high_one x2,
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                              int64_t _ln,
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                              int32_t _fn) {
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string ret;
#line 3765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string ret2;
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  byteIndex call_tmp8;
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp9;
#line 3765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init96(&ret2, _ln, _fn);
#line 3770 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___PLUS__ASSIGN_3(&ret2, &_str_literal_765, _ln, _fn);
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = highBound3(x2);
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl___COLON_41(&call_tmp8, _ln, _fn);
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___PLUS__ASSIGN_3(&ret2, &call_tmp9, _ln, _fn);
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy26(&call_tmp8);
#line 3789 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = ret2;
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3764 */
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static string chpl___COLON_25(range_byteIndex_low_one x2,
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                              int64_t _ln,
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                              int32_t _fn) {
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string ret;
#line 3765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string ret2;
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  byteIndex call_tmp8;
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp9;
#line 3765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init96(&ret2, _ln, _fn);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = lowBound2(x2);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl___COLON_41(&call_tmp8, _ln, _fn);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___PLUS__ASSIGN_3(&ret2, &call_tmp9, _ln, _fn);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy26(&call_tmp8);
#line 3770 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___PLUS__ASSIGN_3(&ret2, &_str_literal_765, _ln, _fn);
#line 3789 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = ret2;
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3764 */
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static string chpl___COLON_29(range_int64_t_low_one x2,
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                              int64_t _ln,
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                              int32_t _fn) {
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string ret;
#line 3765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string ret2;
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp9;
#line 3765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init96(&ret2, _ln, _fn);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = lowBound5(x2);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl___COLON_48(call_tmp8, _ln, _fn);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___PLUS__ASSIGN_3(&ret2, &call_tmp9, _ln, _fn);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 3770 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___PLUS__ASSIGN_3(&ret2, &_str_literal_765, _ln, _fn);
#line 3789 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = ret2;
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3764 */
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static string chpl___COLON_27(range_int64_t_both_one x2,
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                              int64_t _ln,
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                              int32_t _fn) {
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string ret;
#line 3765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string ret2;
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp9;
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp10;
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  string call_tmp11;
#line 3765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  init96(&ret2, _ln, _fn);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = lowBound4(x2);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = chpl___COLON_48(call_tmp8, _ln, _fn);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___PLUS__ASSIGN_3(&ret2, &call_tmp9, _ln, _fn);
#line 3768 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy23(&call_tmp9, _ln, _fn);
#line 3770 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___PLUS__ASSIGN_3(&ret2, &_str_literal_765, _ln, _fn);
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp10 = highBound2(x2);
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp11 = chpl___COLON_48(call_tmp10, _ln, _fn);
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl___PLUS__ASSIGN_3(&ret2, &call_tmp11, _ln, _fn);
#line 3777 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 3789 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = ret2;
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 3764 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3878 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3878 */
#line 3878 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t chpl__add(int64_t a,
#line 3878 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                         int64_t b) {
#line 3878 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t ret;
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T;
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T2;
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T3;
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T4;
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T5;
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_bool T6;
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl___GREATER_(a, INT64(0));
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T) /* ZLINE: 3883 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T2 = chpl___GREATER_(b, INT64(0));
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 3883 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T2 = UINT8(false);
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T2) /* ZLINE: 3883 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp8 = chpl___HYPHEN_7(a);
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T3 = chpl___GREATER_(b, call_tmp8);
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 3883 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T3 = UINT8(false);
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T3) /* ZLINE: 3883 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ret = INT64(9223372036854775807);
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_chpl__add;
#line 3883 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T4 = chpl___LESS_3(a, INT64(0));
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T4) /* ZLINE: 3884 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T5 = chpl___LESS_3(b, INT64(0));
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 3884 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T5 = UINT8(false);
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T5) /* ZLINE: 3884 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    call_tmp9 = chpl___HYPHEN_10(a);
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T6 = chpl___LESS_3(b, call_tmp9);
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  } else /* ZLINE: 3884 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    T6 = UINT8(false);
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  if (T6) /* ZLINE: 3884 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl */
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  {
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    ret = -INT64(9223372036854775807) - INT64(1);
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
    goto _end_chpl__add;
#line 3884 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  }
#line 3894 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  ret = chpl___PLUS_3(a, b);
#line 3894 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _end_chpl__add:;
#line 3878 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return ret;
#line 3878 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3900 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3900 */
#line 3900 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t chpl__addRangeStrides(int64_t start,
#line 3900 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                     int64_t stride,
#line 3900 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                     int64_t count) {
#line 3908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 3908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp9;
#line 3908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = mul(stride, count);
#line 3908 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp9 = add5(start, call_tmp8);
#line 3900 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp9;
#line 3900 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3905 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3905 */
#line 3905 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t mul(int64_t a,
#line 3905 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                   int64_t b) {
#line 3905 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3905 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl___ASTERISK_2(a, b);
#line 3905 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return T;
#line 3905 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3906 */
#line 3906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t add5(int64_t a,
#line 3906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                    int64_t b) {
#line 3906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t T;
#line 3906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  T = chpl___PLUS_3(a, b);
#line 3906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return T;
#line 3906 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3982 */
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static byteIndex chpl_intToIdx4(range_byteIndex_both_one this24,
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                int64_t i) {
#line 3983 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  byteIndex call_tmp8;
#line 3983 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl__intToIdx2(i);
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3982 */
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static byteIndex chpl_intToIdx2(range_byteIndex_high_one this24,
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                int64_t i) {
#line 3983 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  byteIndex call_tmp8;
#line 3983 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl__intToIdx2(i);
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3982 */
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t chpl_intToIdx3(range_int64_t_both_one this24,
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                              int64_t i) {
#line 3983 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 3983 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl__intToIdx(i);
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3982 */
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t chpl_intToIdx(range_int64_t_low_one this24,
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                             int64_t i) {
#line 3983 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t call_tmp8;
#line 3983 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl__intToIdx(i);
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3982 */
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static byteIndex chpl_intToIdx5(range_byteIndex_low_one this24,
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
                                int64_t i) {
#line 3983 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  byteIndex call_tmp8;
#line 3983 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp8 = chpl__intToIdx2(i);
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return call_tmp8;
#line 3982 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 3987 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:3987 */
#line 3987 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t chpl__intToIdx(int64_t i) {
#line 3987 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return i;
#line 3987 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

#line 4021 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
/* ChapelRange.chpl:4021 */
#line 4021 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
static int64_t chpl__idxToInt(int64_t i) {
#line 4021 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  return i;
#line 4021 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
}

