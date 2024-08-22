#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:41 */
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static void chpl__init_CTypes(int64_t _ln,
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                              int32_t _fn) {
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  if (chpl__init_CTypes_p) /* ZLINE: 41 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  {
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    goto _exit_chpl__init_CTypes;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  }
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  printModuleInit("%*s\n", "CTypes", INT64(6), _ln, _fn);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  refIndentLevel = &moduleInitLevel;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  *(refIndentLevel) += INT64(1);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl__init_CTypes_p = UINT8(true);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  {
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    chpl__init_HaltWrappers(_ln, _fn);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    chpl__init_ChapelSysCTypes(_ln, _fn);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    chpl__init_Reflection(_ln, _fn);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    chpl__init_Math(_ln, _fn);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    chpl__init_POSIX(_ln, _fn);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    chpl__init_BytesStringCommon(_ln, _fn);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  }
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  *(refIndentLevel) -= INT64(1);
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  _exit_chpl__init_CTypes:;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return;
#line 41 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:130 */
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint8_t * this21(uint8_t * this24,
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                        int64_t i) {
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  _ref_uint8_t call_tmp8 = NULL;
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = (this24 + i);
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:130 */
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint8_t * this23(uint8_t * this24,
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                        uint64_t i) {
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  _ref_uint8_t call_tmp8 = NULL;
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = (this24 + i);
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:130 */
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static _owned_Error2 * this20(_owned_Error2 * this24,
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                              int64_t i) {
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  _ref__owned_Error2 call_tmp8 = NULL;
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = (this24 + i);
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:130 */
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static int64_t * this22(int64_t * this24,
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                        int64_t i) {
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 135 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = (this24 + i);
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:140 */
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint8_t * deref(uint8_t * this24) {
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  _ref_uint8_t call_tmp8 = NULL;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = (this24 + INT64(0));
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:140 */
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static int64_t * deref3(int64_t * this24) {
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = (this24 + INT64(0));
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:140 */
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static chpl_bool * deref2(chpl_bool * this24) {
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  _ref_chpl_bool call_tmp8 = NULL;
#line 145 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = (this24 + INT64(0));
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:375 */
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static void chpl___ASSIGN_74(c_ptr_uint8_t * lhs,
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                             uint8_t * rhs) {
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  *(lhs) = rhs;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:375 */
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static void chpl___ASSIGN_75(c_ptr_chpl_task_infoChapel_t * lhs,
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                             chpl_task_infoChapel_t * rhs) {
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  *(lhs) = rhs;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:375 */
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static void chpl___ASSIGN_76(c_ptr_qio_file_t * lhs,
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                             qio_file_t * rhs) {
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  *(lhs) = rhs;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:375 */
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static void chpl___ASSIGN_72(c_ptr_qio_channel_t * lhs,
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                             qio_channel_t * rhs) {
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  *(lhs) = rhs;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:375 */
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static void chpl___ASSIGN_73(c_ptr_void * lhs,
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                             void * rhs) {
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  *(lhs) = rhs;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:375 */
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static void chpl___ASSIGN_77(c_ptr__owned_Error * lhs,
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                             _owned_Error2 * rhs) {
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  *(lhs) = rhs;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return;
#line 375 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:389 */
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static void chpl___ASSIGN_78(c_ptrConst_int8_t * lhs,
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                             c_string_rehook rhs) {
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  *(lhs) = rhs;
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return;
#line 389 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:397 */
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static void chpl___ASSIGN_79(c_ptr_uint8_t * lhs,
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                             _nilType rhs,
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                             int64_t _ln,
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                             int32_t _fn) {
#line 398 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  *(lhs) = ((c_ptr_uint8_t)(nil));
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return;
#line 397 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:402 */
#line 402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static void chpl___ASSIGN_80(c_ptrConst_int8_t * lhs,
#line 402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                             _nilType rhs,
#line 402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                             int64_t _ln,
#line 402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                             int32_t _fn) {
#line 403 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  *(lhs) = ((c_ptrConst_int8_t)(nil));
#line 402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return;
#line 402 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:475 */
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint8_t * chpl___COLON_54(chpl_task_infoChapel_t * x2,
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                 int64_t _ln,
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                 int32_t _fn) {
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 483 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = ((c_ptr_uint8_t)(x2));
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 475 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 499 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:499 */
#line 499 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint8_t * chpl___COLON_55(c_string_rehook x2,
#line 499 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                 int64_t _ln,
#line 499 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                 int32_t _fn) {
#line 506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 506 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = ((c_ptr_uint8_t)(x2));
#line 499 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 499 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:555 */
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint8_t * chpl___COLON_58(void * x2,
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                 int64_t _ln,
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                 int32_t _fn) {
#line 556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = ((c_ptr_uint8_t)(x2));
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:555 */
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static _owned_Error2 * chpl___COLON_56(void * x2,
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                       int64_t _ln,
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                       int32_t _fn) {
#line 556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr__owned_Error call_tmp8 = NULL;
#line 556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = ((c_ptr__owned_Error)(x2));
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:555 */
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static int64_t * chpl___COLON_57(void * x2,
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                 int64_t _ln,
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                 int32_t _fn) {
#line 556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_int64_t call_tmp8 = NULL;
#line 556 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = ((c_ptr_int64_t)(x2));
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 555 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:591 */
#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static QioPluginFile chpl___COLON_59(void * x2,
#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                     int64_t _ln,
#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                     int32_t _fn) {
#line 592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  QioPluginFile call_tmp8 = NULL;
#line 592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = ((QioPluginFile)(x2));
#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:591 */
#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static QioPluginChannel chpl___COLON_60(void * x2,
#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                        int64_t _ln,
#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                        int32_t _fn) {
#line 592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  QioPluginChannel call_tmp8 = NULL;
#line 592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = ((QioPluginChannel)(x2));
#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:591 */
#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static BaseArr chpl___COLON_61(void * x2,
#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                               int64_t _ln,
#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                               int32_t _fn) {
#line 592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  BaseArr call_tmp8 = NULL;
#line 592 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = ((BaseArr)(x2));
#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 591 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:617 */
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static _ddata_locale chpl___COLON_64(void * x2,
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                     int64_t _ln,
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                     int32_t _fn) {
#line 618 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  _ddata_locale call_tmp8 = NULL;
#line 618 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = ((_ddata_locale)(x2));
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:617 */
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static _ddata_int64_t chpl___COLON_63(void * x2,
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                      int64_t _ln,
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                      int32_t _fn) {
#line 618 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  _ddata_int64_t call_tmp8 = NULL;
#line 618 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = ((_ddata_int64_t)(x2));
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:617 */
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static _ddata_uint64_t chpl___COLON_62(void * x2,
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                       int64_t _ln,
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                       int32_t _fn) {
#line 618 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  _ddata_uint64_t call_tmp8 = NULL;
#line 618 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = ((_ddata_uint64_t)(x2));
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 617 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:621 */
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static void * chpl___COLON_67(_ddata_locale x2,
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                              int64_t _ln,
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                              int32_t _fn) {
#line 622 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void call_tmp8 = NULL;
#line 622 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = ((c_ptr_void)(x2));
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:621 */
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static void * chpl___COLON_66(_ddata_int64_t x2,
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                              int64_t _ln,
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                              int32_t _fn) {
#line 622 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void call_tmp8 = NULL;
#line 622 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = ((c_ptr_void)(x2));
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:621 */
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static void * chpl___COLON_65(_ddata_uint64_t x2,
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                              int64_t _ln,
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                              int32_t _fn) {
#line 622 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void call_tmp8 = NULL;
#line 622 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = ((c_ptr_void)(x2));
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 621 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:681 */
#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static chpl_bool chpl___EQUALS_24(uint8_t * a,
#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                  _nilType b) {
#line 682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp8;
#line 682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = (a == nil);
#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:681 */
#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static chpl_bool chpl___EQUALS_25(qio_file_t * a,
#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                  _nilType b) {
#line 682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp8;
#line 682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = (a == nil);
#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:681 */
#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static chpl_bool chpl___EQUALS_26(qio_channel_t * a,
#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                  _nilType b) {
#line 682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp8;
#line 682 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = (a == nil);
#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 681 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:708 */
#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static chpl_bool chpl___EXCLAMATION__ASSIGN_12(chpl_bool * a,
#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                               _nilType b) {
#line 709 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp8;
#line 709 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = (a != nil);
#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:708 */
#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static chpl_bool chpl___EXCLAMATION__ASSIGN_14(_owned_Error2 * a,
#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                               _nilType b) {
#line 709 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp8;
#line 709 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = (a != nil);
#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:708 */
#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static chpl_bool chpl___EXCLAMATION__ASSIGN_13(uint8_t * a,
#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                               _nilType b) {
#line 709 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp8;
#line 709 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = (a != nil);
#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 708 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 733 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:733 */
#line 733 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint8_t * chpl___PLUS_11(uint8_t * a,
#line 733 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                int64_t b) {
#line 733 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 733 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = (a + b);
#line 733 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 733 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 733 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:733 */
#line 733 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint8_t * chpl___PLUS_10(uint8_t * a,
#line 733 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                int32_t b) {
#line 733 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 733 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = (a + b);
#line 733 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 733 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:815 */
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint8_t * c_ptrTo2(uint8_t * x2) {
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_addrOf5(x2);
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:815 */
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static int64_t * c_ptrTo5(int64_t * x2) {
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_int64_t call_tmp8 = NULL;
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_addrOf6(x2);
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:815 */
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static chpl_localeID_t * c_ptrTo6(chpl_localeID_t * x2) {
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_chpl_localeID_t call_tmp8 = NULL;
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_addrOf(x2);
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:815 */
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static raw_c_void_ptr * c_ptrTo8(raw_c_void_ptr * x2) {
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_raw_c_void_ptr call_tmp8 = NULL;
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_addrOf3(x2);
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:815 */
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static c_ptr_void * c_ptrTo7(c_ptr_void * x2) {
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_c_ptr_void call_tmp8 = NULL;
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_addrOf4(x2);
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:815 */
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static _ddata_locale * c_ptrTo3(_ddata_locale * x2) {
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr__ddata_locale call_tmp8 = NULL;
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_addrOf2(x2);
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:815 */
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static _ddata_int64_t * c_ptrTo(_ddata_int64_t * x2) {
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr__ddata_int64_t call_tmp8 = NULL;
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_addrOf7(x2);
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:815 */
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static _ddata_uint64_t * c_ptrTo4(_ddata_uint64_t * x2) {
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr__ddata_uint64_t call_tmp8 = NULL;
#line 818 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_addrOf8(x2);
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 815 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 904 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:904 */
#line 904 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static void * c_ptrTo9(QioPluginChannel c,
#line 904 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                       int64_t _ln,
#line 904 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                       int32_t _fn) {
#line 905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void call_tmp8 = NULL;
#line 905 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = ((c_ptr_void)(c));
#line 904 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 904 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1037 */
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static _ddata_int64_t * c_addrOf7(_ddata_int64_t * x2) {
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr__ddata_int64_t call_tmp8 = NULL;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_pointer_return(x2);
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1037 */
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static int64_t * c_addrOf6(int64_t * x2) {
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_int64_t call_tmp8 = NULL;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_pointer_return(x2);
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1037 */
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static chpl_localeID_t * c_addrOf(chpl_localeID_t * x2) {
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_chpl_localeID_t call_tmp8 = NULL;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_pointer_return(x2);
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1037 */
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static raw_c_void_ptr * c_addrOf3(raw_c_void_ptr * x2) {
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_raw_c_void_ptr call_tmp8 = NULL;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_pointer_return(x2);
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1037 */
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static c_ptr_void * c_addrOf4(c_ptr_void * x2) {
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_c_ptr_void call_tmp8 = NULL;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_pointer_return(x2);
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1037 */
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static _ddata_locale * c_addrOf2(_ddata_locale * x2) {
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr__ddata_locale call_tmp8 = NULL;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_pointer_return(x2);
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1037 */
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint8_t * c_addrOf5(uint8_t * x2) {
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_pointer_return(x2);
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1037 */
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static _ddata_uint64_t * c_addrOf8(_ddata_uint64_t * x2) {
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr__ddata_uint64_t call_tmp8 = NULL;
#line 1040 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_pointer_return(x2);
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1037 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1063 */
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static int16_t offset_ARRAY_ELEMENTS(void) {
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int16_t call_tmp8;
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int16_t call_tmp9;
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = chpl_memhook_md_num();
#line 1067 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp9 = chpl___HYPHEN_(CHPL_RT_MD_ARRAY_ELEMENTS, call_tmp8);
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp9;
#line 1063 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1083 */
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint64_t c_sizeof7(void) {
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp8;
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = sizeof(locale);
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1083 */
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint64_t c_sizeof(void) {
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp8;
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = sizeof(c_ptr_void);
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1083 */
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint64_t c_sizeof5(void) {
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp8;
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = sizeof(chpl_task_infoChapel_t);
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1083 */
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint64_t c_sizeof3(void) {
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp8;
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = sizeof(uint8_t);
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1083 */
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint64_t c_sizeof6(void) {
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp8;
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = sizeof(chpl_localeID_t);
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1083 */
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint64_t c_sizeof4(void) {
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp8;
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = sizeof(_owned_Error2);
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1083 */
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint64_t c_sizeof2(void) {
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp8;
#line 1086 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = sizeof(int64_t);
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1083 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1130 */
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static _owned_Error2 * allocate3(uint64_t size5,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                 chpl_bool clear2,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                 uint64_t alignment,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                 int64_t _ln,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                                 int32_t _fn) {
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp8;
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp9;
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp10;
#line 1134 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void ptr = NULL;
#line 1134 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void init_coerce_tmp = NULL;
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp11;
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int16_t call_tmp12;
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void call_tmp13 = NULL;
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int16_t call_tmp14;
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void call_tmp15 = NULL;
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int64_t call_tmp16;
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int64_t p;
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp17;
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp18;
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp19;
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp20;
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp21;
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp22;
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp23;
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp24;
#line 1166 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int16_t call_tmp25;
#line 1165 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void call_tmp26 = NULL;
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr__owned_Error call_tmp27 = NULL;
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_sizeof4();
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp9 = chpl___ASTERISK_3(size5, call_tmp8);
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp10 = chpl___EXCLAMATION__ASSIGN_8(alignment, INT64(0), _ln, _fn);
#line 1134 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  init_coerce_tmp = ((c_ptr_void)(nil));
#line 1134 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  ptr = init_coerce_tmp;
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp11 = chpl___EXCLAMATION_(call_tmp10);
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  if (call_tmp11) /* ZLINE: 1137 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  {
#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    if (clear2) /* ZLINE: 1138 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      call_tmp12 = offset_ARRAY_ELEMENTS();
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      call_tmp13 = chpl_here_calloc(call_tmp9, INT64(1), call_tmp12, _ln, _fn);
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      chpl___ASSIGN_73(&ptr, call_tmp13);
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    } else /* ZLINE: 1141 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      call_tmp14 = offset_ARRAY_ELEMENTS();
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      call_tmp15 = chpl_here_alloc2(call_tmp9, call_tmp14, _ln, _fn);
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      chpl___ASSIGN_73(&ptr, call_tmp15);
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    }
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  } else /* ZLINE: 1145 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  {
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp16 = log22(alignment, _ln, _fn);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    p = call_tmp16;
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp17 = chpl___LESS__LESS_(UINT64(1), call_tmp16, _ln, _fn);
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp18 = chpl___LESS_4(call_tmp17, alignment);
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    if (call_tmp18) /* ZLINE: 1155 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1156 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      chpl___PLUS__ASSIGN_(&p, INT64(1));
#line 1156 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    }
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp19 = chpl___LESS__LESS_(UINT64(1), p, _ln, _fn);
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp20 = chpl___LESS__ASSIGN_2(alignment, call_tmp19);
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    assert2(call_tmp20, _ln, _fn);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp21 = chpl___LESS__LESS_(UINT64(1), p, _ln, _fn);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp22 = chpl___EXCLAMATION__ASSIGN_4(alignment, call_tmp21);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    if (call_tmp22) /* ZLINE: 1158 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1159 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      halt9(&_str_literal_368, alignment, _ln, _fn);
#line 1159 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    }
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp23 = c_sizeof();
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp24 = chpl___LESS_4(alignment, call_tmp23);
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    if (call_tmp24) /* ZLINE: 1160 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      halt(&_str_literal_369, _ln, _fn);
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    }
#line 1166 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp25 = offset_ARRAY_ELEMENTS();
#line 1165 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp26 = chpl_here_aligned_alloc(alignment, call_tmp9, call_tmp25, _ln, _fn);
#line 1165 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    chpl___ASSIGN_73(&ptr, call_tmp26);
#line 1168 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    if (clear2) /* ZLINE: 1168 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1168 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      memset3(ptr, INT64(0), call_tmp9, _ln, _fn);
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    }
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  }
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp27 = chpl___COLON_56(ptr, _ln, _fn);
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp27;
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1130 */
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint8_t * allocate(uint64_t size5,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                          chpl_bool clear2,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                          uint64_t alignment,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                          int64_t _ln,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                          int32_t _fn) {
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp8;
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp9;
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp10;
#line 1134 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void ptr = NULL;
#line 1134 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void init_coerce_tmp = NULL;
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp11;
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int16_t call_tmp12;
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void call_tmp13 = NULL;
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int16_t call_tmp14;
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void call_tmp15 = NULL;
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int64_t call_tmp16;
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int64_t p;
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp17;
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp18;
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp19;
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp20;
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp21;
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp22;
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp23;
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp24;
#line 1166 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int16_t call_tmp25;
#line 1165 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void call_tmp26 = NULL;
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_uint8_t call_tmp27 = NULL;
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_sizeof3();
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp9 = chpl___ASTERISK_3(size5, call_tmp8);
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp10 = chpl___EXCLAMATION__ASSIGN_8(alignment, INT64(0), _ln, _fn);
#line 1134 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  init_coerce_tmp = ((c_ptr_void)(nil));
#line 1134 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  ptr = init_coerce_tmp;
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp11 = chpl___EXCLAMATION_(call_tmp10);
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  if (call_tmp11) /* ZLINE: 1137 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  {
#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    if (clear2) /* ZLINE: 1138 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      call_tmp12 = offset_ARRAY_ELEMENTS();
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      call_tmp13 = chpl_here_calloc(call_tmp9, INT64(1), call_tmp12, _ln, _fn);
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      chpl___ASSIGN_73(&ptr, call_tmp13);
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    } else /* ZLINE: 1141 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      call_tmp14 = offset_ARRAY_ELEMENTS();
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      call_tmp15 = chpl_here_alloc2(call_tmp9, call_tmp14, _ln, _fn);
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      chpl___ASSIGN_73(&ptr, call_tmp15);
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    }
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  } else /* ZLINE: 1145 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  {
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp16 = log22(alignment, _ln, _fn);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    p = call_tmp16;
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp17 = chpl___LESS__LESS_(UINT64(1), call_tmp16, _ln, _fn);
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp18 = chpl___LESS_4(call_tmp17, alignment);
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    if (call_tmp18) /* ZLINE: 1155 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1156 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      chpl___PLUS__ASSIGN_(&p, INT64(1));
#line 1156 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    }
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp19 = chpl___LESS__LESS_(UINT64(1), p, _ln, _fn);
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp20 = chpl___LESS__ASSIGN_2(alignment, call_tmp19);
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    assert2(call_tmp20, _ln, _fn);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp21 = chpl___LESS__LESS_(UINT64(1), p, _ln, _fn);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp22 = chpl___EXCLAMATION__ASSIGN_4(alignment, call_tmp21);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    if (call_tmp22) /* ZLINE: 1158 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1159 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      halt9(&_str_literal_368, alignment, _ln, _fn);
#line 1159 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    }
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp23 = c_sizeof();
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp24 = chpl___LESS_4(alignment, call_tmp23);
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    if (call_tmp24) /* ZLINE: 1160 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      halt(&_str_literal_369, _ln, _fn);
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    }
#line 1166 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp25 = offset_ARRAY_ELEMENTS();
#line 1165 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp26 = chpl_here_aligned_alloc(alignment, call_tmp9, call_tmp25, _ln, _fn);
#line 1165 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    chpl___ASSIGN_73(&ptr, call_tmp26);
#line 1168 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    if (clear2) /* ZLINE: 1168 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1168 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      memset3(ptr, INT64(0), call_tmp9, _ln, _fn);
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    }
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  }
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp27 = chpl___COLON_58(ptr, _ln, _fn);
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp27;
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1130 */
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static int64_t * allocate2(uint64_t size5,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                           chpl_bool clear2,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                           uint64_t alignment,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                           int64_t _ln,
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                           int32_t _fn) {
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp8;
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp9;
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp10;
#line 1134 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void ptr = NULL;
#line 1134 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void init_coerce_tmp = NULL;
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp11;
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int16_t call_tmp12;
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void call_tmp13 = NULL;
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int16_t call_tmp14;
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void call_tmp15 = NULL;
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int64_t call_tmp16;
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int64_t p;
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp17;
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp18;
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp19;
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp20;
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp21;
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp22;
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  uint64_t call_tmp23;
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_bool call_tmp24;
#line 1166 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int16_t call_tmp25;
#line 1165 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_void call_tmp26 = NULL;
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptr_int64_t call_tmp27 = NULL;
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = c_sizeof2();
#line 1132 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp9 = chpl___ASTERISK_3(size5, call_tmp8);
#line 1133 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp10 = chpl___EXCLAMATION__ASSIGN_8(alignment, INT64(0), _ln, _fn);
#line 1134 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  init_coerce_tmp = ((c_ptr_void)(nil));
#line 1134 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  ptr = init_coerce_tmp;
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp11 = chpl___EXCLAMATION_(call_tmp10);
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  if (call_tmp11) /* ZLINE: 1137 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1137 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  {
#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    if (clear2) /* ZLINE: 1138 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1138 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      call_tmp12 = offset_ARRAY_ELEMENTS();
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      call_tmp13 = chpl_here_calloc(call_tmp9, INT64(1), call_tmp12, _ln, _fn);
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      chpl___ASSIGN_73(&ptr, call_tmp13);
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    } else /* ZLINE: 1141 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1140 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      call_tmp14 = offset_ARRAY_ELEMENTS();
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      call_tmp15 = chpl_here_alloc2(call_tmp9, call_tmp14, _ln, _fn);
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      chpl___ASSIGN_73(&ptr, call_tmp15);
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    }
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  } else /* ZLINE: 1145 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1143 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  {
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp16 = log22(alignment, _ln, _fn);
#line 1153 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    p = call_tmp16;
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp17 = chpl___LESS__LESS_(UINT64(1), call_tmp16, _ln, _fn);
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp18 = chpl___LESS_4(call_tmp17, alignment);
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    if (call_tmp18) /* ZLINE: 1155 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1155 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1156 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      chpl___PLUS__ASSIGN_(&p, INT64(1));
#line 1156 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    }
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp19 = chpl___LESS__LESS_(UINT64(1), p, _ln, _fn);
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp20 = chpl___LESS__ASSIGN_2(alignment, call_tmp19);
#line 1157 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    assert2(call_tmp20, _ln, _fn);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp21 = chpl___LESS__LESS_(UINT64(1), p, _ln, _fn);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp22 = chpl___EXCLAMATION__ASSIGN_4(alignment, call_tmp21);
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    if (call_tmp22) /* ZLINE: 1158 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1158 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1159 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      halt9(&_str_literal_368, alignment, _ln, _fn);
#line 1159 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    }
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp23 = c_sizeof();
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp24 = chpl___LESS_4(alignment, call_tmp23);
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    if (call_tmp24) /* ZLINE: 1160 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1160 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      halt(&_str_literal_369, _ln, _fn);
#line 1161 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    }
#line 1166 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp25 = offset_ARRAY_ELEMENTS();
#line 1165 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    call_tmp26 = chpl_here_aligned_alloc(alignment, call_tmp9, call_tmp25, _ln, _fn);
#line 1165 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    chpl___ASSIGN_73(&ptr, call_tmp26);
#line 1168 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    if (clear2) /* ZLINE: 1168 /Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl */
#line 1168 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    {
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
      memset3(ptr, INT64(0), call_tmp9, _ln, _fn);
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
    }
#line 1171 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  }
#line 1175 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp27 = chpl___COLON_57(ptr, _ln, _fn);
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp27;
#line 1130 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1131 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1131 */
#line 1131 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint64_t allocate_default_alignment3(void) {
#line 1131 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return UINT64(0);
#line 1131 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1131 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1131 */
#line 1131 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint64_t allocate_default_alignment(void) {
#line 1131 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return UINT64(0);
#line 1131 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1131 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1131 */
#line 1131 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static uint64_t allocate_default_alignment2(void) {
#line 1131 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return UINT64(0);
#line 1131 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1184 */
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static void deallocate(void * data,
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                       int64_t _ln,
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                       int32_t _fn) {
#line 1185 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  chpl_here_free(data, _ln, _fn);
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return;
#line 1184 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1218 */
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static int64_t strLen(c_string_rehook x2,
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                      int64_t _ln,
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                      int32_t _fn) {
#line 1219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  int64_t call_tmp8;
#line 1219 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = safeCast3(string_length_bytes(x2), _ln, _fn);
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1218 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

#line 1254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
/* CTypes.chpl:1254 */
#line 1254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
static const int8_t * c_str(string * this24,
#line 1254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                            int64_t _ln,
#line 1254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
                            int32_t _fn) {
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  c_ptrConst_int8_t call_tmp8 = NULL;
#line 1256 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  call_tmp8 = getCStr(this24, _ln, _fn);
#line 1254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
  return call_tmp8;
#line 1254 "/Users/iainmoncrief/Desktop/chapel/modules/standard/CTypes.chpl"
}

