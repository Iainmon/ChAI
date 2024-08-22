#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
/* MemConsistency.chpl:21 */
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
static void chpl__init_MemConsistency(int64_t _ln,
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
                                      int32_t _fn) {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  if (chpl__init_MemConsistency_p) /* ZLINE: 21 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl */
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
    goto _exit_chpl__init_MemConsistency;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  }
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  printModuleInit("%*s\n", "MemConsistency", INT64(14), _ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  refIndentLevel = &moduleInitLevel;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  *(refIndentLevel) += INT64(1);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  chpl__init_MemConsistency_p = UINT8(true);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  {
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
    chpl__init_HaltWrappers(_ln, _fn);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  }
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  *(refIndentLevel) -= INT64(1);
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  _exit_chpl__init_MemConsistency:;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  return;
#line 21 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
}

#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
/* MemConsistency.chpl:89 */
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
static memory_order c_memory_order3(void) {
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  memory_order ret;
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  ret = memory_order_seq_cst;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  return ret;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
}

#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
/* MemConsistency.chpl:89 */
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
static memory_order c_memory_order4(void) {
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  memory_order ret;
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  ret = memory_order_acquire;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  return ret;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
}

#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
/* MemConsistency.chpl:89 */
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
static memory_order c_memory_order2(void) {
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  memory_order ret;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  ret = memory_order_release;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  return ret;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
}

#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
/* MemConsistency.chpl:89 */
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
static memory_order c_memory_order(void) {
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  memory_order ret;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  ret = memory_order_relaxed;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  return ret;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
}

#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
/* MemConsistency.chpl:115 */
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
static void chpl_rmem_consist_maybe_release5(int64_t _ln,
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
                                             int32_t _fn) {
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  memory_order call_tmp8;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  call_tmp8 = c_memory_order3();
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  chpl_rmem_consist_maybe_release(call_tmp8, _ln, _fn);
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  return;
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
}

#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
/* MemConsistency.chpl:115 */
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
static void chpl_rmem_consist_maybe_release3(int64_t _ln,
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
                                             int32_t _fn) {
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  memory_order call_tmp8;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  call_tmp8 = c_memory_order4();
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  chpl_rmem_consist_maybe_release(call_tmp8, _ln, _fn);
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  return;
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
}

#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
/* MemConsistency.chpl:115 */
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
static void chpl_rmem_consist_maybe_release4(int64_t _ln,
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
                                             int32_t _fn) {
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  memory_order call_tmp8;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  call_tmp8 = c_memory_order2();
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  chpl_rmem_consist_maybe_release(call_tmp8, _ln, _fn);
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  return;
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
}

#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
/* MemConsistency.chpl:115 */
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
static void chpl_rmem_consist_maybe_release2(int64_t _ln,
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
                                             int32_t _fn) {
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  memory_order call_tmp8;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  call_tmp8 = c_memory_order();
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  chpl_rmem_consist_maybe_release(call_tmp8, _ln, _fn);
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  return;
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
}

#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
/* MemConsistency.chpl:122 */
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
static void chpl_rmem_consist_maybe_acquire5(int64_t _ln,
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
                                             int32_t _fn) {
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  memory_order call_tmp8;
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  call_tmp8 = c_memory_order3();
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  chpl_rmem_consist_maybe_acquire(call_tmp8, _ln, _fn);
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  return;
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
}

#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
/* MemConsistency.chpl:122 */
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
static void chpl_rmem_consist_maybe_acquire3(int64_t _ln,
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
                                             int32_t _fn) {
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  memory_order call_tmp8;
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  call_tmp8 = c_memory_order4();
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  chpl_rmem_consist_maybe_acquire(call_tmp8, _ln, _fn);
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  return;
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
}

#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
/* MemConsistency.chpl:122 */
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
static void chpl_rmem_consist_maybe_acquire4(int64_t _ln,
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
                                             int32_t _fn) {
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  memory_order call_tmp8;
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  call_tmp8 = c_memory_order2();
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  chpl_rmem_consist_maybe_acquire(call_tmp8, _ln, _fn);
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  return;
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
}

#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
/* MemConsistency.chpl:122 */
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
static void chpl_rmem_consist_maybe_acquire2(int64_t _ln,
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
                                             int32_t _fn) {
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  memory_order call_tmp8;
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  call_tmp8 = c_memory_order();
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  chpl_rmem_consist_maybe_acquire(call_tmp8, _ln, _fn);
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
  return;
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemConsistency.chpl"
}

