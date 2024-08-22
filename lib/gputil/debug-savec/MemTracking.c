#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
/* MemTracking.chpl:23 */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
static void chpl__init_MemTracking(int64_t _ln,
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
                                   int32_t _fn) {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool T;
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp8;
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp9;
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  c_ptrConst_int8_t call_tmp10 = NULL;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool T2;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp11;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp12;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  c_ptrConst_int8_t call_tmp13 = NULL;
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool T3;
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp14;
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp15;
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  c_ptrConst_int8_t call_tmp16 = NULL;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool T4;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp17;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp18;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  c_ptrConst_int8_t call_tmp19 = NULL;
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  uint64_t T5;
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp20;
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp21;
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  c_ptrConst_int8_t call_tmp22 = NULL;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  uint64_t T6;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp23;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp24;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  c_ptrConst_int8_t call_tmp25 = NULL;
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  string T7;
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp26;
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp27;
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  c_ptrConst_int8_t call_tmp28 = NULL;
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  string T8;
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp29;
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp30;
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  c_ptrConst_int8_t call_tmp31 = NULL;
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  string T9;
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp32;
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp33;
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  c_ptrConst_int8_t call_tmp34 = NULL;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  if (chpl__init_MemTracking_p) /* ZLINE: 23 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    goto _exit_chpl__init_MemTracking;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  printModuleInit("%*s\n", "MemTracking", INT64(11), _ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  refIndentLevel = &moduleInitLevel;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  *(refIndentLevel) += INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl__init_MemTracking_p = UINT8(true);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_addModule("MemTracking", ((c_fn_ptr_rehook)(chpl__deinit_MemTracking)), _ln, _fn);
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp8 = chpl_config_has_value(((c_ptrConst_int8_t)("memTrack")), ((c_ptrConst_int8_t)("Built-in")));
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp9 = chpl___EXCLAMATION_(call_tmp8);
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  if (call_tmp9) /* ZLINE: 28 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    T = UINT8(false);
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  } else /* ZLINE: 28 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp10 = chpl_config_get_value(((c_ptrConst_int8_t)("memTrack")), ((c_ptrConst_int8_t)("Built-in")));
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    T = _command_line_cast14(call_tmp10, _ln, _fn);
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  }
#line 28 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  memTrack = T;
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp11 = chpl_config_has_value(((c_ptrConst_int8_t)("memStats")), ((c_ptrConst_int8_t)("Built-in")));
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp12 = chpl___EXCLAMATION_(call_tmp11);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  if (call_tmp12) /* ZLINE: 30 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    T2 = UINT8(false);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  } else /* ZLINE: 30 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp13 = chpl_config_get_value(((c_ptrConst_int8_t)("memStats")), ((c_ptrConst_int8_t)("Built-in")));
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    T2 = _command_line_cast12(call_tmp13, _ln, _fn);
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  }
#line 30 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  memStats = T2;
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp14 = chpl_config_has_value(((c_ptrConst_int8_t)("memLeaksByType")), ((c_ptrConst_int8_t)("Built-in")));
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp15 = chpl___EXCLAMATION_(call_tmp14);
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  if (call_tmp15) /* ZLINE: 32 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    T3 = UINT8(false);
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  } else /* ZLINE: 32 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp16 = chpl_config_get_value(((c_ptrConst_int8_t)("memLeaksByType")), ((c_ptrConst_int8_t)("Built-in")));
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    T3 = _command_line_cast11(call_tmp16, _ln, _fn);
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  }
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  memLeaksByType = T3;
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp17 = chpl_config_has_value(((c_ptrConst_int8_t)("memLeaks")), ((c_ptrConst_int8_t)("Built-in")));
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp18 = chpl___EXCLAMATION_(call_tmp17);
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  if (call_tmp18) /* ZLINE: 34 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    T4 = UINT8(false);
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  } else /* ZLINE: 34 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp19 = chpl_config_get_value(((c_ptrConst_int8_t)("memLeaks")), ((c_ptrConst_int8_t)("Built-in")));
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    T4 = _command_line_cast10(call_tmp19, _ln, _fn);
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  }
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  memLeaks = T4;
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp20 = chpl_config_has_value(((c_ptrConst_int8_t)("memMax")), ((c_ptrConst_int8_t)("Built-in")));
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp21 = chpl___EXCLAMATION_(call_tmp20);
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  if (call_tmp21) /* ZLINE: 36 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    T5 = UINT64(0);
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  } else /* ZLINE: 36 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp22 = chpl_config_get_value(((c_ptrConst_int8_t)("memMax")), ((c_ptrConst_int8_t)("Built-in")));
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    T5 = _command_line_cast9(call_tmp22, _ln, _fn);
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  }
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  memMax = T5;
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp23 = chpl_config_has_value(((c_ptrConst_int8_t)("memThreshold")), ((c_ptrConst_int8_t)("Built-in")));
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp24 = chpl___EXCLAMATION_(call_tmp23);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  if (call_tmp24) /* ZLINE: 38 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    T6 = UINT64(0);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  } else /* ZLINE: 38 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp25 = chpl_config_get_value(((c_ptrConst_int8_t)("memThreshold")), ((c_ptrConst_int8_t)("Built-in")));
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    T6 = _command_line_cast8(call_tmp25, _ln, _fn);
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  }
#line 38 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  memThreshold = T6;
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp26 = chpl_config_has_value(((c_ptrConst_int8_t)("memLog")), ((c_ptrConst_int8_t)("Built-in")));
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp27 = chpl___EXCLAMATION_(call_tmp26);
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  if (call_tmp27) /* ZLINE: 40 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    init96(&T7, _ln, _fn);
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  } else /* ZLINE: 40 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp28 = chpl_config_get_value(((c_ptrConst_int8_t)("memLog")), ((c_ptrConst_int8_t)("Built-in")));
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    T7 = _command_line_cast7(call_tmp28, _ln, _fn);
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  }
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  memLog = T7;
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp29 = chpl_config_has_value(((c_ptrConst_int8_t)("memLeaksLog")), ((c_ptrConst_int8_t)("Built-in")));
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp30 = chpl___EXCLAMATION_(call_tmp29);
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  if (call_tmp30) /* ZLINE: 44 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    init96(&T8, _ln, _fn);
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  } else /* ZLINE: 44 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp31 = chpl_config_get_value(((c_ptrConst_int8_t)("memLeaksLog")), ((c_ptrConst_int8_t)("Built-in")));
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    T8 = _command_line_cast6(call_tmp31, _ln, _fn);
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  }
#line 44 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  memLeaksLog = T8;
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp32 = chpl_config_has_value(((c_ptrConst_int8_t)("memLeaksByDesc")), ((c_ptrConst_int8_t)("Built-in")));
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp33 = chpl___EXCLAMATION_(call_tmp32);
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  if (call_tmp33) /* ZLINE: 61 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    init96(&T9, _ln, _fn);
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  } else /* ZLINE: 61 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp34 = chpl_config_get_value(((c_ptrConst_int8_t)("memLeaksByDesc")), ((c_ptrConst_int8_t)("Built-in")));
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    T9 = _command_line_cast4(call_tmp34, _ln, _fn);
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  }
#line 61 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  memLeaksByDesc = T9;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  cMemMax = safeCast(memMax, _ln, _fn);
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  cMemThreshold = safeCast(memThreshold, _ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  *(refIndentLevel) -= INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  _exit_chpl__init_MemTracking:;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  return;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
}

#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
/* MemTracking.chpl:23 */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
static void chpl__deinit_MemTracking(int64_t _ln,
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
                                     int32_t _fn) {
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  string local_memLog;
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  local_memLog = memLog;
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl__autoDestroy23(&local_memLog, _ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  return;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
}

#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
/* MemTracking.chpl:79 */
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
void chpl_memTracking_returnConfigVals(chpl_bool * ret_memTrack,
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
                                       chpl_bool * ret_memStats,
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
                                       chpl_bool * ret_memLeaksByType,
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
                                       c_ptrConst_int8_t * ret_memLeaksByDesc,
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
                                       chpl_bool * ret_memLeaks,
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
                                       uint64_t * ret_memMax,
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
                                       uint64_t * ret_memThreshold,
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
                                       c_ptrConst_int8_t * ret_memLog,
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
                                       c_ptrConst_int8_t * ret_memLeaksLog) {
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  string local_memLeaksLog;
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  string local_memLog;
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  string local_memLeaksByDesc;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  uint64_t local_cMemThreshold;
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  uint64_t local_cMemMax;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool local_memLeaks;
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool local_memLeaksByType;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool local_memStats;
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  locale call_tmp8;
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  int64_t call_tmp9;
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp10;
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp11;
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp12;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  string local_memLeaksByDesc2;
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  _ref_chpl_bool call_tmp13 = NULL;
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  c_ptrConst_int8_t call_tmp14 = NULL;
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp15;
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp16;
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  string local_memLog2;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  _ref_chpl_bool call_tmp17 = NULL;
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  c_ptrConst_int8_t call_tmp18 = NULL;
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp19;
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl_bool call_tmp20;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  string local_memLeaksLog2;
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  _ref_chpl_bool call_tmp21 = NULL;
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  c_ptrConst_int8_t call_tmp22 = NULL;
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  c_ptrConst_int8_t call_tmp23 = NULL;
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  c_ptrConst_int8_t call_tmp24 = NULL;
#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  c_ptrConst_int8_t call_tmp25 = NULL;
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  local_memLeaksLog = memLeaksLog;
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  local_memLog = memLog;
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  local_memLeaksByDesc = memLeaksByDesc;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  local_cMemThreshold = cMemThreshold;
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  local_cMemMax = cMemMax;
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  local_memLeaks = memLeaks;
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  local_memLeaksByType = memLeaksByType;
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  local_memStats = memStats;
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl___ASSIGN_(ret_memTrack, memTrack);
#line 90 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl___ASSIGN_(ret_memStats, local_memStats);
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl___ASSIGN_(ret_memLeaksByType, local_memLeaksByType);
#line 92 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl___ASSIGN_(ret_memLeaks, local_memLeaks);
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl___ASSIGN_5(ret_memMax, local_cMemMax);
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl___ASSIGN_5(ret_memThreshold, local_cMemThreshold);
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp8 = here(INT64(96), INT32(79));
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp9 = id(&call_tmp8, INT64(96), INT32(79));
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  call_tmp10 = chpl___EXCLAMATION__ASSIGN_2(call_tmp9, INT64(0));
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  if (call_tmp10) /* ZLINE: 96 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp11 = isEmpty2(&local_memLeaksByDesc);
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp12 = chpl___EXCLAMATION_(call_tmp11);
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    if (call_tmp12) /* ZLINE: 97 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 97 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    {
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      init_ASSIGN_25(&local_memLeaksByDesc2, &local_memLeaksByDesc, INT64(98), INT32(79));
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      call_tmp13 = chpl_get_string_isOwned(&local_memLeaksByDesc2);
#line 100 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      chpl___ASSIGN_(call_tmp13, UINT8(false));
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      call_tmp14 = c_str(&local_memLeaksByDesc2, INT64(101), INT32(79));
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      chpl___ASSIGN_78(ret_memLeaksByDesc, call_tmp14);
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      chpl__autoDestroy23(&local_memLeaksByDesc2, INT64(101), INT32(79));
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    } else /* ZLINE: 102 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 101 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    {
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      chpl___ASSIGN_80(ret_memLeaksByDesc, nil, INT64(103), INT32(79));
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    }
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp15 = isEmpty2(&local_memLog);
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp16 = chpl___EXCLAMATION_(call_tmp15);
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    if (call_tmp16) /* ZLINE: 106 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 106 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    {
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      init_ASSIGN_25(&local_memLog2, &local_memLog, INT64(107), INT32(79));
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      call_tmp17 = chpl_get_string_isOwned(&local_memLog2);
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      chpl___ASSIGN_(call_tmp17, UINT8(false));
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      call_tmp18 = c_str(&local_memLog2, INT64(110), INT32(79));
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      chpl___ASSIGN_78(ret_memLog, call_tmp18);
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      chpl__autoDestroy23(&local_memLog2, INT64(110), INT32(79));
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    } else /* ZLINE: 111 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    {
#line 112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      chpl___ASSIGN_80(ret_memLog, nil, INT64(112), INT32(79));
#line 112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    }
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp19 = isEmpty2(&local_memLeaksLog);
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp20 = chpl___EXCLAMATION_(call_tmp19);
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    if (call_tmp20) /* ZLINE: 115 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 115 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    {
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      init_ASSIGN_25(&local_memLeaksLog2, &local_memLeaksLog, INT64(116), INT32(79));
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      call_tmp21 = chpl_get_string_isOwned(&local_memLeaksLog2);
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      chpl___ASSIGN_(call_tmp21, UINT8(false));
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      call_tmp22 = c_str(&local_memLeaksLog2, INT64(119), INT32(79));
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      chpl___ASSIGN_78(ret_memLeaksLog, call_tmp22);
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      chpl__autoDestroy23(&local_memLeaksLog2, INT64(119), INT32(79));
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    } else /* ZLINE: 120 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    {
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
      chpl___ASSIGN_80(ret_memLeaksLog, nil, INT64(121), INT32(79));
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    }
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  } else /* ZLINE: 124 /Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl */
#line 121 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  {
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp23 = c_str(&local_memLeaksByDesc, INT64(125), INT32(79));
#line 125 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    chpl___ASSIGN_78(ret_memLeaksByDesc, call_tmp23);
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp24 = c_str(&local_memLog, INT64(126), INT32(79));
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    chpl___ASSIGN_78(ret_memLog, call_tmp24);
#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    call_tmp25 = c_str(&local_memLeaksLog, INT64(127), INT32(79));
#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
    chpl___ASSIGN_78(ret_memLeaksLog, call_tmp25);
#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  }
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  chpl__autoDestroy45(&call_tmp8);
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
  return;
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/MemTracking.chpl"
}

