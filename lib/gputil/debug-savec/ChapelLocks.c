#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
/* ChapelLocks.chpl:24 */
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
static void chpl__init_ChapelLocks(int64_t _ln,
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
                                   int32_t _fn) {
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  if (chpl__init_ChapelLocks_p) /* ZLINE: 24 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl */
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  {
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    goto _exit_chpl__init_ChapelLocks;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  }
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  printModuleInit("%*s\n", "ChapelLocks", INT64(11), _ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  refIndentLevel = &moduleInitLevel;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  *(refIndentLevel) += INT64(1);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  chpl__init_ChapelLocks_p = UINT8(true);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  {
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    chpl__init_Atomics(_ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    chpl__init_ChapelBase(_ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    chpl__init_MemConsistency(_ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    chpl__init_currentTask(_ln, _fn);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  }
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  *(refIndentLevel) -= INT64(1);
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  _exit_chpl__init_ChapelLocks:;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  return;
#line 24 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
}

#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
/* ChapelLocks.chpl:32 */
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
static void chpl__auto_destroy_chpl_LocalSpinlock(chpl_LocalSpinlock * this24) {
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  _ref_AtomicBool _field_destructor_tmp_ = NULL;
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  _field_destructor_tmp_ = &((this24)->l);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  deinit(_field_destructor_tmp_);
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  return;
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
}

#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
/* ChapelLocks.chpl:33 */
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
static AtomicBool * chpl_get_chpl_LocalSpinlock_l(chpl_LocalSpinlock * this24) {
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  _ref_AtomicBool call_tmp8 = NULL;
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  call_tmp8 = &((this24)->l);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  return call_tmp8;
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
}

#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
/* ChapelLocks.chpl:39 */
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
static void init34(chpl_LocalSpinlock * this24) {
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  AtomicBool l;
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  init(&l);
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  (this24)->l = l;
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  return;
#line 39 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
/* ChapelLocks.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
static void lock(chpl_LocalSpinlock * this24,
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
                 int64_t _ln,
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
                 int32_t _fn) {
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  chpl_bool T;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  chpl_bool T2;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  _ref_AtomicBool call_tmp8 = NULL;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  chpl_bool T3;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  _ref_AtomicBool call_tmp9 = NULL;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  chpl_bool T4;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  _ref_AtomicBool call_tmp10 = NULL;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  chpl_bool T5;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  _ref_AtomicBool call_tmp11 = NULL;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  call_tmp8 = chpl_get_chpl_LocalSpinlock_l(this24);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  T2 = read2(call_tmp8, _ln, _fn);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  if (T2) /* ZLINE: 49 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl */
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  {
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    T3 = UINT8(true);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  } else /* ZLINE: 49 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl */
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  {
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    call_tmp9 = chpl_get_chpl_LocalSpinlock_l(this24);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    T3 = testAndSet(call_tmp9, _ln, _fn);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  }
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  T = T3;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  while (T) {
#line 50 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    yieldExecution();
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    call_tmp10 = chpl_get_chpl_LocalSpinlock_l(this24);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    T4 = read2(call_tmp10, _ln, _fn);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    if (T4) /* ZLINE: 49 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl */
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    {
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
      T5 = UINT8(true);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    } else /* ZLINE: 49 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl */
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    {
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
      call_tmp11 = chpl_get_chpl_LocalSpinlock_l(this24);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
      T5 = testAndSet(call_tmp11, _ln, _fn);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    }
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
    T = T5;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  }
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  return;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
}

#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
/* ChapelLocks.chpl:53 */
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
static void unlock(chpl_LocalSpinlock * this24,
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
                   int64_t _ln,
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
                   int32_t _fn) {
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  _ref_AtomicBool call_tmp8 = NULL;
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  call_tmp8 = chpl_get_chpl_LocalSpinlock_l(this24);
#line 54 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  clear(call_tmp8, _ln, _fn);
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
  return;
#line 53 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelLocks.chpl"
}

