#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:141 */
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void chpl__init_Atomics(int64_t _ln,
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                               int32_t _fn) {
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  if (chpl__init_Atomics_p) /* ZLINE: 141 /Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl */
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  {
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
    goto _exit_chpl__init_Atomics;
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  }
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  printModuleInit("%*s\n", "Atomics", INT64(7), _ln, _fn);
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  refIndentLevel = &moduleInitLevel;
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  *(refIndentLevel) += INT64(1);
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl__init_Atomics_p = UINT8(true);
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  {
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
    chpl__init_ChapelBase(_ln, _fn);
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
    chpl__init_MemConsistency(_ln, _fn);
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
    chpl__init_currentTask(_ln, _fn);
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
    chpl__init_String(_ln, _fn);
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  }
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  *(refIndentLevel) -= INT64(1);
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _exit_chpl__init_Atomics:;
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:151 */
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void atomic_fence(memory_order order,
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                         int64_t _ln,
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                         int32_t _fn) {
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_atomic_thread_fence(order);
#line 154 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_fence(order, _ln, _fn);
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 151 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:244 */
#line 244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static atomic_bool * chpl_get_AtomicBool__v(AtomicBool * this24) {
#line 244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_bool call_tmp8 = NULL;
#line 244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = &((this24)->_v);
#line 244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return call_tmp8;
#line 244 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 247 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:247 */
#line 247 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void init_helper(AtomicBool * this24,
#line 247 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                        chpl_bool val) {
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_bool call_tmp8 = NULL;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicBool__v(this24);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  atomic_init_bool(call_tmp8, val);
#line 247 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 247 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:258 */
#line 258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void init(AtomicBool * this24) {
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  atomic_bool _v;
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  memset(&_v, INT32(0), sizeof(atomic_bool));
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  (this24)->_v = _v;
#line 261 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  init_helper(this24, UINT8(false));
#line 258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 258 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:277 */
#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void deinit(AtomicBool * this24) {
#line 283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_bool call_tmp8 = NULL;
#line 283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicBool__v(this24);
#line 283 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  atomic_destroy_bool(call_tmp8);
#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 277 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:289 */
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static chpl_bool read2(AtomicBool * this24,
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                       int64_t _ln,
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                       int32_t _fn) {
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_bool ret;
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_bool ret2;
#line 295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_bool call_tmp8 = NULL;
#line 295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  memory_order call_tmp9;
#line 295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_bool call_tmp10;
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_release5(_ln, _fn);
#line 294 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  ret2 = UINT8(false);
#line 295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicBool__v(this24);
#line 295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp9 = c_memory_order3();
#line 295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp10 = atomic_load_explicit_bool(call_tmp8, call_tmp9);
#line 295 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl___ASSIGN_(&ret2, call_tmp10);
#line 296 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  ret = ret2;
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return ret;
#line 289 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:302 */
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void write2(AtomicBool * this24,
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                   chpl_bool val,
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                   int64_t _ln,
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                   int32_t _fn) {
#line 307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_bool call_tmp8 = NULL;
#line 307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  memory_order call_tmp9;
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_release4(_ln, _fn);
#line 307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicBool__v(this24);
#line 307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp9 = c_memory_order2();
#line 307 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  atomic_store_explicit_bool(call_tmp8, val, call_tmp9);
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_acquire4(_ln, _fn);
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 302 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:313 */
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static chpl_bool exchange(AtomicBool * this24,
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                          chpl_bool val,
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                          int64_t _ln,
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                          int32_t _fn) {
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_bool ret;
#line 318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_bool ret2;
#line 319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_bool call_tmp8 = NULL;
#line 319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  memory_order call_tmp9;
#line 319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_bool call_tmp10;
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_release3(_ln, _fn);
#line 318 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  ret2 = UINT8(false);
#line 319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicBool__v(this24);
#line 319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp9 = c_memory_order4();
#line 319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp10 = atomic_exchange_explicit_bool(call_tmp8, val, call_tmp9);
#line 319 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl___ASSIGN_(&ret2, call_tmp10);
#line 320 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  ret = ret2;
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return ret;
#line 313 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:392 */
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static chpl_bool testAndSet(AtomicBool * this24,
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                            int64_t _ln,
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                            int32_t _fn) {
#line 393 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_bool call_tmp8;
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_release3(_ln, _fn);
#line 393 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = exchange(this24, UINT8(true), _ln, _fn);
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_acquire3(_ln, _fn);
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return call_tmp8;
#line 392 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:399 */
#line 399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void clear(AtomicBool * this24,
#line 399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                  int64_t _ln,
#line 399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                  int32_t _fn) {
#line 399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_release4(_ln, _fn);
#line 400 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  write2(this24, UINT8(false), _ln, _fn);
#line 399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_acquire4(_ln, _fn);
#line 399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 399 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:439 */
#line 439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static atomic_int_least64_t * chpl_get_AtomicT__v(AtomicT_int64_t * this24) {
#line 439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_int_least64_t call_tmp8 = NULL;
#line 439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = &((this24)->_v);
#line 439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return call_tmp8;
#line 439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:442 */
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void init_helper2(AtomicT_int64_t * this24,
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                         int64_t val) {
#line 449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_int_least64_t call_tmp8 = NULL;
#line 449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicT__v(this24);
#line 449 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  atomic_init_int_least64_t(call_tmp8, val);
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 442 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:453 */
#line 453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void init2(AtomicT_int64_t * this24) {
#line 455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  atomic_int_least64_t _v;
#line 455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  memset(&_v, INT32(0), sizeof(atomic_int_least64_t));
#line 455 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  (this24)->_v = _v;
#line 457 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  init_helper2(this24, INT64(0));
#line 453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 453 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:475 */
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void deinit2(AtomicT_int64_t * this24) {
#line 481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_int_least64_t call_tmp8 = NULL;
#line 481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicT__v(this24);
#line 481 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  atomic_destroy_int_least64_t(call_tmp8);
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:487 */
#line 487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static int64_t read3(AtomicT_int64_t * this24,
#line 487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                     int64_t _ln,
#line 487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                     int32_t _fn) {
#line 487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  int64_t ret;
#line 492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  int64_t ret2;
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_int_least64_t call_tmp8 = NULL;
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  memory_order call_tmp9;
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  int64_t call_tmp10;
#line 487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_release2(_ln, _fn);
#line 492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  ret2 = INT64(0);
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicT__v(this24);
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp9 = c_memory_order();
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp10 = atomic_load_explicit_int_least64_t(call_tmp8, call_tmp9);
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl___ASSIGN_3(&ret2, call_tmp10);
#line 494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  ret = ret2;
#line 487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return ret;
#line 487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:487 */
#line 487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static int64_t read4(AtomicT_int64_t * this24,
#line 487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                     int64_t _ln,
#line 487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                     int32_t _fn) {
#line 487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  int64_t ret;
#line 492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  int64_t ret2;
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_int_least64_t call_tmp8 = NULL;
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  memory_order call_tmp9;
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  int64_t call_tmp10;
#line 487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_release5(_ln, _fn);
#line 492 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  ret2 = INT64(0);
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicT__v(this24);
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp9 = c_memory_order3();
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp10 = atomic_load_explicit_int_least64_t(call_tmp8, call_tmp9);
#line 493 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl___ASSIGN_3(&ret2, call_tmp10);
#line 494 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  ret = ret2;
#line 487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return ret;
#line 487 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:500 */
#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void write3(AtomicT_int64_t * this24,
#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                   int64_t val,
#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                   int64_t _ln,
#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                   int32_t _fn) {
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_int_least64_t call_tmp8 = NULL;
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  memory_order call_tmp9;
#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_release5(_ln, _fn);
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicT__v(this24);
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp9 = c_memory_order3();
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  atomic_store_explicit_int_least64_t(call_tmp8, val, call_tmp9);
#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_acquire5(_ln, _fn);
#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:500 */
#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void write4(AtomicT_int64_t * this24,
#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                   int64_t val,
#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                   int64_t _ln,
#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                   int32_t _fn) {
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_int_least64_t call_tmp8 = NULL;
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  memory_order call_tmp9;
#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_release2(_ln, _fn);
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicT__v(this24);
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp9 = c_memory_order();
#line 505 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  atomic_store_explicit_int_least64_t(call_tmp8, val, call_tmp9);
#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_acquire2(_ln, _fn);
#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 500 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:607 */
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void add3(AtomicT_int64_t * this24,
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                 int64_t val,
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                 int64_t _ln,
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                 int32_t _fn) {
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_int_least64_t call_tmp8 = NULL;
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  memory_order call_tmp9;
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_release5(_ln, _fn);
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicT__v(this24);
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp9 = c_memory_order3();
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp8, val, call_tmp9);
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_acquire5(_ln, _fn);
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:607 */
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void add(AtomicT_int64_t * this24,
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                int64_t val,
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                int64_t _ln,
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                int32_t _fn) {
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_int_least64_t call_tmp8 = NULL;
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  memory_order call_tmp9;
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_release4(_ln, _fn);
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicT__v(this24);
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp9 = c_memory_order2();
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp8, val, call_tmp9);
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_acquire4(_ln, _fn);
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:607 */
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void add2(AtomicT_int64_t * this24,
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                 int64_t val,
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                 int64_t _ln,
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                 int32_t _fn) {
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_int_least64_t call_tmp8 = NULL;
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  memory_order call_tmp9;
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_release2(_ln, _fn);
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicT__v(this24);
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp9 = c_memory_order();
#line 612 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp8, val, call_tmp9);
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_acquire2(_ln, _fn);
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 607 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:621 */
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static int64_t fetchSub(AtomicT_int64_t * this24,
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                        int64_t val,
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                        int64_t _ln,
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                        int32_t _fn) {
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  int64_t ret;
#line 626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  int64_t ret2;
#line 627 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_int_least64_t call_tmp8 = NULL;
#line 627 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  memory_order call_tmp9;
#line 627 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  int64_t call_tmp10;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_release5(_ln, _fn);
#line 626 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  ret2 = INT64(0);
#line 627 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicT__v(this24);
#line 627 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp9 = c_memory_order3();
#line 627 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp10 = atomic_fetch_sub_explicit_int_least64_t(call_tmp8, val, call_tmp9);
#line 627 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl___ASSIGN_3(&ret2, call_tmp10);
#line 628 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  ret = ret2;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return ret;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:635 */
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void sub(AtomicT_int64_t * this24,
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                int64_t val,
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                int64_t _ln,
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                int32_t _fn) {
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_int_least64_t call_tmp8 = NULL;
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  memory_order call_tmp9;
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_release4(_ln, _fn);
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicT__v(this24);
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp9 = c_memory_order2();
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  atomic_fetch_sub_explicit_int_least64_t(call_tmp8, val, call_tmp9);
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_acquire4(_ln, _fn);
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:635 */
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void sub2(AtomicT_int64_t * this24,
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                 int64_t val,
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                 int64_t _ln,
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                 int32_t _fn) {
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  _ref_atomic_int_least64_t call_tmp8 = NULL;
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  memory_order call_tmp9;
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_release2(_ln, _fn);
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = chpl_get_AtomicT__v(this24);
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp9 = c_memory_order();
#line 640 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  atomic_fetch_sub_explicit_int_least64_t(call_tmp8, val, call_tmp9);
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_acquire2(_ln, _fn);
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 635 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
/* Atomics.chpl:749 */
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
static void waitFor(AtomicT_int64_t * this24,
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                    int64_t val,
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                    int64_t _ln,
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
                    int32_t _fn) {
#line 751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_bool T;
#line 751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  int64_t call_tmp8;
#line 751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  int64_t call_tmp9;
#line 755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  memory_order call_tmp10;
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_release3(_ln, _fn);
#line 751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp8 = read3(this24, _ln, _fn);
#line 751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  T = chpl___EXCLAMATION__ASSIGN_2(call_tmp8, val);
#line 751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  while (T) {
#line 752 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
    chpl_comm_ensure_progress();
#line 753 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
    yieldExecution();
#line 751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
    call_tmp9 = read3(this24, _ln, _fn);
#line 751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
    T = chpl___EXCLAMATION__ASSIGN_2(call_tmp9, val);
#line 751 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  }
#line 755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  call_tmp10 = c_memory_order4();
#line 755 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_atomic_thread_fence(call_tmp10);
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  chpl_rmem_consist_maybe_acquire3(_ln, _fn);
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
  return;
#line 749 "/Users/iainmoncrief/Desktop/chapel/modules/internal/Atomics.chpl"
}

