#line 1 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
/* DSIUtil.chpl:1 */
#line 1 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
static void chpl__init_DSIUtil(int64_t _ln,
#line 1 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                               int32_t _fn) {
#line 1 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 1 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (chpl__init_DSIUtil_p) /* ZLINE: 1 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 1 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 1 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    goto _exit_chpl__init_DSIUtil;
#line 1 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 1 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  printModuleInit("%*s\n", "DSIUtil", INT64(7), _ln, _fn);
#line 1 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  refIndentLevel = &moduleInitLevel;
#line 1 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(refIndentLevel) += INT64(1);
#line 1 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl__init_DSIUtil_p = UINT8(true);
#line 1 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(refIndentLevel) -= INT64(1);
#line 1 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _exit_chpl__init_DSIUtil:;
#line 1 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  return;
#line 1 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
}

#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
/* DSIUtil.chpl:38 */
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
static void createTuple(int64_t val,
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                        _tuple_1_star_int64_t * _retArg) {
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _tuple_1_star_int64_t ret;
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t tup_x0;
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _defaultOf(&ret_tmp);
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  tup_x0 = *(ret_tmp + INT64(0));
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp8 = &tup_x0;
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl___ASSIGN_3(call_tmp8, val);
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(ret + INT64(0)) = tup_x0;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(*(_retArg) + INT64(0)) = *(ret + INT64(0));
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  return;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
}

#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
/* DSIUtil.chpl:48 */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
static void _computeChunkStuff(int64_t maxTasks,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                               chpl_bool ignoreRunning,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                               int64_t minSize,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                               _tuple_1_star_range_int64_t_both_one * ranges,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                               _tuple_2_star_int64_t * _retArg,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                               int64_t _ln,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                               int32_t _fn) {
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _tuple_2_star_int64_t ret;
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t numElems;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t call_tmp8;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  range_int64_t_both_one coerce_tmp2;
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp9;
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t numChunks;
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp10;
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _tuple_2_star_int64_t call_tmp11;
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _tuple_2_star_int64_t ret_tmp;
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp12;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t parDim;
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t maxDim;
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t maxElems;
#line 68 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _ic_chpl_direct_range_iter _iterator = NULL;
#line 68 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _ir_chpl_direct_range_iter call_tmp13;
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ic_chpl_direct_param_stride_range_iter _iterator2 = NULL;
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter call_tmp14;
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _ir_chpl_direct_param_stride_range_iter ret_tmp2;
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t i;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_first;
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t default_arg_last;
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t low3;
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  int64_t high2;
#line 69 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _ref_range_int64_t_both_one call_tmp15 = NULL;
#line 69 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t call_tmp16;
#line 69 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  range_int64_t_both_one coerce_tmp3;
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp17;
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp18;
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp19;
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp20;
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp21;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _tuple_2_star_int64_t call_tmp22;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _tuple_2_star_int64_t ret_tmp3;
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  numElems = UINT64(1);
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  coerce_tmp2 = *(*(ranges) + INT64(0));
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp8 = sizeAs3(coerce_tmp2, _ln, _fn);
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl___ASTERISK__ASSIGN_2(&numElems, call_tmp8);
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl__autoDestroy59(coerce_tmp2);
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp9 = _computeNumChunks2(maxTasks, ignoreRunning, minSize, numElems, _ln, _fn);
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  numChunks = call_tmp9;
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp10 = chpl___EQUALS_3(call_tmp9, INT64(0));
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp10) /* ZLINE: 59 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    _build_tuple6(INT64(0), INT64(-1), &ret_tmp);
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    *(call_tmp11 + INT64(0)) = *(ret_tmp + INT64(0));
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    *(call_tmp11 + INT64(1)) = *(ret_tmp + INT64(1));
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    *(ret + INT64(0)) = *(call_tmp11 + INT64(0));
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    *(ret + INT64(1)) = *(call_tmp11 + INT64(1));
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    goto _end__computeChunkStuff;
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp12 = chpl___GREATER_(call_tmp9, INT64(0));
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  assert2(call_tmp12, _ln, _fn);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  parDim = INT64(-1);
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  maxDim = INT64(-1);
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  maxElems = UINT64(0);
#line 68 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp13 = chpl_direct_range_iter();
#line 68 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _iterator = _getIterator8(&call_tmp13, _ln, _fn);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_direct_param_stride_range_iter(INT64(0), INT64(0), &ret_tmp2);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  call_tmp14 = ret_tmp2;
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _iterator2 = _getIterator13(&call_tmp14, _ln, _fn);
#line 3290 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_range_check_stride2();
#line 3292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  i = INT64(0);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_first = chpl_checkIfRangeIterWillOverflow_default_first((_iterator2)->F0_low);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  default_arg_last = chpl_checkIfRangeIterWillOverflow_default_last((_iterator2)->F1_high);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  low3 = (_iterator2)->F0_low;
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 3295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_checkIfRangeIterWillOverflow(low3, (_iterator2)->F1_high, INT64(1), default_arg_first, default_arg_last, UINT8(true), _ln, _fn);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  chpl_check_nil(_iterator2, _ln, _fn);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  high2 = (_iterator2)->F1_high;
#line 3297 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  for (chpl_check_nil(_iterator2, _ln, _fn),i = (_iterator2)->F0_low; ((i <= high2)); i += INT64(1)) {
#line 69 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp15 = this13(ranges, i, _ln, _fn);
#line 69 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    coerce_tmp3 = *(call_tmp15);
#line 69 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp16 = sizeAs3(coerce_tmp3, _ln, _fn);
#line 69 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    chpl__autoDestroy59(coerce_tmp3);
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp17 = chpl___GREATER__ASSIGN_2(call_tmp16, ((uint64_t)(numChunks)));
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    if (call_tmp17) /* ZLINE: 70 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 70 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    {
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      chpl___ASSIGN_3(&parDim, i);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
      _freeIterator19(_iterator2, _ln, _fn);
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      goto _breakLabel;
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    }
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp18 = chpl___GREATER_3(call_tmp16, maxElems);
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    if (call_tmp18) /* ZLINE: 74 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 74 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    {
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      chpl___ASSIGN_5(&maxElems, call_tmp16);
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      chpl___ASSIGN_3(&maxDim, i);
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    }
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _freeIterator19(_iterator2, _ln, _fn);
#line 2947 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelRange.chpl"
  _breakLabel:;
#line 68 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _freeIterator8(_iterator, _ln, _fn);
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp19 = chpl___EQUALS_3(parDim, INT64(-1));
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp19) /* ZLINE: 80 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 80 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 81 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    chpl___ASSIGN_3(&parDim, maxDim);
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp20 = chpl___LESS_4(maxElems, ((uint64_t)(numChunks)));
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    if (call_tmp20) /* ZLINE: 85 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    {
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      call_tmp21 = chpl___COLON_6(maxElems, _ln, _fn);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      chpl___ASSIGN_3(&numChunks, call_tmp21);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    }
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _build_tuple6(numChunks, parDim, &ret_tmp3);
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(call_tmp22 + INT64(0)) = *(ret_tmp3 + INT64(0));
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(call_tmp22 + INT64(1)) = *(ret_tmp3 + INT64(1));
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(ret + INT64(0)) = *(call_tmp22 + INT64(0));
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(ret + INT64(1)) = *(call_tmp22 + INT64(1));
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _end__computeChunkStuff:;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(*(_retArg) + INT64(0)) = *(ret + INT64(0));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(*(_retArg) + INT64(1)) = *(ret + INT64(1));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  return;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
}

#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
/* DSIUtil.chpl:93 */
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
static int64_t _computeNumChunks(int64_t maxTasks,
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                                 chpl_bool ignoreRunning,
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                                 int64_t minSize,
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                                 int64_t numElems,
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                                 int64_t _ln,
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                                 int32_t _fn) {
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t ret;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp8;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t call_tmp9;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t unumElems;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t numChunks;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp10;
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  locale call_tmp11;
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp12;
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp13;
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t T;
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp14;
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp15;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool T2;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool T3;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp16;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool T4;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool T5;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp17;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool T6;
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp18;
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp19;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp8 = chpl___LESS__ASSIGN_(numElems, INT64(0));
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp8) /* ZLINE: 94 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    ret = INT64(0);
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    goto _end__computeNumChunks;
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp9 = ((uint64_t)(numElems));
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  unumElems = call_tmp9;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  numChunks = maxTasks;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp10 = chpl___EXCLAMATION_(ignoreRunning);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp10) /* ZLINE: 100 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp11 = here(_ln, _fn);
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp12 = runningTasks(&call_tmp11, _ln, _fn);
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp13 = chpl___HYPHEN_6(call_tmp12);
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    chpl__autoDestroy45(&call_tmp11);
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp14 = chpl___LESS_3(call_tmp13, maxTasks);
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    if (call_tmp14) /* ZLINE: 102 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    {
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      T = chpl___HYPHEN_3(maxTasks, call_tmp13);
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    } else /* ZLINE: 102 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    {
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      T = INT64(1);
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    }
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    chpl___ASSIGN_3(&numChunks, T);
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp15 = chpl___GREATER_(minSize, INT64(0));
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp15) /* ZLINE: 109 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp16 = chpl___ASTERISK_2(minSize, numChunks);
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    T3 = chpl___LESS_4(call_tmp9, ((uint64_t)(call_tmp16)));
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    if (T3) /* ZLINE: 109 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    {
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      T4 = chpl___GREATER_(numChunks, INT64(1));
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    } else /* ZLINE: 109 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    {
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      T4 = UINT8(false);
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    }
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    T2 = T4;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    while (T2) {
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      chpl___HYPHEN__ASSIGN_(&numChunks, INT64(1));
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      call_tmp17 = chpl___ASTERISK_2(minSize, numChunks);
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      T5 = chpl___LESS_4(unumElems, ((uint64_t)(call_tmp17)));
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      if (T5) /* ZLINE: 109 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      {
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
        T6 = chpl___GREATER_(numChunks, INT64(1));
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      } else /* ZLINE: 109 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      {
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
        T6 = UINT8(false);
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      }
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      T2 = T6;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    }
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp18 = chpl___GREATER_3(((uint64_t)(numChunks)), unumElems);
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp18) /* ZLINE: 113 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp19 = chpl___COLON_6(unumElems, _ln, _fn);
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    chpl___ASSIGN_3(&numChunks, call_tmp19);
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  ret = numChunks;
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _end__computeNumChunks:;
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  return ret;
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
}

#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
/* DSIUtil.chpl:93 */
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
static int64_t _computeNumChunks2(int64_t maxTasks,
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                                  chpl_bool ignoreRunning,
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                                  int64_t minSize,
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                                  uint64_t numElems,
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                                  int64_t _ln,
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                                  int32_t _fn) {
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t ret;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp8;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t unumElems;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t numChunks;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp9;
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  locale call_tmp10;
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp11;
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp12;
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t T;
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp13;
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp14;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool T2;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool T3;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp15;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool T4;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool T5;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp16;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool T6;
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp17;
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp18;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp8 = chpl___LESS__ASSIGN_3(numElems, INT64(0), _ln, _fn);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp8) /* ZLINE: 94 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    ret = INT64(0);
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    goto _end__computeNumChunks;
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  unumElems = numElems;
#line 99 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  numChunks = maxTasks;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp9 = chpl___EXCLAMATION_(ignoreRunning);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp9) /* ZLINE: 100 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp10 = here(_ln, _fn);
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp11 = runningTasks(&call_tmp10, _ln, _fn);
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp12 = chpl___HYPHEN_6(call_tmp11);
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    chpl__autoDestroy45(&call_tmp10);
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp13 = chpl___LESS_3(call_tmp12, maxTasks);
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    if (call_tmp13) /* ZLINE: 102 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    {
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      T = chpl___HYPHEN_3(maxTasks, call_tmp12);
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    } else /* ZLINE: 102 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    {
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      T = INT64(1);
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    }
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    chpl___ASSIGN_3(&numChunks, T);
#line 102 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp14 = chpl___GREATER_(minSize, INT64(0));
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp14) /* ZLINE: 109 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp15 = chpl___ASTERISK_2(minSize, numChunks);
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    T3 = chpl___LESS_4(numElems, ((uint64_t)(call_tmp15)));
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    if (T3) /* ZLINE: 109 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    {
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      T4 = chpl___GREATER_(numChunks, INT64(1));
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    } else /* ZLINE: 109 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    {
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      T4 = UINT8(false);
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    }
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    T2 = T4;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    while (T2) {
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      chpl___HYPHEN__ASSIGN_(&numChunks, INT64(1));
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      call_tmp16 = chpl___ASTERISK_2(minSize, numChunks);
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      T5 = chpl___LESS_4(unumElems, ((uint64_t)(call_tmp16)));
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      if (T5) /* ZLINE: 109 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      {
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
        T6 = chpl___GREATER_(numChunks, INT64(1));
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      } else /* ZLINE: 109 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      {
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
        T6 = UINT8(false);
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      }
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
      T2 = T6;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    }
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp17 = chpl___GREATER_3(((uint64_t)(numChunks)), unumElems);
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp17) /* ZLINE: 113 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp18 = chpl___COLON_6(unumElems, _ln, _fn);
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    chpl___ASSIGN_3(&numChunks, call_tmp18);
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  ret = numChunks;
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _end__computeNumChunks:;
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  return ret;
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
}

#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
/* DSIUtil.chpl:119 */
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
static int64_t _computeNumChunks3(int64_t numElems,
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                                  int64_t _ln,
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                                  int32_t _fn) {
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t local_dataParMinGranularity;
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool local_dataParIgnoreRunningTasks;
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t local_dataParTasksPerLocale;
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t T;
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp8;
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  locale call_tmp9;
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp10;
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  local_dataParMinGranularity = dataParMinGranularity;
#line 124 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  local_dataParIgnoreRunningTasks = dataParIgnoreRunningTasks;
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  local_dataParTasksPerLocale = dataParTasksPerLocale;
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp8 = chpl___EQUALS_3(local_dataParTasksPerLocale, INT64(0));
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp8) /* ZLINE: 121 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp9 = here(_ln, _fn);
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    T = maxTaskPar(&call_tmp9, _ln, _fn);
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    chpl__autoDestroy45(&call_tmp9);
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  } else /* ZLINE: 121 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    T = local_dataParTasksPerLocale;
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp10 = _computeNumChunks(T, local_dataParIgnoreRunningTasks, local_dataParMinGranularity, numElems, _ln, _fn);
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  return call_tmp10;
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
}

#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
/* DSIUtil.chpl:164 */
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
static uint64_t intCeilXDivByY(uint64_t x2,
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                               uint64_t y,
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                               int64_t _ln,
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                               int32_t _fn) {
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t call_tmp8;
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t call_tmp9;
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t call_tmp10;
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp8 = chpl___HYPHEN_5(x2);
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp9 = chpl___SLASH_2(call_tmp8, y, _ln, _fn);
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp10 = chpl___PLUS_6(call_tmp9);
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  return call_tmp10;
#line 164 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
}

#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
/* DSIUtil.chpl:166 */
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
static void _computeBlock2(int64_t numelems,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                           int64_t numblocks,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                           int64_t blocknum,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                           int64_t wayhi,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                           int64_t waylo,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                           int64_t lo,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                           _tuple_2_star_int64_t * _retArg,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                           int64_t _ln,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                           int32_t _fn) {
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _tuple_2_star_int64_t ret;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp8;
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _tuple_2_star_int64_t ret_tmp;
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t T;
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp9;
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t call_tmp10;
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t call_tmp11;
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp12;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t T2;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp13;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp14;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t call_tmp15;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp16;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t call_tmp17;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t call_tmp18;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp19;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp20;
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _tuple_2_star_int64_t ret_tmp2;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp8 = chpl___EQUALS_3(numelems, INT64(0));
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp8) /* ZLINE: 168 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    _build_tuple6(INT64(1), INT64(0), &ret_tmp);
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    *(ret + INT64(0)) = *(ret_tmp + INT64(0));
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    *(ret + INT64(1)) = *(ret_tmp + INT64(1));
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    goto _end__computeBlock;
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp9 = chpl___EQUALS_3(blocknum, INT64(0));
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp9) /* ZLINE: 172 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    T = waylo;
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  } else /* ZLINE: 172 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp10 = chpl___ASTERISK_3(((uint64_t)(numelems)), ((uint64_t)(blocknum)));
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp11 = intCeilXDivByY(call_tmp10, ((uint64_t)(numblocks)), _ln, _fn);
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp12 = chpl___COLON_6(call_tmp11, _ln, _fn);
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    T = chpl___PLUS_3(lo, call_tmp12);
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp13 = chpl___HYPHEN_6(numblocks);
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp14 = chpl___EQUALS_3(blocknum, call_tmp13);
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp14) /* ZLINE: 175 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    T2 = wayhi;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  } else /* ZLINE: 175 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp15 = ((uint64_t)(numelems));
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp16 = chpl___PLUS_7(blocknum);
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp17 = chpl___ASTERISK_3(call_tmp15, ((uint64_t)(call_tmp16)));
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp18 = intCeilXDivByY(call_tmp17, ((uint64_t)(numblocks)), _ln, _fn);
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp19 = chpl___COLON_6(call_tmp18, _ln, _fn);
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp20 = chpl___PLUS_3(lo, call_tmp19);
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    T2 = chpl___HYPHEN_6(call_tmp20);
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _build_tuple6(T, T2, &ret_tmp2);
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(ret + INT64(0)) = *(ret_tmp2 + INT64(0));
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(ret + INT64(1)) = *(ret_tmp2 + INT64(1));
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _end__computeBlock:;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(*(_retArg) + INT64(0)) = *(ret + INT64(0));
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(*(_retArg) + INT64(1)) = *(ret + INT64(1));
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  return;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
}

#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
/* DSIUtil.chpl:166 */
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
static void _computeBlock(uint64_t numelems,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                          int64_t numblocks,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                          int64_t blocknum,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                          int64_t wayhi,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                          int64_t waylo,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                          int64_t lo,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                          _tuple_2_star_int64_t * _retArg,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                          int64_t _ln,
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
                          int32_t _fn) {
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _tuple_2_star_int64_t ret;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp8;
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _tuple_2_star_int64_t ret_tmp;
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t T;
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp9;
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t call_tmp10;
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t call_tmp11;
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp12;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t T2;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp13;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  chpl_bool call_tmp14;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp15;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t call_tmp16;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  uint64_t call_tmp17;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp18;
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  int64_t call_tmp19;
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _tuple_2_star_int64_t ret_tmp2;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp8 = chpl___EQUALS_18(numelems, INT64(0), _ln, _fn);
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp8) /* ZLINE: 168 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    _build_tuple6(INT64(1), INT64(0), &ret_tmp);
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    *(ret + INT64(0)) = *(ret_tmp + INT64(0));
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    *(ret + INT64(1)) = *(ret_tmp + INT64(1));
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    goto _end__computeBlock;
#line 169 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp9 = chpl___EQUALS_3(blocknum, INT64(0));
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp9) /* ZLINE: 172 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    T = waylo;
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  } else /* ZLINE: 172 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp10 = chpl___ASTERISK_3(numelems, ((uint64_t)(blocknum)));
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp11 = intCeilXDivByY(call_tmp10, ((uint64_t)(numblocks)), _ln, _fn);
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp12 = chpl___COLON_6(call_tmp11, _ln, _fn);
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    T = chpl___PLUS_3(lo, call_tmp12);
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp13 = chpl___HYPHEN_6(numblocks);
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  call_tmp14 = chpl___EQUALS_3(blocknum, call_tmp13);
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  if (call_tmp14) /* ZLINE: 175 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    T2 = wayhi;
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  } else /* ZLINE: 175 /Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl */
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  {
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp15 = chpl___PLUS_7(blocknum);
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp16 = chpl___ASTERISK_3(numelems, ((uint64_t)(call_tmp15)));
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp17 = intCeilXDivByY(call_tmp16, ((uint64_t)(numblocks)), _ln, _fn);
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp18 = chpl___COLON_6(call_tmp17, _ln, _fn);
#line 176 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    call_tmp19 = chpl___PLUS_3(lo, call_tmp18);
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
    T2 = chpl___HYPHEN_6(call_tmp19);
#line 175 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  }
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _build_tuple6(T, T2, &ret_tmp2);
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(ret + INT64(0)) = *(ret_tmp2 + INT64(0));
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(ret + INT64(1)) = *(ret_tmp2 + INT64(1));
#line 178 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  _end__computeBlock:;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(*(_retArg) + INT64(0)) = *(ret + INT64(0));
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  *(*(_retArg) + INT64(1)) = *(ret + INT64(1));
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
  return;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/dists/DSIUtil.chpl"
}

