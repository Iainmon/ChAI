#line 1 "remoteTest.chpl"
/* remoteTest.chpl:1 */
#line 1 "remoteTest.chpl"
static void chpl__init_remoteTest(int64_t _ln,
#line 1 "remoteTest.chpl"
                                  int32_t _fn) {
#line 1 "remoteTest.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 16 "remoteTest.chpl"
  _ref_Remote_R call_tmp8 = NULL;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Remote_R _chpl_forward_tgt2 = NULL;
#line 1 "remoteTest.chpl"
  if (chpl__init_remoteTest_p) /* ZLINE: 1 remoteTest.chpl */
#line 1 "remoteTest.chpl"
  {
#line 1 "remoteTest.chpl"
    goto _exit_chpl__init_remoteTest;
#line 1 "remoteTest.chpl"
  }
#line 1 "remoteTest.chpl"
  printModuleInit("%*s\n", "remoteTest", INT64(10), INT64(1), INT32(93));
#line 1 "remoteTest.chpl"
  refIndentLevel = &moduleInitLevel;
#line 1 "remoteTest.chpl"
  *(refIndentLevel) += INT64(1);
#line 1 "remoteTest.chpl"
  chpl__init_remoteTest_p = UINT8(true);
#line 1 "remoteTest.chpl"
  {
#line 1 "remoteTest.chpl"
    chpl__init_Remote(INT64(1), INT32(93));
#line 1 "remoteTest.chpl"
    chpl__init_Debugger(INT64(1), INT32(93));
#line 1 "remoteTest.chpl"
    chpl__init_List(INT64(1), INT32(93));
#line 1 "remoteTest.chpl"
  }
#line 1 "remoteTest.chpl"
  chpl_addModule("remoteTest", ((c_fn_ptr_rehook)(chpl__deinit_remoteTest)), INT64(1), INT32(93));
#line 6 "remoteTest.chpl"
  dev = defaultDevice();
#line 10 "remoteTest.chpl"
  call_tmp7 = chpl__thunk2();
#line 10 "remoteTest.chpl"
  chpl_wrapper_x = chpl__buildRemoteWrapper(&dev, &call_tmp7, INT64(10), INT32(93));
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _chpl_forward_tgt = chpl_forwarding_expr13(&chpl_wrapper_x, INT64(49), INT32(22));
#line 10 "remoteTest.chpl"
  chpl_check_nil(_chpl_forward_tgt, INT64(10), INT32(93));
#line 10 "remoteTest.chpl"
  call_tmp6 = get2(&_chpl_forward_tgt);
#line 10 "remoteTest.chpl"
  x = call_tmp6;
#line 12 "remoteTest.chpl"
  writeln4(*(x), INT64(12), INT32(93));
#line 14 "remoteTest.chpl"
  writeln(&_str_literal_3373, INT64(14), INT32(93));
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _chpl_forward_tgt2 = chpl_forwarding_expr13(&chpl_wrapper_x, INT64(49), INT32(22));
#line 16 "remoteTest.chpl"
  chpl_check_nil(_chpl_forward_tgt2, INT64(16), INT32(93));
#line 16 "remoteTest.chpl"
  call_tmp8 = get2(&_chpl_forward_tgt2);
#line 16 "remoteTest.chpl"
  writeln3(&chpl_wrapper_x, *(call_tmp8), INT64(16), INT32(93));
#line 20 "remoteTest.chpl"
  writeln5(INT64(20), INT32(93));
#line 22 "remoteTest.chpl"
  writeln4(*(x), INT64(22), INT32(93));
#line 23 "remoteTest.chpl"
  halt(&_str_literal_2569, INT64(23), INT32(93));
#line 1 "remoteTest.chpl"
  *(refIndentLevel) -= INT64(1);
#line 1 "remoteTest.chpl"
  _exit_chpl__init_remoteTest:;
#line 1 "remoteTest.chpl"
  return;
#line 1 "remoteTest.chpl"
}

#line 1 "remoteTest.chpl"
/* remoteTest.chpl:1 */
#line 1 "remoteTest.chpl"
static void chpl_user_main(void) {
#line 1 "remoteTest.chpl"
  return;
#line 1 "remoteTest.chpl"
}

#line 1 "remoteTest.chpl"
/* remoteTest.chpl:1 */
#line 1 "remoteTest.chpl"
int64_t chpl_gen_main(chpl_main_argument * _arg) {
#line 1 "remoteTest.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t _endCount = NULL;
#line 1 "remoteTest.chpl"
  Error error = NULL;
#line 1 "remoteTest.chpl"
  _endCount = _endCountAlloc(INT64(1), INT32(93));
#line 1 "remoteTest.chpl"
  chpl_task_setDynamicEndCount(_endCount, INT64(1), INT32(93));
#line 1 "remoteTest.chpl"
  chpl_rt_preUserCodeHook();
#line 1 "remoteTest.chpl"
  chpl__init_remoteTest(INT64(1), INT32(93));
#line 1 "remoteTest.chpl"
  chpl_user_main();
#line 1 "remoteTest.chpl"
  chpl_rt_postUserCodeHook();
#line 1 "remoteTest.chpl"
  error = NULL;
#line 1 "remoteTest.chpl"
  _waitEndCount(_endCount, &error, INT64(1), INT32(93));
#line 1 "remoteTest.chpl"
  if (error != nil) /* ZLINE: 1 remoteTest.chpl */
#line 1 "remoteTest.chpl"
  {
#line 1 "remoteTest.chpl"
    chpl_uncaught_error(error, INT64(1), INT32(93));
#line 1 "remoteTest.chpl"
  }
#line 1 "remoteTest.chpl"
  chpl_deinitModules();
#line 1 "remoteTest.chpl"
  return INT64(0);
#line 1 "remoteTest.chpl"
}

#line 1 "remoteTest.chpl"
/* remoteTest.chpl:1 */
#line 1 "remoteTest.chpl"
static void chpl__deinit_remoteTest(void) {
#line 6 "remoteTest.chpl"
  locale local_dev;
#line 6 "remoteTest.chpl"
  local_dev = dev;
#line 10 "remoteTest.chpl"
  chpl__autoDestroy72(&chpl_wrapper_x, INT64(10), INT32(93));
#line 6 "remoteTest.chpl"
  chpl__autoDestroy45(&local_dev);
#line 1 "remoteTest.chpl"
  return;
#line 1 "remoteTest.chpl"
}

#line 8 "remoteTest.chpl"
/* remoteTest.chpl:8 */
#line 8 "remoteTest.chpl"
static void init150(R * this24,
#line 8 "remoteTest.chpl"
                    int64_t n) {
#line 8 "remoteTest.chpl"
  (this24)->n = n;
#line 8 "remoteTest.chpl"
  return;
#line 8 "remoteTest.chpl"
}

#line 8 "remoteTest.chpl"
/* remoteTest.chpl:8 */
#line 8 "remoteTest.chpl"
static void chpl__auto_destroy_R(R * this24) {
#line 8 "remoteTest.chpl"
  return;
#line 8 "remoteTest.chpl"
}

#line 8 "remoteTest.chpl"
/* remoteTest.chpl:8 */
#line 8 "remoteTest.chpl"
static void _auto_R_serialize(R * this24,
#line 8 "remoteTest.chpl"
                              fileWriter_F_defaultSerializer * writer3,
#line 8 "remoteTest.chpl"
                              defaultSerializer * serializer2,
#line 8 "remoteTest.chpl"
                              Error * error_out,
#line 8 "remoteTest.chpl"
                              int64_t _ln,
#line 8 "remoteTest.chpl"
                              int32_t _fn) {
#line 1 "<internal>"
  Error error = NULL;
#line 8 "remoteTest.chpl"
  error = NULL;
#line 8 "remoteTest.chpl"
  serializeDefaultImpl3(writer3, serializer2, this24, &error, _ln, _fn);
#line 8 "remoteTest.chpl"
  if (error != nil) {
#line 8 "remoteTest.chpl"
    *(error_out) = error;
#line 8 "remoteTest.chpl"
    goto _endserialize;
#line 8 "remoteTest.chpl"
  }
#line 8 "remoteTest.chpl"
  _endserialize:;
#line 8 "remoteTest.chpl"
  return;
#line 8 "remoteTest.chpl"
}

#line 10 "remoteTest.chpl"
/* remoteTest.chpl:10 */
#line 10 "remoteTest.chpl"
static R invoke(_tr_chpl__thunk2 * this24) {
#line 10 "remoteTest.chpl"
  R call_tmp8;
#line 10 "remoteTest.chpl"
  R initTemp;
#line 10 "remoteTest.chpl"
  init150(&initTemp, INT64(1));
#line 10 "remoteTest.chpl"
  call_tmp8 = initTemp;
#line 10 "remoteTest.chpl"
  return call_tmp8;
#line 10 "remoteTest.chpl"
}

#line 10 "remoteTest.chpl"
/* remoteTest.chpl:10 */
#line 10 "remoteTest.chpl"
static _tr_chpl__thunk2 chpl__thunk2(void) {
#line 10 "remoteTest.chpl"
  _tr_chpl__thunk2 _tr;
#line 10 "remoteTest.chpl"
  return _tr;
#line 10 "remoteTest.chpl"
}

