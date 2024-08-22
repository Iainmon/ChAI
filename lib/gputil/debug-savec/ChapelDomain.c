#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:23 */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static void chpl__init_ChapelDomain(int64_t _ln,
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                    int32_t _fn) {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _real64 T;
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_bool call_tmp8;
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_bool call_tmp9;
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  c_ptrConst_int8_t call_tmp10 = NULL;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  if (chpl__init_ChapelDomain_p) /* ZLINE: 23 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    goto _exit_chpl__init_ChapelDomain;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  printModuleInit("%*s\n", "ChapelDomain", INT64(12), _ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  refIndentLevel = &moduleInitLevel;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(refIndentLevel) += INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__init_ChapelDomain_p = UINT8(true);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    chpl__init_ChapelBase(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    chpl__init_ChapelTuple(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    chpl__init_ChapelRange(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    chpl__init_HaltWrappers(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    chpl__init_Reflection(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    chpl__init_FormattedIO(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    chpl__init_IO(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  }
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = chpl_config_has_value(((c_ptrConst_int8_t)("defaultHashTableResizeThreshold")), ((c_ptrConst_int8_t)("Built-in")));
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp9 = chpl___EXCLAMATION_(call_tmp8);
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  if (call_tmp9) /* ZLINE: 42 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl */
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  {
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    T = REAL64(0x1p-1);
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  } else /* ZLINE: 42 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl */
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  {
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    call_tmp10 = chpl_config_get_value(((c_ptrConst_int8_t)("defaultHashTableResizeThreshold")), ((c_ptrConst_int8_t)("Built-in")));
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    T = _command_line_cast(call_tmp10, _ln, _fn);
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  }
#line 42 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  defaultHashTableResizeThreshold = T;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(refIndentLevel) -= INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _exit_chpl__init_ChapelDomain:;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:51 */
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static _domain_DefaultRectangularDom_1_int64_t_one _getDomain(DefaultRectangularDom_1_int64_t_one value) {
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one call_tmp8;
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one initTemp;
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  init20(&initTemp, INT64(-1), value, UINT8(true));
#line 58 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = initTemp;
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return call_tmp8;
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:62 */
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static void tupleOfRangesSlice(_tuple_1_star_range_int64_t_both_one * base,
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                               _tuple_1_star_range_int64_t_both_one * slice,
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                               _tuple_1_star_range_int64_t_both_one * _retArg) {
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one ret;
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  range_int64_t_both_one r_x0;
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  range_int64_t_both_one coerce_tmp2;
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp;
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _ref_range_int64_t_both_one call_tmp8 = NULL;
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  range_int64_t_both_one call_tmp9;
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  range_int64_t_both_one coerce_tmp3;
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  range_int64_t_both_one coerce_tmp4;
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  coerce_tmp2 = *(*(base) + INT64(0));
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _defaultOf2(&ret_tmp);
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  r_x0 = *(ret_tmp + INT64(0));
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy59(coerce_tmp2);
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = &r_x0;
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  coerce_tmp3 = *(*(base) + INT64(0));
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  coerce_tmp4 = *(*(slice) + INT64(0));
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp9 = this11(coerce_tmp3, coerce_tmp4);
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl___ASSIGN_59(call_tmp8, call_tmp9);
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy59(call_tmp9);
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy59(coerce_tmp4);
#line 77 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy59(coerce_tmp3);
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(ret + INT64(0)) = r_x0;
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(*(_retArg) + INT64(0)) = *(ret + INT64(0));
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return;
#line 62 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:95 */
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static chpl___RuntimeTypeInfo chpl__buildDomainRuntimeType(_distribution_DefaultDist * dist) {
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl___RuntimeTypeInfo _return_tmp_;
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  (&_return_tmp_)->dist = *(dist);
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return _return_tmp_;
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:143 */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static _domain_DefaultRectangularDom_1_int64_t_one chpl__convertRuntimeTypeToValue2(_distribution_DefaultDist * dist,
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                                                    chpl_bool definedConst,
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                                                    int64_t _ln,
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                                                    int32_t _fn) {
#line 149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one call_tmp8;
#line 149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one initTemp;
#line 149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  init22(&initTemp, dist, definedConst, _ln, _fn);
#line 149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = initTemp;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return call_tmp8;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:208 */
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static _domain_DefaultRectangularDom_1_int64_t_one chpl__buildDomainExpr(range_int64_t_both_one _e0_ranges,
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                                         chpl_bool definedConst,
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                                         int64_t _ln,
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                                         int32_t _fn) {
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one ranges;
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp;
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one ret;
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one d;
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  range_int64_t_both_one coerce_tmp2;
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl___RuntimeTypeInfo call_tmp8;
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _distribution_DefaultDist _runtime_type_tmp_;
#line 218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one coerce_tmp3;
#line 218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp2;
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__init_tuple33(_e0_ranges, &ret_tmp);
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(ranges + INT64(0)) = *(ret_tmp + INT64(0));
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  coerce_tmp2 = *(ranges + INT64(0));
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = chpl__buildDomainRuntimeType(&defaultDist);
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _runtime_type_tmp_ = (&call_tmp8)->dist;
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  d = chpl__convertRuntimeTypeToValue2(&_runtime_type_tmp_, UINT8(false), _ln, _fn);
#line 217 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy59(coerce_tmp2);
#line 218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl___COLON_30(&ranges, &ret_tmp2);
#line 218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(coerce_tmp3 + INT64(0)) = *(ret_tmp2 + INT64(0));
#line 218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  setIndices(&d, &coerce_tmp3, _ln, _fn);
#line 218 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy2(&coerce_tmp3);
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  if (definedConst) /* ZLINE: 219 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl */
#line 219 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  {
#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    chpl__setDomainConst(&d, _ln, _fn);
#line 220 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  }
#line 221 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  ret = d;
#line 221 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy2(&ranges);
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return ret;
#line 208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 224 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:224 */
#line 224 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static void chpl__setDomainConst(_domain_DefaultRectangularDom_1_int64_t_one * dom,
#line 224 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                 int64_t _ln,
#line 224 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                 int32_t _fn) {
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _ref_chpl_bool call_tmp9 = NULL;
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  BaseDom coerce_tmp2 = NULL;
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = _value3(dom);
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  coerce_tmp2 = ((BaseDom)(call_tmp8));
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp9 = chpl_get_BaseDom_definedConst(coerce_tmp2, _ln, _fn);
#line 225 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl___ASSIGN_(call_tmp9, UINT8(true));
#line 224 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return;
#line 224 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:254 */
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static _domain_DefaultRectangularDom_1_int64_t_one * chpl__ensureDomainExpr(_domain_DefaultRectangularDom_1_int64_t_one * x2) {
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return x2;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:268 */
#line 268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static _domain_DefaultRectangularDom_1_int64_t_one chpl__ensureDomainExpr2(range_int64_t_both_one _e0_x,
#line 268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                                           int64_t _ln,
#line 268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                                           int32_t _fn) {
#line 268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one x2;
#line 268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp;
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one call_tmp8;
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  range_int64_t_both_one coerce_tmp2;
#line 268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__init_tuple33(_e0_x, &ret_tmp);
#line 268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(x2 + INT64(0)) = *(ret_tmp + INT64(0));
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  coerce_tmp2 = *(x2 + INT64(0));
#line 275 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = chpl__buildDomainExpr(coerce_tmp2, UINT8(true), _ln, _fn);
#line 268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy59(coerce_tmp2);
#line 268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy2(&x2);
#line 268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return call_tmp8;
#line 268 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 750 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:750 */
#line 750 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static void chpl___ASSIGN_57(_domain_DefaultRectangularDom_1_int64_t_one * a,
#line 750 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                             _domain_DefaultRectangularDom_1_int64_t_one * b,
#line 750 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                             int64_t _ln,
#line 750 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                             int32_t _fn) {
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = chpl_get__domain__instance(a);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 763 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  dsiAssignDomain(coerce_tmp2, b, UINT8(false), _ln, _fn);
#line 765 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_get__domain__instance(a);
#line 750 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return;
#line 750 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:913 */
#line 913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static _domain_DefaultRectangularDom_1_int64_t_one chpl__coerceMove(chpl___RuntimeTypeInfo * dstType,
#line 913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                                    _domain_DefaultRectangularDom_1_int64_t_one * rhs,
#line 913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                                    chpl_bool definedConst,
#line 913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                                    int64_t _ln,
#line 913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                                    int32_t _fn) {
#line 913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one _formal_tmp_rhs;
#line 913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one ret;
#line 922 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one lhs;
#line 913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _formal_tmp_rhs = *(rhs);
#line 922 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  lhs = chpl__coerceHelp(dstType, definedConst, _ln, _fn);
#line 923 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl___ASSIGN_57(&lhs, &_formal_tmp_rhs, _ln, _fn);
#line 929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  ret = lhs;
#line 929 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy67(&_formal_tmp_rhs, _ln, _fn);
#line 913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return ret;
#line 913 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1051 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1051 */
#line 1051 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static DefaultRectangularDom_1_int64_t_one * chpl_get__domain__instance(_domain_DefaultRectangularDom_1_int64_t_one * this24) {
#line 1051 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1051 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = &((this24)->_instance);
#line 1051 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return call_tmp8;
#line 1051 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1052 */
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static chpl_bool * chpl_get__domain__unowned(_domain_DefaultRectangularDom_1_int64_t_one * this24) {
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = &((this24)->_unowned);
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return call_tmp8;
#line 1052 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1061 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1061 */
#line 1061 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static void init20(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 1061 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                   int64_t _pid,
#line 1061 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                   DefaultRectangularDom_1_int64_t_one _instance,
#line 1061 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                   chpl_bool _unowned) {
#line 1062 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  (this24)->_pid = _pid;
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  (this24)->_instance = _instance;
#line 1064 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  (this24)->_unowned = _unowned;
#line 1061 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return;
#line 1061 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1068 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1068 */
#line 1068 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static void init21(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 1068 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                   DefaultRectangularDom_1_int64_t_one value) {
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  (this24)->_pid = INT64(-1);
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  (this24)->_instance = value;
#line 1068 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  (this24)->_unowned = UINT8(false);
#line 1068 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return;
#line 1068 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1090 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1090 */
#line 1090 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static void init22(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 1090 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                   _distribution_DefaultDist * d,
#line 1090 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                   chpl_bool definedConst,
#line 1090 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                   int64_t _ln,
#line 1090 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                   int32_t _fn) {
#line 1095 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1095 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = newRectangularDom2(d, definedConst, _ln, _fn);
#line 1095 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  init21(this24, call_tmp8);
#line 1090 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return;
#line 1090 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1099 */
#line 1099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static void init23(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 1099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                   _distribution_DefaultDist * d,
#line 1099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                   _tuple_1_star_range_int64_t_both_one * ranges,
#line 1099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                   chpl_bool definedConst,
#line 1099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                   int64_t _ln,
#line 1099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                   int32_t _fn) {
#line 1105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = newRectangularDom(d, ranges, definedConst, _ln, _fn);
#line 1105 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  init21(this24, call_tmp8);
#line 1099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return;
#line 1099 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1149 */
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static DefaultRectangularDom_1_int64_t_one _value3(_domain_DefaultRectangularDom_1_int64_t_one * this24) {
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one ret = NULL;
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1150 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_get__domain__instance(this24);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = chpl_get__domain__instance(this24);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  ret = *(call_tmp8);
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return ret;
#line 1149 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1157 */
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static DefaultRectangularDom_1_int64_t_one chpl_forwarding_expr1(_domain_DefaultRectangularDom_1_int64_t_one * this24) {
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one ret = NULL;
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  ret = _value3(this24);
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return ret;
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1173 */
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static void _do_destroy2(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                         int64_t _ln,
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                         int32_t _fn) {
#line 1174 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 1174 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_bool call_tmp9;
#line 1180 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _ref_DefaultRectangularDom_1_int64_t_one call_tmp10 = NULL;
#line 1180 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one coerce_tmp2 = NULL;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  BaseDom coerce_tmp3 = NULL;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_2_BaseDom_BaseDist T;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  BaseDom coerce_tmp4 = NULL;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  BaseDist coerce_tmp5 = NULL;
#line 1182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  BaseDist distToFree = NULL;
#line 1182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  BaseDist init_coerce_tmp = NULL;
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_bool call_tmp11;
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  BaseDist call_tmp12 = NULL;
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_bool call_tmp13;
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_bool call_tmp14;
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  BaseDist call_tmp15 = NULL;
#line 1174 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = chpl_get__domain__unowned(this24);
#line 1174 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp9 = chpl___EXCLAMATION_(*(call_tmp8));
#line 1174 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  if (call_tmp9) /* ZLINE: 1174 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl */
#line 1174 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  {
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    chpl_get__domain__instance(this24);
#line 1180 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    call_tmp10 = chpl_get__domain__instance(this24);
#line 1180 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    coerce_tmp2 = *(call_tmp10);
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    coerce_tmp3 = ((BaseDom)(coerce_tmp2));
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    chpl_check_nil(coerce_tmp3, _ln, _fn);
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    T = remove3(coerce_tmp3, _ln, _fn);
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    coerce_tmp4 = (&T)->x0;
#line 1181 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    coerce_tmp5 = (&T)->x1;
#line 1182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    init_coerce_tmp = ((BaseDist)(nil));
#line 1182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    distToFree = init_coerce_tmp;
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    call_tmp11 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(coerce_tmp5)), nil);
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    if (call_tmp11) /* ZLINE: 1183 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl */
#line 1183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    {
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_check_nil(coerce_tmp5, _ln, _fn);
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      call_tmp12 = remove2(coerce_tmp5, _ln, _fn);
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl___ASSIGN_40(&distToFree, call_tmp12);
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    }
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    call_tmp13 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(coerce_tmp4)), nil);
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    if (call_tmp13) /* ZLINE: 1186 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl */
#line 1186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    {
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      _delete_dom(coerce_tmp2, UINT8(false), _ln, _fn);
#line 1187 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    }
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    call_tmp14 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(distToFree)), nil);
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    if (call_tmp14) /* ZLINE: 1188 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl */
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    {
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      call_tmp15 = distToFree;
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      chpl_get_DefaultRectangularDom_dist(coerce_tmp2, _ln, _fn);
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
      _delete_dist(call_tmp15, UINT8(false), _ln, _fn);
#line 1189 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    }
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    chpl__autoDestroy21(&T);
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  } else /* ZLINE: 1192 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl */
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  {
#line 1188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  }
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return;
#line 1173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1200 */
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static void deinit13(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                     int64_t _ln,
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                     int32_t _fn) {
#line 1201 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _do_destroy2(this24, _ln, _fn);
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return;
#line 1200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1208 */
#line 1208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static _distribution_DefaultDist distribution(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 1208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                              int64_t _ln,
#line 1208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                              int32_t _fn) {
#line 1215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _ref_DefaultDist call_tmp9 = NULL;
#line 1215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _distribution_DefaultDist call_tmp10;
#line 1210 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _value3(this24);
#line 1215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = _value3(this24);
#line 1215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 1215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp9 = chpl_get_DefaultRectangularDom_dist(call_tmp8, _ln, _fn);
#line 1215 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp10 = _getDistribution(*(call_tmp9));
#line 1208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return call_tmp10;
#line 1208 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1341 */
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static _domain_DefaultRectangularDom_1_int64_t_one this9(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                         range_int64_t_both_one _e0_ranges,
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                         int64_t _ln,
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                         int32_t _fn) {
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one ranges;
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp;
#line 1343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one call_tmp8;
#line 1343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp2;
#line 1343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp3;
#line 1343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one r;
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _distribution_DefaultDist call_tmp9;
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one call_tmp10;
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _domain_DefaultRectangularDom_1_int64_t_one initTemp;
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one coerce_tmp2;
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp4;
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__init_tuple33(_e0_ranges, &ret_tmp);
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(ranges + INT64(0)) = *(ret_tmp + INT64(0));
#line 1343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  dims(this24, &ret_tmp2, _ln, _fn);
#line 1343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(call_tmp8 + INT64(0)) = *(ret_tmp2 + INT64(0));
#line 1343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  tupleOfRangesSlice(&call_tmp8, &ranges, &ret_tmp3);
#line 1343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(r + INT64(0)) = *(ret_tmp3 + INT64(0));
#line 1343 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy2(&call_tmp8);
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp9 = distribution(this24, _ln, _fn);
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _value3(this24);
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl___COLON_30(&r, &ret_tmp4);
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(coerce_tmp2 + INT64(0)) = *(ret_tmp4 + INT64(0));
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  init23(&initTemp, &call_tmp9, &coerce_tmp2, UINT8(false), _ln, _fn);
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp10 = initTemp;
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy2(&coerce_tmp2);
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy66(&call_tmp9, _ln, _fn);
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy2(&r);
#line 1344 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy2(&ranges);
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return call_tmp10;
#line 1341 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1426 */
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static int64_t size2(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                     int64_t _ln,
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                     int32_t _fn) {
#line 1427 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  int64_t call_tmp8;
#line 1427 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = sizeAs(this24, _ln, _fn);
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return call_tmp8;
#line 1426 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1431 */
#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static int64_t sizeAs(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                      int64_t _ln,
#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                      int32_t _fn) {
#line 1433 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1433 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  int64_t call_tmp9;
#line 1434 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_bool call_tmp10;
#line 1435 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  string error;
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  string call_tmp11;
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  string call_tmp12;
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  string call_tmp13;
#line 1433 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = _value3(this24);
#line 1433 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 1433 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp9 = dsiNumIndices(call_tmp8, _ln, _fn);
#line 1434 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp10 = chpl___GREATER_(call_tmp9, INT64(9223372036854775807));
#line 1434 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  if (call_tmp10) /* ZLINE: 1434 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl */
#line 1434 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  {
#line 1435 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    error = _str_literal_3357;
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    call_tmp11 = chpl___COLON_21(this24, _ln, _fn);
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    call_tmp12 = chpl___PLUS_9(&_str_literal_1654, &call_tmp11, _ln, _fn);
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    call_tmp13 = chpl___PLUS_9(&call_tmp12, &_str_literal_37, _ln, _fn);
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    chpl___PLUS__ASSIGN_3(&error, &call_tmp13, _ln, _fn);
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    chpl__autoDestroy23(&call_tmp13, _ln, _fn);
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    chpl__autoDestroy23(&call_tmp12, _ln, _fn);
#line 1437 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    chpl__autoDestroy23(&call_tmp11, _ln, _fn);
#line 1439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    boundsCheckHalt(&error, _ln, _fn);
#line 1439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
    chpl__autoDestroy23(&error, _ln, _fn);
#line 1439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  }
#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return call_tmp9;
#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1431 */
#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static uint64_t sizeAs2(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                        int64_t _ln,
#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                        int32_t _fn) {
#line 1433 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1433 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  int64_t call_tmp9;
#line 1441 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  uint64_t call_tmp10;
#line 1433 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = _value3(this24);
#line 1433 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 1433 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp9 = dsiNumIndices(call_tmp8, _ln, _fn);
#line 1441 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp10 = ((uint64_t)(call_tmp9));
#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return call_tmp10;
#line 1431 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1448 */
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static void dims(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                 _tuple_1_star_range_int64_t_both_one * _retArg,
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                 int64_t _ln,
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                 int32_t _fn) {
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one call_tmp9;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = _value3(this24);
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  dsiDims(call_tmp8, &ret_tmp, _ln, _fn);
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(call_tmp9 + INT64(0)) = *(ret_tmp + INT64(0));
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(*(_retArg) + INT64(0)) = *(call_tmp9 + INT64(0));
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return;
#line 1448 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1548 */
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static int64_t lowBound(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                        int64_t _ln,
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                        int32_t _fn) {
#line 1549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  int64_t call_tmp9;
#line 1549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = _value3(this24);
#line 1549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 1549 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp9 = dsiLow(call_tmp8, _ln, _fn);
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return call_tmp9;
#line 1548 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1569 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1569 */
#line 1569 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static void chpl_checkEltType(_domain_DefaultRectangularDom_1_int64_t_one * this24) {
#line 1569 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return;
#line 1569 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1593 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1593 */
#line 1593 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static void chpl_checkNegativeStride(_domain_DefaultRectangularDom_1_int64_t_one * this24) {
#line 1593 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return;
#line 1593 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1618 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1618 */
#line 1618 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t buildArray(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 1618 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                                            int64_t _ln,
#line 1618 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                                                                            int32_t _fn) {
#line 1622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp9 = NULL;
#line 1622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularArr_1_int64_t_one_locale_int64_t x2 = NULL;
#line 1631 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _array_DefaultRectangularArr_1_int64_t_one_locale_int64_t call_tmp10;
#line 1619 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_checkEltType(this24);
#line 1620 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_checkNegativeStride(this24);
#line 1622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = _value3(this24);
#line 1622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 1622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp9 = dsiBuildArray(call_tmp8, _ln, _fn);
#line 1622 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  x2 = call_tmp9;
#line 1627 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  help(this24, &x2, _ln, _fn);
#line 1629 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_incRefCountsForDomainsInArrayEltTypes(((BaseArr)(call_tmp9)));
#line 1631 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp10 = _newArray(call_tmp9);
#line 1618 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return call_tmp10;
#line 1618 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 1624 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:1624 */
#line 1624 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static void help(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 1624 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                 DefaultRectangularArr_1_int64_t_one_locale_int64_t * x2,
#line 1624 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                 int64_t _ln,
#line 1624 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                 int32_t _fn) {
#line 1625 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 1625 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  BaseDom coerce_tmp2 = NULL;
#line 1625 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  BaseArr coerce_tmp3 = NULL;
#line 1625 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = _value3(this24);
#line 1625 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  coerce_tmp2 = ((BaseDom)(call_tmp8));
#line 1625 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  coerce_tmp3 = ((BaseArr)(*(x2)));
#line 1625 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1625 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  add_arr_default_locking(coerce_tmp2);
#line 1625 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1625 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  add_arr_default_addToList(coerce_tmp2);
#line 1625 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_check_nil(coerce_tmp2, _ln, _fn);
#line 1625 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  add_arr(coerce_tmp2, coerce_tmp3, _ln, _fn);
#line 1624 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return;
#line 1624 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 2386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:2386 */
#line 2386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static chpl_bool contains(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 2386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                          _tuple_1_star_int64_t * idx,
#line 2386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                          int64_t _ln,
#line 2386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                          int32_t _fn) {
#line 2388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 2388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_int64_t call_tmp9;
#line 2388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 2388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_bool call_tmp10;
#line 2388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = _value3(this24);
#line 2388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _makeIndexTuple(idx, &ret_tmp);
#line 2388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(call_tmp9 + INT64(0)) = *(ret_tmp + INT64(0));
#line 2388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 2388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp10 = dsiMember(call_tmp8, &call_tmp9, _ln, _fn);
#line 2388 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy50(&call_tmp9);
#line 2386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return call_tmp10;
#line 2386 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:2397 */
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static chpl_bool contains2(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                           int64_t _e0_idx,
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                           int64_t _ln,
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                           int32_t _fn) {
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_int64_t idx;
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_int64_t ret_tmp;
#line 2398 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_bool call_tmp8;
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__init_tuple9(_e0_idx, &ret_tmp);
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(idx + INT64(0)) = *(ret_tmp + INT64(0));
#line 2398 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = contains(this24, &idx, _ln, _fn);
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl__autoDestroy50(&idx);
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return call_tmp8;
#line 2397 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 2732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:2732 */
#line 2732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static void setIndices(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 2732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                       _tuple_1_star_range_int64_t_both_one * x2,
#line 2732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                       int64_t _ln,
#line 2732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                       int32_t _fn) {
#line 2733 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 2733 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = _value3(this24);
#line 2733 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 2733 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  dsiSetIndices(call_tmp8, x2, _ln, _fn);
#line 2734 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_get__domain__instance(this24);
#line 2732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return;
#line 2732 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 2740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:2740 */
#line 2740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static void getIndices(_domain_DefaultRectangularDom_1_int64_t_one * this24,
#line 2740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                       _tuple_1_star_range_int64_t_both_one * _retArg,
#line 2740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                       int64_t _ln,
#line 2740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                       int32_t _fn) {
#line 2741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 2741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one call_tmp9;
#line 2741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _tuple_1_star_range_int64_t_both_one ret_tmp;
#line 2741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = _value3(this24);
#line 2741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 2741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  dsiGetIndices(call_tmp8, &ret_tmp, _ln, _fn);
#line 2741 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(call_tmp9 + INT64(0)) = *(ret_tmp + INT64(0));
#line 2740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  *(*(_retArg) + INT64(0)) = *(call_tmp9 + INT64(0));
#line 2740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return;
#line 2740 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

#line 2957 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
/* ChapelDomain.chpl:2957 */
#line 2957 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
static string chpl___COLON_21(_domain_DefaultRectangularDom_1_int64_t_one * val,
#line 2957 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                              int64_t _ln,
#line 2957 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
                              int32_t _fn) {
#line 2960 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  DefaultRectangularDom_1_int64_t_one call_tmp8 = NULL;
#line 2960 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  string call_tmp9;
#line 2959 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  _value3(val);
#line 2960 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp8 = _value3(val);
#line 2960 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 2960 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  call_tmp9 = doiToString(call_tmp8, _ln, _fn);
#line 2957 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
  return call_tmp9;
#line 2957 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelDomain.chpl"
}

