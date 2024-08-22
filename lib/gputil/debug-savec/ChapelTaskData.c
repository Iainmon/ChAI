#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
/* ChapelTaskData.chpl:23 */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
static void chpl__init_ChapelTaskData(int64_t _ln,
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                      int32_t _fn) {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t call_tmp8;
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_bool call_tmp9;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  if (chpl__init_ChapelTaskData_p) /* ZLINE: 23 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl */
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
    goto _exit_chpl__init_ChapelTaskData;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  }
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  printModuleInit("%*s\n", "ChapelTaskData", INT64(14), _ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  refIndentLevel = &moduleInitLevel;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  *(refIndentLevel) += INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl__init_ChapelTaskData_p = UINT8(true);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  {
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
    chpl__init_CTypes(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
    chpl__init_POSIX(_ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  }
#line 32 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_offset_endCount = UINT64(0);
#line 33 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_offset_serial = sizeof_endcount_ptr();
#line 34 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_offset_nextCoStmtSerial = chpl___PLUS_5(chpl_offset_serial);
#line 35 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_offset_commDiagsTemporarilyDisabled = chpl___PLUS_5(chpl_offset_nextCoStmtSerial);
#line 36 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_offset_end = chpl___PLUS_5(chpl_offset_commDiagsTemporarilyDisabled);
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp8 = c_sizeof5();
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp9 = chpl___LESS__ASSIGN_2(chpl_offset_end, call_tmp8);
#line 177 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  assert2(call_tmp9, _ln, _fn);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  *(refIndentLevel) -= INT64(1);
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  _exit_chpl__init_ChapelTaskData:;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  return;
#line 23 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
}

#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
/* ChapelTaskData.chpl:40 */
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
static uint64_t sizeof_endcount_ptr(void) {
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t call_tmp8;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t call_tmp9;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t call_tmp10;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp8 = c_sizeof6();
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp9 = c_sizeof();
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp10 = chpl___PLUS_4(call_tmp8, call_tmp9);
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  return call_tmp10;
#line 40 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
/* ChapelTaskData.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
static void chpl_task_data_setDynamicEndCount(chpl_task_infoChapel_t * tls,
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                              chpl___EndCount_AtomicT_int64_t_int64_t end,
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                              int64_t _ln,
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                              int32_t _fn) {
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t local_chpl_offset_endCount;
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t prv = NULL;
#line 48 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t i;
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_localeID_t loc;
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  raw_c_void_ptr adr;
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  _ref_uint8_t call_tmp9 = NULL;
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp10 = NULL;
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_chpl_localeID_t call_tmp11 = NULL;
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t call_tmp12;
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t call_tmp13;
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  _ref_uint8_t call_tmp14 = NULL;
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp15 = NULL;
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_raw_c_void_ptr call_tmp16 = NULL;
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t call_tmp17;
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  local_chpl_offset_endCount = chpl_offset_endCount;
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp8 = chpl___COLON_54(tls, _ln, _fn);
#line 47 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  prv = call_tmp8;
#line 51 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  loc = chpl_gen_getLocaleID();
#line 52 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  adr = ((raw_c_void_ptr)(end));
#line 55 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  i = local_chpl_offset_endCount;
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp9 = this23(call_tmp8, i);
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp10 = c_ptrTo2(call_tmp9);
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp11 = c_ptrTo6(&loc);
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp12 = c_sizeof6();
#line 56 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  memcpy2(((c_ptr_void)(call_tmp10)), ((c_ptr_void)(call_tmp11)), call_tmp12);
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp13 = c_sizeof6();
#line 59 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl___PLUS__ASSIGN_2(&i, call_tmp13);
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_check_nil(prv, _ln, _fn);
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp14 = this23(prv, i);
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp15 = c_ptrTo2(call_tmp14);
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp16 = c_ptrTo8(&adr);
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp17 = c_sizeof();
#line 60 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  memcpy2(((c_ptr_void)(call_tmp15)), ((c_ptr_void)(call_tmp16)), call_tmp17);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  return;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
}

#line 63 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
/* ChapelTaskData.chpl:63 */
#line 63 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
static chpl___EndCount_AtomicT_int64_t_int64_t chpl_task_data_getDynamicEndCount(chpl_task_infoChapel_t * tls,
#line 63 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                                                                 int64_t _ln,
#line 63 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                                                                 int32_t _fn) {
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t local_chpl_offset_endCount;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t prv = NULL;
#line 65 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t i;
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_localeID_t loc;
#line 68 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_void adr = NULL;
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_chpl_localeID_t call_tmp9 = NULL;
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  _ref_uint8_t call_tmp10 = NULL;
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp11 = NULL;
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t call_tmp12;
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t call_tmp13;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_c_ptr_void call_tmp14 = NULL;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  _ref_uint8_t call_tmp15 = NULL;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp16 = NULL;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t call_tmp17;
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t call_tmp18 = NULL;
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  local_chpl_offset_endCount = chpl_offset_endCount;
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp8 = chpl___COLON_54(tls, _ln, _fn);
#line 64 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  prv = call_tmp8;
#line 67 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  memset(&loc, INT32(0), sizeof(chpl_localeID_t));
#line 68 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  adr = ((c_ptr_void)(nil));
#line 71 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  i = local_chpl_offset_endCount;
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp9 = c_ptrTo6(&loc);
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp10 = this23(call_tmp8, i);
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp11 = c_ptrTo2(call_tmp10);
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp12 = c_sizeof6();
#line 72 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  memcpy2(((c_ptr_void)(call_tmp9)), ((c_ptr_void)(call_tmp11)), call_tmp12);
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp13 = c_sizeof6();
#line 75 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl___PLUS__ASSIGN_2(&i, call_tmp13);
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp14 = c_ptrTo7(&adr);
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_check_nil(prv, _ln, _fn);
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp15 = this23(prv, i);
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp16 = c_ptrTo2(call_tmp15);
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp17 = c_sizeof();
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  memcpy2(((c_ptr_void)(call_tmp14)), ((c_ptr_void)(call_tmp16)), call_tmp17);
#line 79 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp18 = ((chpl___EndCount_AtomicT_int64_t_int64_t)(adr));
#line 63 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  return call_tmp18;
#line 63 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
}

#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
/* ChapelTaskData.chpl:84 */
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
static void chpl_task_data_setSerial(chpl_task_infoChapel_t * tls,
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                     chpl_bool makeSerial,
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                     int64_t _ln,
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                     int32_t _fn) {
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t local_chpl_offset_serial;
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t i;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint8_t v;
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  _ref_uint8_t call_tmp9 = NULL;
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp10 = NULL;
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp11 = NULL;
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t call_tmp12;
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  local_chpl_offset_serial = chpl_offset_serial;
#line 85 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp8 = chpl___COLON_54(tls, _ln, _fn);
#line 86 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  i = local_chpl_offset_serial;
#line 87 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  v = UINT8(0);
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  if (makeSerial) /* ZLINE: 88 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl */
#line 88 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  {
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
    chpl___ASSIGN_4(&v, ((uint8_t)(INT64(1))));
#line 89 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  }
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp9 = this23(call_tmp8, i);
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp10 = c_ptrTo2(call_tmp9);
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp11 = c_ptrTo2(&v);
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp12 = c_sizeof3();
#line 91 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  memcpy2(((c_ptr_void)(call_tmp10)), ((c_ptr_void)(call_tmp11)), call_tmp12);
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  return;
#line 84 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
}

#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
/* ChapelTaskData.chpl:93 */
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
static chpl_bool chpl_task_data_getSerial(chpl_task_infoChapel_t * tls,
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                          int64_t _ln,
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                          int32_t _fn) {
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t local_chpl_offset_serial;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t i;
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint8_t v;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp9 = NULL;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  _ref_uint8_t call_tmp10 = NULL;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp11 = NULL;
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t call_tmp12;
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_bool T;
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_bool T2;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_bool call_tmp13;
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  local_chpl_offset_serial = chpl_offset_serial;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp8 = chpl___COLON_54(tls, _ln, _fn);
#line 95 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  i = local_chpl_offset_serial;
#line 96 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  v = UINT8(0);
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp9 = c_ptrTo2(&v);
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp10 = this23(call_tmp8, i);
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp11 = c_ptrTo2(call_tmp10);
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp12 = c_sizeof3();
#line 98 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  memcpy2(((c_ptr_void)(call_tmp9)), ((c_ptr_void)(call_tmp11)), call_tmp12);
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  T = chpl___EQUALS_16(v, ((int8_t)(INT64(0))), _ln, _fn);
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  if (T) /* ZLINE: 103 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl */
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  {
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
    T2 = UINT8(true);
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  } else /* ZLINE: 103 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl */
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  {
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
    T2 = chpl___EQUALS_16(v, ((int8_t)(INT64(1))), _ln, _fn);
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  }
#line 103 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  assert2(T2, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp13 = chpl___EQUALS_16(v, ((int8_t)(INT64(1))), _ln, _fn);
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  return call_tmp13;
#line 93 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
}

#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
/* ChapelTaskData.chpl:107 */
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
static void chpl_task_data_setNextCoStmtSerial(chpl_task_infoChapel_t * tls,
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                               chpl_bool makeSerial,
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                               int64_t _ln,
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                               int32_t _fn) {
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t local_chpl_offset_nextCoStmtSerial;
#line 108 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t i;
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint8_t v;
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  _ref_uint8_t call_tmp9 = NULL;
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp10 = NULL;
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp11 = NULL;
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t call_tmp12;
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  local_chpl_offset_nextCoStmtSerial = chpl_offset_nextCoStmtSerial;
#line 108 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp8 = chpl___COLON_54(tls, _ln, _fn);
#line 109 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  i = local_chpl_offset_nextCoStmtSerial;
#line 110 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  v = UINT8(0);
#line 111 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  if (makeSerial) /* ZLINE: 111 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl */
#line 111 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  {
#line 112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
    chpl___ASSIGN_4(&v, ((uint8_t)(INT64(1))));
#line 112 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  }
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp9 = this23(call_tmp8, i);
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp10 = c_ptrTo2(call_tmp9);
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp11 = c_ptrTo2(&v);
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp12 = c_sizeof3();
#line 113 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  memcpy2(((c_ptr_void)(call_tmp10)), ((c_ptr_void)(call_tmp11)), call_tmp12);
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  return;
#line 107 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
}

#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
/* ChapelTaskData.chpl:116 */
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
static chpl_bool chpl_task_data_getNextCoStmtSerial(chpl_task_infoChapel_t * tls,
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                                    int64_t _ln,
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                                    int32_t _fn) {
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t local_chpl_offset_nextCoStmtSerial;
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t i;
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint8_t v;
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp9 = NULL;
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  _ref_uint8_t call_tmp10 = NULL;
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp11 = NULL;
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t call_tmp12;
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_bool T;
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_bool T2;
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_bool call_tmp13;
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  local_chpl_offset_nextCoStmtSerial = chpl_offset_nextCoStmtSerial;
#line 117 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp8 = chpl___COLON_54(tls, _ln, _fn);
#line 118 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  i = local_chpl_offset_nextCoStmtSerial;
#line 119 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  v = UINT8(0);
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp9 = c_ptrTo2(&v);
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp10 = this23(call_tmp8, i);
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp11 = c_ptrTo2(call_tmp10);
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp12 = c_sizeof3();
#line 120 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  memcpy2(((c_ptr_void)(call_tmp9)), ((c_ptr_void)(call_tmp11)), call_tmp12);
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  T = chpl___EQUALS_16(v, ((int8_t)(INT64(0))), _ln, _fn);
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  if (T) /* ZLINE: 122 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl */
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  {
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
    T2 = UINT8(true);
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  } else /* ZLINE: 122 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl */
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  {
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
    T2 = chpl___EQUALS_16(v, ((int8_t)(INT64(1))), _ln, _fn);
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  }
#line 122 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  assert2(T2, _ln, _fn);
#line 123 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp13 = chpl___EQUALS_16(v, ((int8_t)(INT64(1))), _ln, _fn);
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  return call_tmp13;
#line 116 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
}

#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
/* ChapelTaskData.chpl:126 */
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
static chpl_bool chpl_task_data_setCommDiagsTemporarilyDisabled(chpl_task_infoChapel_t * tls,
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                                                chpl_bool disabled,
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                                                int64_t _ln,
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                                                int32_t _fn) {
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t local_chpl_offset_commDiagsTemporarilyDisabled;
#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_bool call_tmp8;
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp9 = NULL;
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t i;
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint8_t v;
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  _ref_uint8_t call_tmp10 = NULL;
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp11 = NULL;
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp12 = NULL;
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t call_tmp13;
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  local_chpl_offset_commDiagsTemporarilyDisabled = chpl_offset_commDiagsTemporarilyDisabled;
#line 127 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp8 = chpl_task_data_getCommDiagsTemporarilyDisabled(tls, _ln, _fn);
#line 128 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp9 = chpl___COLON_54(tls, _ln, _fn);
#line 129 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  i = local_chpl_offset_commDiagsTemporarilyDisabled;
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  v = UINT8(0);
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  if (disabled) /* ZLINE: 131 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl */
#line 131 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  {
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
    chpl___ASSIGN_4(&v, ((uint8_t)(INT64(1))));
#line 132 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  }
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_check_nil(call_tmp9, _ln, _fn);
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp10 = this23(call_tmp9, i);
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp11 = c_ptrTo2(call_tmp10);
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp12 = c_ptrTo2(&v);
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp13 = c_sizeof3();
#line 133 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  memcpy2(((c_ptr_void)(call_tmp11)), ((c_ptr_void)(call_tmp12)), call_tmp13);
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  return call_tmp8;
#line 126 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
}

#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
/* ChapelTaskData.chpl:137 */
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
static chpl_bool chpl_task_data_getCommDiagsTemporarilyDisabled(chpl_task_infoChapel_t * tls,
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                                                int64_t _ln,
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                                                int32_t _fn) {
#line 139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t local_chpl_offset_commDiagsTemporarilyDisabled;
#line 138 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t i;
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint8_t v;
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp9 = NULL;
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  _ref_uint8_t call_tmp10 = NULL;
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_uint8_t call_tmp11 = NULL;
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  uint64_t call_tmp12;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_bool T;
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_bool T2;
#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_bool call_tmp13;
#line 139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  local_chpl_offset_commDiagsTemporarilyDisabled = chpl_offset_commDiagsTemporarilyDisabled;
#line 138 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp8 = chpl___COLON_54(tls, _ln, _fn);
#line 139 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  i = local_chpl_offset_commDiagsTemporarilyDisabled;
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  v = UINT8(0);
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp9 = c_ptrTo2(&v);
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_check_nil(call_tmp8, _ln, _fn);
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp10 = this23(call_tmp8, i);
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp11 = c_ptrTo2(call_tmp10);
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp12 = c_sizeof3();
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  memcpy2(((c_ptr_void)(call_tmp9)), ((c_ptr_void)(call_tmp11)), call_tmp12);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  T = chpl___EQUALS_16(v, ((int8_t)(INT64(0))), _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  if (T) /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
    T2 = UINT8(true);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  } else /* ZLINE: 143 /Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl */
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  {
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
    T2 = chpl___EQUALS_16(v, ((int8_t)(INT64(1))), _ln, _fn);
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  }
#line 143 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  assert2(T2, _ln, _fn);
#line 144 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp13 = chpl___EQUALS_16(v, ((int8_t)(INT64(1))), _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  return call_tmp13;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
}

#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
/* ChapelTaskData.chpl:152 */
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
static void chpl_task_setDynamicEndCount(chpl___EndCount_AtomicT_int64_t_int64_t end,
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                         int64_t _ln,
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                         int32_t _fn) {
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_chpl_task_infoChapel_t call_tmp8 = NULL;
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp8 = chpl_task_getInfoChapel();
#line 153 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_task_data_setDynamicEndCount(call_tmp8, end, _ln, _fn);
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  return;
#line 152 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
}

#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
/* ChapelTaskData.chpl:155 */
#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
static chpl___EndCount_AtomicT_int64_t_int64_t chpl_task_getDynamicEndCount(int64_t _ln,
#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
                                                                            int32_t _fn) {
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_chpl_task_infoChapel_t call_tmp8 = NULL;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl___EndCount_AtomicT_int64_t_int64_t call_tmp9 = NULL;
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp8 = chpl_task_getInfoChapel();
#line 156 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp9 = chpl_task_data_getDynamicEndCount(call_tmp8, _ln, _fn);
#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  return call_tmp9;
#line 155 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
}

#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
/* ChapelTaskData.chpl:159 */
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
void chpl_task_setSerial(chpl_bool makeSerial) {
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_chpl_task_infoChapel_t call_tmp8 = NULL;
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp8 = chpl_task_getInfoChapel();
#line 160 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_task_data_setSerial(call_tmp8, makeSerial, INT64(160), INT32(18));
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  return;
#line 159 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
}

#line 162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
/* ChapelTaskData.chpl:162 */
#line 162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
chpl_bool chpl_task_getSerial(void) {
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_chpl_task_infoChapel_t call_tmp8 = NULL;
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_bool call_tmp9;
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp8 = chpl_task_getInfoChapel();
#line 163 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp9 = chpl_task_data_getSerial(call_tmp8, INT64(163), INT32(18));
#line 162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  return call_tmp9;
#line 162 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
}

#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
/* ChapelTaskData.chpl:166 */
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
chpl_bool chpl_task_setCommDiagsTemporarilyDisabled(chpl_bool disabled) {
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_chpl_task_infoChapel_t call_tmp8 = NULL;
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_bool call_tmp9;
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp8 = chpl_task_getInfoChapel();
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp9 = chpl_task_data_setCommDiagsTemporarilyDisabled(call_tmp8, disabled, INT64(167), INT32(18));
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  return call_tmp9;
#line 166 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
}

#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
/* ChapelTaskData.chpl:170 */
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
chpl_bool chpl_task_getCommDiagsTemporarilyDisabled(void) {
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  c_ptr_chpl_task_infoChapel_t call_tmp8 = NULL;
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  chpl_bool call_tmp9;
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp8 = chpl_task_getInfoChapel();
#line 171 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  call_tmp9 = chpl_task_data_getCommDiagsTemporarilyDisabled(call_tmp8, INT64(171), INT32(18));
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
  return call_tmp9;
#line 170 "/Users/iainmoncrief/Desktop/chapel/modules/internal/ChapelTaskData.chpl"
}

