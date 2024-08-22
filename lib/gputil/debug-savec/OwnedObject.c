#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:22 */
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__init_OwnedObject(int64_t _ln,
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                   int32_t _fn) {
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_int32_t refIndentLevel = NULL;
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (chpl__init_OwnedObject_p) /* ZLINE: 22 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    goto _exit_chpl__init_OwnedObject;
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  printModuleInit("%*s\n", "OwnedObject", INT64(11), _ln, _fn);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  refIndentLevel = &moduleInitLevel;
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  *(refIndentLevel) += INT64(1);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl__init_OwnedObject_p = UINT8(true);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__init_HaltWrappers(_ln, _fn);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  *(refIndentLevel) -= INT64(1);
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _exit_chpl__init_OwnedObject:;
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 22 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static NotADirectoryError * chpl_get__owned_chpl_p18(_owned_NotADirectoryError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_NotADirectoryError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static NilClassError * chpl_get__owned_chpl_p20(_owned_NilClassError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_NilClassError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static IllegalArgumentError * chpl_get__owned_chpl_p28(_owned_IllegalArgumentError2 * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IllegalArgumentError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static Error * chpl_get__owned_chpl_p30(_owned_Error * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static DecodeError * chpl_get__owned_chpl_p24(_owned_DecodeError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_DecodeError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static Error * chpl_get__owned_chpl_p4(_owned_Error2 * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static BlockingIoError * chpl_get__owned_chpl_p3(_owned_BlockingIoError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_BlockingIoError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static ChildProcessError * chpl_get__owned_chpl_p(_owned_ChildProcessError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ChildProcessError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static BrokenPipeError * chpl_get__owned_chpl_p5(_owned_BrokenPipeError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_BrokenPipeError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static ConnectionAbortedError * chpl_get__owned_chpl_p7(_owned_ConnectionAbortedError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ConnectionAbortedError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static ConnectionRefusedError * chpl_get__owned_chpl_p8(_owned_ConnectionRefusedError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ConnectionRefusedError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static ConnectionResetError * chpl_get__owned_chpl_p9(_owned_ConnectionResetError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ConnectionResetError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static FileExistsError * chpl_get__owned_chpl_p10(_owned_FileExistsError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_FileExistsError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static FileNotFoundError * chpl_get__owned_chpl_p13(_owned_FileNotFoundError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_FileNotFoundError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static InterruptedError * chpl_get__owned_chpl_p14(_owned_InterruptedError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_InterruptedError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static IsADirectoryError * chpl_get__owned_chpl_p19(_owned_IsADirectoryError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IsADirectoryError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static Remote_R * chpl_get__owned_chpl_p15(_owned_Remote_R * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Remote_R call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static PermissionError * chpl_get__owned_chpl_p21(_owned_PermissionError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_PermissionError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static ProcessLookupError * chpl_get__owned_chpl_p16(_owned_ProcessLookupError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ProcessLookupError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static TimeoutError * chpl_get__owned_chpl_p27(_owned_TimeoutError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_TimeoutError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static IoError * chpl_get__owned_chpl_p17(_owned_IoError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IoError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static EofError * chpl_get__owned_chpl_p26(_owned_EofError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_EofError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static UnexpectedEofError * chpl_get__owned_chpl_p25(_owned_UnexpectedEofError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_UnexpectedEofError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static BadFormatError * chpl_get__owned_chpl_p23(_owned_BadFormatError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_BadFormatError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static SystemError * chpl_get__owned_chpl_p22(_owned_SystemError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_SystemError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static CodepointSplitError * chpl_get__owned_chpl_p12(_owned_CodepointSplitError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_CodepointSplitError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static TaskErrors * chpl_get__owned_chpl_p6(_owned_TaskErrors * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_TaskErrors call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static chpl___RemoteVarContainer_R * chpl_get__owned_chpl_p2(_owned__RemoteVarContainer_R2 * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref__RemoteVarContainer_R call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static chpl___RemoteVarContainer_R * chpl_get__owned_chpl_p29(_owned__RemoteVarContainer_R * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref__RemoteVarContainer_R call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:46 */
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static IllegalArgumentError * chpl_get__owned_chpl_p11(_owned_IllegalArgumentError * this24) {
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IllegalArgumentError call_tmp8 = NULL;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = &((this24)->chpl_p);
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp8;
#line 46 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:49 */
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static Remote_R chpl_forwarding_expr13(_owned_Remote_R * this24,
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                       int64_t _ln,
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                       int32_t _fn) {
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Remote_R ret = NULL;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ret = borrow(this24, _ln, _fn);
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return ret;
#line 49 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:57 */
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init58(_owned_IllegalArgumentError2 * this24,
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   int64_t _ln,
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   int32_t _fn) {
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IllegalArgumentError init_coerce_tmp = NULL;
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((IllegalArgumentError)(nil));
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:57 */
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init59(_owned_Error2 * this24,
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   int64_t _ln,
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   int32_t _fn) {
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error init_coerce_tmp = NULL;
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((Error)(nil));
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:57 */
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init60(_owned__RemoteVarContainer_R2 * this24,
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   int64_t _ln,
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   int32_t _fn) {
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___RemoteVarContainer_R init_coerce_tmp = NULL;
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((chpl___RemoteVarContainer_R)(nil));
#line 66 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 57 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init88(_owned_ChildProcessError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   ChildProcessError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ChildProcessError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed29(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init64(_owned_Remote_R * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   Remote_R p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Remote_R call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed2(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init81(_owned_DecodeError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   DecodeError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  DecodeError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed9(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init82(_owned_EofError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   EofError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  EofError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed33(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init65(_owned_UnexpectedEofError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   UnexpectedEofError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  UnexpectedEofError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed32(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init77(_owned_BadFormatError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   BadFormatError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BadFormatError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed31(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init86(_owned_BlockingIoError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   BlockingIoError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BlockingIoError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed30(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init75(_owned_IllegalArgumentError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   IllegalArgumentError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IllegalArgumentError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed25(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init63(_owned_BrokenPipeError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   BrokenPipeError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BrokenPipeError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed28(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init79(_owned_ConnectionAbortedError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   ConnectionAbortedError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionAbortedError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed24(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init83(_owned_ConnectionRefusedError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   ConnectionRefusedError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionRefusedError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed22(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init66(_owned_ConnectionResetError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   ConnectionResetError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionResetError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed21(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init68(_owned_FileExistsError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   FileExistsError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  FileExistsError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed19(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init72(_owned_FileNotFoundError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   FileNotFoundError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  FileNotFoundError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed18(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init73(_owned_InterruptedError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   InterruptedError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  InterruptedError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed15(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init78(_owned_IsADirectoryError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   IsADirectoryError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IsADirectoryError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed14(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init80(_owned_NotADirectoryError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   NotADirectoryError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  NotADirectoryError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed13(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init84(_owned_PermissionError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   PermissionError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  PermissionError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed12(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init87(_owned_ProcessLookupError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   ProcessLookupError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ProcessLookupError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed7(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init76(_owned_TimeoutError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   TimeoutError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  TimeoutError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed11(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init62(_owned_IoError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   IoError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IoError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed8(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init74(_owned_SystemError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   SystemError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed5(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init85(_owned_CodepointSplitError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   CodepointSplitError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  CodepointSplitError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed27(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init71(_owned_Error2 * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   Error p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed3(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init67(_owned_TaskErrors * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   TaskErrors p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  TaskErrors call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed40(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init69(_owned__RemoteVarContainer_R * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   chpl___RemoteVarContainer_R p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___RemoteVarContainer_R call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed41(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init61(_owned_NilClassError * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   NilClassError p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  NilClassError call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed6(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:76 */
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init70(_owned_Error * this24,
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                   Error p) {
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp8 = NULL;
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = _to_borrowed(p);
#line 78 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 76 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_9(_owned_IllegalArgumentError2 * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          _owned_IllegalArgumentError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IllegalArgumentError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release2(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = call_tmp8;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_15(_owned_SystemError * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           _owned_BlockingIoError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BlockingIoError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release11(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((SystemError)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_20(_owned_SystemError * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           _owned_ChildProcessError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ChildProcessError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release19(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((SystemError)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_4(_owned_SystemError * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          _owned_BrokenPipeError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BrokenPipeError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((SystemError)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_17(_owned_SystemError * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           _owned_ConnectionAbortedError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionAbortedError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release5(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((SystemError)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_14(_owned_SystemError * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           _owned_ConnectionRefusedError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionRefusedError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release14(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((SystemError)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_10(_owned_SystemError * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           _owned_ConnectionResetError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionResetError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release17(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((SystemError)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_21(_owned_SystemError * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           _owned_FileExistsError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  FileExistsError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release20(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((SystemError)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_3(_owned_SystemError * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          _owned_FileNotFoundError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  FileNotFoundError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release13(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((SystemError)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_18(_owned_SystemError * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           _owned_InterruptedError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  InterruptedError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release10(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((SystemError)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_11(_owned_SystemError * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           _owned_IsADirectoryError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IsADirectoryError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release8(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((SystemError)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_7(_owned_SystemError * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          _owned_NotADirectoryError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  NotADirectoryError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release7(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((SystemError)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_16(_owned_SystemError * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           _owned_PermissionError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  PermissionError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release4(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((SystemError)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_6(_owned_SystemError * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          _owned_ProcessLookupError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ProcessLookupError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release9(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((SystemError)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_12(_owned_SystemError * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           _owned_TimeoutError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  TimeoutError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release21(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((SystemError)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_8(_owned_SystemError * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          _owned_IoError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IoError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release15(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((SystemError)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_19(_owned_Error * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           _owned_EofError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  EofError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release12(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((Error)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_13(_owned_Error * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           _owned_UnexpectedEofError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  UnexpectedEofError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release16(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((Error)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_2(_owned_Error * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          _owned_BadFormatError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BadFormatError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release22(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((Error)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:94 */
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_5(_owned_Error * this24,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          _owned_SystemError * src,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int64_t _ln,
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int32_t _fn) {
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError call_tmp8 = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error init_coerce_tmp = NULL;
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release23(src, _ln, _fn);
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init_coerce_tmp = ((Error)(call_tmp8));
#line 104 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  (this24)->chpl_p = init_coerce_tmp;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 94 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:137 */
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void init_ASSIGN_22(_owned_IllegalArgumentError2 * this24,
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           _nilType src,
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int64_t _ln,
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                           int32_t _fn) {
#line 141 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init58(this24, _ln, _fn);
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 137 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:167 */
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static _owned_Error adopt(Error obj) {
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error ret;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error initTemp;
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init70(&initTemp, obj);
#line 168 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ret = initTemp;
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return ret;
#line 167 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static ConnectionResetError release17(_owned_ConnectionResetError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                      int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                      int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ConnectionResetError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionResetError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ConnectionResetError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionResetError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionResetError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p9(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p9(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_29(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_32(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged50(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static Error release6(_owned_Error * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                      int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                      int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p30(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p30(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_28(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_18(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged63(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static Error release3(_owned_Error2 * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                      int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                      int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error T = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p4(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p4(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_28(call_tmp9, nil, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged12(coerce_tmp2);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static BlockingIoError release11(_owned_BlockingIoError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                 int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                 int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_BlockingIoError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BlockingIoError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_BlockingIoError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BlockingIoError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BlockingIoError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p3(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p3(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_8(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_12(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged57(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static ChildProcessError release19(_owned_ChildProcessError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                   int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                   int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ChildProcessError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ChildProcessError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ChildProcessError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ChildProcessError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ChildProcessError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_7(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_36(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged58(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static BrokenPipeError release(_owned_BrokenPipeError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                               int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                               int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_BrokenPipeError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BrokenPipeError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_BrokenPipeError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BrokenPipeError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BrokenPipeError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p5(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p5(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_38(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_23(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged60(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static ConnectionAbortedError release5(_owned_ConnectionAbortedError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                       int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                       int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ConnectionAbortedError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionAbortedError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ConnectionAbortedError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionAbortedError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionAbortedError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p7(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p7(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_36(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_13(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged64(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static ConnectionRefusedError release14(_owned_ConnectionRefusedError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                        int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                        int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ConnectionRefusedError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionRefusedError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ConnectionRefusedError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionRefusedError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionRefusedError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p8(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p8(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_32(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_33(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged51(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static IllegalArgumentError release2(_owned_IllegalArgumentError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                     int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                     int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IllegalArgumentError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IllegalArgumentError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IllegalArgumentError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IllegalArgumentError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IllegalArgumentError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p11(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p11(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_37(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_35(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged37(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static FileExistsError release20(_owned_FileExistsError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                 int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                 int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_FileExistsError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  FileExistsError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_FileExistsError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  FileExistsError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  FileExistsError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p10(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p10(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_25(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_30(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged44(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static FileNotFoundError release13(_owned_FileNotFoundError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                   int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                   int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_FileNotFoundError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  FileNotFoundError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_FileNotFoundError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  FileNotFoundError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  FileNotFoundError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p13(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p13(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_21(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_29(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged40(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static InterruptedError release10(_owned_InterruptedError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                  int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                  int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_InterruptedError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  InterruptedError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_InterruptedError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  InterruptedError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  InterruptedError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p14(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p14(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_20(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_26(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged33(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static IsADirectoryError release8(_owned_IsADirectoryError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                  int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                  int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IsADirectoryError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IsADirectoryError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IsADirectoryError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IsADirectoryError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IsADirectoryError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p19(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p19(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_18(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_25(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged19(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static NotADirectoryError release7(_owned_NotADirectoryError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                   int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                   int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_NotADirectoryError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  NotADirectoryError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_NotADirectoryError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  NotADirectoryError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  NotADirectoryError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p18(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p18(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_17(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_24(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged7(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static PermissionError release4(_owned_PermissionError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_PermissionError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  PermissionError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_PermissionError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  PermissionError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  PermissionError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p21(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p21(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_15(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_22(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged20(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static ProcessLookupError release9(_owned_ProcessLookupError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                   int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                   int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ProcessLookupError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ProcessLookupError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ProcessLookupError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ProcessLookupError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ProcessLookupError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p16(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p16(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_34(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_21(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged54(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static TimeoutError release21(_owned_TimeoutError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                              int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                              int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_TimeoutError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  TimeoutError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_TimeoutError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  TimeoutError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  TimeoutError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p27(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p27(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_10(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_20(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged56(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static IoError release15(_owned_IoError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                         int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                         int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IoError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IoError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IoError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IoError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IoError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p17(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p17(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_11(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_19(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged49(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static EofError release12(_owned_EofError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                          int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_EofError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  EofError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_EofError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  EofError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  EofError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p26(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p26(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_24(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_17(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged36(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static UnexpectedEofError release16(_owned_UnexpectedEofError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                    int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                    int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_UnexpectedEofError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  UnexpectedEofError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_UnexpectedEofError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  UnexpectedEofError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  UnexpectedEofError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p25(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p25(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_30(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_16(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged28(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static BadFormatError release22(_owned_BadFormatError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_BadFormatError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BadFormatError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_BadFormatError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BadFormatError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BadFormatError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p23(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p23(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_33(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_15(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged29(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static SystemError release23(_owned_SystemError * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                             int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                             int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_SystemError call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_SystemError call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p22(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p22(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_35(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_14(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged23(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:182 */
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static chpl___RemoteVarContainer_R release18(_owned__RemoteVarContainer_R * obj,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                             int64_t _ln,
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                             int32_t _fn) {
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref__RemoteVarContainer_R call_tmp8 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___RemoteVarContainer_R coerce_tmp2 = NULL;
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref__RemoteVarContainer_R call_tmp9 = NULL;
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___RemoteVarContainer_R T = NULL;
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___RemoteVarContainer_R call_tmp10 = NULL;
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p29(obj);
#line 183 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  coerce_tmp2 = *(call_tmp8);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl_get__owned_chpl_p29(obj);
#line 186 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_26(call_tmp9, nil, _ln, _fn);
#line 190 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = postfix_EXCLAMATION_31(coerce_tmp2, _ln, _fn);
#line 188 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = _to_unmanaged46(call_tmp10);
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return T;
#line 182 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit19(_owned_NilClassError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_NilClassError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_NilClassError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  NilClassError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p20(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p20(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p20(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged53(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete43(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit41(_owned_Remote_R * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Remote_R call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Remote_R call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Remote_R call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p15(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p15(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p15(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged65(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete42(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit45(_owned_Error2 * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p4(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p4(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p4(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged12(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete12(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit35(_owned_Error * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p30(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p30(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p30(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged12(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete12(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit34(_owned_DecodeError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_DecodeError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_DecodeError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  DecodeError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p24(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p24(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p24(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged59(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete31(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit31(_owned_EofError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_EofError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_EofError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  EofError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p26(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p26(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p26(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged42(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete8(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit37(_owned_UnexpectedEofError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_UnexpectedEofError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_UnexpectedEofError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  UnexpectedEofError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p25(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p25(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p25(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged32(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete4(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit36(_owned_BadFormatError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_BadFormatError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_BadFormatError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BadFormatError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p23(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p23(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p23(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged26(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete10(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit23(_owned_BlockingIoError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_BlockingIoError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_BlockingIoError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BlockingIoError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p3(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p3(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p3(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged5(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete13(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit46(_owned_ChildProcessError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ChildProcessError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ChildProcessError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ChildProcessError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged66(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete16(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit47(_owned_BrokenPipeError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_BrokenPipeError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_BrokenPipeError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  BrokenPipeError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p5(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p5(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p5(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged47(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete29(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit32(_owned_ConnectionAbortedError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ConnectionAbortedError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ConnectionAbortedError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionAbortedError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p7(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p7(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p7(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged52(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete37(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit39(_owned_ConnectionRefusedError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ConnectionRefusedError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ConnectionRefusedError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionRefusedError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p8(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p8(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p8(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged61(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete38(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit27(_owned_ConnectionResetError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ConnectionResetError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ConnectionResetError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ConnectionResetError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p9(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p9(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p9(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged2(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete2(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit18(_owned_FileExistsError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_FileExistsError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_FileExistsError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  FileExistsError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p10(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p10(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p10(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete39(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit22(_owned_FileNotFoundError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_FileNotFoundError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_FileNotFoundError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  FileNotFoundError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p13(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p13(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p13(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged43(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete3(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit28(_owned_InterruptedError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_InterruptedError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_InterruptedError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  InterruptedError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p14(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p14(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p14(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged39(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete32(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit21(_owned_IsADirectoryError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IsADirectoryError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IsADirectoryError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IsADirectoryError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p19(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p19(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p19(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged35(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete40(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit29(_owned_NotADirectoryError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_NotADirectoryError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_NotADirectoryError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  NotADirectoryError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p18(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p18(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p18(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged31(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete26(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit24(_owned_PermissionError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_PermissionError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_PermissionError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  PermissionError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p21(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p21(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p21(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged27(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete25(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit42(_owned_ProcessLookupError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ProcessLookupError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_ProcessLookupError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ProcessLookupError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p16(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p16(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p16(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged3(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit25(_owned_TimeoutError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_TimeoutError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_TimeoutError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  TimeoutError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p27(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p27(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p27(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged10(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete5(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit26(_owned_IoError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IoError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IoError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IoError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p17(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p17(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p17(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged13(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete17(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit20(_owned_SystemError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_SystemError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_SystemError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  SystemError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p22(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p22(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p22(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged16(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete20(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit44(_owned_CodepointSplitError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_CodepointSplitError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_CodepointSplitError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  CodepointSplitError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p12(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p12(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p12(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged14(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete9(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit30(_owned_TaskErrors * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_TaskErrors call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_TaskErrors call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  TaskErrors call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p6(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p6(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p6(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged30(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete27(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit40(_owned__RemoteVarContainer_R * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref__RemoteVarContainer_R call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref__RemoteVarContainer_R call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___RemoteVarContainer_R call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p29(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p29(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p29(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged45(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete21(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit43(_owned__RemoteVarContainer_R2 * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref__RemoteVarContainer_R call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref__RemoteVarContainer_R call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___RemoteVarContainer_R call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p2(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p2(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p2(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged45(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete21(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit33(_owned_IllegalArgumentError2 * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IllegalArgumentError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IllegalArgumentError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IllegalArgumentError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p28(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p28(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p28(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged25(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete18(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:197 */
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void deinit38(_owned_IllegalArgumentError * this24,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int64_t _ln,
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                     int32_t _fn) {
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IllegalArgumentError call_tmp8 = NULL;
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IllegalArgumentError call_tmp10 = NULL;
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IllegalArgumentError call_tmp11 = NULL;
#line 198 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_get__owned_chpl_p11(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p11(this24);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EXCLAMATION__ASSIGN_6(((RootClass)(*(call_tmp8))), nil);
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 199 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 199 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp10 = chpl_get__owned_chpl_p11(this24);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = _to_unmanaged25(*(call_tmp10));
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__delete18(call_tmp11, _ln, _fn);
#line 200 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 197 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:212 */
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static IllegalArgumentError borrow4(_owned_IllegalArgumentError2 * this24) {
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  IllegalArgumentError ret = NULL;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IllegalArgumentError call_tmp8 = NULL;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p28(this24);
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ret = *(call_tmp8);
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return ret;
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:212 */
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static Error borrow2(_owned_Error2 * this24) {
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error ret = NULL;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp8 = NULL;
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p4(this24);
#line 214 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ret = *(call_tmp8);
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return ret;
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:212 */
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static chpl___RemoteVarContainer_R borrow3(_owned__RemoteVarContainer_R * this24,
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                           int64_t _ln,
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                           int32_t _fn) {
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref__RemoteVarContainer_R call_tmp8 = NULL;
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___RemoteVarContainer_R call_tmp9 = NULL;
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p29(this24);
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = postfix_EXCLAMATION_31(*(call_tmp8), _ln, _fn);
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp9;
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:212 */
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static Remote_R borrow(_owned_Remote_R * this24,
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                       int64_t _ln,
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                       int32_t _fn) {
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Remote_R call_tmp8 = NULL;
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Remote_R call_tmp9 = NULL;
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p15(this24);
#line 216 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = postfix_EXCLAMATION_34(*(call_tmp8), _ln, _fn);
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp9;
#line 212 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:227 */
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl___ASSIGN_64(_owned_Error2 * lhs,
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                             _owned_Error2 * rhs,
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                             int64_t _ln,
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                             int32_t _fn) {
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool T;
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp8 = NULL;
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool T2;
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp9 = NULL;
#line 253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp10 = NULL;
#line 253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp11 = NULL;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp12 = NULL;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp13 = NULL;
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p4(lhs);
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = chpl___EQUALS_8(((RootClass)(*(call_tmp8))), nil);
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (T) /* ZLINE: 235 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp9 = chpl_get__owned_chpl_p4(rhs);
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    T2 = chpl___EQUALS_8(((RootClass)(*(call_tmp9))), nil);
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  } else /* ZLINE: 235 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    T2 = UINT8(false);
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (T2) /* ZLINE: 235 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    goto _end__ASSIGN_;
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = chpl_get__owned_chpl_p4(lhs);
#line 253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp11 = _to_unmanaged12(*(call_tmp10));
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp12 = chpl_get__owned_chpl_p4(lhs);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp13 = release3(rhs, _ln, _fn);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_19(call_tmp12, call_tmp13);
#line 255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl__delete12(call_tmp11, _ln, _fn);
#line 255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _end__ASSIGN_:;
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:227 */
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl___ASSIGN_63(_owned_Error2 * lhs,
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                             _owned_Error * rhs,
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                             int64_t _ln,
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                             int32_t _fn) {
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool T;
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp8 = NULL;
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool T2;
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp9 = NULL;
#line 253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp10 = NULL;
#line 253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp11 = NULL;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp12 = NULL;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp13 = NULL;
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p4(lhs);
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = chpl___EQUALS_8(((RootClass)(*(call_tmp8))), nil);
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (T) /* ZLINE: 235 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp9 = chpl_get__owned_chpl_p30(rhs);
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    T2 = chpl___EQUALS_8(((RootClass)(*(call_tmp9))), nil);
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  } else /* ZLINE: 235 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    T2 = UINT8(false);
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (T2) /* ZLINE: 235 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    goto _end__ASSIGN_;
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = chpl_get__owned_chpl_p4(lhs);
#line 253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp11 = _to_unmanaged12(*(call_tmp10));
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp12 = chpl_get__owned_chpl_p4(lhs);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp13 = release6(rhs, _ln, _fn);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_19(call_tmp12, call_tmp13);
#line 255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl__delete12(call_tmp11, _ln, _fn);
#line 255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _end__ASSIGN_:;
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:227 */
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl___ASSIGN_65(_owned__RemoteVarContainer_R2 * lhs,
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                             _owned__RemoteVarContainer_R * rhs,
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                             int64_t _ln,
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                             int32_t _fn) {
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool T;
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref__RemoteVarContainer_R call_tmp8 = NULL;
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool T2;
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref__RemoteVarContainer_R call_tmp9 = NULL;
#line 253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref__RemoteVarContainer_R call_tmp10 = NULL;
#line 253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___RemoteVarContainer_R call_tmp11 = NULL;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref__RemoteVarContainer_R call_tmp12 = NULL;
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___RemoteVarContainer_R call_tmp13 = NULL;
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p2(lhs);
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  T = chpl___EQUALS_8(((RootClass)(*(call_tmp8))), nil);
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (T) /* ZLINE: 235 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp9 = chpl_get__owned_chpl_p29(rhs);
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    T2 = chpl___EQUALS_8(((RootClass)(*(call_tmp9))), nil);
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  } else /* ZLINE: 235 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    T2 = UINT8(false);
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (T2) /* ZLINE: 235 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 235 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    goto _end__ASSIGN_;
#line 236 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = chpl_get__owned_chpl_p2(lhs);
#line 253 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp11 = _to_unmanaged45(*(call_tmp10));
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp12 = chpl_get__owned_chpl_p2(lhs);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp13 = release18(rhs, _ln, _fn);
#line 254 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_27(call_tmp12, call_tmp13);
#line 255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl__delete21(call_tmp11, _ln, _fn);
#line 255 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _end__ASSIGN_:;
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 227 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:259 */
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl___ASSIGN_66(_owned_Error2 * lhs,
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                             _nilType rhs,
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                             int64_t _ln,
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                             int32_t _fn) {
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp8 = NULL;
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = release3(lhs, _ln, _fn);
#line 260 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl__delete12(call_tmp8, _ln, _fn);
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 259 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy89(_owned_IllegalArgumentError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_IllegalArgumentError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit38(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy72(_owned_Remote_R * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Remote_R call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit41(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy90(_owned_Error2 * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error2 call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit45(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy85(_owned_Error * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit35(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy94(_owned_DecodeError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_DecodeError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit34(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy97(_owned_EofError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_EofError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit31(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy69(_owned_UnexpectedEofError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_UnexpectedEofError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit37(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy82(_owned_BadFormatError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_BadFormatError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit36(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy86(_owned_BlockingIoError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_BlockingIoError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit23(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy74(_owned_ChildProcessError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_ChildProcessError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit46(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy71(_owned_BrokenPipeError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_BrokenPipeError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit47(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy98(_owned_ConnectionAbortedError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_ConnectionAbortedError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit32(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy84(_owned_ConnectionRefusedError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_ConnectionRefusedError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit39(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy76(_owned_ConnectionResetError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_ConnectionResetError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit27(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy92(_owned_FileExistsError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_FileExistsError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit18(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy70(_owned_FileNotFoundError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_FileNotFoundError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit22(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy96(_owned_InterruptedError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_InterruptedError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit28(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy73(_owned_IsADirectoryError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_IsADirectoryError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit21(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy93(_owned_NotADirectoryError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_NotADirectoryError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit29(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy81(_owned_PermissionError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_PermissionError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit24(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy77(_owned_ProcessLookupError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_ProcessLookupError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit42(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy78(_owned_TimeoutError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_TimeoutError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit25(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy79(_owned_IoError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_IoError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit26(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy83(_owned_SystemError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_SystemError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit20(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy91(_owned_CodepointSplitError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_CodepointSplitError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit44(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy95(_owned_TaskErrors * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_TaskErrors call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit30(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy88(_owned__RemoteVarContainer_R * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned__RemoteVarContainer_R call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit40(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy80(_owned__RemoteVarContainer_R2 * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned__RemoteVarContainer_R2 call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit43(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy75(_owned_NilClassError * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_NilClassError call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit19(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:292 */
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static void chpl__autoDestroy87(_owned_IllegalArgumentError2 * x2,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int64_t _ln,
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                int32_t _fn) {
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_IllegalArgumentError2 call_tmp8;
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = *(x2);
#line 293 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  deinit33(&call_tmp8, _ln, _fn);
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return;
#line 292 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:326 */
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static _owned_Error2 chpl___COLON_32(_owned_Error * x2,
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                     int64_t _ln,
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                     int32_t _fn) {
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error _formal_tmp_x;
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error2 ret;
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp8 = NULL;
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp9 = NULL;
#line 329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp10 = NULL;
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error2 initTemp;
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _formal_tmp_x = *(x2);
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p30(&_formal_tmp_x);
#line 328 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___COLON_10(*(call_tmp8));
#line 329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = chpl_get__owned_chpl_p30(&_formal_tmp_x);
#line 329 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_28(call_tmp10, nil, _ln, _fn);
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init71(&initTemp, call_tmp9);
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ret = initTemp;
#line 331 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl__autoDestroy85(&_formal_tmp_x, _ln, _fn);
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return ret;
#line 326 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:347 */
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static _owned_Error chpl___COLON_35(_owned_IllegalArgumentError * x2,
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                    int64_t _ln,
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                    int32_t _fn) {
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_IllegalArgumentError _formal_tmp_x;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error ret;
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IllegalArgumentError call_tmp8 = NULL;
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp9 = NULL;
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_IllegalArgumentError call_tmp10 = NULL;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp11 = NULL;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error initTemp;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _formal_tmp_x = *(x2);
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p11(&_formal_tmp_x);
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___COLON_12(*(call_tmp8), _ln, _fn);
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = chpl_get__owned_chpl_p11(&_formal_tmp_x);
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_37(call_tmp10, nil, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp11 = postfix_EXCLAMATION_3(call_tmp9, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init70(&initTemp, call_tmp11);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ret = initTemp;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl__autoDestroy89(&_formal_tmp_x, _ln, _fn);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return ret;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:347 */
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static _owned_Error chpl___COLON_37(_owned_DecodeError * x2,
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                    int64_t _ln,
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                    int32_t _fn) {
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_DecodeError _formal_tmp_x;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error ret;
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_DecodeError call_tmp8 = NULL;
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp9 = NULL;
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_DecodeError call_tmp10 = NULL;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp11 = NULL;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error initTemp;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _formal_tmp_x = *(x2);
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p24(&_formal_tmp_x);
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___COLON_14(*(call_tmp8), _ln, _fn);
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = chpl_get__owned_chpl_p24(&_formal_tmp_x);
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_14(call_tmp10, nil, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp11 = postfix_EXCLAMATION_3(call_tmp9, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init70(&initTemp, call_tmp11);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ret = initTemp;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl__autoDestroy94(&_formal_tmp_x, _ln, _fn);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return ret;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:347 */
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static _owned_Error chpl___COLON_33(_owned_SystemError * x2,
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                    int64_t _ln,
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                    int32_t _fn) {
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_SystemError _formal_tmp_x;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error ret;
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_SystemError call_tmp8 = NULL;
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp9 = NULL;
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_SystemError call_tmp10 = NULL;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp11 = NULL;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error initTemp;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _formal_tmp_x = *(x2);
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p22(&_formal_tmp_x);
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___COLON_8(*(call_tmp8), _ln, _fn);
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = chpl_get__owned_chpl_p22(&_formal_tmp_x);
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_35(call_tmp10, nil, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp11 = postfix_EXCLAMATION_3(call_tmp9, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init70(&initTemp, call_tmp11);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ret = initTemp;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl__autoDestroy83(&_formal_tmp_x, _ln, _fn);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return ret;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:347 */
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static _owned_Error chpl___COLON_36(_owned_CodepointSplitError * x2,
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                    int64_t _ln,
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                    int32_t _fn) {
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_CodepointSplitError _formal_tmp_x;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error ret;
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_CodepointSplitError call_tmp8 = NULL;
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp9 = NULL;
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_CodepointSplitError call_tmp10 = NULL;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp11 = NULL;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error initTemp;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _formal_tmp_x = *(x2);
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p12(&_formal_tmp_x);
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___COLON_15(*(call_tmp8), _ln, _fn);
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = chpl_get__owned_chpl_p12(&_formal_tmp_x);
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_12(call_tmp10, nil, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp11 = postfix_EXCLAMATION_3(call_tmp9, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init70(&initTemp, call_tmp11);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ret = initTemp;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl__autoDestroy91(&_formal_tmp_x, _ln, _fn);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return ret;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:347 */
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static _owned_Error chpl___COLON_38(_owned_TaskErrors * x2,
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                    int64_t _ln,
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                    int32_t _fn) {
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_TaskErrors _formal_tmp_x;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error ret;
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_TaskErrors call_tmp8 = NULL;
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp9 = NULL;
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_TaskErrors call_tmp10 = NULL;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp11 = NULL;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error initTemp;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _formal_tmp_x = *(x2);
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p6(&_formal_tmp_x);
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___COLON_9(*(call_tmp8), _ln, _fn);
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = chpl_get__owned_chpl_p6(&_formal_tmp_x);
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_13(call_tmp10, nil, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp11 = postfix_EXCLAMATION_3(call_tmp9, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init70(&initTemp, call_tmp11);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ret = initTemp;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl__autoDestroy95(&_formal_tmp_x, _ln, _fn);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return ret;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:347 */
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static _owned_Error chpl___COLON_34(_owned_NilClassError * x2,
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                    int64_t _ln,
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                    int32_t _fn) {
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_NilClassError _formal_tmp_x;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error ret;
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_NilClassError call_tmp8 = NULL;
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp9 = NULL;
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_NilClassError call_tmp10 = NULL;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp11 = NULL;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error initTemp;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _formal_tmp_x = *(x2);
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p20(&_formal_tmp_x);
#line 350 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___COLON_13(*(call_tmp8), _ln, _fn);
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = chpl_get__owned_chpl_p20(&_formal_tmp_x);
#line 351 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_31(call_tmp10, nil, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp11 = postfix_EXCLAMATION_3(call_tmp9, _ln, _fn);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init70(&initTemp, call_tmp11);
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ret = initTemp;
#line 353 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl__autoDestroy75(&_formal_tmp_x, _ln, _fn);
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return ret;
#line 347 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:358 */
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static _owned__RemoteVarContainer_R chpl___COLON_39(_owned__RemoteVarContainer_R2 * x2,
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                                    Error * error_out,
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                                    int64_t _ln,
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                                    int32_t _fn) {
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned__RemoteVarContainer_R2 _formal_tmp_x;
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned__RemoteVarContainer_R ret;
#line 361 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref__RemoteVarContainer_R call_tmp8 = NULL;
#line 361 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___RemoteVarContainer_R call_tmp9 = NULL;
#line 362 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp10;
#line 363 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_NilClassError call_tmp11;
#line 363 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  NilClassError new_temp = NULL;
#line 363 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_NilClassError initTemp;
#line 363 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp12 = NULL;
#line 363 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error _formal_tmp_in_err;
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref__RemoteVarContainer_R call_tmp13 = NULL;
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___RemoteVarContainer_R call_tmp14 = NULL;
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned__RemoteVarContainer_R initTemp2;
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _formal_tmp_x = *(x2);
#line 361 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p2(&_formal_tmp_x);
#line 361 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___COLON_11(*(call_tmp8));
#line 362 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = chpl___EQUALS_8(((RootClass)(call_tmp9)), nil);
#line 362 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp10) /* ZLINE: 362 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 362 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 363 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    new_temp = _new13(_ln, _fn);
#line 363 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    init61(&initTemp, new_temp);
#line 363 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp11 = initTemp;
#line 363 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    _formal_tmp_in_err = chpl___COLON_34(&call_tmp11, _ln, _fn);
#line 363 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    call_tmp12 = chpl_fix_thrown_error(&_formal_tmp_in_err, _ln, _fn);
#line 363 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    *(error_out) = call_tmp12;
#line 363 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    chpl__autoDestroy80(&_formal_tmp_x, _ln, _fn);
#line 363 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    goto _end__COLON_;
#line 363 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp13 = chpl_get__owned_chpl_p2(&_formal_tmp_x);
#line 365 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl___ASSIGN_26(call_tmp13, nil, _ln, _fn);
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp14 = postfix_EXCLAMATION_4(call_tmp9, _ln, _fn);
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init69(&initTemp2, call_tmp14);
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ret = initTemp2;
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl__autoDestroy80(&_formal_tmp_x, _ln, _fn);
#line 367 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _end__COLON_:;
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return ret;
#line 358 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 421 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:421 */
#line 421 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static _owned_Error2 chpl___COLON_40(_nilType x2,
#line 421 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                     int64_t _ln,
#line 421 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                     int32_t _fn) {
#line 421 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error2 ret;
#line 427 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _owned_Error2 tmp;
#line 427 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  init59(&tmp, _ln, _fn);
#line 428 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  ret = tmp;
#line 421 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return ret;
#line 421 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

#line 433 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
/* OwnedObject.chpl:433 */
#line 433 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
static Error postfix_EXCLAMATION_37(_owned_Error2 * x2,
#line 433 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                    int64_t _ln,
#line 433 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
                                    int32_t _fn) {
#line 439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp8 = NULL;
#line 439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  chpl_bool call_tmp9;
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  _ref_Error call_tmp10 = NULL;
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  Error call_tmp11 = NULL;
#line 439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp8 = chpl_get__owned_chpl_p4(x2);
#line 439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp9 = chpl___EQUALS_8(((RootClass)(*(call_tmp8))), nil);
#line 439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  if (call_tmp9) /* ZLINE: 439 /Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl */
#line 439 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  {
#line 440 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
    nilCheckHalt(&_str_literal_391, _ln, _fn);
#line 440 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  }
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp10 = chpl_get__owned_chpl_p4(x2);
#line 444 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  call_tmp11 = _to_nonnil24(*(call_tmp10));
#line 433 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
  return call_tmp11;
#line 433 "/Users/iainmoncrief/Desktop/chapel/modules/internal/OwnedObject.chpl"
}

