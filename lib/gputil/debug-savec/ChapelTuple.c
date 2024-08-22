#line 1 "<internal>"
/* <internal>:0 */
static void _defaultOf2(_tuple_1_star_range_int64_t_both_one * _retArg) {
#line 1 "<internal>"
  range_int64_t_both_one tup_x0;
#line 1 "<internal>"
  range_int64_t_both_one elt_x0;
  init40(&elt_x0);
  tup_x0 = elt_x0;
  *(*(_retArg) + INT64(0)) = tup_x0;
  return;
}

#line 1 "<internal>"
/* <internal>:0 */
static void _defaultOf(_tuple_1_star_int64_t * _retArg) {
  *(*(_retArg) + INT64(0)) = INT64(0);
  return;
}

#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:23 */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_ChapelTuple(int64_t _ln,
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                                   int32_t _fn) {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  if (chpl__init_ChapelTuple_p) /* ZLINE: 23 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
    goto _exit_chpl__init_ChapelTuple;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  printModuleInit("%*s\n", "ChapelTuple", INT64(11), _ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  refIndentLevel = &moduleInitLevel;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(refIndentLevel) += INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__init_ChapelTuple_p = UINT8(true);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
    chpl__init_DSIUtil(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(refIndentLevel) -= INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _exit_chpl__init_ChapelTuple:;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple4(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              int64_t x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              string * x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              int64_t x3,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              _tuple_4__ref_string_int64_t__ref_string_int64_t * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_4__ref_string_int64_t__ref_string_int64_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x2 = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x3 = x3;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_7__ref_string__ref_string__ref_string_Remote_R__ref_string__ref_R__ref_chpl_ioNewline(_tuple_7__ref_string__ref_string__ref_string_Remote_R__ref_string__ref_R__ref_chpl_ioNewline * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple(BaseDom x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                             BaseDist x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                             _tuple_2_BaseDom_BaseDist * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2_BaseDom_BaseDist this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_2_BaseArr_BaseDom(_tuple_2_BaseArr_BaseDom * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple32(BaseArr x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               BaseDom x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_2_BaseArr_BaseDom * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2_BaseArr_BaseDom this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_1_star__ref_chpl_ioNewline(_tuple_1_star__ref_chpl_ioNewline * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple31(chpl_ioNewline * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_1_star__ref_chpl_ioNewline * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_1_star__ref_chpl_ioNewline this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(0)) = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_3__ref__owned_Remote_R_Remote_R__ref_chpl_ioNewline(_tuple_3__ref__owned_Remote_R_Remote_R__ref_chpl_ioNewline * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple28(_owned_Remote_R * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               Remote_R x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               chpl_ioNewline * x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_3__ref__owned_Remote_R_Remote_R__ref_chpl_ioNewline * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_3__ref__owned_Remote_R_Remote_R__ref_chpl_ioNewline this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x2 = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_2__ref_string__ref_chpl_ioNewline(_tuple_2__ref_string__ref_chpl_ioNewline * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple26(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               chpl_ioNewline * x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_2__ref_string__ref_chpl_ioNewline * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2__ref_string__ref_chpl_ioNewline this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_2_Remote_R__ref_chpl_ioNewline(_tuple_2_Remote_R__ref_chpl_ioNewline * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple25(Remote_R x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               chpl_ioNewline * x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_2_Remote_R__ref_chpl_ioNewline * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2_Remote_R__ref_chpl_ioNewline this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_1_star__ref_R(_tuple_1_star__ref_R * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple23(R * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_1_star__ref_R * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_1_star__ref_R this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(0)) = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_1_star__ref__owned__RemoteVarContainer_R(_tuple_1_star__ref__owned__RemoteVarContainer_R * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple16(uint8_t * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               int64_t x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_2_c_ptr_uint8_t_int64_t * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_2_c_ptr_uint8_t_int64_t(_tuple_2_c_ptr_uint8_t_int64_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple8(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              int64_t x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              string * x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              _tuple_3__ref_string_int64_t__ref_string * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_3__ref_string_int64_t__ref_string this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x2 = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_3__ref_string_int64_t__ref_string(_tuple_3__ref_string_int64_t__ref_string * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple13(c_string_rehook x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_1_star_c_ptrConst_int8_t * _retArg,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               int64_t _ln,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               int32_t _fn) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_1_star_c_ptrConst_int8_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  c_ptrConst_int8_t elt_x0 = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  elt_x0 = ((c_ptrConst_int8_t)(((c_string_rehook)(x0))));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(0)) = elt_x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_1_star_c_ptrConst_int8_t(_tuple_1_star_c_ptrConst_int8_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple34(syserr x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               int32_t x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               int32_t x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_3_syserr_int32_t_int32_t * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_3_syserr_int32_t_int32_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x2 = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_3_syserr_int32_t_int32_t(_tuple_3_syserr_int32_t_int32_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple14(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x3,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x4,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x5,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_6_star__ref_string * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_6_star__ref_string this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(0)) = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(1)) = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(2)) = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(3)) = x3;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(4)) = x4;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(5)) = x5;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_6_star_string(_tuple_6_star_string * this24,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                                                    int64_t _ln,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                                                    int32_t _fn) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_string _field_destructor_tmp_ = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_string _field_destructor_tmp_2 = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_string _field_destructor_tmp_3 = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_string _field_destructor_tmp_4 = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_string _field_destructor_tmp_5 = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_string _field_destructor_tmp_6 = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _field_destructor_tmp_ = (*(this24) + INT64(5));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  deinit52(_field_destructor_tmp_, _ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _field_destructor_tmp_2 = (*(this24) + INT64(4));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  deinit52(_field_destructor_tmp_2, _ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _field_destructor_tmp_3 = (*(this24) + INT64(3));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  deinit52(_field_destructor_tmp_3, _ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _field_destructor_tmp_4 = (*(this24) + INT64(2));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  deinit52(_field_destructor_tmp_4, _ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _field_destructor_tmp_5 = (*(this24) + INT64(1));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  deinit52(_field_destructor_tmp_5, _ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _field_destructor_tmp_6 = (*(this24) + INT64(0));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  deinit52(_field_destructor_tmp_6, _ln, _fn);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple20(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               int64_t x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               int64_t x3,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x4,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x2 = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x3 = x3;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x4 = x4;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string(_tuple_5__ref_string_int64_t__ref_string_int64_t__ref_string * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple29(_ic_these_range_int64_t_both_one x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _ic_chpl_bytes__ref_string x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string(_tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple22(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               range_int64_t_both_one x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               int64_t x3,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x2 = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x3 = x3;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t(_tuple_4__ref_string_range_int64_t_both_one__ref_string_int64_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_range_int64_t_both_one _field_destructor_tmp_ = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _field_destructor_tmp_ = &((this24)->x1);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__auto_destroy_range(*(_field_destructor_tmp_));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple5(range_int64_t_both_one x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              int64_t x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              _tuple_2_range_int64_t_both_one_int64_t * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2_range_int64_t_both_one_int64_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_2_range_int64_t_both_one_int64_t(_tuple_2_range_int64_t_both_one_int64_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_range_int64_t_both_one _field_destructor_tmp_ = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _field_destructor_tmp_ = &((this24)->x0);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__auto_destroy_range(*(_field_destructor_tmp_));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple15(byteIndex * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               int64_t x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_2__ref_byteIndex_int64_t * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2__ref_byteIndex_int64_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_2__ref_byteIndex_int64_t(_tuple_2__ref_byteIndex_int64_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple10(int32_t x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               byteIndex * x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               int64_t x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_3_int32_t__ref_byteIndex_int64_t * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_3_int32_t__ref_byteIndex_int64_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x2 = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_3_int32_t__ref_byteIndex_int64_t(_tuple_3_int32_t__ref_byteIndex_int64_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_3_int32_t_byteIndex_int64_t(_tuple_3_int32_t_byteIndex_int64_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_byteIndex _field_destructor_tmp_ = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _field_destructor_tmp_ = &((this24)->x1);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__auto_destroy_byteIndex(_field_destructor_tmp_);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple21(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               range_byteIndex_both_one x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               int64_t x3,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x2 = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x3 = x3;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t(_tuple_4__ref_string_range_byteIndex_both_one__ref_string_int64_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_range_byteIndex_both_one _field_destructor_tmp_ = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _field_destructor_tmp_ = &((this24)->x1);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__auto_destroy_range4(*(_field_destructor_tmp_));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple19(_owned__RemoteVarContainer_R * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_1_star__ref__owned__RemoteVarContainer_R * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_1_star__ref__owned__RemoteVarContainer_R this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(0)) = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_4__ref_string_int64_t__ref_string_int64_t(_tuple_4__ref_string_int64_t__ref_string_int64_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple3(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              range_int64_t_low_one x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              string * x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              int64_t x3,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              _tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x2 = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x3 = x3;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t(_tuple_4__ref_string_range_int64_t_low_one__ref_string_int64_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_range_int64_t_low_one _field_destructor_tmp_ = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _field_destructor_tmp_ = &((this24)->x1);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__auto_destroy_range3(*(_field_destructor_tmp_));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple11(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               range_byteIndex_low_one x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               int64_t x3,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x2 = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x3 = x3;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t(_tuple_4__ref_string_range_byteIndex_low_one__ref_string_int64_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_range_byteIndex_low_one _field_destructor_tmp_ = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _field_destructor_tmp_ = &((this24)->x1);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__auto_destroy_range5(*(_field_destructor_tmp_));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple2(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              range_byteIndex_high_one x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              string * x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              int64_t x3,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              _tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x2 = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x3 = x3;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t(_tuple_4__ref_string_range_byteIndex_high_one__ref_string_int64_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_range_byteIndex_high_one _field_destructor_tmp_ = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _field_destructor_tmp_ = &((this24)->x1);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__auto_destroy_range6(*(_field_destructor_tmp_));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple33(range_int64_t_both_one x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_1_star_range_int64_t_both_one * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_1_star_range_int64_t_both_one this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(0)) = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_1_star_range_int64_t_both_one(_tuple_1_star_range_int64_t_both_one * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_range_int64_t_both_one _field_destructor_tmp_ = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _field_destructor_tmp_ = (*(this24) + INT64(0));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__auto_destroy_range(*(_field_destructor_tmp_));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple9(int64_t x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              _tuple_1_star_int64_t * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_1_star_int64_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(0)) = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_1_star_int64_t(_tuple_1_star_int64_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple12(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x3,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_4_star__ref_string * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_4_star__ref_string this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(0)) = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(1)) = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(2)) = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(3)) = x3;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_4_star__ref_string(_tuple_4_star__ref_string * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple6(int64_t x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              int64_t x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              _tuple_2_star_int64_t * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2_star_int64_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(0)) = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(1)) = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_2_star_int64_t(_tuple_2_star_int64_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple27(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               int32_t x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               int64_t x3,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_4__ref_string_int32_t__ref_string_int64_t * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_4__ref_string_int32_t__ref_string_int64_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x2 = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x3 = x3;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_4__ref_string_int32_t__ref_string_int64_t(_tuple_4__ref_string_int32_t__ref_string_int64_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple24(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               uint64_t x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_2__ref_string_uint64_t * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2__ref_string_uint64_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_2__ref_string_uint64_t(_tuple_2__ref_string_uint64_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple7(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              ArrayInit x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              string * x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                              _tuple_3__ref_string_ArrayInit__ref_string * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_3__ref_string_ArrayInit__ref_string this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x2 = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_3__ref_string_ArrayInit__ref_string(_tuple_3__ref_string_ArrayInit__ref_string * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple18(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               int64_t x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x3,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               range_int64_t_both_one x4,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x2 = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x3 = x3;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x4 = x4;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one(_tuple_5__ref_string__ref_string_int64_t__ref_string_range_int64_t_both_one * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_range_int64_t_both_one _field_destructor_tmp_ = NULL;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _field_destructor_tmp_ = &((this24)->x4);
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__auto_destroy_range(*(_field_destructor_tmp_));
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple30(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               int64_t x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_2__ref_string_int64_t * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2__ref_string_int64_t this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_2__ref_string_int64_t(_tuple_2__ref_string_int64_t * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__init_tuple17(string * x0,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x1,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x2,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               Remote_R x3,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               string * x4,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               R * x5,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               chpl_ioNewline * x6,
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                               _tuple_7__ref_string__ref_string__ref_string_Remote_R__ref_string__ref_R__ref_chpl_ioNewline * _retArg) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_7__ref_string__ref_string__ref_string_Remote_R__ref_string__ref_R__ref_chpl_ioNewline this24;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x0 = x0;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x1 = x1;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x2 = x2;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x3 = x3;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x4 = x4;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x5 = x5;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  (_retArg)->x6 = x6;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:26 */
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl__auto_destroy__tuple_2_BaseDom_BaseDist(_tuple_2_BaseDom_BaseDist * this24) {
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 26 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:48 */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static _tuple_2_c_ptr_uint8_t_int64_t _build_tuple9(uint8_t * _e0_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                                                    int64_t _e1_x) {
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2_c_ptr_uint8_t_int64_t ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__init_tuple16(_e0_x, _e1_x, &ret_tmp);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  x2 = ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:48 */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void _build_tuple10(string * _e0_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                           string * _e1_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                           string * _e2_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                           string * _e3_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                           string * _e4_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                           string * _e5_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                           _tuple_6_star__ref_string * _retArg) {
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_6_star__ref_string x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_6_star__ref_string ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__init_tuple14(_e0_x, _e1_x, _e2_x, _e3_x, _e4_x, _e5_x, &ret_tmp);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(x2 + INT64(0)) = *(ret_tmp + INT64(0));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(x2 + INT64(1)) = *(ret_tmp + INT64(1));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(x2 + INT64(2)) = *(ret_tmp + INT64(2));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(x2 + INT64(3)) = *(ret_tmp + INT64(3));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(x2 + INT64(4)) = *(ret_tmp + INT64(4));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(x2 + INT64(5)) = *(ret_tmp + INT64(5));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(0)) = *(x2 + INT64(0));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(1)) = *(x2 + INT64(1));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(2)) = *(x2 + INT64(2));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(3)) = *(x2 + INT64(3));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(4)) = *(x2 + INT64(4));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(5)) = *(x2 + INT64(5));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:48 */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static _tuple_3_int32_t__ref_byteIndex_int64_t _build_tuple4(int32_t _e0_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                                                             byteIndex * _e1_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                                                             int64_t _e2_x) {
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_3_int32_t__ref_byteIndex_int64_t x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_3_int32_t__ref_byteIndex_int64_t ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__init_tuple10(_e0_x, _e1_x, _e2_x, &ret_tmp);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  x2 = ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:48 */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static _tuple_3_syserr_int32_t_int32_t _build_tuple3(syserr _e0_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                                                     int32_t _e1_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                                                     int32_t _e2_x) {
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_3_syserr_int32_t_int32_t x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_3_syserr_int32_t_int32_t ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__init_tuple34(_e0_x, _e1_x, _e2_x, &ret_tmp);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  x2 = ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:48 */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static _tuple_2_BaseDom_BaseDist _build_tuple8(BaseDom _e0_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                                               BaseDist _e1_x) {
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2_BaseDom_BaseDist x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2_BaseDom_BaseDist ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__init_tuple(_e0_x, _e1_x, &ret_tmp);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  x2 = ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:48 */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static _tuple_2_BaseArr_BaseDom _build_tuple7(BaseArr _e0_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                                              BaseDom _e1_x) {
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2_BaseArr_BaseDom x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2_BaseArr_BaseDom ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__init_tuple32(_e0_x, _e1_x, &ret_tmp);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  x2 = ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:48 */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void _build_tuple6(int64_t _e0_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                          int64_t _e1_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                          _tuple_2_star_int64_t * _retArg) {
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2_star_int64_t x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2_star_int64_t ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__init_tuple6(_e0_x, _e1_x, &ret_tmp);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(x2 + INT64(0)) = *(ret_tmp + INT64(0));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(x2 + INT64(1)) = *(ret_tmp + INT64(1));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(0)) = *(x2 + INT64(0));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(1)) = *(x2 + INT64(1));
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:48 */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static _tuple_2__ref_byteIndex_int64_t _build_tuple2(byteIndex * _e0_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                                                     int64_t _e1_x) {
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2__ref_byteIndex_int64_t x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2__ref_byteIndex_int64_t ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__init_tuple15(_e0_x, _e1_x, &ret_tmp);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  x2 = ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:48 */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static _tuple_2_range_int64_t_both_one_int64_t _build_tuple5(range_int64_t_both_one _e0_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                                                             int64_t _e1_x) {
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2_range_int64_t_both_one_int64_t x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2_range_int64_t_both_one_int64_t ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__init_tuple5(_e0_x, _e1_x, &ret_tmp);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  x2 = ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:48 */
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static _tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string _build_tuple(_ic_these_range_int64_t_both_one _e0_x,
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                                                                                         _ic_chpl_bytes__ref_string _e1_x) {
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_2__ic_these_range_int64_t_both_one__ic_chpl_bytes__ref_string ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl__init_tuple29(_e0_x, _e1_x, &ret_tmp);
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  x2 = ret_tmp;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return x2;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:153 */
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl___ASSIGN_60(_tuple_1_star_int64_t * x2,
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                             _tuple_1_star_int64_t * y) {
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(x2) + INT64(0)) = *(*(y) + INT64(0));
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:153 */
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl___ASSIGN_61(_tuple_1_star_range_int64_t_both_one * x2,
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                             _tuple_1_star_range_int64_t_both_one * y) {
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(x2) + INT64(0)) = *(*(y) + INT64(0));
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:167 */
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static range_int64_t_both_one * this13(_tuple_1_star_range_int64_t_both_one * this24,
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                                       int64_t i,
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                                       int64_t _ln,
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                                       int32_t _fn) {
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl_bool T;
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  chpl_bool T2;
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _ref_range_int64_t_both_one call_tmp8 = NULL;
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  T = chpl___LESS_3(i, INT64(0));
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  if (T) /* ZLINE: 171 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl */
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  {
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
    T2 = UINT8(true);
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  } else /* ZLINE: 171 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl */
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  {
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
    T2 = chpl___GREATER_(i, INT64(0));
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  }
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  if (T2) /* ZLINE: 171 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl */
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  {
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
    halt2(&_str_literal_719, i, _ln, _fn);
#line 172 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  }
#line 173 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  call_tmp8 = (*(this24) + i);
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return call_tmp8;
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 265 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:265 */
#line 265 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static range_int64_t_both_one indices(_tuple_1_star_range_int64_t_both_one * this24) {
#line 266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  range_int64_t_both_one call_tmp8;
#line 266 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  call_tmp8 = chpl_build_bounded_range();
#line 265 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return call_tmp8;
#line 265 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:305 */
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl___COLON_31(_tuple_1_star_int64_t * x2,
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                            _tuple_1_star_int64_t * _retArg) {
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_1_star_int64_t retcopy;
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(retcopy + INT64(0)) = *(*(x2) + INT64(0));
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(0)) = *(retcopy + INT64(0));
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
/* ChapelTuple.chpl:305 */
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
static void chpl___COLON_30(_tuple_1_star_range_int64_t_both_one * x2,
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
                            _tuple_1_star_range_int64_t_both_one * _retArg) {
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  _tuple_1_star_range_int64_t_both_one retcopy;
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(retcopy + INT64(0)) = *(*(x2) + INT64(0));
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  *(*(_retArg) + INT64(0)) = *(retcopy + INT64(0));
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
  return;
#line 305 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTuple.chpl"
}

